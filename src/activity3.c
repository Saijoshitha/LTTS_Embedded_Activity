#include "activity3.h"

/**
 * @brief Initialize all the Peripherals and pin configurations for PWM
 * 
 */
void Init_PWM(void){
    TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);
}

/**
 * @brief perform PWM operations on ADC value
 * 
 * @param Temperature 
 */
void GeneratePWM(uint16_t ADC_value){
    if(ADC_value<=200){
        OCR1A = 204.8;/**< PWM for Duty cycle 20% (20*1024/100) */
        unsigned char UARTData[]="Temperature is 20 °C\n";
        int i=0;
        while(UARTData[i]!='\0'){ //Read data until string termination
            UARTWrite(UARTData[i]);
            i++;
        }
        delay_ms(200);
    }
    else if(ADC_value>200 && ADC_value<=500){
        OCR1A = 409.6;/**< PWM for Duty cycle 40% (40*1024/100) */
        unsigned char UARTData[]="Temperature is 25 °C\n";
        int i=0;
        while(UARTData[i]!='\0'){ //Read data until string termination
            UARTWrite(UARTData[i]);
            i++;
        }
        delay_ms(200);
    }
    else if(ADC_value>500 && ADC_value<=700){
        OCR1A = 716.8;/**< PWM for Duty cycle 70% (70*1024/100) */
        unsigned char UARTData[]="Temperature is 29 °C\n";
        int i=0;
        while(UARTData[i]!='\0'){ //Read data until string termination
            UARTWrite(UARTData[i]);
            i++;
        }
        delay_ms(200);
    }
    else if(ADC_value>700 && ADC_value<=1024){
        OCR1A = 972.8;/**< PWM for Duty cycle 95% (95*1024/100) */
        unsigned char UARTData[]="Temperature is 33 °C\n";
        int i=0;
        while(UARTData[i]!='\0'){ //Read data until string termination
            UARTWrite(UARTData[i]);
            i++;
        }
        delay_ms(200);
    }
    else{
        OCR1A = 0;
        unsigned char UARTData[]="Temperature is 0 °C\n";
        int i=0;
        while(UARTData[i]!='\0'){ //Read data untill string termination
            UARTWrite(UARTData[i]);
            i++;
        }
        delay_ms(200);
    }
}
