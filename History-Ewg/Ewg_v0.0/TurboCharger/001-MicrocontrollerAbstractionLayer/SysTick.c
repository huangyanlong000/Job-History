#include "SysTick.h"

// SysTick中断处理函数
volatile uint32_t network_timer = 0;
uint32_t SystemCoreClock = (0x1000);

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void SysTick_Init(void) 
{
    S32_SysTick->RVR = (SystemCoreClock / 1000) - 0x01;
    S32_SysTick->CVR = 0;
    S32_SysTick->CSR = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_TICKINT_Msk | SysTick_CTRL_ENABLE_Msk;
}

void SysTick_Handler(void) 
{
    network_timer++;
}
