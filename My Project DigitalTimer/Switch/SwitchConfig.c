/*
 * Config.c
 *
 * Created: 21/02/2021 2:01:47 PM
 *  Author: Nicolas VERHELST
 */ 

#include "Switch/SwitchConfig.h"
#include "include/atmel_start_pins.h"
#include <stdbool.h>

static SwitchState SW_1_STATE = RELEASED;
static SwitchState SW_2_STATE = RELEASED;
static SwitchState SW_3_STATE = RELEASED;
static SwitchState SW_4_STATE = RELEASED;

volatile bool SW_1_TO_PROCESS = false;
volatile bool SW_2_TO_PROCESS = false;
volatile bool SW_3_TO_PROCESS = false;
volatile bool SW_4_TO_PROCESS = false;

ISR(PCINT1_vect)
{
	SwitchState SW_1_STATE_loc = SW_1_get_level() ? RELEASED : PRESSED;
	SwitchState SW_2_STATE_loc = SW_2_get_level() ? RELEASED : PRESSED;
	SwitchState SW_3_STATE_loc = SW_3_get_level() ? RELEASED : PRESSED;
	SwitchState SW_4_STATE_loc = SW_4_get_level() ? RELEASED : PRESSED;
	
	if(SW_1_STATE_loc != SW_1_STATE) // SW_1 changed state
	{
		if(SW_1_STATE_loc == PRESSED) // SW_1 is pressed
		{
			SW_1_STATE = PRESSED;
			SW_1_TO_PROCESS = true;
		}
		else // SW_1 is released
		{
			SW_1_STATE = RELEASED;
		}
	}
	else if(SW_2_STATE_loc != SW_2_STATE) // SW_2 changed state
	{
		if(SW_2_STATE_loc == PRESSED) // SW_2 is pressed
		{
			SW_2_STATE = PRESSED;
			SW_2_TO_PROCESS = true;
		}
		else // SW_2 is released
		{
			SW_2_STATE = RELEASED;
		}
	}
	else if(SW_3_STATE_loc != SW_3_STATE) // SW_3 changed state
	{
		if(SW_3_STATE_loc == PRESSED) // SW_3 is pressed
		{
			SW_3_STATE = PRESSED;
			SW_3_TO_PROCESS = true;
		}
		else // SW_3 is released
		{
			SW_3_STATE = RELEASED;
		}
	}
	else if(SW_4_STATE_loc != SW_4_STATE) // SW_4 changed state
	{
		if(SW_4_STATE_loc == PRESSED) // SW_4 is pressed
		{
			SW_4_STATE = PRESSED;
			SW_4_TO_PROCESS = true;
		}
		else // SW_4 is released
		{
			SW_4_STATE = RELEASED;
		}
	}
}