/*
 * Constants.h
 *
 * Created: 27/02/2021 9:58:08 PM
 *  Author: Nicolas VERHELST
 */


#ifndef CONSTANTS_H_
#define CONSTANTS_H_


/************************************************************************/
/* EEPROM addresses                                                     */
/************************************************************************/

static const unsigned int EEPROM_SETVALUE_ADDRESS = 0; // 4 bytes long (because setValue is uint32_t)
static const unsigned int EEPROM_SETVALUE_VALID_ADDRESS = 4; // 1 byte long (because contains a bool)

#endif /* CONSTANTS_H_ */