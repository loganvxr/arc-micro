# lib/GPIO Documentation
This library provides readable pin definitions for standard, analog, and PWM GPIO pins. It also provides other functions to read and write from a pin / port digitally.

_Note: PWM write & Analog read are not exported from this library. Please see `libs/pwm/pwm.h` and `libs/adc/adc.h` respectively._

> [!IMPORTANT] 
> Pins used as inputs or outputs **must** be set to their respective values using `gpio_set_direction`!

## `void gpio_toggle(volatile unsigned char *port, unsigned char pin);`
This function is used to digitally toggle a singular **output** GPIO pin on or off.

_Example usage is located in `examples/toggle.c`._

## `void gpio_write(volatile unsigned char *port, unsigned char pin, unsigned char state);`
This function is used to digitally write a specific value to a singular **output** GPIO pin.

`unsigned char state` can be set to 1, 0, `GPIO_HIGH`, `GPIO_OFF`

_Example usage is located in `examples/blinky.c`._

## `unsigned char gpio_read(volatile unsigned char *port, unsigned char pin);`
This function is used to digitally read a value from a singular **input** GPIO pin.

This function will return a 1 or a 0.

_Example usage is located in `examples/digital_read.c`._

## `void gpio_set_direction(volatile unsigned char *port, unsigned char pin, unsigned char dir);`
This function is used to set a GPIO pin to an input or an output pin.

`unsigned char dir` can be set to 1, 0, `GPIO_INPUT`, or `GPIO_OUTPUT`

_Example usage is located in nearly every example file._

## `unsigned char gpio_read_port(volatile unsigned char *port);`
This function is used to digitally read a whole port of **inputs**. A port is definied as a group of pins. (i.e., P1.X would be Port 1)

`volatile unsigned char *port` can be set to `&PX` or `PORT_X`.

This function will return 1 byte since there are commonly 8 pins to a single port. (Excluding P5.X, and P4.X)

_Example usage is located in the `examples/read_port.c` file_

## `void gpio_write_port(volatile unsigned char *port);`
This function is used to write a digital **output** signal to a group of pins. 

_Example usage is located in the `examples/write_port.c` file_