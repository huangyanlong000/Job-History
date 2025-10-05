#include "ftm0.h"

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void FTM0_Init(void)
{
    /*************************************************************
     * @brief : The clock of the PORT and ftm modules was enabled
     * **********************************************************/
    {
        PCC->PCCn[PCC_PORTD_INDEX] |= PCC_PCCn_CGC_MASK;
        PCC->PCCn[PCC_FTM0_INDEX]  |= PCC_PCCn_CGC_MASK;

        PORTC->PCR[DRV8873H_IN1_PIN] = PORT_PCR_MUX(1);
        PORTC->PCR[DRV8873H_IN2_PIN] = PORT_PCR_MUX(1);
        PORTC->PCR[DRV8873H_EN_PIN]  = PORT_PCR_MUX(1);
        PORTC->PCR[DRV8873H_N_SLP]   = PORT_PCR_MUX(1);
        PORTC->PCR[DRV8873H_N_FLT]   = PORT_PCR_MUX(1);

        //设置引脚为输出模式
        PTC->PDDR |= (0x01<<DRV8873H_IN1_PIN)|(1<<DRV8873H_IN2_PIN)|(1<<DRV8873H_EN_PIN);

        //配置PWM引脚为FTM功能
        PORTD->PCR[DRV8873H_PWM_PIN] = PORT_PCR_MUX(4);
    }

    /*************************************************************
     * @brief : config the ftm0
     * **********************************************************/
    {

        //停止FTM计数器
        FTM0->SC = 0x00;

        //设置PWM模式
        FTM0->MOD = 1000;  //设定PWM周期
        FTM0->CONTROLS[0].CnSC = FTM_CnSC_MSB_MASK|FTM_CnSC_ELSB_MASK;  //边缘对齐PWM，高电平有效

        //启动FTM计数器
        FTM0->SC = FTM_SC_CLKS(1);  //选择系统时钟作为计数器时钟源
    }

    /*************************************************************
     * @brief : put the drvv8873 en point
     * **********************************************************/
    {
        PTC->PSOR = (0x01<<DRV8873H_EN_PIN);
    }
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void FTM0_IRQHandler(void) 
{
    if (FTM0->SC & FTM_SC_TOF_MASK) 
    {
        //清除溢出标志位
        FTM0->SC |= FTM_SC_TOF_MASK;

        //系统时基计时变量加 1
        system_tick++;
    }
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
uint8_t DRV_ReadFault(void)
{
    
    /* code */

}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void DRV_nENCtrl(char CtrlType)
{

    if (DRV8873h_DISABLE == CtrlType)
    {
        PTC->PCOR = (0x00<<DRV8873H_EN_PIN);/* code */
    }
    else if (DRV8873h_ENABLE == CtrlType)
    {
        PTC->PCOR = (0x01<<DRV8873H_EN_PIN);/* code */
    }

}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void DRV_nSLPCtrl(char CtrlType)
{
    
    if (DRV8873h_SLEEP == CtrlType)
    {
        /* code */
    }
    else if (DRV8873h_DISLEEP == CtrlType)
    {
        /* code */
    }

}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void DRV_ENCtrl(uint8_t Enpul)
{
    
    if (DRV8873h_ENCTRLENABLE == CtrlType)
    {
        PTC->PSOR = (0x01<<DRV8873H_IN1_PIN);/* code */
    }
    else if (DRV8873h_ENCTRLDISABLE == CtrlType)
    {
        PTC->PSOR = (0x00<<DRV8873H_IN1_PIN);/* code */
    }
    
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void DRV_PHCtrl(uint8_t Phpul)
{
    
    if (DRV8873h_PHCTRLENABLE == CtrlType)
    {
        PTC->PSOR = (0x01<<DRV8873H_IN2_PIN);/* code */
    }
    else if (DRV8873h_PHCTRLDISABLE == CtrlType)
    {
        PTC->PSOR = (0x00<<DRV8873H_IN2_PIN);/* code */
    }

}