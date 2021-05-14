#include "Input.h"
#include "InputInternal.h"
#include "N76E616.h"
#include <Define.h>
#include "SFR_Macro.h"
#include "bool.h"

struct InputEvent *__near rootNode = NULL;
__near uint8_t nodeNum = 0;
struct InputEvent *__near lastNode = NULL;

__far struct InputEvent nodes[MAX_NODES];

uint8_t head = 0;
uint8_t foot = 0;

__far uint16_t btnEventCounter[BTN_NUM] = {0};
__far uint8_t btnState[BTN_NUM] = {0};


void inputInit(){

	SWITCHES_PIN_INIT();
}

void inputScan(){

	if(!SW0){
		btnPress(0);
	}else if(SW0){
		btnRelease(0);
	}

	if(!SW1){
		btnPress(1);

	}else if(SW1){
		btnRelease(1);
	}

	if(!SW2){
		btnPress(2);

	}else if(SW2){
		btnRelease(2);
	}

	if(!SW3){
		btnPress(3);

	}else if(SW3){
		btnRelease(3);
	}

	if(!SW4){
		btnPress(4);

	}else if(SW4){
		btnRelease(4);
	}

	if(!SW5){
		btnPress(5);

	}else if(SW5){
		btnRelease(5);
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

void btnPress(uint8_t id){

	if(btnEventCounter[id] < DEBOUNCE_TIME){
		++btnEventCounter[id];

		if((btnEventCounter[id] >= DEBOUNCE_TIME) && !btnState[id]){
			pushEvent(id, 1);
			btnState[id] = 1;
		}
	}
}

void btnRelease(uint8_t id){

	if(btnEventCounter[id] > 0){
		--btnEventCounter[id];

		if((btnEventCounter[id] <= 0) && btnState[id]){
			pushEvent(id, 0);
			btnState[id] = 0;
		}
	}
}
