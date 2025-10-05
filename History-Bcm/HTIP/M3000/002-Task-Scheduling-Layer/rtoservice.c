#include "rtoservice.h"

/*****************************************************************************************************
 * @file     rtoservice.c
 * @brief :  The Function is the driving core of the system
 * @version  V0.01
 * @date     07.April.2024
****************************************************************************************************/

TaskHandle_t IdleHook_TaskHandler;
TaskHandle_t Table_VCU_ADC_A_TaskHandler;
TaskHandle_t Table_BCM_ADC_B_TaskHandler;
TaskHandle_t Table_CANSendRecv_TaskHandler;
TaskHandle_t Table_SWC_RUNFunction_TaskHandler;
TaskHandle_t Table_UDS10msFunction_TaskHandler;
TaskHandle_t Table_RPT10msFunction_TaskHandler;
TaskHandle_t Table_EepROMWriteRead_TaskHandler;
TaskHandle_t Table_ATA5291Function_TaskHandler;
TaskHandle_t Table_TDA5235Function_TaskHandler;
TaskHandle_t Table_USS10msFunction_TaskHandler;
TaskHandle_t Table_UDS100msFunction_TaskHandler;
TaskHandle_t Table_PWMOutputControl_TaskHandler;
TaskHandle_t Table_FaultDiagFunction_TaskHandler;
TaskHandle_t Table_RPTLearnApiFunction_TaskHandler;
TaskHandle_t Table_RPTServicesFunction__TaskHandler;
TaskHandle_t Table_IOAcquisition_Control_TaskHandler;
TaskHandle_t Table_LINComm_ServiceFunction_TaskHandler;




/*
 *@name:	 RealTimeOperateSysterm_Push	
 *@author:	 huangyanlong
 *@parameter:None
 *@brief    :the systerm push   
*/
void RealTimeOperateSysterm_Push(void)
{

	/*Create the Seventeen tasks*/
    {
		xTaskCreate(Table_VCU_ADC_A_Task,				(const char*)"Table_VCU_ADC_A_Task",				(0x200),NULL,(0x05),&Table_VCU_ADC_A_TaskHandler);
		xTaskCreate(Table_BCM_ADC_B_Task,				(const char*)"Table_BCM_ADC_B_Task",				(0x200),NULL,(0x07),&Table_BCM_ADC_B_TaskHandler);
		xTaskCreate(Table_CANSendRecv_Task,				(const char*)"Table_CANSendRecv_Task",				(0x200),NULL,(0x01),&Table_CANSendRecv_TaskHandler);
		xTaskCreate(Table_TDA5235Function_Task,			(const char*)"Table_TDA5235Function_Task",			(0x200),NULL,(0x05),&Table_TDA5235Function_TaskHandler);
		xTaskCreate(Table_ATA5291Function_Task,			(const char*)"Table_ATA5291Function_Task",			(0x200),NULL,(0x07),&Table_ATA5291Function_TaskHandler);
		xTaskCreate(Table_EepROMWriteRead_Task,			(const char*)"Table_EepROMWriteRead_Task",			(0x200),NULL,(0x07),&Table_EepROMWriteRead_TaskHandler);
		xTaskCreate(Table_USS10msFunction_Task,			(const char*)"Table_USS10msFunction_Task",			(0x200),NULL,(0x05),&Table_USS10msFunction_TaskHandler);
		xTaskCreate(Table_SWC_RUNFunction_Task,			(const char*)"Table_SWC_RUNFunction_Task",			(0x200),NULL,(0x01),&Table_SWC_RUNFunction_TaskHandler);
		xTaskCreate(Table_UDS10msFunction_Task,			(const char*)"Table_UDS10msFunction_Task",			(0x200),NULL,(0x05),&Table_UDS10msFunction_TaskHandler);
		xTaskCreate(Table_RPT10msFunction_Task,			(const char*)"Table_RPT10msFunction_Task",			(0x200),NULL,(0x01),&Table_RPT10msFunction_TaskHandler);
		xTaskCreate(Table_UDS100msFunction_Task,		(const char*)"Table_UDS100msFunction_Task",			(0x200),NULL,(0x07),&Table_UDS100msFunction_TaskHandler);
		xTaskCreate(Table_PWMOutputControl_Task,		(const char*)"Table_PWMOutputControl_Task",			(0x200),NULL,(0x05),&Table_PWMOutputControl_TaskHandler);
		xTaskCreate(Table_FaultDiagFunction_Task,		(const char*)"Table_FaultDiagFunction_Task",		(0x200),NULL,(0x01),&Table_FaultDiagFunction_TaskHandler);
		xTaskCreate(Table_RPTLearnApiFunction_Task,		(const char*)"Table_RPTLearnApiFunction_Task",		(0x200),NULL,(0x01),&Table_RPTLearnApiFunction_TaskHandler);
		xTaskCreate(Table_RPTServicesFunction__Task,	(const char*)"Table_RPTServicesFunction__Task",		(0x200),NULL,(0x07),&Table_RPTServicesFunction__TaskHandler);
		xTaskCreate(Table_IOAcquisition_Control_Task,	(const char*)"Table_IOAcquisition_Control_Task",	(0x200),NULL,(0x01),&Table_IOAcquisition_Control_TaskHandler);
		xTaskCreate(Table_LINComm_ServiceFunction_Task,	(const char*)"Table_LINComm_ServiceFunction_Task",	(0x200),NULL,(0x05),&Table_LINComm_ServiceFunction_TaskHandler);
    }

    /*The task scheduling algorithm starts*/
	vTaskStartScheduler();
    
    for(;;)
    {

    }
}


/*
 *@name:	 Table_CANSendRecv_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_CANSendRecv_Task(void *pvParameters)
{
  for(;;)
  {			
    	/*采集输入信号→模型*/
		/*控制输出→BSW*/

		vTaskDelay(20);
  }
}

/*
 *@name:	 Table_VCU_ADC_A_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_VCU_ADC_A_Task(void *pvParameters)
{
	for(;;)
	{
		/*采集输入信号→模型*/
		/*控制输出→BSW*/

		vTaskDelay(20);
	}
}

/*
 *@name:	 Table_BCM_ADC_B_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_BCM_ADC_B_Task(void *pvParameters)
{
	for(;;)
	{
		/*采集输入信号→模型*/
		/*控制输出→BSW*/

		vTaskDelay(20);
	}
}


/*
 *@name:	 Table_IOAcquisition_Control_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_IOAcquisition_Control_Task(void *pvParameters)
{
  for(;;)
  {			
     	/*采集输入信号→模型*/
		/*控制输出→BSW*/

		vTaskDelay(20);
  }
}

/*
 *@name:	 Table_TDA5235Function_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_TDA5235Function_Task(void *pvParameters)
{
	for(;;)
	{
		/*采集输入信号→模型*/
		/*控制输出→BSW*/

		vTaskDelay(20);
	}
}

/*
 *@name:	 Table_ATA5291Function_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_ATA5291Function_Task(void *pvParameters)
{
	for(;;)
	{
		/*采集输入信号→模型*/
		/*控制输出→BSW*/

		vTaskDelay(20);
	}
}


/*
 *@name:	 Table_RPTLearnApiFunction_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_RPTLearnApiFunction_Task(void *pvParameters)
{
  for(;;)
  {			
     	/*采集输入信号→模型*/
		/*控制输出→BSW*/

		vTaskDelay(20);
  }
}

/*
 *@name:	 Table_PWMOutputControl_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_PWMOutputControl_Task(void *pvParameters)
{
	for(;;)
	{
		/*采集输入信号→模型*/
		/*控制输出→BSW*/

		vTaskDelay(20);
	}
}

/*
 *@name:	 Table_EepROMWriteRead_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_EepROMWriteRead_Task(void *pvParameters)
{
	for(;;)
	{
		/*采集输入信号→模型*/
		/*控制输出→BSW*/

		vTaskDelay(20);
	}
}


/*
 *@name:	 Table_FaultDiagFunction_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_FaultDiagFunction_Task(void *pvParameters)
{
  for(;;)
  {			
     	/*采集输入信号→模型*/
		/*控制输出→BSW*/

		vTaskDelay(20);
  }
}

/*
 *@name:	 Table_USS10msFunction_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_USS10msFunction_Task(void *pvParameters)
{
	for(;;)
	{
		/*采集输入信号→模型*/
		/*控制输出→BSW*/

		vTaskDelay(20);
	}
}

/*
 *@name:	 Table_RPTServicesFunction__Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_RPTServicesFunction__Task(void *pvParameters)
{
	for(;;)
	{
				/*采集输入信号→模型*/
		vTaskDelay(20);
	}
}


/*
 *@name:	 Table_SWC_RUNFunction_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_SWC_RUNFunction_Task(void *pvParameters)
{
  for(;;)
  {			
	 
     		/*采集输入信号→模型*/
		vTaskDelay(20);
  }
}

/*
 *@name:	 Table_UDS10msFunction_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_UDS10msFunction_Task(void *pvParameters)
{
	for(;;)
	{
				/*采集输入信号→模型*/
		vTaskDelay(20);
	}
}

/*
 *@name:	 Table_UDS100msFunction_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_UDS100msFunction_Task(void *pvParameters)
{
	for(;;)
	{
				/*采集输入信号→模型*/
		vTaskDelay(20);
	}
}


/*
 *@name:	 Table_RPT10msFunction_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_RPT10msFunction_Task(void *pvParameters)
{
  for(;;)
  {			
     		/*采集输入信号→模型*/
		vTaskDelay(20);
  }
}

/*
 *@name:	 Table_LINComm_ServiceFunction_Task	
 *@author:	 huangyanlong
 *@parameter:None
*/
void Table_LINComm_ServiceFunction_Task(void *pvParameters)
{
	for(;;)
	{
				/*采集输入信号→模型*/
		vTaskDelay(20);
	}
}

/*
 *@name:	 vApplicationIdleHook	
 *@author:	 huangyanlong
 *@parameter:None
*/
void vApplicationIdleHook(void)
{
	UBaseType_t uxHighWaterMark;
	
	/*Inspect our own high water mark on entering the task.*/
	uxHighWaterMark = uxTaskGetStackHighWaterMark(IdleHook_TaskHandler);
	printf ("%u : StackOverflow:%s(%lu)\r\n", xTaskGetTickCount(), "pcTaskName", uxHighWaterMark);
}
