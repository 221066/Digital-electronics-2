#define BUTTON      PD0
#define BLINK_DELAY 500
#ifndef F_CPU
# define F_CPU 16000000     // CPU frequency in Hz required for delay
#endif

/* Includes ----------------------------------------------------------*/
#include <util/delay.h>     // Functions for busy-wait delay loops
#include <avr/io.h>         // AVR device-specific IO definitions
#include <avr/sfr_defs.h>

/* Functions ---------------------------------------------------------*/
int main(void)
{
    DDRD = DDRD & ~(1<<BUTTON);
    PORTD = PORTD | (1<<BUTTON);

    DDRC = 0xFF;
while (1) {                       

for (PORTC = 0x01; PORTC != 0; PORTC <<= 1)
_delay_ms(BLINK_DELAY);

for (PORTC = 0x80; PORTC != 0; PORTC >>= 1) 
_delay_ms(BLINK_DELAY);
}

    // Will never reach this
    return 0;
}
