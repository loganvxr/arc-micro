#include "libs/gpio/gpio.h"
#include "libs/utils/utils.h"

void main() {
    while (1) {
        gpio_write(&P2, 0, GPIO_HIGH); // turn on the LED on P1.0
        delay(1000); // delay for 1000ms (1 second)
        gpio_write(&P2, 0, GPIO_LOW); // turn off the LED on P1.0
        delay(1000);
    }
}