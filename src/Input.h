#ifndef WHEELSON_NUVOTON_FIRMWARE_INPUT_H
#define WHEELSON_NUVOTON_FIRMWARE_INPUT_H

#include <stdlib.h>
#include <stdint.h>
#include "bool.h"

#define MAX_NODES 20

#define BTN_NUM 6
#define DEBOUNCE_TIME 300

struct InputEvent{

	uint8_t id;
	bool state;
	struct InputEvent *nextNode;

};

void inputInit();
void inputScan();

struct InputEvent *giveNode();

uint8_t getNumEvents();

void pushEvent(uint8_t _id, bool _state);
struct InputEvent *popEvent();

void btnPress(uint8_t id);
void btnRelease(uint8_t id);

#endif //WHEELSON_NUVOTON_FIRMWARE_INPUT_H
