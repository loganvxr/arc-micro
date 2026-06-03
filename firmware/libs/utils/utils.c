#include "utils.h"

void delay(unsigned int ms) {
    unsigned int i, j;
    for (i = 0; i < ms; i++) {
        for (j = 0; j < 1848; j++); // for a 22.1184 MHz clock
    }
}