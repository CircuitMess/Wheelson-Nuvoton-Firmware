#ifndef WHEELSON_NUVOTON_FIRMWARE_INPUT_H
#define WHEELSON_NUVOTON_FIRMWARE_INPUT_H

#include <stdint.h>
#include "bool.h"

struct InputEvent{

	uint8_t id;
	bool state;
	struct InputEvent *nextNode;

};

void inputInit();
void inputScan();

struct InputEvent *giveNode();

uint8_t getNumEvents();

void pushEvent(uint8_t id, bool s);
struct InputEvent *popEvent();


#endif //WHEELSON_NUVOTON_FIRMWARE_INPUT_H
