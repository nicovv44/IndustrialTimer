
#include "LCD\lcd_drv.h"
#include "LCD/mydefs.h"
#include "Timer\CustomTimer.h"
#include "Config/clock_config.h"
#include "Switch/Config.h"
#include "Display/DisplayTool.h"
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

const char Revision[9] = "00.00.01";
volatile int operationValue = 123;
volatile int setValue = 7538;

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	
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
			lcd_clear();
			lcd_xy( 0, 0);
			char Off[3] = "UP";
			lcd_puts( (void*)Off );
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
