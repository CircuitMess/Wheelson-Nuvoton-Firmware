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

void swap(char* x, char* y){
	char t = *x;
	*x = *y;
	*y = t;
}

char* reverse(char* buffer, int i, int j){
	while(i < j){
		swap(&buffer[i++], &buffer[j--]);
	}

	return buffer;
}

char* itoa(int value, char* buffer, int base){
	// invalid input
	if(base < 2 || base > 32){
		return buffer;
	}

	// consider the absolute value of the number
	int n = abs(value);

	int i = 0;
	while(n){
		int r = n % base;

		if(r >= 10){
			buffer[i++] = 65 + (r - 10);
		}else{
			buffer[i++] = 48 + r;
		}

		n = n / base;
	}

	// if the number is 0
	if(i == 0){
		buffer[i++] = '0';
	}

	// If the base is 10 and the value is negative, the resulting string
	// is preceded with a minus sign (-)
	// With any other base, value is always considered unsigned
	if(value < 0 && base == 10){
		buffer[i++] = '-';
	}

	buffer[i] = '\0'; // null terminate string

	// reverse the string and return it
	return reverse(buffer, 0, i - 1);
}