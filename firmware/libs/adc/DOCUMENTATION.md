# lib/ADC Documentation
This library is used to read analog signals from certain pins on the STC15F2K60S2. The MCU only supports P1.X pins as analog input pins.

## `unsigned int adc_read(unsigned char channel)`
This function is used to read a specific pin's (ANALOG_X) analog input signal.
> [!IMPORTANT] 
> The ANALOG_X pin **must** be set to input using `gpio_set_direction`!

_Example usage for this function is located in the `exmamples/analog_read.c` file._