#include "../libs/gpio/gpio.h"
#include "../libs/pwm/pwm.h"

// Fade the LED on P1.0 using 4 steps (25%, 50%, 75%, and 100% brightness)

void main() {
    gpio_set_direction(PORT_1, PWM_1_0, GPIO_OUTPUT);
    while(1) {
        pwm_write(PWM_1_0, 64); // 25% brightness
        delay(250); // 250ms delay
        pwm_write(PWM_1_0, 128); // 50% brightness
        delay(250); // 250ms delay
        pwm_write(PWM_1_0, 191); // 75% brightness
        delay(250); // 250ms delay
        pwm_write(PWM_1_0, 255); // 100% brightness
        delay(250); // 250ms delay
    }
}