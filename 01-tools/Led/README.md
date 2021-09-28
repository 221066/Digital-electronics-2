# Lab 1: PAVOL ROHAL

Link to your `Digital-electronics-2` GitHub repository:

   [DE2 Repository, Lab 1](https://github.com/221066/Digital-electronics-2/tree/main/01-tools)


### Blink example

1. What is the meaning of the following binary operators in C?
   * `|` ---> operator for OR
   * `&` ---> operator for AND
   * `^` ---> operator for XOR
   * `~` ---> operator for NOT
   * `<<` --> bit shift left
   * `>>` --> bit shift right

2. Complete truth table with operators: `|`, `&`, `^`, `~`

| **b** | **a** |**b or a** | **b and a** | **b xor a** | **not b** |
| :-: | :-: | :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 0 | 0 | 1 |
| 0 | 1 | 1 | 0 | 1 | 1 |
| 1 | 0 | 1 | 0 | 1 | 0 |
| 1 | 1 | 1 | 1 | 0 | 0 |


### Morse code

1. Listing of C code with syntax highlighting which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED:

```c
#define LED_GREEN   PB5 // AVR pin where green LED is connected
#define SHORT_DELAY 200 // Delay in milliseconds
#define LONG_DELAY  600 // Delay in milliseconds
#define W_DELAY     300 // Delay in milliseconds
#define A_DELAY     100 // Delay in milliseconds
#ifndef F_CPU           // Preprocessor directive allows for conditional
                        // compilation. The #ifndef means "if not defined".
# define F_CPU 16000000 // CPU frequency in Hz required for delay
#endif                  // The #ifndef directive must be closed by #endif

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
```


2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   ![CircuitDiagram](s.png)

