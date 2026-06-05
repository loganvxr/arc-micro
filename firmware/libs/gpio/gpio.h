#pragma once

// includes
#include "../8051.h"

// constant definitions
#define GPIO_HIGH 1
#define GPIO_LOW 0
#define GPIO_INPUT 1
#define GPIO_OUTPUT 0

// pin definitions

// PIN_0_0 -> PIN_0_7 (P0.0 -> P0.7)
#define PIN_0_0 &P0, 0
#define PIN_0_1 &P0, 1
#define PIN_0_2 &P0, 2
#define PIN_0_3 &P0, 3
#define PIN_0_4 &P0, 4
#define PIN_0_5 &P0, 5
#define PIN_0_6 &P0, 6
#define PIN_0_7 &P0, 7

// PIN_1_0 -> PIN_1_7 (P1.0 -> P1.7)
#define PIN_1_0 &P1, 0
#define PIN_1_1 &P1, 1
#define PIN_1_2 &P1, 2
#define PIN_1_3 &P1, 3
#define PIN_1_4 &P1, 4
#define PIN_1_5 &P1, 5
#define PIN_1_6 &P1, 6
#define PIN_1_7 &P1, 7

// PIN_2_0 -> PIN_2_7 (P2.0 -> P2.7)
#define PIN_2_0 &P2, 0
#define PIN_2_1 &P2, 1
#define PIN_2_2 &P2, 2
#define PIN_2_3 &P2, 3
#define PIN_2_4 &P2, 4
#define PIN_2_5 &P2, 5
#define PIN_2_6 &P2, 6
#define PIN_2_7 &P2, 7

// PIN_3_0 -> PIN_3_7 (P3.0 -> P3.7)
#define PIN_3_0 &P3, 0
#define PIN_3_1 &P3, 1
#define PIN_3_2 &P3, 2
#define PIN_3_3 &P3, 3
#define PIN_3_4 &P3, 4
#define PIN_3_5 &P3, 5
#define PIN_3_6 &P3, 6
#define PIN_3_7 &P3, 7

// PIN_4_1 -> PIN_4_5 (P4.1 -> P4.5)
#define PIN_4_1 &P4, 1
#define PIN_4_2 &P4, 2
// for some reason the STC15F2K60S2 (DIP-40 package) does not feature a P4.3 pin
#define PIN_4_4 &P4, 4
#define PIN_4_5 &P4, 5
// it also doesn't feature a P4.6 or P4.7 pin

// PIN_5_5 (P5.5)
#define PIN_5_5 &P5, 5
// i have no clue why this MCU only features a P5.5 pin and no other P5.X pins

// Analog Input Pins
// ANALOG_0 -> ANALOG_7 (ADC0-ADC7)
#define ANALOG_0 0
#define ANALOG_1 1
#define ANALOG_2 2
#define ANALOG_3 3
#define ANALOG_4 4
#define ANALOG_5 5
#define ANALOG_6 6
#define ANALOG_7 7


// PWM Pins
#define PWM_1_0 0
#define PWM_1_1 1
#define PWM_3_7 2

// port definitions
// yes they are declared in the STC15F2K6052.H file however they aren't very readable
#define PORT_1 &P1
#define PORT_2 &P2
#define PORT_3 &P3
#define PORT_4 &P4
#define PORT_5 &P5

// function definitions
void gpio_toggle(volatile unsigned char *port, unsigned char pin); // toggle a pin on or off
void gpio_write(volatile unsigned char *port, unsigned char pin, unsigned char state); // write a specific state to a pin
unsigned char gpio_read(volatile unsigned char *port, unsigned char pin); // read a state from a pin
void gpio_set_direction(volatile unsigned char *port, unsigned char pin, unsigned char dir); // set a pin to input or output
unsigned char gpio_read_port(volatile unsigned char *port); // read all pins from a specified port (PORT_X). Returns 1 byte
void gpio_write_port(volatile unsigned char *port); // write to all pins from a specified port (PORT_X)

// analog / PWM support coming soon