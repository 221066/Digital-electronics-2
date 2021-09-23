#define LED_GREEN   PB5 // AVR pin where green LED is connected
#define SHORT_DELAY 200 // Delay in milliseconds
#define LONG_DELAY  600 // Delay in milliseconds
#define W_DELAY     300 // Delay in milliseconds
#define A_DELAY     100 // Delay in milliseconds
#ifndef F_CPU           // Preprocessor directive allows for conditional
                        // compilation. The #ifndef means "if not defined".
# define F_CPU 16000000 // CPU frequency in Hz required for delay
#endif                  // The #ifndef directive must be closed by #endif

/* Includes ----------------------------------------------------------*/
/* Include another C language file into the current file at the location
 * of the #include statement prior to compiling the source code.
 */
#include <util/delay.h> // Functions for busy-wait delay loops
#include <avr/io.h>     // AVR device-specific IO definitions

/* Function definitions ----------------------------------------------*/
/**********************************************************************
 * Function: Main function where the program execution begins
 * Purpose:  Toggle one LED and use delay library.
 * Returns:  none
 **********************************************************************/
int main(void)
{
    // Set pin as output in Data Direction Register
    // DDRB = DDRB or 0010 0000
    DDRB = DDRB | (1<<LED_GREEN);

    // Set pin LOW in Data Register (LED off)
    // PORTB = PORTB and 1101 1111
    PORTB = PORTB & ~(1<<LED_GREEN);

    // Infinite loop
    while (1)
    {
        PORTB = PORTB | (1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(LONG_DELAY);
        
        PORTB = PORTB & ~(1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(A_DELAY);
        
        PORTB = PORTB | (1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(SHORT_DELAY);
        
        PORTB = PORTB & ~(1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(A_DELAY);
        
        PORTB = PORTB | (1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(SHORT_DELAY);
        
        PORTB = PORTB & ~(1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(W_DELAY);
        
        PORTB = PORTB | (1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(SHORT_DELAY);
        
        PORTB = PORTB & ~(1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(W_DELAY);
        
        PORTB = PORTB | (1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(SHORT_DELAY);
        
        PORTB = PORTB & ~(1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(A_DELAY);
        
        PORTB = PORTB | (1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(SHORT_DELAY);
        
        PORTB = PORTB & ~(1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(A_DELAY);
        
        PORTB = PORTB | (1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(LONG_DELAY);
        
        PORTB = PORTB & ~(1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(A_DELAY);
        
        PORTB = PORTB | (1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(LONG_DELAY);
        
        PORTB = PORTB & ~(1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(A_DELAY);
        
        PORTB = PORTB | (1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(LONG_DELAY);
        
        PORTB = PORTB & ~(1<<LED_GREEN);
        // Pause several milliseconds
        _delay_ms(A_DELAY);
        

    }

    // Will never reach this
    return 0;
}