
#include "LCD\lcd_drv.h"
#include "LCD/mydefs.h"
#include "Timer\CustomTimer.h"
#include "Config/clock_config.h"
#include "Switch/Config.h"
#include "Display/DisplayTool.h"
#include "EEPROM/EepromTool.h"
#include "include/Constants.h"
#include <atmel_start.h>
#include <util\delay.h>
#include <stdio.h>


//bool Waiting = false;
//void ToggleLCD()
//{
	//static bool lcdOn = true;
	//if(lcdOn)
	//{
		//lcd_xy( 0, 0);
		//char Off[4] = "OFF";
		//lcd_puts( (void*)Off );
		//lcdOn = false;
	//}
	//else
	//{
		//lcd_xy( 0, 0);
		//char Off[4] = "ON ";
		//lcd_puts( (void*)Off );
		//lcdOn = true;
	//}
	//Waiting = false;
//}

const char Revision[9] = "00.00.02";
volatile uint32_t operationValue = 123;
volatile uint32_t setValue = 7538;

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	
	setValue = EEPROM_read_setValue();

	lcd_init();
	lcd_xy( 0, 0);
	char RevisionDisplay[17];
	sprintf(RevisionDisplay, "Revision%s", Revision);
	lcd_puts( (void*)RevisionDisplay );
	_delay_ms(2000);

	displayOperationValue(operationValue);
	displaySetValue(setValue);
	
	sei();
	
	//Waiting = true;
	//startTimerAction(500, false, ToggleLCD);
	//while (Waiting) ;

	while (1) {
		_delay_ms(10);
		if(SW_1_TO_PROCESS)
		{
			// Display UP
			lcd_clear();
			lcd_xy( 0, 0);
			char Off[3] = "UP";
			lcd_puts( (void*)Off );
			// Increase set value, store in EEPROM, and display it
			EEPROM_write_setValue(++setValue);
			displaySetValue(setValue);
			SW_1_TO_PROCESS = false;
		}
		else if (SW_2_TO_PROCESS)
		{
			lcd_clear();
			lcd_xy( 0, 0);
			char Off[5] = "LEFT";
			lcd_puts( (void*)Off );
			SW_2_TO_PROCESS = false;
		}
		else if (SW_3_TO_PROCESS)
		{
			lcd_clear();
			lcd_xy( 0, 0);
			char Off[6] = "RIGHT";
			lcd_puts( (void*)Off );
			SW_3_TO_PROCESS = false;
		}
		else if (SW_4_TO_PROCESS)
		{
			lcd_clear();
			lcd_xy( 0, 0);
			char Off[5] = "DOWN";
			lcd_puts( (void*)Off );
			SW_4_TO_PROCESS = false;
		}
	}
}
