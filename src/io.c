#include <Typedef.h>
#include <N76E616.h>
#include <SFR_Macro.h>
#include <Define.h>
#include "io.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>

int putchar(int c){
	while(!TI);
	TI = 0;
	SBUF = c;
	return c;
}

void print(char* data){
	while(*data != 0){
		putchar(*data);
		data++;
	}
}

void initUART(UINT32 baud) //use timer3 as Baudrate generator
{
	baud *= 1.5f;

	P2M1 &= CLR_BIT2;
	P2M2 &= CLR_BIT2;

	SCON = 0x50;      //UART0 Mode1,REN=1,TI=1
	set_SMOD;        //UART0 Double Rate Enable
	T3CON &= 0xF8;  //T3PS2=0,T3PS1=0,T3PS0=0(Prescale=1)
	set_BRCK;      //UART0 baud rate clock source = Timer3

	R3H = HIBYTE(65536 - (1000000 / baud) - 1);      /*16 MHz */
	R3L = LOBYTE(65536 - (1000000 / baud) - 1);     /*16 MHz */

	set_TR3;      //Trigger Timer3
	set_TI;     //For printf function must setting TI = 1
}