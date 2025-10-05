#ifndef CDD_DRV8873_H_
#define CDD_DRV8873_H_

/*Load header file*/
#include "drv8873h.h"

#define TIME (0.1)

typedef enum
{
    DRV_8873_PID    = (0x00),
    DRV_8873_MAX    = (0x01),
    DRV_8873_STOP   = (0x02),
}DRV_8873Type;

typedef struct
{
    
    float Kp;           //比例系数
    float Ki;           //积分系数
    float Kd;           //微分系数
    float prev_error;   //上一次的误差
    float integral;     //误差的积分

}PIDType;

void DRV_8873_Pid(void);
void DRV_8873_Max(void);
void DRV_8873_Disable(void);
DRV_8873Type Get_8873_drvType(uint16_t TargetPosit,uint16_t CurrentPosit);

#endif