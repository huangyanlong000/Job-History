#include "bsp.h"

/*****************************************************************************************************
 * @file     al_ctrlio.c
 * @brief :					
 * @version  V0.01
 * @date     07.April.2024
****************************************************************************************************/

/***************************************************
 * @name    : CLOCK_SYS_Init
 * @brief   : 系统时钟初始化函数
 * @author  : 
 * ************************************************/
void CLOCK_SYS_Init(void) 
{
    //1. 使能时钟相关模块、使能系统集成模块(SIM)时钟
    SIM->SCGC6 |= SIM_SCGC6_SIM_MASK;

    //2. 配置外部晶振（如果使用外部晶振作为时钟源、假设使用8MHz外部晶振、配置OSC寄存器
    OSC0->CR = OSC_CR_ERCLKEN_MASK | OSC_CR_EREFSTEN_MASK;

    clock_update_configuration();
}

/***************************************************
 * @name    : CLOCK_SYS_UpdateConfiguration
 * @brief   : 系统时钟初始化函数
 * @author  : 
 * ************************************************/
void clock_update_configuration(void) 
{
    // 1. 使能PLL模块时钟
    SIM->SCGC6 |= SIM_SCGC6_PLLFLL_MASK;

    // 2. 配置PLL分频系数
    // 假设设置SYNDIV=3、REFDIV=0
    PLLFLL->SYNR = 0x00000003;
    PLLFLL->RENR = 0x00000000;

    // 3. 等待PLL锁定
    while (!(PLLFLL->STAT & PLLFLL_STAT_LOCK_MASK));

    // 4. 选择PLL输出作为系统时钟源
    SIM->SOPT1 |= SIM_SOPT1_CLKOUTSEL(3);

    // 5. 设置总线时钟分频系数
    // 假设设置总线时钟分频系数为 2
    SIM->CLKDIV1 |= SIM_CLKDIV1_BUSDIV(1);
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void Bsp_Init(void)
{

    /******************************************
     * @brief : Initialize clock
     * ***************************************/
    CLOCK_SYS_Init();

    /**********************************************
     * @brief : Example Initialize the CAN module
     * *******************************************/
    FTM0_Init();

    /**********************************************
     * @brief : Example Initialize the CAN module
     * *******************************************/
    FTM1_Init();
    
    /**********************************************
     * @brief : Example Initialize the CAN module
     * *******************************************/
    Eeprom_Init();

    /**********************************************
     * @brief : Example Initialize the CAN module
     * *******************************************/
    ECU_Can0_Init();
}
