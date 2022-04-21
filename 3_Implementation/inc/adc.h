#ifndef ADC_H_
#define ADC_H_
#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#include<avr/io.h>
#include<util/delay.h>

/**
 * @brief Function to initialise the analog to digital converter (ADC)
 * 
 */
void InitADC();

/**
 * @brief Funciton to read analog pin and output it to a register ADC which has two 8 bit registers ADCL and ADCH.
 * 
 * @param channel ADC channel on which conversion must be done and value must be read
 * @return uint16_t ADC value
 */
uint16_t ReadADC(uint8_t ch);

#endif
