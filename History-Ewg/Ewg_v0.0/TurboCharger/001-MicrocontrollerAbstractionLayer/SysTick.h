#ifndef SYSTICK_H_
#define SYSTICK_H_

#include "S32K116.h"

#define TRUE  (0x01)
#define FALSE (0x00)

#define SysTick_CTRL_ENABLE_Msk     (1UL << 0)
#define SysTick_CTRL_TICKINT_Msk    (1UL << 1)
#define SysTick_CTRL_CLKSOURCE_Msk  (1UL << 2)

#endif
