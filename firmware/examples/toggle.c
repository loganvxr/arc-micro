#include "../libs/gpio/gpio.h"
#include "../libs/utils/utils.h"

// another way to blink the LED on and off

void main() {
    gpio_set_direction(PIN_1_0, GPIO_OUTPUT); // set the pin to as output pin
    while (1) {
        gpio_toggle(PIN_1_0); // toggle the LED on or off
        delay(1000); // 1000ms delay (1ms)
    }
}