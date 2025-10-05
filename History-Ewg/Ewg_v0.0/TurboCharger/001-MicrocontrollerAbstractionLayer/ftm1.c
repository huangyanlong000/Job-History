#include "ftm1.h"

/*****************************************************************************************************
 * @file     os_threadtick.c
 * @brief :					
 * @version  V0.01
 * @date     07.April.2024
****************************************************************************************************/

volatile uint32_t system_tick = 0;

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void FTM1_Init(void) 
{
    //1. 使能FTM1时钟
    SIM->SCGC6 |= SIM_SCGC6_FTM1_MASK;

    //2. 停止FTM1计数器
    FTM1->SC = 0;

    //3. 配置FTM1为自由运行模式、设置计数器溢出值为最大值
    FTM1->MOD = 0xFFFF;

    //4. 设置FTM1时钟源和分频系数、选择系统时钟作为FTM1时钟源，分频系数为 1
    FTM1->SC = FTM_SC_CLKS(1) | FTM_SC_PS(0);

    //5. 使能FTM1溢出中断
    FTM1->SC |= FTM_SC_TOIE_MASK;

    //6. 配置 NVIC 使能FTM1中断
    NVIC_EnableIRQ(FTM1_IRQn);
    NVIC_SetPriority(FTM1_IRQn, 2);
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void FTM1_IRQHandler(void) 
{
    if (FTM1->SC & FTM_SC_TOF_MASK) 
    {
        //清除溢出标志位
        FTM1->SC |= FTM_SC_TOF_MASK;

        //系统时基计时变量加 1
        system_tick++;
    }
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
uint32_t get_system_tick(void) 
{
    return system_tick;
}

