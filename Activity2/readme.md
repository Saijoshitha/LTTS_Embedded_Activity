# Activity 2

## Simulation Results

![ADC](https://github.com/Saijoshitha/LTTS_Embedded_Activity/blob/master/Activity2/act2crkt.png)

![Ramtable](https://github.com/Saijoshitha/LTTS_Embedded_Activity/blob/master/Activity2/act2crktop.jpg)

# code:
#include <avr/io.h>
#include <util/delay.h>

void InitADC(){
ADMUX=(1<<REFS0);
ADCSRA=(1<<ADEN)|(7<<ADPS0);
}
uint16_t ReadADC(uint8_t ch)
{
ADMUX&=0xf8;
ch=ch&0b00000111;
ADMUX|=ch;
ADCSRA|=(1<<ADSC);
while(!(ADCSRA & (1<<ADIF)));
ADCSRA|=(1<<ADIF);
return(ADC);
}


int main(void)
{

    InitADC();
    uint16_t temp=0;

    while(1)
    {

        temp=ReadADC(0);
        _delay_ms(20);

    }

    return 0;
}
