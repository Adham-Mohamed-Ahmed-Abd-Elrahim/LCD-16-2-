/*
 * HARDWARE.c
 *
 * Created: 20/09/2020 06:43:49
 *  Author: ADHM
 */ 
#include "HARDWARE.h"
void hardware_ini()
{ USED_PORT=0xff;
 DDRD|=0xE0;
}