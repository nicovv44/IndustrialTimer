/*
 * Globals.h
 *
 * Created: 3/03/2021 10:50:34 AM
 *  Author: Nicolas VERHELST
 */ 


#ifndef GLOBALS_H_
#define GLOBALS_H_


#include <stdbool.h>
#include <stdio.h>


// Operation value of the timer (meant to represent the current time)
extern volatile uint32_t OperationValue;
// Set value of the timer (configuration done by user)
extern volatile uint32_t SetValue;
// Tells whether the device is in prog mode (activated by first switch)
extern bool ProgMode;
// Tell whether the device is in SetVal configuration mode
extern bool SetValMode;
// Cursor position for blinking purposes
extern uint8_t cursor_x, cursor_y;


#endif /* GLOBALS_H_ */