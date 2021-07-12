#ifndef WHEELSON_NUVOTON_FIRMWARE_MOTORS_H
#define WHEELSON_NUVOTON_FIRMWARE_MOTORS_H

#include <stdint.h>

/*	STATES
 * 	0 -> motor STOP
 * 	positive values -> forward
 * 	negative values -> backwards
 */

void motorInit();

int8_t getMotor(uint8_t id);
void setMotor(uint8_t id, int8_t _state);
void motorDriving();

#endif //WHEELSON_NUVOTON_FIRMWARE_MOTORS_H
