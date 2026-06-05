#include "../libs/adc/adc.h" // by default gpio.h is included in adc.h

// pins:
// P1.0 -> Potentiometer (input)
// P1.1 -> LED (output)

void main() {
    gpio_set_direction(PORT_1, ANALOG_0, GPIO_INPUT); // set the P1.0 pin to be an input pin
    gpio_set_direction(PIN_1_1, GPIO_OUTPUT); // set P1.1 to an output pin
    while (1) {
        // for this example, assume we're using any standard potentiometer on P1.0
        unsigned int pot_val = adc_read(ANALOG_0); // return a value 0-1023
        if (pot_val > 100) {
            gpio_write(PIN_1_1, GPIO_HIGH); // turn on the LED
        } else {
            gpio_write(PIN_1_1, GPIO_LOW); // turn off the LED
        }
    }
}
