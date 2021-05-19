#ifndef WHEELSON_NUVOTON_FIRMWARE_BATTERY_H
#define WHEELSON_NUVOTON_FIRMWARE_BATTERY_H

#include <Typedef.h>

void batteryInit();

UINT16 getBatteryReading();

void shutDownADC();

#endif //WHEELSON_NUVOTON_FIRMWARE_BATTERY_H
