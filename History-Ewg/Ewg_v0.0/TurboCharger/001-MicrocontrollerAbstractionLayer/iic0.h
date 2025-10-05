#ifndef IIC0_H
#define IIC0_H

#include "S32K116.h"

#define I2C_C1_IICEN_MASK       (1U << 7)
#define I2C_C1_MST_MASK         (1U << 5)
#define I2C_C1_TX_MASK          (1U << 4)
#define I2C_C1_TXAK_MASK        (1U << 3)
#define I2C_C1_RSTA_MASK        (1U << 2)
#define I2C_C1_IICIE_MASK       (1U << 1)
#define I2C_C1_BUSY_MASK        (1U << 0)

#define I2C_S_IICIF_MASK        (1U << 7)
#define I2C_S_ARBL_MASK         (1U << 6)
#define I2C_S_RXAK_MASK         (1U << 5)
#define I2C_S_BUSY_MASK         (1U << 4)
#define I2C_S_TCF_MASK          (1U << 3)
#define I2C_S_DRA_MASK          (1U << 2)
#define I2C_S_ADDR_MASK         (1U << 1)
#define I2C_S_STOPF_MASK        (1U << 0)

typedef struct
{
    /* data */
};

void I2C0_Init(void);
void I2C0_SendData(uint8_t slaveAddr, uint8_t *data, uint8_t length);
void I2C0_ReceiveData(uint8_t slaveAddr, uint8_t *data, uint8_t length);

#endif