#include "eepromservice.h"

char Eeprom_FirstStart = (FALSE);

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void Eeprom_Init(void)
{
    I2C0_Init();

    /****************************************
     * @brief : read the data from eeprom
     * *************************************/
    {
        
        uint8_t Addr   = (0x00);
        uint8_t Data   = (0x00);
        uint8_t length = (0x01);

        Eeprom_ReadData(Addr,Data,length);

        /***************************************
         * @brief : First start
         * ************************************/
        if (0x00 == Data)
        {
            Eeprom_FirstStart = (TRUE);/* code */
        }
        else
        {
            Eeprom_FirstStart = (FALSE);/* code */
        }    
    }
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
char Eeprom_ReadWrite(EepromoperateType cmd,uint8_t Addr, uint8_t *data, uint16_t length)
{
    if (EEPROM_READ == cmd)
    {
        Eeprom_ReadData(Addr,data,length);/* code */
    }
    else if (EEPROM_WRITE == cmd)
    {
        Eeprom_WriteData(Addr,data,length);/* code */
    }
}
