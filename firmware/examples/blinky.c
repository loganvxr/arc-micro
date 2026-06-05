#include "../libs/gpio/gpio.h"
#include "../libs/utils/utils.h"

// blink the LED on and off

void main() {
    gpio_set_direction(PIN_1_0, GPIO_OUTPUT); // set the pin to an output pin
    while (1) {
        gpio_write(PIN_1_0, GPIO_HIGH); // turn on the LED on P1.0
        delay(1000); // delay for 1000ms (1 second)
        gpio_write(PIN_1_0, GPIO_LOW); // turn off the LED on P1.0
        delay(1000);
    }
}