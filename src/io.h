#ifndef WHEELSON_NUVOTON_FIRMWARE_IO_H
#define WHEELSON_NUVOTON_FIRMWARE_IO_H


int putchar(int);

void print(char* data);

/**
 * Initialize UART0 using timer 3
 * @param baud
 */
void initUART(UINT32 baud);


#endif //WHEELSON_NUVOTON_FIRMWARE_IO_H
