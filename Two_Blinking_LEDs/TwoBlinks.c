#include <util/delay.h>
#define DDRB *((volatile unsigned char * ) 0x24)
#define PORTB *((volatile unsigned char *) 0x25)

int main(void){

    DDRB = DDRB | (1 << 7);
    DDRB = DDRB | (1 << 0);

    while(1){

        PORTB = PORTB | (1 << 7);
        PORTB = PORTB | (1 << 0);

        _delay_ms(500);
        PORTB = PORTB & ~(1 << 7);
        
        PORTB = PORTB & ~(1 << 0);
        _delay_ms(500);

    }


}