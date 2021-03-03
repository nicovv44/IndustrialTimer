/*
 * Constants.h
 *
 * Created: 27/02/2021 9:58:08 PM
 *  Author: Nicolas VERHELST
 */


#ifndef CONSTANTS_H_
#define CONSTANTS_H_

#include <stdio.h>


/************************************************************************/
/* EEPROM addresses                                                     */
/************************************************************************/

static const unsigned int EEPROM_SETVALUE_ADDRESS = 0; // 4 bytes long (because setValue is uint32_t)
static const unsigned int EEPROM_SETVALUE_VALID_ADDRESS = 4; // 1 byte long (because contains a bool)

/************************************************************************/
/* Default values                                                       */
/************************************************************************/

static const uint32_t OERATIONVALUE_DEFAULT = 0;
static const uint32_t SETVALUE_DEFAULT = 0;

#endif /* CONSTANTS_H_ */