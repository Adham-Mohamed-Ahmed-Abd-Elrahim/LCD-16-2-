/*
 * HARDWARE.h
 *
 * Created: 20/09/2020 06:39:38
 *  Author: ADHM
 */ 


#ifndef HARDWARE_H_
#define HARDWARE_H_
#ifndef F_CPU
#define F_CPU 8000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


#define SET_BIT(INDX,REG) REG|=(1<<INDX)
#define CLR_BIT(INDX,REG) REG&=~(1<<INDX)
//pins for lcd 
#define R_S 5
#define R_W 6
#define ENBLE 7
//port of lcd data cable
#define LCD_PORT PORTA
#define USED_PORT DDRA

void hardware_ini();


#endif /* HARDWARE_H_ */