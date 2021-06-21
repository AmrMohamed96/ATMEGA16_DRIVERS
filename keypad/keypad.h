/******************************************************************************
 * FILENAME     : keypad.h
 * DESCRIPTION  : Keypad driver for AVR
 *
 * AUTHOR       : Amr Mohamed
 * DATE CREATED : 21 - Jun - 2021
 *
 *****************************************************************************/

#include "std_types.h"
#include "micro_config_avr8.h"
#include "common_macros.h"

#ifndef KEYPAD_H_
#define KEYPAD_H_

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/* Keypad configurations for number of rows and columns */
#define N_col 3
#define N_row 4

/* Keypad Port Configurations */
#define KEYPAD_PORT_OUT PORTA
#define KEYPAD_PORT_IN  PINA
#define KEYPAD_PORT_DIR DDRA

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Function responsible for getting the pressed keypad key
 */
uint8 KeyPad_getPressedKey(void);

#endif /* KEYPAD_H_ */
