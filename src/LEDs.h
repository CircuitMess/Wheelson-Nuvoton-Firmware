#ifndef WHEELSON_NUVOTON_FIRMWARE_LEDS_H
#define WHEELSON_NUVOTON_FIRMWARE_LEDS_H

#include "bool.h"
#include "Typedef.h"
#include <stdint.h>

void LEDInit();

void setBacklight(bool _backlight);
bool getBacklight();

void setHeadlight(uint8_t _headlight);
uint8_t getHeadlight();


#endif //WHEELSON_NUVOTON_FIRMWARE_LEDS_H
