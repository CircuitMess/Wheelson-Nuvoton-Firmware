#ifndef WHEELSON_NUVOTON_FIRMWARE_LEDSINTERNAL_H
#define WHEELSON_NUVOTON_FIRMWARE_LEDSINTERNAL_H

/* LED PINS */
#define TFT_BACKLIGHT	P12
#define HEAD_LIGHT		P13
/* LED PINS GPIO MODE */
#define P12_PushPull_Mode	P1M1 &= ~SET_BIT2; P1M2 |= SET_BIT2;
#define P13_PushPull_Mode	P1M1 &= ~SET_BIT2; P1M2 |= SET_BIT2;

#define LED_PIN_INIT()	do{ P12_PushPull_Mode; P13_PushPull_Mode; }while(0);

#endif //WHEELSON_NUVOTON_FIRMWARE_LEDSINTERNAL_H
