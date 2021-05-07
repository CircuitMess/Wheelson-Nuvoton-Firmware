#include "i2cHandlers.h"
#include "I2C.h"
#include "io.h"

uint8_t savedData[2];

void saveData(uint8_t* params){
	savedData[0] = params[0];
	savedData[1] = params[1];

	print("read ");
	putchar(savedData[0] + '0');
	print(" ");
	putchar(savedData[1] + '0');
	print("\n\r");
}

void loadData(uint8_t* params){
	i2cRespond(savedData, 2);
}