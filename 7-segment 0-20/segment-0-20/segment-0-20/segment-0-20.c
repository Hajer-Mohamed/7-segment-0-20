/*
 * segment_0_20.c
 *
 * Created: 7/9/2024 4:06:47 PM
 *  Author: elsawah
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL 
#include <util/delay.h>
#include "seven.h"
#include "button.h"
int main(void)
{
	seven_seg_init('D');
	seven_seg_init('B');
	unsigned char counter=0;
	unsigned char button_val;
	button_init('A',0);
    while(1)
    {
       button_val=button_read('A',0);
	   if(button_val==1){
			counter++;   
	   }		   
	   if(counter>20){
		   counter=0;
	   }
	   seven_seg_write('B',counter%10);
	   seven_seg_write('D',counter/10);
	   _delay_ms(200);
	   		   
    }
}