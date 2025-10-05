#include "can0abstraction.h"

/*****************************************************************************************************
 * @file     eal_candatanalyze.c
 * @brief :					
 * @version  V0.01
 * @date     07.April.2024
****************************************************************************************************/

uint8_t ccp_state = CCP_STATE_IDLE;

extern CAN0_txMessage Can0_txMessage;
extern CAN0_rxMessage Can0_rxMessage;

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void ECU_Can0_Init(void)
{
    CAN0_Init();
}

/***************************************************
 * @name    :
 * @brief   : CCP命令处理函数
 * @author  : 
 * ************************************************/
void CCP_Command_Handler(uint8_t *command) 
{
    uint8_t command_code = command[0x00];

    switch (command_code) 
    {
        /*******************************************
         * @brief : CCP_CONNECT
         * *****************************************/
        case CCP_CONNECT:
        {
            // 处理连接请求
            if (ccp_state == CCP_STATE_IDLE) 
            {
                // 发送连接确认
                uint8_t response[8] = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

                Can0_txMessage->data[0x00] = response[0x00];
                Can0_txMessage->data[0x01] = response[0x01];
                Can0_txMessage->data[0x02] = response[0x02];
                Can0_txMessage->data[0x03] = response[0x03];     
                Can0_txMessage->data[0x04] = response[0x04];
                Can0_txMessage->data[0x05] = response[0x05];
                Can0_txMessage->data[0x06] = response[0x06];
                Can0_txMessage->data[0x07] = response[0x07];  

                // 发送CAN报文
                CAN0_SendMessage(Can0_txMessage);

                ccp_state = CCP_STATE_CONNECTED;
            }

            break;
        }
        
        /*******************************************
         * @brief : CCP_CONNECT
         * *****************************************/
        case CCP_DISCONNECT:
        {
            // 处理断开连接请求
            if (ccp_state == CCP_STATE_CONNECTED) 
            {
                // 发送断开确认
                uint8_t response[8] = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

                Can0_txMessage->data[0x00] = response[0x00];
                Can0_txMessage->data[0x01] = response[0x01];
                Can0_txMessage->data[0x02] = response[0x02];
                Can0_txMessage->data[0x03] = response[0x03];     
                Can0_txMessage->data[0x04] = response[0x04];
                Can0_txMessage->data[0x05] = response[0x05];
                Can0_txMessage->data[0x06] = response[0x06];
                Can0_txMessage->data[0x07] = response[0x07];  

                CAN0_SendMessage(Can0_txMessage);

                ccp_state = CCP_STATE_IDLE;
            }
            break;
        }
        
        /*******************************************
         * @brief : CCP_CONNECT
         * *****************************************/
        case CCP_READ_MEMORY:
        {
            // 处理读取内存请求
            if (ccp_state == CCP_STATE_CONNECTED) 
            {
                uint32_t address = (command[0x01]<<24)|(command[0x02]<<16)|(command[0x03]<<8)|command[0x04];

                uint8_t length = command[0x05];

                // 读取内存数据
                uint8_t data[0x08];

                Eeprom_ReadWrite(EEPROM_READ,address,data,0x08);

                // 发送数据响应
                CAN_Send_Message(data);
            }
            break;
        }
        
        /*******************************************
         * @brief : CCP_CONNECT
         * *****************************************/
        case CCP_WRITE_MEMORY:
        {
            // 处理写入内存请求
            if (ccp_state == CCP_STATE_CONNECTED) 
            {
                uint32_t address = (command[0x01]<<24)|(command[0x02]<<16)|(command[0x03]<<8)|command[0x04];

                uint8_t length = command[0x05];

                uint8_t data[0x08];

                for (uint8_t i = 0; i < length; i++) 
                {
                    data[i] = command[0x06 + i];
                }

                Eeprom_ReadWrite(EEPROM_WRITE,address,data,0x08);

                Can0_rxMessage->CalibrationDataUpdate = (TRUE);

                // 发送写入确认
                uint8_t response[8] = {0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

                CAN_Send_Message(response);
            }
            break;
        }
        
        default:break;
    }
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void ECU_Can0_RecvMessage(CAN0_rxMessage * Can0_RecvMessage)
{
    if (TRUE == CAN0_ReceiveMessage(Can0_RecvMessage))
    {
        if (0x3df == Can0_RecvMessage->id)
        {
            /*************************************************************
             * @brief : Processing received data
             * **********************************************************/
            CCP_Command_Handler(Can0_rxMessage->data);
        }
        
    }
    
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void ECU_Can0_SendMessage(const CAN0_txMessage * Can0_SendMessage)
{
    CAN0_SendMessage(Can0_SendMessage);
}
