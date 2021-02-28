/*
 * DisplayTool.c
 *
 * Created: 23/02/2021 8:06:58 PM
 *  Author: Nicolas VERHELST
 */


#include "LCD\lcd_drv.h"
#include <stdio.h>


 void displayOperationValue(uint32_t operationValue)
 {
	 char displayLine[17] = "";
	 sprintf(displayLine, "ope:  %.10lu", operationValue);
	 lcd_xy( 0, 0);
	 lcd_puts( (void*)displayLine );
 }

 void displaySetValue(uint32_t setValue)
{
	char displayLine[17] = "";
	sprintf(displayLine, "set:  %.10lu", setValue);
	lcd_xy( 0, 1);
	lcd_puts( (void*)displayLine );
}