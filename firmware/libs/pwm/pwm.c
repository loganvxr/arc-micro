#include "pwm.h"

void pwm_init(void) {
    CMOD   = 0x02; // use sys clock, enable PCA timer
    CCAPM0 = 0x42; // PWM mode channel 0
    CCAPM1 = 0x42; // PWM mode channel 1
    CCAPM2 = 0x42; // PWM mode channel 2
    CR     = 1;    // start PCA timer
}

void pwm_write(unsigned char channel, unsigned char duty) {
    // ensure PWM is initalized
    unsigned char initalized = 0;
    if (!initalized) {
        pwm_init();
        initalized = 1;
    }

    switch (channel) {
        case PWM_1_0:
            CCAP0H = duty;
            CCAP0L = duty;
            break;
        case PWM_1_1:
            CCAP1H = duty;
            CCAP1L = duty;
            break;
        case PWM_3_7:
            CCAP2H = duty;
            CCAP2L = duty;
            break;
    }
}