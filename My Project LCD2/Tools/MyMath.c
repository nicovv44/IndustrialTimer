/*
 * MyMath.c
 *
 * Created: 3/03/2021 11:58:16 AM
 *  Author: Nicolas VERHELST
 */ 


#include <stdio.h>


uint32_t MyPow(uint8_t base, uint8_t exponent)
{
	uint32_t result = 1;
	for (exponent; exponent>0; exponent--)
	{
		result *= base;
	}
	return result;
}