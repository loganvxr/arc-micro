#pragma once

// includes
#include "../8051.h"
#include "../gpio/gpio.h"

// function definitions
unsigned int adc_read(unsigned char channel); // read a value 1-1023 from a pin (P1.0-P1.7 only)