#include "gpio.h"

void gpio_toggle(volatile unsigned char *port, unsigned char pin) {
    *port ^= (1 << pin); // toggle
}

void gpio_write(volatile unsigned char *port, unsigned char pin, unsigned char state) {
    if (state) {
        *port |= (1 << pin); // set high
    } else {
        *port &= ~(1 << pin); // set low
    }
}

unsigned char gpio_read(volatile unsigned char *port, unsigned char pin) {
    return ((*port >> pin) & 1) ? GPIO_HIGH : GPIO_LOW; // read the state then return high or low
}

void gpio_set_direction(volatile unsigned char *port, unsigned char pin, unsigned char dir) {
    if (dir) {
        *port |= (1 << pin); // input
    } else {
        *port &= ~(1 << pin); // output
    }
}

unsigned char gpio_port_read(volatile unsigned char *port) {
    return *port;
}

void gpio_port_write(volatile unsigned char *port, unsigned char state) {
    *port = state;
}
