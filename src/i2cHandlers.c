#include <N76E616.h>
#include "i2cHandlers.h"
#include "I2C.h"
#include "io.h"
#include "LEDs.h"
#include "Motors.h"
#include "Input.h"

void identify(uint8_t* params){
	uint8_t data[] = { SLAVE_ADDR };
	i2cRespond(data, sizeof(data));
}

void reset(uint8_t* params){
	TA = 0x0AA;
	TA = 0x55;
	CHPCON |= 0x80;
}

void backlightSet(uint8_t* params){
	setBacklight(params[0]);
}

void backlightGet(uint8_t* params){
	uint8_t data[] = { getBacklight() };
	i2cRespond(data, sizeof(data));
}

void headlightSet(uint8_t* params){
	setHeadlight(params[0]);
}

void headlightGet(uint8_t* params){
	uint8_t data[] = { getHeadlight() };
	i2cRespond(data, sizeof(data));
}

void motorSet(uint8_t* params){
	setMotorState(params[0], ((int8_t*) params)[1]);
}

void motorGet(uint8_t* params){
	int8_t data[] = { getMotorState(params[0]) };
	i2cRespond(data, sizeof(data));
}

void numEvents(uint8_t* params){
	int8_t data[] = { getNumEvents() };
	i2cRespond(data, sizeof(data));
}

__far uint8_t eventNodes[MAX_NODES];

void events(uint8_t* params){
	uint8_t numEvents = params[0];
	for(int i = 0; i < numEvents; i++){
		struct InputEvent* event = popEvent();
		eventNodes[i] = (((event->state)<<7) & 0x80) | (event->id);
	}
	i2cRespond(eventNodes, numEvents);
}