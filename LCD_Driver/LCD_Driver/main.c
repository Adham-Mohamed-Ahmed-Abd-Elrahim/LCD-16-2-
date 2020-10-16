/*
 * LCD_Driver.c
 *
 * Created: 16/10/2020 04:09:16
 * Author : ADHM
 */ 

#include <avr/io.h>


int main(void)
{lcd_ini();
	lcd_send_string("adham");
	//second line at col 9
	lcd_place_write("t",1,9);


	/* Replace with your application code */
	while (1)
	{
		
	}
}

