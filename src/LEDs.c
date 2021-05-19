#include "LEDs.h"
#include "LEDsInternal.h"
#include "N76E616.h"
#include "Define.h"

__far uint8_t rgb = 0;

void LEDInit(){

	LED_PIN_INIT();
	RGB_INIT();
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

void setRGB(uint8_t _rgb){

	rgb = ~_rgb;
	rgb &= 0x07;

	P4 |= 0x70;
	P4 &= (rgb<<4);
}
uint32_t getRGB(){

	return rgb;
}