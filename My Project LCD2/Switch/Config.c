/*
 * Config.c
 *
 * Created: 21/02/2021 2:01:47 PM
 *  Author: Nicolas VERHELST
 */ 

#include "Switch/Config.h"
#include "include/atmel_start_pins.h"
#include <stdbool.h>

static SwitchState SW_UP_STATE = RELEASED;
static SwitchState SW_LEFT_STATE = RELEASED;
static SwitchState SW_RIGHT_STATE = RELEASED;
static SwitchState SW_DOWN_STATE = RELEASED;

volatile bool SW_UP_TO_PROCESS = false;
volatile bool SW_LEFT_TO_PROCESS = false;
volatile bool SW_RIGHT_TO_PROCESS = false;
volatile bool SW_DOWN_TO_PROCESS = false;

ISR(PCINT1_vect)
{
	SwitchState SW_UP_STATE_loc = SW_UP_get_level() ? RELEASED : PRESSED;
	SwitchState SW_LEFT_STATE_loc = SW_LEFT_get_level() ? RELEASED : PRESSED;
	SwitchState SW_RIGHT_STATE_loc = SW_RIGHT_get_level() ? RELEASED : PRESSED;
	SwitchState SW_DOWN_STATE_loc = SW_DOWN_get_level() ? RELEASED : PRESSED;
	
	if(SW_UP_STATE_loc != SW_UP_STATE) // SW_UP changed state
	{
		if(SW_UP_STATE_loc == PRESSED) // SW_UP is pressed
		{
			SW_UP_STATE = PRESSED;
			SW_UP_TO_PROCESS = true;
		}
		else // SW_UP is released
		{
			SW_UP_STATE = RELEASED;
		}
	}
	else if(SW_LEFT_STATE_loc != SW_LEFT_STATE) // SW_LEFT changed state
	{
		if(SW_LEFT_STATE_loc == PRESSED) // SW_LEFT is pressed
		{
			SW_LEFT_STATE = PRESSED;
			SW_LEFT_TO_PROCESS = true;
		}
		else // SW_LEFT is released
		{
			SW_LEFT_STATE = RELEASED;
		}
	}
	else if(SW_RIGHT_STATE_loc != SW_RIGHT_STATE) // SW_RIGHT changed state
	{
		if(SW_RIGHT_STATE_loc == PRESSED) // SW_RIGHT is pressed
		{
			SW_RIGHT_STATE = PRESSED;
			SW_RIGHT_TO_PROCESS = true;
		}
		else // SW_RIGHT is released
		{
			SW_RIGHT_STATE = RELEASED;
		}
	}
	else if(SW_DOWN_STATE_loc != SW_DOWN_STATE) // SW_DOWN changed state
	{
		if(SW_DOWN_STATE_loc == PRESSED) // SW_DOWN is pressed
		{
			SW_DOWN_STATE = PRESSED;
			SW_DOWN_TO_PROCESS = true;
		}
		else // SW_DOWN is released
		{
			SW_DOWN_STATE = RELEASED;
		}
	}
}