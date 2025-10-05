#ifndef CAN0ABSTRACTION_H
#define CAN0ABSTRACTION_H

/*Load header file*/
#include "can0.h"

void ECU_Can0_Init(void);

typedef enum 
{
    LIN1_TYPE = (0x00),
    CAN0_TYPE = (0x01),
    CAN1_TYPE = (0x02),

    ECU_COM_NUM,

}ECUCommicationType;

void ECU_Can0_Init(void);
void ECU_Can0_RecvMessage(CAN0_rxMessage * Can0_RecvMessage);
void ECU_Can0_SendMessage(const CAN0_txMessage * Can0_SendMessage);

#endif