/*
 * Globals.c
 *
 * Created: 3/03/2021 10:50:20 AM
 *  Author: Nicolas VERHELST
 */ 


#include "Globals.h"
#include <stdbool.h>
#include <stdio.h>

// Operation value of the timer (meant to represent the current time)
volatile uint32_t OperationValue = 0;
// Set value of the timer (configuration done by user)
volatile uint32_t SetValue = 0;
// Tells whether the device is in prog mode (activated by first switch)
bool ProgMode = false;
// Tell whether the device is in SetVal mode
bool SetValMode = false;
// Cursor position for blinking purposes
uint8_t cursor_x = 0;
uint8_t cursor_y = 0;