/*
 * button_file.c
 *
 * Created: 5/6/2024 3:52:45 PM
 *  Author: elsawah
 */ 


#include "DIO.h"
void button_init(char port,char pin)
{
	set_pin_dir(port,pin,0); //input device 
}
char button_read(char port , char pin)
{
	return DIO_read_pin(port,pin);
}