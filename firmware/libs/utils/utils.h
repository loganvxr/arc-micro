#pragma once

#include "../8051.h"

void delay(unsigned int ms); // delay for x ms. note: this function blocks other code from executing
unsigned long millis(void); // calculate the ms since the program has started