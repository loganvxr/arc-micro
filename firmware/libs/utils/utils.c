#include "utils.h"

volatile unsigned long millis_count = 0;

void timer0_isr(void) {
    // fires every 1ms
    millis_count++;
}

void millis_init(void) {
    // timer0 in 16-bit auto-reload mode
    AUXR |= 0x80; // set timer0 to 1T mode (1 clock per cycle)
    TMOD &= 0xF0; // timer0 mode 0

    // specifically for 12.1184MHz clock
    TH0 = 0xA9;
    TL0 = 0x96;

    ET0 = 1; // enable timer0 interrupt
    TR0 = 1; // start timer0
    EA = 1;  // enable global interrupts
}

unsigned long millis(void) {
    // ensure timer0 is initalized
    static unsigned char initalized = 0;
    if (!initalized) {
        millis_init();
        initalized = 1;
    }

    unsigned long m;
    EA = 0; // disable global interrupts breifly
    m  = millis_count;
    EA = 1; // re-enable global interrupts
    return m;
}

void delay(unsigned int ms) {
    unsigned int i, j;
    for (i = 0; i < ms; i++) {
        for (j = 0; j < 1848; j++); // specfically for a 22.1184 MHz clock
    }
}