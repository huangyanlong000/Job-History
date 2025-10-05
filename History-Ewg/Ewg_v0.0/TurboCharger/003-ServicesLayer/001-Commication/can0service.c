#include "can0service.h"

/*****************************************************************************************************
 * @file     sl_canservice.c
 * @brief :					
 * @version  V0.01
 * @date     07.April.2024
****************************************************************************************************/

CAN0_txMessage Can0_txMessage;
CAN0_rxMessage Can0_rxMessage;

extern volatile uint32_t network_timer;

CAN0_Network_State           current_state      = STATE_SLEEP;
CAN0_WakeUpSourceType        WarkUpSource       = {0x00};
CAN0_NetworkSynchrSourceType NetworkSynchron    = {0x00};

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void Can0_CommuServiceLayer(void) 
{
    Can0_Network_Management();

    if (TRUE == Can0_txMessage->cansenddata)
    {
        ECU_CAN0_SendMessage(Can0_txMessage);
    }
    
    if (TRUE == Can0_rxMessage->HadeRecvdata)
    {
        ECU_Can0_RecvMessage(Can0_rxMessage);
    }

}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void Can0_Network_Management(void) 
{
    switch (current_state) 
    {
        case STATE_SLEEP:
        {
            if (TRUE == Can0_CheckWackUp(WarkUpSource))
            {
                current_state = STATE_PRE_WAKE_UP;

                //把CAN驱动芯片的TJA1044T_STB拉低，退出待机休眠
                TJA1044T_STB(0x00);

                //通信参数配置

                //数据初始化
            }
            else
            {
                Can0_txMessage->cansenddata = FALSE;
            }
            
            break;
        }

        case STATE_WAKE_UP:
        {
            if (TRUE == Can0_CheckNetworkSynchronization(NetworkSynchron)) 
            {
                current_state = STATE_NORMAL_COMMUNICATION;
            }
            else
            {
                current_state = STATE_WAKE_UP;

                if (network_timer >= 10) 
                { 
                    /*同步失败提示*/
                    network_timer = 0;
                }

            }

            break;
        }
        
        case STATE_PRE_WAKE_UP:
        {
            if (network_timer >= 10) 
            { 
                current_state = STATE_WAKE_UP;
                network_timer = 0;
            }
            break;
        }

        case STATE_NORMAL_COMMUNICATION:
        {
            if (network_timer >= 1000)
            { 
                // 假设1s无通信活动进入睡眠

                current_state = STATE_SLEEP;

                network_timer = 0;

                //把CAN驱动芯片的TJA1044T_STB拉高
                TJA1044T_STB(0x01);

                //关闭为CAN0提供时钟

                //关闭CAN模块以降低功耗

                //进入待机休眠
            }
            else
            {
                Can0_txMessage->cansenddata     = TRUE;
                Can0_rxMessage->HadeRecvdata    = TRUE;
            }
            
            break;
        }
    }
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
char Can0_CheckWackUp(CAN0_WakeUpSourceType WarkUpSource)
{
    if ((WarkUpSource.Communication->Wake_up_Frame!=(0x00)))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
    return FALSE;
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
char Can0_CheckNetworkSynchronization(CAN0_NetworkSynchrSourceType NetworkSynchron)
{
    if ((NetworkSynchron->MessageRecvAck!=(0x00)))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
    return FALSE;
}

