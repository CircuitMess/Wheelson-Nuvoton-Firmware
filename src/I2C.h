#ifndef WHEELSON_NUVOTON_FIRMWARE_I2C_H
#define WHEELSON_NUVOTON_FIRMWARE_I2C_H

#include <stdint.h>

#define MAX_DATA 4

struct i2cCommand {
	uint8_t command;
	uint8_t params;
	void (*func)(uint8_t* params);
};

/*  I2C GPIO MODE  */
#define P23_OpenDrain_Mode P2M1|= SET_BIT3;P2M2|= SET_BIT3
#define P24_OpenDrain_Mode P2M1|= SET_BIT4;P2M2|= SET_BIT4


/*	I2C INTERFACE  */
#define SLAVE_ADDR 0x38			//  slave address (ESP->master, N76->slave)

void i2cInit(const struct i2cCommand* _commands, uint8_t _numCommands);
void i2cRespond(uint8_t* data, uint8_t count);

void I2C_ISR(void) __interrupt(6);

#endif //WHEELSON_NUVOTON_FIRMWARE_I2C_H