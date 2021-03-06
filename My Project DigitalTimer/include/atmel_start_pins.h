/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>


/************************************************************************/
/* SW_1                                                                 */
/************************************************************************/

#pragma region SW_1

/**
 * \brief Set SW_1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set SW_1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_1_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(0, dir);
}

/**
 * \brief Set SW_1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_1_set_level(const bool level)
{
	PORTC_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on SW_1
 *
 * Toggle the pin level
 */
static inline void SW_1_toggle_level()
{
	PORTC_toggle_pin_level(0);
}

/**
 * \brief Get level on SW_1
 *
 * Reads the level on a pin
 */
static inline bool SW_1_get_level()
{
	return PORTC_get_pin_level(0);
}

#pragma endregion SW_1

/************************************************************************/
/* SW_2                                                                 */
/************************************************************************/

#pragma region SW_2

/**
 * \brief Set SW_2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set SW_2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_2_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(1, dir);
}

/**
 * \brief Set SW_2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_2_set_level(const bool level)
{
	PORTC_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on SW_2
 *
 * Toggle the pin level
 */
static inline void SW_2_toggle_level()
{
	PORTC_toggle_pin_level(1);
}

/**
 * \brief Get level on SW_2
 *
 * Reads the level on a pin
 */
static inline bool SW_2_get_level()
{
	return PORTC_get_pin_level(1);
}

#pragma endregion SW_2

/************************************************************************/
/* SW_3                                                                 */
/************************************************************************/

#pragma region SW_3

/**
 * \brief Set SW_3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set SW_3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_3_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(2, dir);
}

/**
 * \brief Set SW_3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_3_set_level(const bool level)
{
	PORTC_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on SW_3
 *
 * Toggle the pin level
 */
static inline void SW_3_toggle_level()
{
	PORTC_toggle_pin_level(2);
}

/**
 * \brief Get level on SW_3
 *
 * Reads the level on a pin
 */
static inline bool SW_3_get_level()
{
	return PORTC_get_pin_level(2);
}

#pragma endregion SW_3

/************************************************************************/
/* SW_4                                                                 */
/************************************************************************/

#pragma region SW_4

/**
 * \brief Set SW_4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set SW_4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_4_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(3, dir);
}

/**
 * \brief Set SW_4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_4_set_level(const bool level)
{
	PORTC_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on SW_4
 *
 * Toggle the pin level
 */
static inline void SW_4_toggle_level()
{
	PORTC_toggle_pin_level(3);
}

/**
 * \brief Get level on SW_4
 *
 * Reads the level on a pin
 */
static inline bool SW_4_get_level()
{
	return PORTC_get_pin_level(3);
}

#pragma endregion SW_4

/************************************************************************/
/* LCD_D4                                                               */
/************************************************************************/

#pragma region LCD_D4

/**
 * \brief Set LCD_D4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void LCD_D4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set LCD_D4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void LCD_D4_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(2, dir);
}

/**
 * \brief Set LCD_D4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void LCD_D4_set_level(const bool level)
{
	PORTB_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on LCD_D4
 *
 * Toggle the pin level
 */
static inline void LCD_D4_toggle_level()
{
	PORTB_toggle_pin_level(2);
}

/**
 * \brief Get level on LCD_D4
 *
 * Reads the level on a pin
 */
static inline bool LCD_D4_get_level()
{
	return PORTB_get_pin_level(2);
}

#pragma endregion LCD_D4

/************************************************************************/
/* LDC_E0                                                               */
/************************************************************************/

#pragma region LCD_E0

/**
 * \brief Set LCD_E0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void LCD_E0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set LCD_E0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void LCD_E0_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(3, dir);
}

/**
 * \brief Set LCD_E0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void LCD_E0_set_level(const bool level)
{
	PORTB_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on LCD_E0
 *
 * Toggle the pin level
 */
static inline void LCD_E0_toggle_level()
{
	PORTB_toggle_pin_level(3);
}

/**
 * \brief Get level on LCD_E0
 *
 * Reads the level on a pin
 */
static inline bool LCD_E0_get_level()
{
	return PORTB_get_pin_level(3);
}

#pragma endregion LCD_E0

/************************************************************************/
/* LDC_RS                                                               */
/************************************************************************/

#pragma region LCD_RS

/**
 * \brief Set LCD_RS pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void LCD_RS_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set LCD_RS data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void LCD_RS_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(4, dir);
}

/**
 * \brief Set LCD_RS level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void LCD_RS_set_level(const bool level)
{
	PORTB_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on LCD_RS
 *
 * Toggle the pin level
 */
static inline void LCD_RS_toggle_level()
{
	PORTB_toggle_pin_level(4);
}

/**
 * \brief Get level on LCD_RS
 *
 * Reads the level on a pin
 */
static inline bool LCD_RS_get_level()
{
	return PORTB_get_pin_level(4);
}

#pragma endregion LCD_RS

/************************************************************************/
/* LDC_D6                                                               */
/************************************************************************/

#pragma region LCD_D6

/**
 * \brief Set LCD_D6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void LCD_D6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set LCD_D6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void LCD_D6_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(3, dir);
}

/**
 * \brief Set LCD_D6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void LCD_D6_set_level(const bool level)
{
	PORTD_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on LCD_D6
 *
 * Toggle the pin level
 */
static inline void LCD_D6_toggle_level()
{
	PORTD_toggle_pin_level(3);
}

/**
 * \brief Get level on LCD_D6
 *
 * Reads the level on a pin
 */
static inline bool LCD_D6_get_level()
{
	return PORTD_get_pin_level(3);
}

#pragma endregion LCD_D6

/************************************************************************/
/* LDC_D5                                                               */
/************************************************************************/

#pragma region LCD_D5

/**
 * \brief Set LCD_D5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void LCD_D5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set LCD_D5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void LCD_D5_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(4, dir);
}

/**
 * \brief Set LCD_D5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void LCD_D5_set_level(const bool level)
{
	PORTD_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on LCD_D5
 *
 * Toggle the pin level
 */
static inline void LCD_D5_toggle_level()
{
	PORTD_toggle_pin_level(4);
}

/**
 * \brief Get level on LCD_D5
 *
 * Reads the level on a pin
 */
static inline bool LCD_D5_get_level()
{
	return PORTD_get_pin_level(4);
}

#pragma endregion LCD_D5

/************************************************************************/
/* LDC_D7                                                               */
/************************************************************************/

#pragma region LCD_D7

/**
 * \brief Set LCD_D7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void LCD_D7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set LCD_D7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void LCD_D7_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(2, dir);
}

/**
 * \brief Set LCD_D7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void LCD_D7_set_level(const bool level)
{
	PORTD_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on LCD_D7
 *
 * Toggle the pin level
 */
static inline void LCD_D7_toggle_level()
{
	PORTD_toggle_pin_level(2);
}

/**
 * \brief Get level on LCD_D7
 *
 * Reads the level on a pin
 */
static inline bool LCD_D7_get_level()
{
	return PORTD_get_pin_level(2);
}

#pragma endregion LCD_D7

#endif /* ATMEL_START_PINS_H_INCLUDED */
