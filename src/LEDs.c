#include "LEDs.h"
#include "LEDsInternal.h"
#include "N76E616.h"
#include "Define.h"

void LEDInit(){
	LED_PIN_INIT();
}

void setBacklight(bool backlight){
	TFT_BACKLIGHT = !backlight;
}

bool getBacklight(){
	return !TFT_BACKLIGHT;
}

void setHeadlight(uint8_t headlight){
	HEAD_LIGHT = !headlight;
}

uint8_t getHeadlight(){
	return !HEAD_LIGHT;
}
