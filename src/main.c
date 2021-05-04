#include "N76E616.h"
#include "Version.h"
#include "Typedef.h"
#include "Define.h"
#include "SFR_Macro.h"
#include "Common.h"
#include "Delay.h"
#include "I2C.h"
#include "Motors.h"
#include "LEDs.h"
#include "Input.h"

int8_t dcValue = 0x00;

void main(void){

	inputInit();
	LEDInit();
	motorInit();

	//initI2C();

	setBacklight(true);
	setHeadlight(0xFF);

	//setMotorState(0x02, 0xAA);

	for(;;){

		/*for(long int i = 0; i < 50000; ++i){}
		setMotorState(0x02, dcValue++);*/
	}
}

void initI2C(){

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