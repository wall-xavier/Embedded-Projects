#include <avr/io.h>
#include <util/delay.h>

int main(void){

    DDRG |= (1 << 5);
    DDRE &= ~(1 << 4);
    PORTG &= ~(1 << 5);

    while(1){

        if(PINE & (1 << 4)){

            PORTG |= (1 << 5);

        }else{

            PORTG &= ~(1 << 5);

        }
    }

    return 0;

}