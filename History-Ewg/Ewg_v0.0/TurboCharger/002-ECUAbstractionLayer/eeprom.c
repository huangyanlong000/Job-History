#include "eeprom.h"

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void Eeprom_ReadData(uint8_t Addr, uint8_t *data, uint16_t length) 
{
    uint16_t i;

    for (i = 0; i < length; i++) 
    {

        data[i] = I2C0_ReceiveData(Addr, data,(uint8_t)i);
    }
}

/***************************************************
 * @name    :
 * @brief   :
 * @author  : 
 * ************************************************/
void Eeprom_WriteData(uint8_t Addr, uint8_t *data, uint16_t length) 
{
    uint16_t i;

    for (i = 0; i < length; i++) 
    {
        data[i] = I2C0_SendData(Addr, (uint8_t)i);
    }
}
