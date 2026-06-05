#include "adc.h"

unsigned int adc_read(unsigned char channel) {
    // enable ADC power, set speed, select channel
    ADC_COUNTR = 0x80 | 0x20 | (channel & 0x07);

    // delay to allow ADC to settle
    unsigned char i = 10;
    while(i--);

    // start conversion
    ADC_COUNTR |= 0x08;

    // wait for conversion complete flag
    while(!(ADC_COUNTR & 0x10));

    // clear flag
    ADC_COUNTR &= ~0x10;

    // return 10-bit result
    // ADC_RES is high (8 bits), ADC_RESL is low (2 bits)
    return ((unsigned int)ADC_RES << 2) | (ADC_RESL & 0x03);
}