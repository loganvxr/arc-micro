# lib/UTILS Documentation
This library only provides functions for timing at the moment. Expansion is planned in future updates.

## `void delay(unsigned int ms);`
This function prevents the execution of code for a specified amount of milliseconds

`unsigned int ms` can be any non-negative, non-decimal value (1-inf). 

_Example usage can be located in nearly every file._

## `unsigned long millis(void);`
This function returns the amount of milliseconds since the program began it's execution.

_Example usage can be located in the `examples/led_millis.c` file._