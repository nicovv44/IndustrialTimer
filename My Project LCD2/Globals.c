/*
 * Globals.c
 *
 * Created: 3/03/2021 10:50:20 AM
 *  Author: Nicolas VERHELST
 */ 


#include "Globals.h"
#include <stdbool.h>
#include <stdio.h>


volatile uint32_t OperationValue = 0;
volatile uint32_t SetValue = 0;

// Tells whether the device is in prog mode (activated by first switch)
bool ProgMode = false;
// Tell whether the device is in shift mode
bool ShiftMode = false;
// Cursor position
uint8_t cursor_x = 0;
uint8_t cursor_y = 0;