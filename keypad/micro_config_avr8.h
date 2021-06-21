/******************************************************************************
 * FILENAME     : micro_config_avr8.h
 * DESCRIPTION  : AVR ATMEGA16 8BIT uC default config and includes
 *
 * AUTHOR       : Amr Mohamed
 * DATE CREATED : 21 - Jun - 2021
 *
 *****************************************************************************/

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#ifndef MICRO_CONFIG_AVR8_H_
#define MICRO_CONFIG_AVR8_H_

#ifndef F_CPU
#define F_CPU 1000000UL //1MHz Clock frequency
#endif

#endif /* MICRO_CONFIG_AVR8_H_ */
