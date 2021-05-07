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

__near const struct i2cCommand Commands[] = {
		{ 0x00, 2, saveData },
		{ 0x01, 0, loadData }
};

void main(void){
	initUART(9600);

	print("Initialized\n\r");

	//inputInit();
	LEDInit();
	motorInit();

	i2cInit(Commands, sizeof(Commands) / sizeof(Commands[0]));

	setBacklight(false);
	//setHeadlight(0);

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