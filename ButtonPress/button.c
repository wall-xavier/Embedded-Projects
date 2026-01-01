#include <avr/io.h>
#include <util/delay.h>

int main(void){

    DDRG |= (1 << 5);
    DDRE &= ~(1 << 4);
    PORTG &= ~(1 << 5);

    while(1){

        if(PINE & (1 << 4)){

            for(int i = 0; i < 10; i++){
                
                PORTG |= (1 << 5);
                
                _delay_ms(1000);
            
                PORTG &= ~(1 << 5);

                _delay_ms(1000);

            }

        }
        else{

            PORTG &= ~(1 << 5);

        }
    }

    return 0;

}