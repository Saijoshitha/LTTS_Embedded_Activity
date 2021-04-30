#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__

 */

#include <avr/io.h>

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define SENSOR  (PORTD)   /**< Sensors */
#define BUTTONSENSOR  (PORTD0)   /**< Port for Button Sensor  */
#define TEMPSENSOR  (PORTD1)  
#define USART_BAUDRATE 9600 
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) 


#endif /* __PROJECT_CONFIG_H__ */
