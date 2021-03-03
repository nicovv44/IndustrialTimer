/*
 * main.h
 *
 * Created: 28/02/2021 4:27:27 PM
 *  Author: Nicolas VERHELST
 */ 


#ifndef MAIN_H_
#define MAIN_H_

/**
 * @brief Intention of action to be processed each loop; it is a sort of state machine state
 */
typedef enum
{
	Idle,
	// Shift mode
	ShiftModeEntry,
	ShiftInShiftMode,
	IncreaseInShiftMode,
	ShiftModeExit,
	// Prog mode
	ProgModeEntry,
	ProgModeExit
} Intention;

void IntentionActionner(Intention *intention);

#endif /* MAIN_H_ */