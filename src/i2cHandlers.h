#ifndef WHEELSON_NUVOTON_FIRMWARE_I2CHANDLERS_H
#define WHEELSON_NUVOTON_FIRMWARE_I2CHANDLERS_H

#include <stdint.h>

void identify(uint8_t* params);
void reset(uint8_t* params);
void backlightSet(uint8_t* params);
void backlightGet(uint8_t* params);
void headlightSet(uint8_t* params);
void headlightGet(uint8_t* params);
void rgbSet(uint8_t* params);
void rgbGet(uint8_t* params);
void motorSet(uint8_t* params);
void motorGet(uint8_t* params);
void numEvents(uint8_t* params);
void events(uint8_t* params);
void batteryLevel(uint8_t* params);

#endif //WHEELSON_NUVOTON_FIRMWARE_I2CHANDLERS_H
