#include "I2C.h"
#include <stdint.h>
#include <N76E616.h>
#include <SFR_Macro.h>
#include <Define.h>
#include <stddef.h>
#include <bool.h>
#include <string.h>
#include "LEDs.h"

extern void print(char* data);
extern int inthappened;

uint8_t numCommands = 0;
const struct i2cCommand* commands = NULL;

__near enum { WAIT, RECEIVE, SEND } i2cState = WAIT;
uint8_t data[MAX_DATA];
uint8_t dataLeft = 0;
uint8_t dataSend = 0;
const struct i2cCommand* currentCommand = NULL;

const struct i2cCommand* getCommand(uint8_t id);

enum dataReceived{
	identify,
	reset,
	set_backlight,
	get_backlight,
	set_headlight,
	get_headlight,
	set_motor,
	get_motor,
	get_num_events,
	get_events,
	null
}dataRec = null;

// __near -> ROM/EPROM/FLASH (18432B)
// __far  -> EXTERNAL RAM (256B)
__near uint8_t rxDataCnt = 0;
__near uint8_t txDataCnt = 0;
__near bool lastDataTx = false;
__near bool lastDataRx = false;
__near uint8_t motorID = 0;
__near int8_t motorState = 0;
__near uint8_t numEvents = 0;
struct InputEvent *__near event = NULL;

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
	dataSend = count;
	i2cState = SEND;
}

const struct i2cCommand* getCommand(uint8_t id){
	for(int i = 0; i < numCommands; i++){
		if(commands[i].command == id) return &commands[i];
	}

	return NULL;
}

// I2C Interrupt Routine
void I2C_ISR(void) __interrupt(7)
{
	const struct i2cCommand* command = NULL;
	inthappened = 1;

	setBacklight(!getBacklight());

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
			if(I2DAT == 0){
				setBacklight(!getBacklight());
			}

			command = getCommand(I2DAT);
			if(command != NULL){
				if(command->params == 0){
					command->func(NULL);
					AA = 0; // Acknowledge assert
				}else{
					currentCommand = command;
					dataLeft = command->params;
					i2cState = RECEIVE;
					AA = 1;
				}
			}else{
				AA = 0;
			}

			/*if(I2DAT == ID_VERIFICATION){

				dataRec = identify;
				lastDataRx = true;
			}
			else if(I2DAT == RESET_COMMAND){

				dataRec = reset;
				TA = 0x0AA;
				TA = 0x55;
				CHPCON |= 0x80;

				lastDataRx = true;
			}
			else if(I2DAT == SET_BACKLIGHT){

				dataRec = set_backlight;
				lastDataRx = true;
			}
			else if(I2DAT == GET_BACKLIGHT){

				dataRec = get_backlight;
				lastDataRx = true;
			}
			else if(I2DAT == SET_HEADLIGHT){

				dataRec = set_headlight;
				lastDataRx = true;
			}
			else if(I2DAT == GET_HEADLIGHT){

				dataRec = get_headlight;
				lastDataRx = true;
			}
			else if(I2DAT == SET_MOTOR || dataRec == set_motor){

				if(rxDataCnt >= 1){
					motorState = I2DAT;
					rxDataCnt = 0;
					lastDataRx = true;
				}
				else{
					dataRec = set_motor;
					rxDataCnt++;
					lastDataRx = false;
				}

			}
			else if(I2DAT == GET_MOTOR){

				dataRec = get_motor;
				lastDataRx = true;
			}
			else if(I2DAT == NUM_EVENTS){

				dataRec = get_num_events;
				lastDataRx = true;
			}
			else if(I2DAT == EVENT_HANDLER){

				dataRec = get_events;
				lastDataRx = true;
			}


			 if(lastDataRx){
				AA = 0;
				lastDataRx = false;
			}
			else{
				AA = 1;
			}

			 */

			break;

		case 0x88://  slave receive data NACK
			if(i2cState != RECEIVE || dataLeft == 0){
				AA = 0;
				break;
			}

			data[currentCommand->params - dataLeft] = I2DAT;
			dataLeft--;

			if(dataLeft == 0){
				currentCommand->func(data);
				AA = 1;
				currentCommand = 0;
				i2cState = WAIT;
			}else{
				AA = 0;
			}

			/*if(dataRec == set_backlight){

				setBacklight(I2DAT);
			}
			else if(dataRec == set_headlight){

				setHeadlight(I2DAT);
			}
			else if(dataRec == get_motor){

				motorID = I2DAT;
			}
			else if(dataRec == set_motor){

				motorState = I2DAT;
				setMotorState(motorID, motorState);
				motorState = motorID = 0;
			}
			else if(dataRec == get_events){

				numEvents = I2DAT;
			}

			AA = 1;*/
			break;

		case 0xA0://  slave transmit repeat start or stop
			AA = 1;
			break;

		case 0xA8://  slave transmit address ACK
			I2DAT = SLAVE_ADDR;
			AA = 1;
			break;

		case 0xB8://  slave transmit data ACK
			if(i2cState != SEND || dataLeft == 0){
				AA = 0; // 1 of more data pending
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

			/*if(dataRec == identify){
				I2DAT = SLAVE_ADDR;
				dataRec = null;
				lastDataTx = true;
			}
			else if(dataRec == get_backlight){
				I2DAT = getBacklight();
				dataRec = null;
				lastDataTx = true;
			}
			else if(dataRec == get_headlight){
				I2DAT = getHeadlight();
				dataRec = null;
				lastDataTx = true;
			}
			else if(dataRec == get_motor){
				I2DAT = getMotorState(motorID);
				dataRec = null;
				lastDataTx = true;
			}
			else if(dataRec == get_num_events){
				I2DAT = getNumEvents();
				dataRec = null;
				lastDataTx = true;
			}

			else if(dataRec == get_events){

				if(txDataCnt >= numEvents){

					lastDataTx = true;
					txDataCnt = 0;
					numEvents = 0;
					dataRec = null;
				}
				else{

					event = popEvent();
					I2DAT = (((event->i2cState)<<7) & 0x80) | (event->id);
					event = NULL;

					lastDataTx = false;
					++txDataCnt;
				}
			}

			if(lastDataTx){
				AA = 0;
				lastDataTx = false;
			}
			else{
				AA = 1;
			}*/
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