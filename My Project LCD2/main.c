
#include "LCD\lcd_drv.h"
#include "LCD/mydefs.h"
#include "Timer\CustomTimer.h"
#include <atmel_start.h>
#include <util\delay.h>


bool Waiting = false;
void ToggleLCD()
{
	static bool lcdOn = true;
	if(lcdOn)
	{
		lcd_xy( 0, 0);
		char Off[4] = "OFF";
		lcd_puts( (void*)Off );
		lcdOn = false;
	}
	else
	{
		lcd_xy( 0, 0);
		char Off[4] = "ON ";
		lcd_puts( (void*)Off );
		lcdOn = true;
	}
	Waiting = false;
}


int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	
	lcd_init();
	lcd_xy( 0, 0);
	char On[3] = "ON";
	lcd_puts( (void*)On );
	
	sei();
	
	Waiting = true;
	startTimerAction(500, false, ToggleLCD);
	while (Waiting) ;
	Waiting = true;
	startTimerAction(200, false, ToggleLCD);
	while (Waiting) ;
	Waiting = true;
	startTimerAction(200, false, ToggleLCD);
	while (Waiting) ;
	Waiting = true;
	startTimerAction(200, false, ToggleLCD);
	while (Waiting) ;
	Waiting = true;
	startTimerAction(200, false, ToggleLCD);
	while (Waiting) ;
	Waiting = true;
	startTimerAction(500, false, ToggleLCD);
	while (Waiting) ;
	Waiting = true;
	startTimerAction(500, false, ToggleLCD);
	while (Waiting) ;
	Waiting = true;
	startTimerAction(500, false, ToggleLCD);
	while (Waiting) ;
	Waiting = true;
	startTimerAction(1000, true, ToggleLCD);

	while (1) {
		_delay_ms(10);
	}
}
