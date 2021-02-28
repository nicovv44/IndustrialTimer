
#include "LCD\lcd_drv.h"
#include "LCD/mydefs.h"
#include "Timer\CustomTimer.h"
#include "Config/clock_config.h"
#include "Switch/SwitchConfig.h"
#include "Display/DisplayTool.h"
#include "EEPROM/EepromTool.h"
#include "include/Constants.h"
#include "main.h"
#include <atmel_start.h>
#include <util\delay.h>
#include <stdio.h>


const char Revision[9] = "00.00.06";
volatile uint32_t operationValue = 0;
volatile uint32_t setValue = 0;


int main(void)
{
	/************************************************************************/
	/* Initialize some variables                                            */
	/************************************************************************/
	// Tells whether the device is in prog mode (activated by first switch)
	bool ProgMode = false;
	bool ProgModeEntryIntention = false;
	// Tell whether the device is in shift mode
	bool ShiftMode = false;
	bool ShiftModeEntryIntention = false;
	bool ShiftModeExitIntention = false;
	// Cursor position
	int cursor_x = -1, cursor_y = -1;

	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	lcd_init();

	// Get some values from EEPROM
	setValue = EEPROM_read_setValue();

	// Display Revision
	lcd_xy( 0, 0);
	char RevisionDisplay[17];
	sprintf(RevisionDisplay, "Revision%s", Revision);
	lcd_puts( (void*)RevisionDisplay );
	_delay_ms(2000);

	// Display welcome screen
	displayOperationValue(operationValue);
	displaySetValue(setValue);
	
	// Enable interrupts (switches, etc...)
	sei();

	while (1) {
		_delay_ms(10);
		/************************************************************************/
		/* Switch press understanding (intention building)                      */
		/************************************************************************/
		// Enter shift mode (shift button outside shift mode)
		if(SW_2_TO_PROCESS && !ShiftMode)
		{
			ShiftModeEntryIntention = true;
			SW_2_TO_PROCESS = false;
		}
		// Shift during shift mode
		else if (SW_2_TO_PROCESS && ShiftMode)
		{
			if(cursor_x < 15)
			{
				cursor_x++;
				lcd_cursor_blink(cursor_x, cursor_y);
			}
			SW_2_TO_PROCESS = false;
				
		}
		// Exit shift mode (enter button in shift mode)
		else if (SW_4_TO_PROCESS && ShiftMode)
		{
			ShiftModeExitIntention = true;
			SW_4_TO_PROCESS = false;
			
		}

		/************************************************************************/
		/* Actions                                                              */
		/************************************************************************/

		if(ShiftModeEntryIntention)
		{
			cursor_x = 6; cursor_y = 1;
			lcd_cursor_blink(cursor_x, cursor_y);
			ShiftMode = true;
			ShiftModeEntryIntention = false;
		}
		if(ShiftModeExitIntention)
		{
			lcd_nocursor_noblink();
			ShiftMode = false;
			ShiftModeExitIntention = false;
		}
	}
}
