/**
 * @file activity3.h
 * @author Dhanush U
 * @brief header file for activity3
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__
#include <avr/io.h>
#include "user_utils.h"
#include "activity4.h"
/**
 * @brief Generate PWM values for given digital Input
 * 
 */

void Init_PWM(void);/**< Initialize all the Peripherals and pin configurations for PWM */
void GeneratePWM(uint16_t ADC_value);/**< perform PWM operations on ADC value*/


#endif  
