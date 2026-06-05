#include "../gpio/gpio.h"

// P1.0 -> Push Button (input)
// P1.1 -> LED (output)

void main() {
    gpio_set_direction(PIN_1_0, GPIO_INPUT);
    gpio_set_direct(PIN_1_1, GPIO_OUTPUT);
    while (1) {
        unsigned char button_state = gpio_read(PIN_1_0); // save the pushbutton state to a variable
        gpio_write(PIN_1_1, button_state); // write the button state to the LED pin (P1.1)
    }
}