#include "Motors.h"
#include "MotorsInternal.h"
#include "N76E616.h"
#include "SFR_Macro.h"
#include "Define.h"

__far int8_t state[4] = {0};

void motorInit(){

	MOTOR_PIN_INIT();

	INIT_PWM2A();
	INIT_PWM2B();
	INIT_PWM2C();
	INIT_PWM2D();
}

void setMotorState(uint8_t id, int8_t s){

	clr_EA;

	if(id >= 2){
		s *= -1;
	}

	state[id] = s;

	switch(id){

		case 0:
			STOP_PWM2B();

			if(state[id] == 0){
				R2BH = 0;
				R2BL = 0;
			}
			else if(state[id] < 0){
				float dutyCycleLow = 0.5f + (float)(~state[id]+0x01)/127.0f * 0.5f;
				float dutyCycleHigh = 1.0f - dutyCycleLow;
				R2BH = (uint8_t)(255.0f * dutyCycleHigh);
				R2BL = (uint8_t)(255.0f * dutyCycleLow);
				START_PWM2B();
			}
			else if(state[id] > 0){
				float dutyCycleHigh = 0.5f + state[id]/127.0f * 0.5f;
				float dutyCycleLow = 1.0f - dutyCycleHigh;
				R2BH = (uint8_t)(255.0f * dutyCycleHigh);
				R2BL = (uint8_t)(255.0f * dutyCycleLow);
				START_PWM2B();
			}
			break;

		case 1:
			STOP_PWM2A();

			if(state[id] == 0){
				R2AH = 0;
				R2AL = 0;
				break;
			}
			else if(state[id] < 0){

				float dutyCycleLow = 0.5f + (float)(~state[id]+0x01)/127.0f * 0.5f;
				float dutyCycleHigh = 1.0f - dutyCycleLow;
				R2AH = (uint8_t)(255.0f * dutyCycleHigh);
				R2AL = (uint8_t)(255.0f * dutyCycleLow);
				START_PWM2A();
			}
			else if(state[id] > 0){

				float dutyCycleHigh = 0.5f + state[id]/127.0f * 0.5f;
				float dutyCycleLow = 1.0f - dutyCycleHigh;
				R2AH = (uint8_t)(255.0f * dutyCycleHigh);
				R2AL = (uint8_t)(255.0f * dutyCycleLow);
				START_PWM2A();
			}
			break;

		case 2:
			STOP_PWM2D();

			if(state[id] == 0){
				R2DH = 0;
				R2DL = 0;
			}
			else if(state[id] < 0){
				float dutyCycleLow = 0.5f + (float)(~state[id]+0x01)/127.0f * 0.5f;
				float dutyCycleHigh = 1.0f - dutyCycleLow;
				R2DH = (uint8_t)(255.0f * dutyCycleHigh);
				R2DL = (uint8_t)(255.0f * dutyCycleLow);
				START_PWM2D();
			}
			else if(state[id] > 0){
				float dutyCycleHigh = 0.5f + state[id]/127.0f * 0.5f;
				float dutyCycleLow = 1.0f - dutyCycleHigh;
				R2DH = (uint8_t)(255.0f * dutyCycleHigh);
				R2DL = (uint8_t)(255.0f * dutyCycleLow);
				START_PWM2D();
			}
			break;

		case 3:
			STOP_PWM2C();

			if(state[id] == 0){
				R2CH = 0;
				R2CL = 0;
				break;
			}
			else if(state[id] < 0){

				float dutyCycleLow = 0.5f + (float)(~state[id]+0x01)/127.0f * 0.5f;
				float dutyCycleHigh = 1.0f - dutyCycleLow;
				R2CH = (uint8_t)(255.0f * dutyCycleHigh);
				R2CL = (uint8_t)(255.0f * dutyCycleLow);
				START_PWM2C();
			}
			else if(state[id] > 0){

				float dutyCycleHigh = 0.5f + state[id]/127.0f * 0.5f;
				float dutyCycleLow = 1.0f - dutyCycleHigh;
				R2CH = (uint8_t)(255.0f * dutyCycleHigh);
				R2CL = (uint8_t)(255.0f * dutyCycleLow);
				START_PWM2C();
			}
			break;

		default:
			break;
	}

	set_EA;
}

int8_t getMotorState(uint8_t id){

	return state[id];
}

