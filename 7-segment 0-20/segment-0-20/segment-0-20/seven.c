/*
 * CFile1.c
 *
 * Created: 7/9/2024 2:18:56 PM
 *  Author: elsawah
 */ 

#include "DIO.h"

void seven_seg_init(char port_name)
{
	set_port_dir(port_name, 0xff);	
}

void seven_seg_write(char port_name, char val)
{
	unsigned char arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d, 0x7d, 0x07, 0x7f, 0x6f};
	DIO_write_port(port_name,arr[val]);	
}