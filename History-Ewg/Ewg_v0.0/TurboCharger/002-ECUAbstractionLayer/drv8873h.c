#include "drv8873h.h"

/***************************************************
 * @name    :
 * @brief   : 使能电机驱动
 * @author  : 
 * ************************************************/
void DRV8873H_Enable(void) 
{
    DRV_nENCtrl(DRV8873h_ENABLE)
}

/***************************************************
 * @name    :
 * @brief   : 禁用电机驱动
 * @author  : 
 * ************************************************/
void DRV8873H_Disable(void) 
{
    DRV_nENCtrl(DRV8873h_DISABLE)
}

/***************************************************
 * @name    :
 * @brief   : 设置电机转动方向、脉冲
 * @author  : 
 * ************************************************/
void DRV8873H_SetPul(uint8_t direction,uint8_t Pul) 
{
    if (direction==0x01) 
    {
        DRV_ENCtrl(DRV8873h_ENCTRLDISABLE);//0x00
        DRV_PHCtrl(Pul); //0x01
    } 
    else if (direction== (-1)) 
    {
        DRV_ENCtrl(Pul); //0x01
        DRV_PHCtrl(DRV8873h_PHCTRLDISABLE); //0x00
    } 
    else if (direction==0x00)
    {
        DRV_ENCtrl(Pul);
        DRV_PHCtrl(Pul);
    }
}
