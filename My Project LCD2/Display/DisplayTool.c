/*
 * DisplayTool.c
 *
 * Created: 23/02/2021 8:06:58 PM
 *  Author: Nicolas VERHELST
 */


#include "LCD\lcd_drv.h"
#include "Globals.h"
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
void increaseSetValueDigit(uint8_t index)
{
	//uint32_t digitValue = atoi(setValueString[index]);
	//if(digitValue<9) digitValue++;
	//char buff[2];
	//sprintf(buff, "%.1d", digitValue);
	//setValueString[index] = buff[0];
	switch(index)
	{
		case 0:
		if(SetValue<=3294967295)
		{
			// Increase digit by 1
			SetValue += 1000000000;
		}
		else
		{
			// Set digit to 0
			SetValue -= SetValue/1000000000*1000000000;
		}
		break;
	}
}