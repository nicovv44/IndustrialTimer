/*
 * CustomTimer.h
 *
 * Created: 16/02/2021 12:06:52 AM
 *  Author: Nicolas VERHELST
 */ 


#ifndef CUSTOMTIMER_H_
#define CUSTOMTIMER_H_

#include <stdbool.h>


typedef void (*functionTypeAction)();

void actionWrapper();

void waitUntilAction();

void startTimerAction(long timeMs, bool repeat, void (*action)());




#endif /* CUSTOMTIMER_H_ */