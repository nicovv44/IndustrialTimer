
#include "LCD\lcd_drv.h"
#include "LCD/mydefs.h"
#include "Timer\CustomTimer.h"
#include "Config/clock_config.h"
#include "Switch/SwitchConfig.h"
#include "Display/DisplayTool.h"
#include "EEPROM/EepromTool.h"
#include "include/Constants.h"
#include "main.h"
#include "Globals.h"
#include <atmel_start.h>
#include <util\delay.h>
#include <stdio.h>


const char Revision[9] = "00.00.11";


int main(void)
{
	/************************************************************************/
	/* Define/declare some variables                                        */
	/************************************************************************/
	// Intention for the process of "intention building" and "intention actioning"
	Intention intention = Idle;

	/************************************************************************/
	/* Some initializations                                                 */
	/************************************************************************/
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	lcd_init();

	// Get some values from EEPROM
	SetValue = EEPROM_read_setValue();

	// Display Revision
	lcd_xy( 0, 0);
	char RevisionDisplay[17];
	sprintf(RevisionDisplay, "Revision%s", Revision);
	lcd_puts( (void*)RevisionDisplay );
	_delay_ms(2000);

	// Display welcome screen
	displayOperationValue();
	displaySetValue();
	
	// Enable interrupts (switches, etc...)
	sei();

	/************************************************************************/
	/* Main loop of the program                                             */
	/************************************************************************/
	while (1) {
		_delay_ms(10);
		/************************************************************************/
		/* Build an intention (switch press understanding)                      */
		/************************************************************************/
		//////////////////////////////////////////////////////////////////////////Shift mode
		// Enter shift mode (shift button outside shift mode)
		if(SW_2_TO_PROCESS && !ShiftMode)
		{
			intention = ShiftModeEntry;
			SW_2_TO_PROCESS = false;
		}
		// Shift during shift mode
		else if (SW_2_TO_PROCESS && ShiftMode)
		{
			intention = ShiftInShiftMode;
			SW_2_TO_PROCESS = false;
		}
		// Increase during shift mode
		else if (SW_3_TO_PROCESS && ShiftMode)
		{
			intention = IncreaseInShiftMode;
			SW_3_TO_PROCESS = false;
		}
		// Exit shift mode (enter button in shift mode)
		else if (SW_4_TO_PROCESS && ShiftMode)
		{
			intention = ShiftModeExit;
			SW_4_TO_PROCESS = false;
		}
		////////////////////////////////////////////////////////////////////////// Prog mode
		// Enter prog mode
		else if (SW_1_TO_PROCESS && !ProgMode)
		{
			intention = ProgModeEntry;
			SW_1_TO_PROCESS = false;
		}
		//Exit prog mode
		else if (SW_1_TO_PROCESS && ProgMode)
		{
			intention = ProgModeExit;
			SW_1_TO_PROCESS = false;
		}

		/************************************************************************/
		/* Action the intention                                                 */
		/************************************************************************/
		IntentionActionner(&intention);
	}
}


void IntentionActionner(Intention *intention)
{
	switch(*intention)
	{
		case Idle:
			break;

		////////////////////////////////////////////////////////////////////////// Shift mode
		case ShiftModeEntry:
			lcd_clear();
			displayShiftModeHome();
			cursor_x = 6; cursor_y = 1;
			lcd_cursor_blink(cursor_x, cursor_y);
			ShiftMode = true;
			*intention = Idle;
			break;

		case ShiftInShiftMode:
			if(cursor_x < 15)
			{
				lcd_cursor_blink(++cursor_x, cursor_y);
			}
			*intention = Idle;
			break;

		case IncreaseInShiftMode:
			// TODO: increase digit in shift mode
			increaseSetValueDigit(9 -(cursor_x - 6));
			displaySetValue();
			lcd_cursor_blink(cursor_x, cursor_y);
			*intention = Idle;
			break;

		case ShiftModeExit:
			EEPROM_write_setValue(SetValue);
			EEPROM_wait_write_completion();
			lcd_clear();
			displayOperationValue();
			displaySetValue();
			lcd_nocursor_noblink();
			ShiftMode = false;
			*intention = Idle;
			break;

		////////////////////////////////////////////////////////////////////////// Prog mode
		case ProgModeEntry:
			lcd_clear();
			displayProgModeHome();
			cursor_x = 15; cursor_y = 1;
			lcd_cursor_blink(cursor_x, cursor_y);
			ProgMode = true;
			*intention = Idle;
			break;

		case ProgModeExit:
			lcd_clear();
			displayOperationValue();
			displaySetValue();
			lcd_nocursor_noblink();
			ProgMode = false;
			*intention = Idle;
			break;
	}
}
