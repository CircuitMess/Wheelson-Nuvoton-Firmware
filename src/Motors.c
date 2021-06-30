#include "Motors.h"
#include "MotorsInternal.h"
#include "N76E616.h"
#include "SFR_Macro.h"
#include "Define.h"
#include "bool.h"

#define SLOW_START_TIME 25    // 25 -> 1ms

__far int8_t currentState[4] = {0,0,0,0};
__far int8_t targetState[4] = {0,0,0,0};
__far uint8_t stateCounter[4] = {0,0,0,0};

void motorInit(){

	MOTOR_PIN_INIT();

	INIT_PWM2A();
	INIT_PWM2B();
	INIT_PWM2C();
	INIT_PWM2D();
}

void setMotor(uint8_t id, int8_t state){
	if(id >= 2){
		state *= -1;
	}

	targetState[id] = state;
}

void setMotorState(uint8_t id, int8_t state){

	clr_EA;

	currentState[id] = state;

	switch(id){

		case 0:
			STOP_PWM2A();

			if(currentState[id] == 0){
				R2AH = 0;
				R2AL = 0;
				M1_STOP();
				break;
			}else if(currentState[id] < 0){

				float dutyCycleLow = (float) (-currentState[id]) / 127.0f;
				float dutyCycleHigh = 1.0f - dutyCycleLow;
				R2AL = 140 + (uint8_t)((255.0f - 140.0f) * dutyCycleLow);
				R2AH = 255 - R2AL;
				M1_BACKWARD();
				START_PWM2A();
			}else if(currentState[id] > 0){

				float dutyCycleHigh = (float) currentState[id] / 127.0f;
				float dutyCycleLow = 1.0f - dutyCycleHigh;
				R2AH = 140 + (uint8_t)((255.0f - 140.0f) * dutyCycleHigh);
				R2AL = 255 - R2AH;
				M1_FORWARD();
				START_PWM2A();
			}
			break;

		case 1:
			STOP_PWM2B();

			if(currentState[id] == 0){
				R2BH = 0;
				R2BL = 0;
				M2_STOP();
			}else if(currentState[id] < 0){
				float dutyCycleLow = (float) (-currentState[id]) / 127.0f;
				float dutyCycleHigh = 1.0f - dutyCycleLow;
				R2BL = 140 + (uint8_t)((255.0f - 140.0f) * dutyCycleLow);
				R2BH = 255 - R2BL;

				M2_BACKWARD();
				START_PWM2B();
			}else if(currentState[id] > 0){
				float dutyCycleHigh = (float) currentState[id] / 127.0f;
				float dutyCycleLow = 1.0f - dutyCycleHigh;
				R2BH = 140 + (uint8_t)((255.0f - 140.0f) * dutyCycleHigh);
				R2BL = 255 - R2BH;
				M2_FORWARD();
				START_PWM2B();
			}
			break;

		case 2:
			STOP_PWM2C();

			if(currentState[id] == 0){
				R2CH = 0;
				R2CL = 0;
				M3_STOP();
				break;
			}else if(currentState[id] < 0){

				float dutyCycleLow = (float) (-currentState[id]) / 127.0f;
				float dutyCycleHigh = 1.0f - dutyCycleLow;
				R2CL = 140 + (uint8_t)((255.0f - 140.0f) * dutyCycleLow);
				R2CH = 255 - R2CL;
				M3_BACKWARD();
				START_PWM2C();
			}else if(currentState[id] > 0){

				float dutyCycleHigh = (float) currentState[id] / 127.0f;
				float dutyCycleLow = 1.0f - dutyCycleHigh;
				R2CH = 140 + (uint8_t)((255.0f - 140.0f) * dutyCycleHigh);
				R2CL = 255 - R2CH;
				M3_FORWARD();
				START_PWM2C();
			}
			break;


		case 3:
			STOP_PWM2D();

			if(currentState[id] == 0){
				R2DH = 0;
				R2DL = 0;
				M4_STOP();
			}else if(currentState[id] < 0){
				float dutyCycleLow = -(float) (currentState[id]) / 127.0f;
				float dutyCycleHigh = 1.0f - dutyCycleLow;
				R2DL = 140 + (uint8_t)((255.0f - 140.0f) * dutyCycleLow);
				R2DH = 255 - R2DL;
				M4_BACKWARD();
				START_PWM2D();
			}else if(currentState[id] > 0){
				float dutyCycleHigh = (float) currentState[id] / 127.0f;
				float dutyCycleLow = 1.0f - dutyCycleHigh;
				R2DH = 140 + (uint8_t)((255.0f - 140.0f) * dutyCycleHigh);
				R2DL = 255 - R2DH;
				M4_FORWARD();
				START_PWM2D();
			}
			break;
	}

	set_EA;
}

int8_t getMotorState(uint8_t id){

	return currentState[id];
}

void motorDriving(){
	for(int i = 0; i < 4; ++i){
		if(targetState[i] == currentState[i]) continue;

		stateCounter[i]++;

		if(stateCounter[i] >= SLOW_START_TIME){
			setMotorState(i, currentState[i] + (targetState[i] > currentState[i] ? 1 : -1));
			stateCounter[i] = 0;
		}
	}
}
