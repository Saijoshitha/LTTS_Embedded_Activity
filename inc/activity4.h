/**
 * @file activity4.h
 * @author Dhanush U
 * @brief header file for activity3
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__
#include "project_config.h"
/**
 * @brief Send data via UART interface
 * 
 */

void Init_USART();/**< Initialize all the Peripherals and pin configurations for PWM */
int USARTRead();/**< perform PWM operations on ADC value*/
void UARTWrite(char data);/**< perform PWM operations on ADC value*/

#endif  
