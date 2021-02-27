/*
 * EepromTool.h
 *
 * Created: 27/02/2021 9:49:27 PM
 *  Author: Nicolas VERHELST
 */


#ifndef EEPROMTOOL_H_
#define EEPROMTOOL_H_

#include <stdio.h>

static const unsigned char VALID_VALUE_FLAG = 0b10101111;

void EEPROM_write(unsigned int uiAddress, unsigned char ucData);

unsigned char EEPROM_read(unsigned int uiAddress);

void EEPROM_write_setValue(uint32_t value);

uint32_t EEPROM_read_setValue();


#endif /* EEPROMTOOL_H_ */