#include "can0.h"

/*****************************************************************************************************
 * @file     al_ctrlio.c
 * @brief :					
 * @version  V0.01
 * @date     07.April.2024
****************************************************************************************************/

extern CAN0_txMessage Can0_txMessage;
extern CAN0_rxMessage Can0_rxMessage;
extern volatile uint32_t network_timer;

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void CAN0_Init(void) 
{

    /*************************************************************
     * @brief : The clock of the PORT and CAN modules was enabled
     * **********************************************************/
    {
        PCC->PCCn[PCC_PORTC_INDEX] |= (0x01<<30);
    }
    
    /*************************************************************
     * @brief : Configure Port-C for CAN
     * **********************************************************/
    {
        /*************************************************************
         * @brief : Configure PC2 for CAN_RX function
         * **********************************************************/
        PORTC->PCR[2] = (0x02<<0x08);

        /*************************************************************
         * @brief : Configure PC2 for CAN_RX function
         * **********************************************************/
        PORTC->PCR[3] = (0x02<<0x08);
    }

    /*************************************************************
     * @brief : Can0 work mode init
     * **********************************************************/
    {
        /*Clock Gate Control*/
        PCC->PCCn[PCC_FlexCAN0_INDEX]   |= (0x01<<30);

        /*Disable Module*/
        CAN0->MCR   |= (0x01<<31);

        /*Prescaler Division Factor: Sclock frequency = PE clock frequency.*/
        CAN0->CTRL1 &= ~(0xFF<<24);

        /*Enable Module*/
        CAN0->MCR   &= ~(0x01<<31);

        /*Wait enter the freeze module -- Freeze Mode Acknowledge*/
        while((CAN0->MCR&(0x01<<24))>>24==0x00);

        /*CTRL1配置*/
        /*Prescaler Division Factor = 1 (500K)*/
        CAN0->CTRL1 |= ((CAN0_CTRL1_PRESDIV)<<24);

        /*Resync Jump Width (rjw=11): Resync Jump Width = RJW+1*/
        CAN0->CTRL1 |= ((CAN0_CTRL1_RJW - 0x01)<<22); 

        /*Phase Segment 1 (psg1=011): Phase Buffer Segment 1 = (PSEG1+1) × Time-Quanta.*/
        CAN0->CTRL1 |= ((CAN0_CTRL1_SEG1)<<19);

        /*Phase Segment 2 (psg2=011): Phase Buffer Segment 2 = (PSEG2+1) × Time-Quanta.*/
        CAN0->CTRL1 |= ((CAN0_CTRL1_SEG2)<<16);

        /*Bus Off interrupt enabled.*/
        CAN0->CTRL1 |= ((CAN0_CTRL1_BUSOFFINTER)<<15);

        /*Error interrupt enabled.*/
        CAN0->CTRL1 |= ((CAN0_CTRL1_ERRORINTER)<<14); 

        /*Propagation Segment: Propagation segment time = (PROPSEG+1) × time-quanta.Time-quantum = one Sclock period*/
        CAN0->CTRL1 |= ((CAN0_CTRL1_PROPSEG)<<0); 

        /*clear 32 msg bufs x 4 words/msg buf = 128 words*/
        for(uint8_t i=(0x00); i<128; i++ )
        {                                       
            CAN0->RAMn[i] = 0x00; /* Clear msg buf word */
        }

        /*In FRZ mode, init CAN0 16 msg buf filters*/
        for(uint8_t i=(0x00); i<32; i++ )
        {                                         
            CAN0->RXIMR[i] = 0xFFFFFFFF; /* Check all ID bits for incoming messages */
        }

        /* Global acceptance mask:  all ID bits DON'T CARE receive all ID message*/
        CAN0->RXMGMASK = (0x00000000);

        /*Set the CAN0->RAMn[0x00]*/
        /***********************************************
         * @brief : EDL,BRS,ESI=0 （CANFD not used）
         * @brief : CODE=4    (MB set to RX inactive)
         * @brief : IDE=0       (Standard ID)
         * @brief : SRR, RTR, TIME STAMP = 0
         * *******************************************/
        CAN0->RAMn[CAN0_RAMN0] = (0x04000000);
    
        /*MCR配置*/   
        /*Self Reception Disable ： SRXDIS=1*/
        CAN0->MCR |= (0x01<<17);
        /*Number Of The Last Message Buffer ：32 */
        CAN0->MCR |= (0x01<<17);
                
        //配置唤醒功能
        /***************************
         * @brief : LPMACK
         * *************************/
        CAN0->MCR       |= (0x01<<14);  // 使能唤醒模式

        CAN0->CTRL1_PN  |= (0x0<<0x00)  // Message ID filtering only
        CAN0->CTRL1_PN  |= (0x01<<0x02) // Match upon an ID value greater than or equal to a specified target value
        CAN0->CTRL1_PN  |= (0x01<<0x04) // Match upon a payload contents against an exact target value
        CAN0->CTRL1_PN  |= (0x01<<0x08) // Received message must match the predefined filtering criteria for ID and/or PL once before generating a wakeup event
        CAN0->CTRL1_PN  |= (0x01<<0x10) // Wakeup match event is enabled
        CAN0->CTRL1_PN  |= (0x01<<0x00) // Timeout wakeup event is disabled

        CAN0->CTRL2_PN  |= (0xFFFF<<0x00) // Timeout wakeup event is ENABLE

        CAN0->FLT_ID1 = (0x3B8);
        CAN0->FLT_ID2 = (0x4B8);

        CAN0->FLT_DLC = (0x08);
        CAN0->FLT_DLC = (0x08);

        /*中断使能*/
        /*Negate HALT bit*/
        CAN0->MCR &= ~(CAN_MCR_HALT_MASK);

        /*发送和接收message中断使能*/
        CAN0->IMASK1 |= (0x01<<16)|(0x01<<0);

        /*bus off中断使能*/
        CAN0->CTRL1 |= (0x01<<15);

        //使能唤醒中断
        CAN0->IER |= CAN_IER_WUPIE_MASK;

        /*中断注册*/
        /* Good practice: wait for FRZACK to clear (not in freeze mode) */
        while ((CAN0->MCR && CAN_MCR_FRZACK_MASK) >> CAN_MCR_FRZACK_SHIFT);
        /* Good practice: wait for NOTRDY to clear (module ready) */
        while ((CAN0->MCR && CAN_MCR_NOTRDY_MASK) >> CAN_MCR_NOTRDY_SHIFT);

        //注册接收中断向量
        NVIC_EnableIRQ(CAN0_Wakeup_IRQn);
        S32_NVIC_EnableIRQ(CAN0_ORed_IRQn); //注册bus-off中断向量
        S32_NVIC_EnableIRQ(CAN0_ORed_0_15_MB_IRQn);

        //设置中断优先级
        NVIC_SetPriority(CAN0_Wakeup_IRQn,0x02);
        NVIC_SetPriority(CAN0_Wakeup_IRQn,0x02);
        NVIC_SetPriority(CAN0_Wakeup_IRQn,0x02);
    }

}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void CAN0_ORed_IRQnHandler(void)
{
    /*************************************************************
     * @brief : check the received data
     * **********************************************************/
    if (CAN0_NO_ERROR != CAN0_CheckErrorStatus()) 
    {
        Can0_rxMessage->Can0transmitError = (FALSE);
    }

    /*************************************************************
     * @brief : Clear interrupt flag
     * **********************************************************/
    CAN0->IFLAG1 = 0xFFFFFFFF;
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void CAN0_Wakeup_IRQnHandler(void)
{
   /*Wake Up by Match Flag Bit* || *Wake Up by Timeout Flag Bit*/
   if ((0x01 == (CAN0->WU_MTC&(0x01<<17)))||(0x01 == (CAN0->WU_MTC&(0x01<<16)))) 
   {
       /*This bit can be received either recessive or dominant.*/
       if((0x00) == (CAN0->WMB[0x00]->CS)&(0x01<<22))
       {   
           /*This bit identifies whether the frame format is standard or extended*/
           if((0x00) == (CAN0->WMB[0x00]->CS)&(0x01<<21))
           {
               /*This bit identifies whether the frame is remote or not.*/
               if((0x00) == (CAN0->WMB[0x00]->CS)&(0x01<<20))
               {
                   Can0_txMessage->id      = (CAN0->WMB[0x00]->WMBn_ID);//Length of Data in Bytes
                   Can0_txMessage->length  = (CAN0->WMB[0x00]->WMBn_CS & (0xF0000)>>16);//Length of Data in Bytes

                   Can0_txMessage->data[0x00]      = (CAN0->WMB[0x00]->WMBn_D03&0xF);
                   Can0_txMessage->data[0x01]      = (CAN0->WMB[0x00]->WMBn_D03&0xF0)>>8;
                   Can0_txMessage->data[0x02]      = (CAN0->WMB[0x00]->WMBn_D03&0xF00)>>16;
                   Can0_txMessage->data[0x03]      = (CAN0->WMB[0x00]->WMBn_D03&0xF000)>>24;

                   Can0_txMessage->data[0x04]      = (CAN0->WMB[0x00]->WMBn_D47&0xF);
                   Can0_txMessage->data[0x05]      = (CAN0->WMB[0x00]->WMBn_D47&0xF0)>>8;
                   Can0_txMessage->data[0x06]      = (CAN0->WMB[0x00]->WMBn_D47&0xF00)>>16;
                   Can0_txMessage->data[0x07]      = (CAN0->WMB[0x00]->WMBn_D47&0xF000)>>24;


                    /*Check the wake flag bit*/
                    if(0x01 == CAN0->MCR&(0x01<<20))
                    {
                        /*Clear the wake flag bit*/
                        CAN0->MCR &=  ~(0x01<<20);

                        /*Wait the bus is not busy*/
                        while(CAN0->ESR1&(0x01<<0x07)==0x01);

                        /*Relode the parameter for can0*/
                        CAN0_Init();

                        /*Check CAN0 Synchronization Status*/
                        if(CAN0->ESR1&(0x01<<0x12)==0x01)
                        {
                            WarkUpSource->Wake_up_Frame = (0x01);

                            NetworkSynchron->MessageRecvAck = (0x01);
                        }
                    }

                   // 发送告知唤醒

                   //网络管理消息处理代码

               }
           }
       }

   }
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void CAN0_ORed_0_15_MB_IRQHandler(void)
{
    /*接收正常数据*/
    {
        //清除网络管理、进入秀休眠的时计数
        network_timer = (0x00);

        //清除网络管理、进入秀休眠的时计数
        CAN0_ReceiveMessage(CAN_FRAME_STANDARD);

        //清除网络管理、进入秀休眠的时计数
        CAN0->IFLAG1 |= 0x0000FFFF;//清除标志位
    }

    /*************************************************************
    * @brief : Clear interrupt flag
    * **********************************************************/
   CAN0->IFLAG1 = 0xFFFFFFFF;
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
CAN0_ErrorType CAN0_CheckErrorStatus(void) 
{
    /*************************************************************
     * @brief : Bus shutdown error, handle accordingly
     * **********************************************************/
    if (CAN0->ESR & FLEXCAN_ESR_BOFF_MASK) 
    {

        /*************************************************************
         * @brief : can software reset
         * **********************************************************/
        CAN0->MCR |= FLEXCAN_MCR_SOFTRST_MASK;

        /*************************************************************
         * @brief : For example, resetting the CAN controller
         * **********************************************************/
        CAN0_Init();

        return (CAN0_ErrorType) (CAN0_BUS_OFF_ERROR);
        
    } 
    /*************************************************************
     * @brief : Send error warning flag bit, handle accordingly
     * **********************************************************/
    else if (CAN0->ESR & FLEXCAN_ESR_TXWRN_MASK) 
    {

        /*Receive error warnings, log them, or take other actions*/

        return (CAN0_ErrorType) (CAN0_TX_WARNING_ERROR);
    } 
    /*************************************************************
     * @brief : Send error warning flag bit, handle accordingly
     * **********************************************************/    
    else if (CAN0->ESR & FLEXCAN_ESR_RXWRN_MASK) 
    {
        /*Receive error warnings, log them, or take other actions*/

        return (CAN0_ErrorType) (CAN0_RX_WARNING_ERROR);
    }

    return (CAN0_ErrorType) (CAN0_NO_ERROR);
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void CAN0_SendMessage(CAN0_rxMessage *msg) 
{
    //发送消息
    {

        //clear all transmit flag
        CAN0->IFLAG1 |= 0xFFFF0000;

        // wait bus idle
        while((CAN0->ESR1&(0x01<<0x07))>>0x07==0x00);

        CAN0->RAMn[MB_FIFO_IDX_TX*MSG_BUF_SIZE+2] = msg->data[0]<<24 | msg->data[1]<<16 | msg->data[2]<<8 | msg->data[3];
        CAN0->RAMn[MB_FIFO_IDX_TX*MSG_BUF_SIZE+3] = msg->data[4]<<24 | msg->data[5]<<16 | msg->data[6]<<8 | msg->data[7];
        
        if(msg->FramType == CAN_FRAME_STANDARD)
        {
            CAN0->RAMn[MB_FIFO_IDX_TX*MSG_BUF_SIZE+1] = msg->id<<18;
            //CODE=1100,SRR=1,IDE=0,RTR=0,DLC=1000
            CAN0->RAMn[MB_FIFO_IDX_TX*MSG_BUF_SIZE+0] = 0x0C480000;
        }
        else
        {
            CAN0->RAMn[MB_FIFO_IDX_TX*MSG_BUF_SIZE+1] = msg->id;
            //CODE=1100,SRR=1,IDE=1,RTR=0,DLC=1000
            CAN0->RAMn[MB_FIFO_IDX_TX*MSG_BUF_SIZE+0] = 0x0C680000;
        }
    }

}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
char CAN0_ReceiveMessage(CAN0_rxMessage *msg) 
{
    if (TRUE == (Can0_rxMessage->HadeRecvdata))
    {
        Can0_rxMessage.length = ([CAN0_RAMN0+0]>>16)&0xF;

        if(msg->FramType == CAN_FRAME_STANDARD)
        {
            Can0_rxMessage.id = ([CAN0_RAMN0+1] >> 18) & 0x7FF;
        }
        else
        {
            Can0_rxMessage.id = ([CAN0_RAMN0+1]) & 0x1FFFFFFF;
        }
    
        Can0_rxMessage.data[0] = ([CAN0_RAMN0+2])>>24;
        Can0_rxMessage.data[1] = (([CAN0_RAMN0+2])>>16) &0xFF;
        Can0_rxMessage.data[2] = (([CAN0_RAMN0+2])>>8)  &0xFF;
        Can0_rxMessage.data[3] = ([CAN0_RAMN0+2])       &0xFF;
        Can0_rxMessage.data[4] = ([CAN0_RAMN0+3])>>24;
        Can0_rxMessage.data[5] = (([CAN0_RAMN0+3])>>16) &0xFF;
        Can0_rxMessage.data[6] = (([CAN0_RAMN0+3])>>8)  &0xFF;
        Can0_rxMessage.data[7] = ([CAN0_RAMN0+3])       &0xFF;

        return TRUE;/* code */
    }
    else
    {
        return FALSE;/* code */  
    }
}
