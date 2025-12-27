#include <avr/io.h>
#include <util/delay.h>

int main (void){

    DDRB = DDRB | (1 << DDB7);

    while(1){


        PORTB = PORTB | (1 << PORTB7);

        _delay_ms(500);

        PORTB = PORTB & ~(1 << PORTB7);

        _delay_ms(500);

    }


}