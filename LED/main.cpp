/*
 * LED_OnOff_.cpp
 *
 * Created: 2018-05-02 오전 11:41:21
 * Author : stc_166
 */ 
/*
 * LED_ONOFF.cpp
 *
 * Created: 2018-05-02 오전 10:51:56
 * Author : stc_166
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

	
int main(void)
{
	DDRD = 0xff;
	PORTD = 0xff;

	int i;
	
    /* Replace with your application code */
    while (1) 
    {
		
		for (int i=0; i<7; i++)
		{
			PORTD = ~(1 << i);
			_delay_ms(300);
		}
		for (int i=0; i<7; i++)
		{
			PORTD = ~(0x80 >> i);
			_delay_ms(300);
		}
		PORTD = 0x00;
		_delay_ms(300);
		PORTD = 0xff;
		_delay_ms(300);	
    }
}

