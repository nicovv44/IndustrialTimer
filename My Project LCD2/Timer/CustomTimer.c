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

// Global variable to be accessed within this file
static functionTypeAction G_Action;
static long G_TargetCount = 1;
static bool G_RepeatAction = false;

void actionWrapper()
{
	G_Action();
	if (!G_RepeatAction)
	{
		timer1_stop();
	}
}

void waitUntilAction()
{
	static long count = 0;
	count++;
	if (count==G_TargetCount)
	{
		count = 0;
		actionWrapper();
	}
}



void startTimerAction(long timeMs, bool repeat, void (*action)())
{
	G_RepeatAction = repeat;
	G_Action = action;
	if(timeMs<=4)
	{
		int ticksToWait = 65535/4*timeMs;
		timer1(TIMER1_PRESCALER_1, ticksToWait, actionWrapper);
	}
	else
	{
		G_TargetCount = timeMs/4;
		timer1(TIMER1_PRESCALER_1, 65535, waitUntilAction);
	}
}