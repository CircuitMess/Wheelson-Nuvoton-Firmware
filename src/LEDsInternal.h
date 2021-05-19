#ifndef WHEELSON_NUVOTON_FIRMWARE_LEDSINTERNAL_H
#define WHEELSON_NUVOTON_FIRMWARE_LEDSINTERNAL_H

/* LED PINS */
#define TFT_BACKLIGHT	P12
#define HEAD_LIGHT		P13
/* RGB LED PINS -> on register P4 which is not bit-addressable */

/* LED PINS GPIO MODE */
#define P12_PushPull_Mode	P1M1 &= ~SET_BIT2; P1M2 |= SET_BIT2;
#define P13_PushPull_Mode	P1M1 &= ~SET_BIT3; P1M2 |= SET_BIT3;

/* All the used COM and SEG pins generate analog output waveforms.
 * Therefore, all the corresponding I/O output mode should be set as input-only (high impedance) mode. */
#define P44_PushPull_Mode	P4M1 &= ~SET_BIT4; P4M2 |= SET_BIT4;
#define P45_PushPull_Mode	P4M1 &= ~SET_BIT5; P4M2 |= SET_BIT5;
#define P46_PushPull_Mode	P4M1 &= ~SET_BIT6; P4M2 |= SET_BIT6;


#define LED_PIN_INIT()	do{ P12_PushPull_Mode; P13_PushPull_Mode; }while(0);
#define RGB_INIT()		do{ P44_PushPull_Mode; P45_PushPull_Mode; P46_PushPull_Mode; P4 &= 0x00; P4 |= 0x70; }while(0);

#endif //WHEELSON_NUVOTON_FIRMWARE_LEDSINTERNAL_H
