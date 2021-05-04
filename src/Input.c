#include "Input.h"
#include "InputInternal.h"
#include <stdio.h>
#include <stdlib.h>
#include "N76E616.h"
#include "define.h"
#include "SFR_Macro.h"
#include "bool.h"

#define MAX_NODES 40

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
	}
	else if(SW0 && (switchEvent & 0x01)){

		switchEvent &= 0xFE;
		pushEvent(0x00, 0);
	}

	if(!SW1 && !(switchEvent & 0x02)){

		switchEvent |= 0x02;
		pushEvent(0x01, 1);

	}
	else if(SW1 && (switchEvent & 0x02)){

		switchEvent &= 0xFD;
		pushEvent(0x01, 0);
	}
	if(!SW2 && !(switchEvent & 0x01)){

		switchEvent |= 0x03;
		pushEvent(0x02, 1);
	}
	else if(SW2 && (switchEvent & 0x01)){

		switchEvent &= 0xFC;
		pushEvent(0x02, 0);
	}

	if(!SW3 && !(switchEvent & 0x02)){

		switchEvent |= 0x04;
		pushEvent(0x03, 1);

	}
	else if(SW3 && (switchEvent & 0x02)){

		switchEvent &= 0xFB;
		pushEvent(0x03, 0);
	}
	if(!SW4 && !(switchEvent & 0x01)){

		switchEvent |= 0x05;
		pushEvent(0x04, 1);
	}
	else if(SW4 && (switchEvent & 0x01)){

		switchEvent &= 0xFA;
		pushEvent(0x04, 0);
	}

	if(!SW5 && !(switchEvent & 0x02)){

		switchEvent |= 0x06;
		pushEvent(0x05, 1);

	}
	else if(SW5 && (switchEvent & 0x02)){

		switchEvent &= 0xF9;
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


	return 0;
}

void pushEvent(uint8_t id, bool s){
id;
s;

}

struct InputEvent *popEvent(){



}
