#include "I2C.h"
#include <stdint.h>
#include <N76E616.h>
#include <SFR_Macro.h>
#include <Define.h>
#include <stddef.h>
#include <bool.h>
#include <string.h>
#include "LEDs.h"
#include "io.h"

__near uint8_t numCommands = 0;
const struct i2cCommand* commands = NULL;

__near enum { WAIT, RECEIVE, SEND } i2cState = WAIT;
__near uint8_t data[MAX_DATA];
__near uint8_t dataLeft = 0;
__near uint8_t dataSend = 0;
const struct i2cCommand* currentCommand = NULL;

const struct i2cCommand* getCommand(uint8_t id);


void i2cInit(const struct i2cCommand* _commands, uint8_t _numCommands){
	commands = _commands;
	numCommands = _numCommands;

	// Open drain mode for i2c
	P23_OpenDrain_Mode;
	P24_OpenDrain_Mode;

	// Initial value is HIGH
	P23 = 1;
	P24 = 1;

	// Enable interrupts
	set_EI2C;
	set_EA;

	// Slave address
	I2ADDR = SLAVE_ADDR<<1;

	// Enable i2c
	set_I2CEN;
	// set Acknowledge
	set_AA;

}

void i2cRespond(uint8_t* _data, uint8_t count){
	if(count > MAX_DATA) return;

	memcpy(data, _data, count);
	dataSend = dataLeft = count;
	i2cState = SEND;
}

const struct i2cCommand* getCommand(uint8_t id){
	for(int i = 0; i < numCommands; i++){
		if(commands[i].command == id) return &commands[i];
	}

	return NULL;
}

// I2C Interrupt Routine
void I2C_ISR(void) __interrupt(6)
{
	const struct i2cCommand* command = NULL;

	/*if(I2STAT >= 100){
		putchar(I2STAT / 100 + '0');
		putchar((I2STAT / 10) - ((I2STAT / 100) * 100) / 10 + '0');
		putchar(I2STAT - (I2STAT / 10) * 10 + '0');
	}else if(I2STAT >= 10){
		putchar((I2STAT / 10) + '0');
		putchar(I2STAT - (I2STAT / 10) * 10 + '0');
	}else{
		putchar(I2STAT);
	}
	print(" - ");
	putchar(I2DAT + '0');
	print("\n\r");*/

	switch (I2STAT)
	{
		case 0x00://  bus error
			STO = 1;
			break;

		case 0x60://  slave receive address ACK
			AA = 1;
			break;

		case 0x68://  slave receive arbitration lost
			AA = 0;
			STA = 1;
			break;

		case 0x80://  slave receive data ACK
			if(i2cState == WAIT){
				command = getCommand(I2DAT);
				if(command == NULL){
					AA = 0;
					break;
				}

				AA = 1;

				if(command->params == 0){
					command->func(NULL);
				}else{
					currentCommand = command;
					dataLeft = command->params;
					i2cState = RECEIVE;
				}
			}else if(i2cState == RECEIVE){
				if(dataLeft == 0){
					AA = 0;
					break;
				}

				data[currentCommand->params - dataLeft] = I2DAT;
				dataLeft--;

				AA = 1;

				if(dataLeft == 0){
					currentCommand->func(data);
					currentCommand = 0;
					i2cState = WAIT;
				}
			}

			break;

		case 0x88://  slave receive data NACK
			AA = 0;
			break;

		case 0xA0://  slave transmit repeat start or stop
			AA = 1;
			break;

		case 0xA8://  slave transmit address ACK
			if(i2cState != SEND || dataLeft == 0){
				AA = 0;
				break;
			}

			// purposely no break

		case 0xB8://  slave transmit data ACK
			if(i2cState != SEND || dataLeft == 0){
				AA = 0;
				break;
			}

			I2DAT = data[dataSend - dataLeft];
			dataLeft--;

			if(dataLeft == 0){
				i2cState = WAIT;
				AA = 0;
			}else{
				AA = 1;
			}

			break;

		case 0xC0://  slave transmit data NACK
			AA = 1;
			break;

		case 0xC8://  slave transmit last data ACK
			AA = 1;
			break;
	}

	SI = 0;
	while(STO);
}