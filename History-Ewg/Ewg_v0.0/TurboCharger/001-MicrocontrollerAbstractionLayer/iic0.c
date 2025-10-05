#include "iic0.h"

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void I2C0_Init(void)
{
    //使能PORTA时钟
    PCC->PCCn[PCC_PORTA_INDEX] |= PCC_PCCn_CGC_MASK;
    //使能I2C0时钟
    PCC->PCCn[PCC_LPI2C0_INDEX] |= PCC_PCCn_CGC_MASK;

    //将PA2配置为I2C0_SDA功能
    PORTA->PCR[2] = PORT_PCR_MUX(2); 
    //将PA3配置为I2C0_SCL功能
    PORTA->PCR[3] = PORT_PCR_MUX(2); 

    //配置I2C0为主模式,速率为100kHz
    LPI2C0->F = 0x14;                 //参考数据手册设置波特率
    LPI2C0->C1 = I2C_C1_IICEN_MASK;   //使能I2C0
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void I2C0_SendData(uint8_t slaveAddr, uint8_t *data, uint8_t length) 
{
    //发送起始信号
    {
        //进入主模式
        LPI2C0->C1 |= I2C_C1_MST_MASK;
        //进入发送模式
        LPI2C0->C1 |= I2C_C1_TX_MASK;
    }

    //发送从机地址和写标志
    {
        LPI2C0->D = (slaveAddr<<0x01)&0xFE;
    }

    //等待发送完成
    {
        while (!(LPI2C0->S & I2C_S_IICIF_MASK));
        
        LPI2C0->S |= I2C_S_IICIF_MASK;  //清除中断标志
    }

    //发送数据
    {
        for (uint8_t i = 0; i < length; i++) 
        {
            LPI2C0->D = data[i];

            {
                //等待发送完成
                while (!(LPI2C0->S & I2C_S_IICIF_MASK));
                //清除中断标志
                LPI2C0->S |= I2C_S_IICIF_MASK;
            }
        }
    }

    //发送停止信号
    {
        //退出主模式
        LPI2C0->C1 &= ~I2C_C1_MST_MASK;
    }
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void I2C0_ReceiveData(uint8_t slaveAddr, uint8_t *data, uint8_t length) 
{

    //发送起始信号
    {
        //进入主模式
        LPI2C0->C1 |= I2C_C1_MST_MASK;
        //进入发送模式
        LPI2C0->C1 |= I2C_C1_TX_MASK;
    }

    //发送从机地址和读标志
    {
        LPI2C0->D = (slaveAddr<<0x01)|(0x01);
    }

    //等待发送完成
    {
        while (!(LPI2C0->S & I2C_S_IICIF_MASK));

        //清除中断标志
        LPI2C0->S |= I2C_S_IICIF_MASK;
    }

    //进入接收模式
    {
        LPI2C0->C1 &= ~I2C_C1_TX_MASK;
    }

    //接收数据
    {
        for (uint8_t i = 0x00; i < length; i++) 
        {
            {
                //最后一个字节发送 NACK
                if (i == length - 0x01) 
                {
                    LPI2C0->C1 |= I2C_C1_TXAK_MASK;
                }
            }
    
            data[i] = LPI2C0->D;
    
            //等待接收完成
            {
                while (!(LPI2C0->S & I2C_S_IICIF_MASK));
            
                //清除中断标志
                LPI2C0->S |= I2C_S_IICIF_MASK;
            }
        }
    }

    //发送停止信号
    {
        LPI2C0->C1 &= ~I2C_C1_MST_MASK;  //退出主模式
    }
}