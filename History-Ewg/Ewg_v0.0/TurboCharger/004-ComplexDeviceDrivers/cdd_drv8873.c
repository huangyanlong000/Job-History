#include "cdd_drv8873.h"

/*****************************************************************************************************
 * @file     sl_bustransmit.c
 * @brief :					
 * @version  V0.01
 * @date     07.April.2024
****************************************************************************************************/

PIDType Speed_pid    = {0.3, 0.05, 0.1, 0, 0};
PIDType Position_pid = {0.5, 0.1,  0.2, 0, 0};

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void DRV_8873_Enable(void)
{
    DRV8873H_Enable();
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void DRV_8873_Disable(void)
{
    DRV8873H_Disable();
}


/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void DRV_8873_SpeedPid(PIDType *pid,uint16_t TargetSpeed)
{
	static uint16_t CurrentSpeed = (0x00);

	{
		//计算当前误差
		float error = TargetSpeed - CurrentSpeed;

		//计算误差的积分
		pid->integral += error;

		/*积分限幅*/
		if (pid->integral>100)
		{
			pid->integral = 100;/* code */
		}

		/*积分限幅*/
		if (pid->integral<0)
		{
			pid->integral = 0;/* code */
		}	
		
		//计算误差的微分
		float derivative = error - pid->prev_error;

		//计算 PID 控制量
		float output = pid->Kp * error + pid->Ki * pid->integral + pid->Kd * derivative;

		CurrentSpeed = output;

		//更新上一次的误差
		pid->prev_error = error;

		DRV8873H_SetPul(0x00,output);

	}
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void DRV_8873_PositPid(PIDType *pid,uint16_t TargetPosit,uint16_t CurrentPosit)
{
	{
		//计算当前误差
		float error = TargetPosit - CurrentPosit;

		//计算误差的积分
		pid->integral += error;

		//计算误差的微分
		float derivative = error - pid->prev_error;

		//计算PID控制量
		float output = pid->Kp * error + pid->Ki * pid->integral + pid->Kd * derivative;

		//更新上一次的误差
		pid->prev_error = error;

		/*把位置环输出转换为速度环的输入*/
		uint16_t TargetSpeed = (output/TIME);

	}
    
    DRV_8873_SpeedPid(Speed_pid,TargetSpeed);
	
	/*如果接近目标角度*/
	if (0x00 == error)
	{
		/*刹车停止转动*/
	}
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void DRV_8873_Max(uint16_t TargetPosit,uint16_t CurrentPosit)
{
	/*100%输出*/
	
	/*如果接近目标角度*/
	if (0x00 == error)
	{
		/*刹车停止转动*/
	}
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
DRV_8873Type Get_8873_drvType(uint16_t TargetPosit,uint16_t CurrentPosit)
{
    if ((TargetPosit-CurrentPosit)>15000)
    {
        return DRV_8873_MAX;
    }
    else if (((TargetPosit-CurrentPosit)<15000)&&((TargetPosit-CurrentPosit)>10000))
    {
        DRV_8873_PositPid(Position_pid,TargetPosit,CurrentPosit);
        return DRV_8873_PID;
    }
    else if((TargetPosit-CurrentPosit)<(10000))
    {
        return DRV_8873_STOP;
    } 
}
