//#include <avr/io.h>
#include <util/delay.h>
#define PORTD (volatile *(unsigned char *) 0x32)
#define DDRD (volatile *(unsigned char *) 0x31)
#define PIND (volatile *(unsigned char *) 0x30)


int main(void)
{
    /* Replace with your application code */
	DDRD = 0b11111111;
    while (1) 
    {
		PORTD = 0b11111111;
    }
}

