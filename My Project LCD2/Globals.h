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


extern volatile uint32_t OperationValue;
extern volatile uint32_t SetValue;

// Tells whether the device is in prog mode (activated by first switch)
extern bool ProgMode;
// Tell whether the device is in shift mode
extern bool ShiftMode;
// Cursor position
extern uint8_t cursor_x, cursor_y;


#endif /* GLOBALS_H_ */