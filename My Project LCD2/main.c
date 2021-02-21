
#include "LCD\lcd_drv.h"
#include "LCD/mydefs.h"
#include "Timer\CustomTimer.h"
#include "Config/clock_config.h"
#include "Switch/Config.h"
#include <atmel_start.h>
#include <util\delay.h>


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


int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	
	lcd_init();
	lcd_xy( 0, 0);
	char On[3] = "ON";
	lcd_puts( (void*)On );
	
	sei();
	
	//Waiting = true;
	//startTimerAction(500, false, ToggleLCD);
	//while (Waiting) ;

	while (1) {
		_delay_ms(10);
		if(SW_UP_TO_PROCESS)
		{
			lcd_clear();
			lcd_xy( 0, 0);
			char Off[3] = "UP";
			lcd_puts( (void*)Off );
			SW_UP_TO_PROCESS = false;
		}
		else if (SW_LEFT_TO_PROCESS)
		{
			lcd_clear();
			lcd_xy( 0, 0);
			char Off[5] = "LEFT";
			lcd_puts( (void*)Off );
			SW_LEFT_TO_PROCESS = false;
		}
		else if (SW_RIGHT_TO_PROCESS)
		{
			lcd_clear();
			lcd_xy( 0, 0);
			char Off[6] = "RIGHT";
			lcd_puts( (void*)Off );
			SW_RIGHT_TO_PROCESS = false;
		}
		else if (SW_DOWN_TO_PROCESS)
		{
			lcd_clear();
			lcd_xy( 0, 0);
			char Off[5] = "DOWN";
			lcd_puts( (void*)Off );
			SW_DOWN_TO_PROCESS = false;
		}
	}
}
