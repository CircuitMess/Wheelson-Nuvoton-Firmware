#include "Input.h"
#include "InputInternal.h"
#include "N76E616.h"
#include <Define.h>
#include "SFR_Macro.h"
#include "bool.h"

__near uint8_t switchEvent = 0x00;

struct InputEvent *__near rootNode = NULL;
__near uint8_t nodeNum = 0;
struct InputEvent *__near lastNode = NULL;

__far struct InputEvent nodes[MAX_NODES];

uint8_t head = 0;
uint8_t foot = 0;

void inputInit(){

	SWITCHES_PIN_INIT();
}

void inputScan(){

	if(!SW0 && !(switchEvent & 0x01)){

		switchEvent |= 0x01;
		pushEvent(0x00, 1);
	}else if(SW0 && (switchEvent & 0x01)){

		switchEvent &= 0xFE;
		pushEvent(0x00, 0);
	}

	if(!SW1 && !(switchEvent & 0x02)){

		switchEvent |= 0x02;
		pushEvent(0x01, 1);

	}else if(SW1 && (switchEvent & 0x02)){

		switchEvent &= 0xFD;
		pushEvent(0x01, 0);
	}
	if(!SW2 && !(switchEvent & 0x04)){

		switchEvent |= 0x04;
		pushEvent(0x02, 1);
	}else if(SW2 && (switchEvent & 0x04)){

		switchEvent &= 0xFB;
		pushEvent(0x02, 0);
	}

	if(!SW3 && !(switchEvent & 0x08)){

		switchEvent |= 0x08;
		pushEvent(0x03, 1);

	}else if(SW3 && (switchEvent & 0x08)){

		switchEvent &= 0xF7;
		pushEvent(0x03, 0);
	}
	if(!SW4 && !(switchEvent & 0x10)){

		switchEvent |= 0x10;
		pushEvent(0x04, 1);
	}else if(SW4 && (switchEvent & 0x10)){

		switchEvent &= 0xEF;
		pushEvent(0x04, 0);
	}

	if(!SW5 && !(switchEvent & 0x20)){

		switchEvent |= 0x20;
		pushEvent(0x05, 1);

	}else if(SW5 && (switchEvent & 0x20)){

		switchEvent &= 0xDF;
		pushEvent(0x05, 0);
	}

}


struct InputEvent *giveNode(){

	if(foot != (head + 1) % MAX_NODES){
		struct InputEvent *node = &nodes[head];

		head = (head + 1) % MAX_NODES;

		node->nextNode = NULL;
		return node;
	}else
		return NULL;
}


uint8_t getNumEvents(){

	if(head > foot){

		return (head - foot);

	}else if (head < foot){

		return (MAX_NODES - (foot - head));
	}
	else{
		return 0;
	}

}

void pushEvent(uint8_t _id, bool _state){

	clr_EA;

	struct InputEvent *newNode;

	newNode = giveNode();
	if(!newNode){
		set_EA;
		return;
	}

	newNode->id = _id;
	newNode->state = _state;
	newNode->nextNode = NULL;

	if(!rootNode){
		rootNode = lastNode = newNode;
	}else{

		lastNode->nextNode = newNode;
		lastNode = newNode;
	}

	set_EA;

}

struct InputEvent *popEvent(){

	struct InputEvent *eventNode = NULL;

	if(!rootNode){
		return NULL;
	}

	if(rootNode == lastNode){
		lastNode = NULL;
	}


	eventNode = rootNode;
	rootNode = rootNode->nextNode;

	foot = (foot + 1) % MAX_NODES;

	return eventNode;
}
