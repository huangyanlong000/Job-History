#include "application.h"

extern char Eeprom_FirstStart;
extern CAN0_txMessage Can0_txMessage;
extern CAN0_rxMessage Can0_rxMessage;

uint16_t TargetPosit  = (0x00);
uint16_t CurrentPosit = (0x00);

APP_RUNType App_runStatues = (APP_INIT);

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void Application_Run(void)
{
    switch (App_runStatues)
    {
        /**************************************
         * @brief : APP_DETECTION
         * ***********************************/
        case (APP_INIT):
        {
            if(TRUE == Eeprom_FirstStart)
            {
                /******************************************
                 * @brief :enter the "APP_DETECTION"
                 * ***************************************/
                App_runStatues = APP_CALIBRATED;
            }
            else if(FALSE == Eeprom_FirstStart)
            {
                /******************************************
                 * @brief :enter the 
                 * ***************************************/
                App_runStatues = APP_DETECTION;
            }

            break;
        }

        /**************************************
         * @brief : APP_DETECTION
         * ***********************************/
        case (APP_DETECTION):
        {
            /*If detecting calibration request*/
            if (TRUE == Hal3900_Zeropoint_CheckTrig())
            {
                App_runStatues = APP_CALIBRATED;break;/* code */ 
            }

            /*There are target location updates*/
            if (TRUE == Can0_rxMessage->CalibrationDataUpdate)
            {
                /*Update the target location variable*/
            }
            
            /*There are target location updates*/
            if (TRUE == Can0_rxMessage->CalibrationDataUpdate)
            {
                /*Update the target location variable*/
                Can0_CommuServiceLayer();
            }

            /*If calibration is successful*/
            if (TRUE == Hal3900_Read_CurrentPosition(CurrentPosit))
            {
                App_runStatues = APP_CONTRAL;break;/* code */ 
            }
            else
            {
                DRV8873H_Disable();
            }
            
            break;
        }

        /**************************************
         * @brief : APP_DETECTION
         * ***********************************/
        case (APP_CALIBRATED):
        {
            /*If calibration is successful*/
            if (TRUE == Hal3900_Zeropoint_Check())
            {
                App_runStatues = APP_DETECTION;/* code */
            }
            else
            {
                App_runStatues = APP_CALIBRATED;/* code */ 
            }
            
            break;
        }

        /**************************************
         * @brief : APP_CONTRAL
         * ***********************************/
        case (APP_CONTRAL):
        {

            Hal3900_Read_CurrentPosition(CurrentPosit);

            /* Check the "CurrentPosit" and "target" */
            if (DRV_8873_PID == Get_8873_drvType(TargetPosit,CurrentPosit))
            {
                DRV_8873_Pid();/* code */
            }
            else if (DRV_8873_MAX == Get_8873_drvType(TargetPosit,CurrentPosit))
            {
                DRV_8873_Max();/* code */
            }
            else if (DRV_8873_STOP == Get_8873_drvType(TargetPosit,CurrentPosit))
            {
                DRV_8873_Disable();/* code */
            }   
                   
            App_runStatues = APP_DETECTION;

            break;
        }

        default:break;
    }

}
