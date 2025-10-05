#ifndef  RTOSERVICE_H_
#define  RTOSERVICE_H_

/*HeadFile Defination*/
#include "FreeRTOS.h"
#include "task.h"
#include "portmacro.h"

/*Struct Defination*/

/*Function Defination*/
void Table_VCU_ADC_A_Task(void *pvParameters);				
void Table_BCM_ADC_B_Task(void *pvParameters);				
void Table_CANSendRecv_Task(void *pvParameters);			
void Table_TDA5235Function_Task(void *pvParameters);
void Table_ATA5291Function_Task(void *pvParameters);
void Table_EepROMWriteRead_Task(void *pvParameters);
void Table_USS10msFunction_Task(void *pvParameters);
void Table_SWC_RUNFunction_Task(void *pvParameters);
void Table_UDS10msFunction_Task(void *pvParameters);
void Table_RPT10msFunction_Task(void *pvParameters);
void Table_UDS100msFunction_Task(void *pvParameters);
void Table_PWMOutputControl_Task(void *pvParameters);
void Table_FaultDiagFunction_Task(void *pvParameters);
void Table_RPTLearnApiFunction_Task(void *pvParameters);
void Table_RPTServicesFunction__Task(void *pvParameters);
void Table_IOAcquisition_Control_Task(void *pvParameters);
void Table_LINComm_ServiceFunction_Task(void *pvParameters);

void RealTimeOperateSysterm_Push(void);
#endif
