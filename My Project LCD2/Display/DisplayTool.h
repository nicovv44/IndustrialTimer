/*
 * DisplayTool.h
 *
 * Created: 23/02/2021 8:07:12 PM
 *  Author: Nicolas VERHELST
 */


#ifndef DISPLAYTOOL_H_
#define DISPLAYTOOL_H_


#include <stdio.h>


void displayOperationValue();

void displaySetValue();

void increaseSetValueDigit(uint8_t index);

void ModifSetValue(uint32_t digit, uint32_t valueRepresentedByDigit, uint32_t digitOverflowValue);


#endif /* DISPLAYTOOL_H_ */