#ifndef WHEELSON_NUVOTON_FIRMWARE_MOTORS_H
#define WHEELSON_NUVOTON_FIRMWARE_MOTORS_H

#include <stdint.h>

/*	STATES
 * 	0 -> motor STOP
 * 	positive values -> forward
 * 	negative values -> backwards
 */

void motorInit();

void setMotorState(uint8_t id, int8_t _state);
int8_t getMotorState(uint8_t id);


#endif //WHEELSON_NUVOTON_FIRMWARE_MOTORS_H
