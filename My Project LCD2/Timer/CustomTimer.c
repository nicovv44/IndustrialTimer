/*
 * CustomTimer.c
 *
 * Created: 16/02/2021 12:06:28 AM
 *  Author: Nicolas VERHELST
 */ 

#include "Timer/CustomTimer.h"
#include "Timer/atmega-timers.h"
#include "LCD/lcd_drv.h"
#include <stdbool.h>

functionTypeAction GlobalAction;
long GlobalTargetCount = 1;
bool RepeatAction = false;

void actionWrapper()
{
	GlobalAction();
	if (!RepeatAction)
	{
		timer1_stop();
	}
}

void waitUntilAction()
{
	static long count = 0;
	count++;
	if (count==GlobalTargetCount)
	{
		count = 0;
		actionWrapper();
	}
}



void startTimerAction(long timeMs, bool repeat, void (*action)())
{
	RepeatAction = repeat;
	GlobalAction = action;
	if(timeMs<=4)
	{
		int ticksToWait = 65535/4*timeMs;
		timer1(TIMER1_PRESCALER_1, ticksToWait, actionWrapper);
	}
	else
	{
		GlobalTargetCount = timeMs/4;
		timer1(TIMER1_PRESCALER_1, 65535, waitUntilAction);
	}
}