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


extern volatile bool SW_UP_TO_PROCESS;
extern volatile bool SW_LEFT_TO_PROCESS;
extern volatile bool SW_RIGHT_TO_PROCESS;
extern volatile bool SW_DOWN_TO_PROCESS;

#endif /* CONFIG_H_ */