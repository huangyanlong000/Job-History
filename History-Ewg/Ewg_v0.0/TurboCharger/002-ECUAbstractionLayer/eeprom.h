#ifndef EEPROM_H
#define EEPROM_H

#include "iic0.h"

void Eeprom_ReadData(uint8_t Addr, uint8_t *data, uint16_t length);
void Eeprom_WriteData(uint8_t Addr, uint8_t *data, uint16_t length);

#endif