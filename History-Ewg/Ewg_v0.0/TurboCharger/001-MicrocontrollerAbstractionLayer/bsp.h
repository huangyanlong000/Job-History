#ifndef BSP_H_
#define BSP_H_

/*Load header file*/
#include "can0.h"
#include "ftm0.h"
#include "ftm1.h"
#include "SysTick.h"

#include "application.h"
#include "can0abstraction.h"

/*Create shared Data*/
#define SIM_SCGC6_SIM_MASK    (1UL<<0)
#define OSC_CR_ERCLKEN_MASK   (1UL<<0)
#define OSC_CR_EREFSTEN_MASK  (1UL<<1)
#define SIM_SCGC6_PLLFLL_MASK (1UL<<24)
#define PLLFLL_STAT_LOCK_MASK (1UL<<0)
/*Local function declaration*/
void Bsp_Init(void);
void clock_update_configuration(void);
#endif