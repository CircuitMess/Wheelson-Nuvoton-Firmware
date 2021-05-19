#ifndef WHEELSON_NUVOTON_FIRMWARE_IO_H
#define WHEELSON_NUVOTON_FIRMWARE_IO_H

#include <Typedef.h>

int putchar(int);

void print(char* data);

/**
 * Initialize UART0 using timer 3
 * @param baud
 */
void initUART(UINT32 baud);

char* itoa(int value, char* buffer, int base);

#endif //WHEELSON_NUVOTON_FIRMWARE_IO_H
