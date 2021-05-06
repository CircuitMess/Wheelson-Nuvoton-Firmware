#include "i2cHandlers.h"
#include "LEDs.h"

void toggleBacklight(uint8_t* params){
	setBacklight(!getBacklight());
}