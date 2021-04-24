#define F_CPU 16000000UL

#include <avr/io.h>
#include<util/delay.h>

void led_setup(void){
    DDRB|=(1<<PB0);
}
void led_off(void){
            PORTB&=~(1<<PB0);

}
void led_on(void){
            PORTB|=(1<<PB0);


}
void delay_ms(unsigned int delaytime){
    int i=0;
    for(i=0;i<=delaytime;i++){
        _delay_ms(1);}
}
int main(void)
{

 led_setup();



    DDRD&=~(1<<PD1);
    PORTD|=(1<<PD1);

    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);



    while(1){
            if(!( PIND&(1<<PD1) ) )
            {
                if(!(PIND&(1<<PD0)))
                {
                led_on();
                delay_ms(20);
                }
                else{
                led_off();
                delay_ms(20);
                }
            }
            else{
                led_off();
                _delay_ms(2000);
            }

    }


    return 0;
}
