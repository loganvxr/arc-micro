#include "../gpio/gpio.h"
#include "../utils/utils.h"

void main() {
    gpio_set_direction(PIN_1_0, GPIO_OUTPUT); // set the LED to an output pin
    while (1) {
        unsigned long millis = millis();
        // check if it has been 5s since the program began execution
        if (millis == 5000) {
            gpio_write(PIN_1_0, GPIO_LOW); // if it has, turn the LED off
        }
    }
}