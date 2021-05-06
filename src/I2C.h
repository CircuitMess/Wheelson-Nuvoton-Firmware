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

#define ID_VERIFICATION 0x00	//  return slave address
#define RESET_COMMAND 0x01		//  reset uC
#define SET_BACKLIGHT 0x20		//	receive 1 byte (bool)
#define GET_BACKLIGHT 0x21		//	return 1 byte (bool)
#define SET_HEADLIGHT 0x22		//	receive 1 byte (uint8) - intensity
#define GET_HEADLIGHT 0x23		//	return 1 byte (uint8) - intensity
#define SET_MOTOR 0x30			//	receive 2 bytes: (uint8) - motor ID & (int8) - intensity & rotation
#define GET_MOTOR 0x31			//	receive 1 byte (uint8) - motor ID & return 1 byte (int8) - intensity & rotation
#define NUM_EVENTS 0x40			//	return 1 byte (uint8) - number of events
#define EVENT_HANDLER 0x41		//	receive 1 byte (uint8) - number of events & return N bytes 1B=>(state+ID)

void i2cInit(const struct i2cCommand* _commands, uint8_t _numCommands);
void i2cRespond(uint8_t* data, uint8_t count);

#endif //WHEELSON_NUVOTON_FIRMWARE_I2C_H