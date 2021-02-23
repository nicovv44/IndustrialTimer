/*
 * DisplayTool.c
 *
 * Created: 23/02/2021 8:06:58 PM
 *  Author: Nicolas VERHELST
 */


 #include "LCD\lcd_drv.h"
 #include <stdio.h>


 void displayOperationValue(int operationValue)
 {
 char displayLine[17] = "";
 sprintf(displayLine, "%.16d", operationValue);
 lcd_xy( 0, 0);
 lcd_puts( (void*)displayLine );
 }

 void displaySetValue(int setValue)
{
	char displayLine[17] = "";
	sprintf(displayLine, "%.16d", setValue);
	lcd_xy( 0, 1);
	lcd_puts( (void*)displayLine );
}