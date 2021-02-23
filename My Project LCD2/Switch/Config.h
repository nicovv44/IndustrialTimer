/*
 * Config.h
 *
 * Created: 21/02/2021 2:27:52 PM
 *  Author: Nicolas VERHELST
 */ 


#ifndef CONFIG_H_
#define CONFIG_H_

#include <stdbool.h>

typedef enum
{
	PRESSED = 0,
	RELEASED = 1
} SwitchState;


extern volatile bool SW_1_TO_PROCESS;
extern volatile bool SW_2_TO_PROCESS;
extern volatile bool SW_3_TO_PROCESS;
extern volatile bool SW_4_TO_PROCESS;

#endif /* CONFIG_H_ */