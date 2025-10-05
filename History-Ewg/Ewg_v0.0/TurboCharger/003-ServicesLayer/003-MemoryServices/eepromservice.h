#ifndef EEPROMSERVICE
#define EEPROMSERVICE

#include "iic0.h"
#include "eeprom.h"
#include "S32K116.h"
#include "SysTick.h"
#include "eepromservice.h"

typedef enum
{
    EEPROM_READ  = (0x00),
    EEPROM_WRITE = (0x01),

}EepromoperateType;

char Eeprom_ReadWrite(EepromoperateType cmd,uint8_t Addr, uint8_t *data, uint16_t length);

#endif