#ifndef WHEELSON_NUVOTON_FIRMWARE_LEDS_H
#define WHEELSON_NUVOTON_FIRMWARE_LEDS_H

#include "bool.h"
#include "Typedef.h"
#include <stdint.h>

void LEDInit();

void setBacklight(bool backlight);
bool getBacklight();

void setHeadlight(uint8_t headlight);
uint8_t getHeadlight();


#endif //WHEELSON_NUVOTON_FIRMWARE_LEDS_H
