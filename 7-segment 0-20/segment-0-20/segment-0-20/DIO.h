/*
 * DIO.h
 *
 * Created: 4/30/2024 2:35:15 PM
 *  Author: elsawah
 */ 


#ifndef DIO_H_
#define DIO_H_
void set_pin_dir(char port ,char pin,char dir);
void DIO_write(char port,char pin ,char val);
void DIO_toggle(char port,char pin);
char DIO_read(char port,char pin);
void set_port_dir(char port ,char dir);
void DIO_write_port(char port,char val);
void DIO_toggle_port(char port);
char DIO_read_port(char port);



#endif /* DIO_H_ */