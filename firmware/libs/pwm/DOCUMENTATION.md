# lib/PWM Documentation
This library provides the PWM write function. 

> [!IMPORTANT] 
> This library only works on a subset of pins for the STC15F2K60S2

## `void pwm_write(unsigned char channel, unsigned char duty);`
This function is used to write a PWM value (0-255) to a certain pin.

`unsigned char channel` can be set to PWM_1_0, PWM_1_1, or PWM_3_7
`unsigned char duty` can be set to any value (non-decimal, non-negative) from 0 to 255.

_Example usage is locate in the `examples/led_pwm.c` file_