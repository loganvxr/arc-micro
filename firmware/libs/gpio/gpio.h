#pragma once

// includes
#include "../STC15F2K60S2.H"

// constant definitions
#define GPIO_HIGH 1
#define GPIO_LOW 0
#define GPIO_INPUT 1
#define GPIO_OUTPUT 0

// custom pin definitions coming soon
// instead of having to use &port, pin_num you just have to use PIN_X


// function definitions
void gpio_toggle(volatile unsigned char *port, unsigned char pin); // toggle a pin on or off
void gpio_write(volatile unsigned char *port, unsigned char pin, unsigned char state); // write a specific state to a pin
unsigned char gpio_read(volatile unsigned char *port, unsigned char pin); // read a state from a pin
void gpio_set_direction(volatile unsigned char *port, unsigned char pin, unsigned char dir); // set a pin to input or output
unsigned char gpio_read_port(volatile unsigned char *port); // read all pins from a specified port (PX.X). Returns 1 byte
void gpio_write_port(volatile unsigned char *port); // write to all pins from a specficied port (PX.X)

// analog / PWM support coming soon