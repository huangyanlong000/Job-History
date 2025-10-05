#ifndef CAN0SERVICE_H_
#define CAN0SERVICE_H_

/*Load header file*/

#include "can0.h"
#include "SysTick.h"
#include "drv8873h.h"
#include "can0abstraction.h"

/*Create shared Data*/

typedef enum 
{
    STATE_SLEEP,
    STATE_WAKE_UP,
    STATE_PRE_WAKE_UP,
    STATE_NORMAL_COMMUNICATION
}CAN0_Network_State;

typedef enum 
{

    ENGINE_ECU_ID                   = 0x101, 
    BODY_CONTROL_MODULE_RX_ID       = 0x201,
    DIAGNOSTIC_CONTROL_UNIT_RX_ID   = 0x301,
    TRANSMISSION_CONTROL_UNIT_RX_ID = 0x401,

    ID_NUM = (0X04)
}CAN_ECU_ID;

typedef struct 
{
    uint8_t SelfCheckTriiger;           /* data */
    uint8_t ExternalDiagDevConnected;   /* data */
}CAN0_WakeUpSourceSysType;

typedef struct 
{
    uint8_t Starting_Vehicle;           /* data */
    uint8_t Bypass_Valve_Switch;        /* data */
    uint8_t Supply_Voltage_Fluctuation; /* data */
    uint8_t Sensor_Signal_Variation;    /* data */
}CAN0_WakeUpSourcePhyType;

typedef struct 
{
    uint8_t Wake_up_Frame;/* data */
    uint8_t Timed_WakeUp_mechanism;/* data */
}CAN0_WakeUpSourceComType;

typedef struct 
{
    CAN0_WakeUpSourceSysType Systerm;
    CAN0_WakeUpSourcePhyType Physical;
    CAN0_WakeUpSourceComType Communication ;
    /*Add new source*/

}CAN0_WakeUpSourceType;


typedef struct 
{
    uint8_t MessageRecvAck;
}CAN0_NetworkSynchrSourceType;

/*Local function declaration*/
void SL_Can_Service(void);
void Can0_CommuServiceLayer(void);
void Can0_Network_Management(void);
char Can0_CheckWackUp(CAN0_WakeUpSourceType WarkUpSource);
char Can0_CheckNetworkSynchronization(CAN0_NetworkSynchrSourceType NetworkSynchron);

#endif