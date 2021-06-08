#include <N76E616.h>
#include <Define.h>
#include <SFR_Macro.h>
#include "Battery.h"

void batteryInit(){
	// input-only pin mode
	P0M1 |= SET_BIT0;
	P0M2 &= CLR_BIT0;

	// adc pin select AIN0
	ADCCON0 &= 0b11110000;

	// P0.0 (AIN0) Digital Input Disconnect
	P0DIDS |= SET_BIT0;

	// set_ADCEN; // enable
}

UINT16 getBatteryReading(){
	set_ADCEN; // enable
	//ADCCON0 &= 0b11110000; // select pin

	UINT32 reading = 0;
	for(int i = 0; i < 50; i++){
		clr_ADCF; // reading completed flag
		set_ADCS; // start
		while(ADCS || !ADCF);

		reading += (ADCRH << 2) | ADCRL;
	}
	reading /= 50;

	UINT16 voltage = ((float) reading * 1000.0f * 3.33f / 1023.0f);

	// adjust for voltage divider
	UINT16 adjusted = ((float) voltage * 1.26441f + 232.309f);

	clr_ADCEN;

	return adjusted;
}

void shutDownADC(){
	clr_ADCEN;
}