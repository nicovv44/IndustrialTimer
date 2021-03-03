/*
 * DisplayTool.c
 *
 * Created: 23/02/2021 8:06:58 PM
 *  Author: Nicolas VERHELST
 */

#include "Display\DisplayTool.h"
#include "LCD\lcd_drv.h"
#include "Globals.h"
#include "Tools/MyMath.h"
#include <stdio.h>


 void displayOperationValue()
 {
	 char displayLine[17] = "";
	 sprintf(displayLine, "ope:  %.10lu", OperationValue);
	 lcd_xy( 0, 0);
	 lcd_puts( (void*)displayLine );
 }

 void displaySetValue()
{
	char displayLine[17] = "";
	sprintf(displayLine, "set:  %.10lu", SetValue);
	lcd_xy( 0, 1);
	lcd_puts( (void*)displayLine );
}

// Increase a digit in setValue (for the 10 digits millisecond format)
// index: from 9 at the left (1000000000) to 0 at the right (1)
void increaseSetValueDigit(uint8_t index)
{
	// Calculate value represented by digit
	uint32_t valueRepresentedByDigit = MyPow(10, index);

	// Calculate digit
	uint32_t digit;
	if(index == 0)
	{
		digit = SetValue % 10;
	}
	else
	{
		digit = (SetValue / valueRepresentedByDigit) % 10;
	}

	// Modify SetValue according to max value of uint32_t: 4294967295
	switch(index)
	{
		case 9:
		ModifSetValue(digit, valueRepresentedByDigit, 3294967295);
		break;
		case 8:
		ModifSetValue(digit, valueRepresentedByDigit, 4194967295);
		break;
		case 7:
		ModifSetValue(digit, valueRepresentedByDigit, 4284967295);
		break;
		case 6:
		ModifSetValue(digit, valueRepresentedByDigit, 4293967295);
		break;
		case 5:
		ModifSetValue(digit, valueRepresentedByDigit, 4294867295);
		break;
		case 4:
		ModifSetValue(digit, valueRepresentedByDigit, 4294957295);
		break;
		case 3:
		ModifSetValue(digit, valueRepresentedByDigit, 4294966295);
		break;
		case 2:
		ModifSetValue(digit, valueRepresentedByDigit, 4294967195);
		break;
		case 1:
		ModifSetValue(digit, valueRepresentedByDigit, 4294967285);
		break;
		case 0:
		ModifSetValue(digit, valueRepresentedByDigit, 4294967294);
		break;
	}
}

void ModifSetValue(uint32_t digit, uint32_t valueRepresentedByDigit, uint32_t digitOverflowValue)
{
	if(SetValue<digitOverflowValue) // Increase digit by 1
	{
		SetValue += valueRepresentedByDigit;
	}
	else // Set digit to 0
	{
		SetValue -= valueRepresentedByDigit*digit;
	}
}