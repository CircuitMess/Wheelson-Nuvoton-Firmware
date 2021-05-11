#include <N76E616.h>
#include <Version.h>
#include <Typedef.h>
#include <Define.h>
#include <SFR_Macro.h>
#include <Common.h>
#include <Delay.h>
#include "I2C.h"
#include "Motors.h"
#include "LEDs.h"
#include "Input.h"
#include "i2cHandlers.h"
#include "io.h"

__far const struct i2cCommand Commands[] = {
		{ 0x00, 0, identify },
		{ 0x01, 0, reset },
		{ 0x20, 1, backlightSet },
		{ 0x21, 0, backlightGet },
		{ 0x22, 1, headlightSet },
		{ 0x23, 0, headlightGet },
		{ 0x30, 2, motorSet },
		{ 0x31, 1, motorGet },
		{ 0x40, 0, numEvents },
		{ 0x41, 1, events }
};

void main(void){
	initUART(9600);

	print("Initialized\n\r");

	inputInit();
	LEDInit();
	motorInit();

	i2cInit(Commands, sizeof(Commands) / sizeof(Commands[0]));

	setBacklight(false);
	setHeadlight(false);

	/*setMotorState(0x00, 0x55);
	setMotorState(0x01, 0x55);
	setMotorState(0x02, 0x55);
	setMotorState(0x03, 0x55);*/

	for(;;){
		// bus error state handle
		while(SI != 0){
			if(I2STAT == 0x00){
				STO = 1;
			}
			SI = 0;
			if(SI!=0){
				I2CEN = 0;
				I2CEN = 1;
				SI = 0;
				I2CEN = 0;
			}
			I2CEN = 1;
		}

		inputScan();
	}
}