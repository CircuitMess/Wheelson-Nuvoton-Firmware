#include "LEDs.h"
#include "LEDsInternal.h"
#include "N76E616.h"
#include "Define.h"

__far uint8_t headlight = 0x00;

void LEDInit(){

	LED_PIN_INIT();
}

void setBacklight(bool _backlight){

	TFT_BACKLIGHT = _backlight;
}

bool getBacklight(){

	return TFT_BACKLIGHT;
}

void setHeadlight(uint8_t _headlight){

	headlight = _headlight;
	HEAD_LIGHT = _headlight;
}

uint8_t getHeadlight(){


	return headlight;
}
