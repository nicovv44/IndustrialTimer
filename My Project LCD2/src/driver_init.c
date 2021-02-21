/**
 * \file
 *
 * \brief Driver initialization.
 *
 (c) 2020 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms,you may use this software and
    any derivatives exclusively with Microchip products.It is your responsibility
    to comply with third party license terms applicable to your use of third party
    software (including open source software) that may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/*
 * Code generated by START.
 *
 * This file will be overwritten when reconfiguring your START project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <system.h>

/**
 * \brief System initialization
 */
void system_init()
{
	mcu_init();
	
	/************************************************************************/
	/* PORTB setting                                                        */
	/************************************************************************/

#pragma region PORTB_SETTING

	/* PORT setting on PB0 */

	// Set pin direction to output
	LCD_D4_set_dir(PORT_DIR_OUT);

	LCD_D4_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PB1 */

	// Set pin direction to output
	LCD_E0_set_dir(PORT_DIR_OUT);

	LCD_E0_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PB2 */

	// Set pin direction to output
	LCD_RS_set_dir(PORT_DIR_OUT);

	LCD_RS_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PB3 */

	// Set pin direction to output
	LCD_D6_set_dir(PORT_DIR_OUT);

	LCD_D6_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PB4 */

	// Set pin direction to output
	LCD_D5_set_dir(PORT_DIR_OUT);

	LCD_D5_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);
	
#pragma endregion PORTB_SETTING
	
	/************************************************************************/
	/* PORTC setting                                                        */
	/************************************************************************/

#pragma region PORTC_SETTING
	
	/* PORT setting on PC0 */

	// Set pin direction to input
	SW_UP_set_dir(PORT_DIR_IN);

	// Set pin pull up
	SW_UP_set_pull_mode(PORT_PULL_UP);
	
	/* PORT setting on PC1 */

	// Set pin direction to input
	SW_LEFT_set_dir(PORT_DIR_IN);

	// Set pin pull up
	SW_LEFT_set_pull_mode(PORT_PULL_UP);
	
	/* PORT setting on PC2 */

	// Set pin direction to input
	SW_RIGHT_set_dir(PORT_DIR_IN);

	// Set pin pull up
	SW_RIGHT_set_pull_mode(PORT_PULL_UP);
	
	/* PORT setting on PC3 */

	// Set pin direction to input
	SW_DOWN_set_dir(PORT_DIR_IN);

	// Set pin pull up
	SW_DOWN_set_pull_mode(PORT_PULL_UP);
	
#pragma endregion PORTC_SETTING

#pragma region PORTC_SETTING_INTERUPT

	PCICR |=  1 << PCIE1; // Pin change interrupt 1 is enabled.
	PCMSK1 |= 0b1111; // Selects whether pin change interrupt is enabled on the corresponding I/O pin (PCINT8..11 are enabled)

#pragma endregion PORTC_SETTING_INTERUPT

	/************************************************************************/
	/* PORTD setting                                                        */
	/************************************************************************/

#pragma region PORTD_SETTING
	
	/* PORT setting on PD2*/

	// Set pin direction to output
	LCD_D7_set_dir(PORT_DIR_OUT);

	LCD_D7_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

#pragma endregion PORTD_SETTING
	
	sysctrl_init();
}
