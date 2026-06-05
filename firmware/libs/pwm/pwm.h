#pragma once

// includes
#include "../8051.h"

void pwm_write(unsigned char channel, unsigned char duty); // write a value 1-1023 to a PWM pin