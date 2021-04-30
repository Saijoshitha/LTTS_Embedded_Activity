#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_
#define F_CPU 16000000UL 	

#include <avr/io.h>
#include <util/delay.h>

void change_led_state(uint8_t state);

void delay_ms(uint32_t delay_time);


#endif 
