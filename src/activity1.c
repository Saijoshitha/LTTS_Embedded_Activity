#include "activity1.h"
/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |=(1<<LED_PIN);
    DDRD &=~(1<<BUTTONSENSOR);
    DDRD &=~(1<<TEMPSENSOR);
    SENSOR|=(1<<BUTTONSENSOR);
    SENSOR|=(1<<TEMPSENSOR);
}
/**
 * @brief Decides whether the tempsensor is to be considered
 * 
 */
void tempbuttonSensor()
{
    
    if((PIND&(1<<PD0)) && (PIND&(1<<PD1)))/**< if both buttonsensor and tempsensor reads HIGH */
       {
           uint16_t temp;
           PORTB|=(1<<PB0);
           temp=Read_ADC(0);/**< Read tempsensor value */
           GeneratePWM(temp);
           delay_ms(200);
       }
       else
       {
           PORTB&=~(1<<PB0);
           delay_ms(200);
       }
}
