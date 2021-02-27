/*
 * EepromTool.c
 *
 * Created: 27/02/2021 9:49:05 PM
 *  Author: Nicolas VERHELST
 */

#include "include/Constants.h"
#include "EEPROM/EepromTool.h"
#include <system.h>
#include <stdio.h>

void EEPROM_write(unsigned int uiAddress, unsigned char ucData)
{
	/* Wait for completion of previous write */
	while(EECR & (1<<EEPE))
	;
	/* Set up address and Data Registers */
	EEAR = uiAddress;
	EEDR = ucData;
	/* Write logical one to EEMPE */
	EECR |= (1<<EEMPE);
	/* Start eeprom write by setting EEPE */
	EECR |= (1<<EEPE);
}

unsigned char EEPROM_read(unsigned int uiAddress)
{
	/* Wait for completion of previous write */
	while(EECR & (1<<EEPE))
	;
	/* Set up address register */
	EEAR = uiAddress;
	/* Start eeprom read by writing EERE */
	EECR |= (1<<EERE);
	/* Return data from Data Register */
	return EEDR;
}

void EEPROM_write_setValue(uint32_t value)
{
	for(int i=0; i<4; i++)
	{
		EEPROM_write(EEPROM_SETVALUE_ADDRESS+i, (value >> (8*i)) & 0xff);
	}
	EEPROM_write(EEPROM_SETVALUE_VALID_ADDRESS, VALID_VALUE_FLAG);
}

uint32_t EEPROM_read_setValue()
{
	if(VALID_VALUE_FLAG != EEPROM_read(EEPROM_SETVALUE_VALID_ADDRESS)) // EEPROM value of setValue not initialized (valid)
	{
		EEPROM_write_setValue(0);
	}
	uint32_t l_setValue = 0;
	for(int i=0; i<4; i++)
	{
		l_setValue |= EEPROM_read(EEPROM_SETVALUE_ADDRESS+i) << (8*i);
	}
	return l_setValue;
}
