#define F_CPU 16000000UL
#include <avr/io.h>
#include <until/delay.h>
int main () 
{
    DDRB |=(1 << 2);
    while(1)
    {
        PORTB ^= (1 << 2);
        _delay_ms(1000);
    }
}