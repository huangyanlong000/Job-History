#ifndef HAL3900SERVICE_H
#define HAL3900SERVICE_H

#include "S32K116.h"

char Hal3900_Zeropoint_Check(void);
char Hal3900_Zeropoint_CheckTrig(void);
char Hal3900_Read_CurrentPosition(uint16_t CurrentPosit);

#endif