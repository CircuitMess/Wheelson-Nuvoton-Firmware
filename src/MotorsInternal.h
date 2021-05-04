#ifndef WHEELSON_NUVOTON_FIRMWARE_MOTORSINTERNAL_H
#define WHEELSON_NUVOTON_FIRMWARE_MOTORSINTERNAL_H


/* MOTOR PINS */
#define    M1A 		P17	// T2BO1 -> INA1 -> Timer 2B
#define    M1B		P20 // T2BO2 -> INB1 -> Timer 2B
#define    M2A		P15 // T2AO1 -> INA2 -> Timer 2A
#define    M2B		P16 // T2AO2 -> INB2 -> Timer 2A
#define    M3A		P30 // T2DO1 -> INA3 -> Timer 2D
#define    M3B		P31 // T2DO2 -> INB3 -> Timer 2D
#define    M4A		P26 // T2CO1 -> INA4 -> Timer 2C
#define    M4B		P27 // T2CO2 -> INB4 -> Timer 2C

/*  MOTOR PINS GPIO MODE  */
#define P15_QUASI_MODE    P1M1 &= ~SET_BIT5; P1M2 &= ~SET_BIT5;    // Timer 2A Output 1
#define P16_QUASI_MODE    P1M1 &= ~SET_BIT6; P1M2 &= ~SET_BIT6;    // Timer 2A Output 2
#define P17_QUASI_MODE    P1M1 &= ~SET_BIT7; P1M2 &= ~SET_BIT7;    // Timer 2B Output 1
#define P20_QUASI_MODE    P2M1 &= ~SET_BIT0; P2M2 &= ~SET_BIT0;    // Timer 2B Output 2
#define P26_QUASI_MODE    P2M1 &= ~SET_BIT6; P2M2 &= ~SET_BIT6;    // Timer 2C Output 1
#define P27_QUASI_MODE    P2M1 &= ~SET_BIT7; P2M2 &= ~SET_BIT7;    // Timer 2C Output 2
#define P30_QUASI_MODE    P3M1 &= ~SET_BIT0; P3M2 &= ~SET_BIT0;    // Timer 2D Output 1
#define P31_QUASI_MODE    P3M1 &= ~SET_BIT1; P3M2 &= ~SET_BIT1;    // Timer 2D Output 2

#define MOTOR_PIN_INIT()    do{    P15_QUASI_MODE;P16_QUASI_MODE;P17_QUASI_MODE;P20_QUASI_MODE; \
                                P26_QUASI_MODE;P27_QUASI_MODE;P30_QUASI_MODE;P31_QUASI_MODE; }while(0);


/* SET PRESCALE (1/1) */
#define SET_PRESCALE_TIMER2A    T2MOD0 &= 0xF8;
#define SET_PRESCALE_TIMER2B    T2MOD0 &= 0x8F;
#define SET_PRESCALE_TIMER2C    T2MOD1 &= 0xF8;
#define SET_PRESCALE_TIMER2D    T2MOD1 &= 0x8F;

/* SET TIMER PWM MODE */
# define SET_TIMER2A_MODE        T2MOD0 |= 0x08;
# define SET_TIMER2B_MODE        T2MOD0 |= 0x80;
# define SET_TIMER2C_MODE        T2MOD1 |= 0x08;
# define SET_TIMER2D_MODE        T2MOD1 |= 0x80;

/* ENABLE TIMERS/PWM GLOBAL */
# define ENABLE_PWM2A        T2CON |= 0x01;
# define ENABLE_PWM2B        T2CON |= 0x02;
# define ENABLE_PWM2C        T2CON |= 0x04;
# define ENABLE_PWM2D        T2CON |= 0x08;

/* DISABLE TIMERS/PWM GLOBAL */
# define DISABLE_PWM2A        T2CON &= 0xFE;
# define DISABLE_PWM2B        T2CON &= 0xFD;
# define DISABLE_PWM2C        T2CON &= 0xFB;
# define DISABLE_PWM2D        T2CON &= 0xF7;

/* DISABLE TIMER/PWM INTERRUPT */
# define DISABLE_PWM2A_INTERRUPT        T2CON &= 0xEF;
# define DISABLE_PWM2B_INTERRUPT        T2CON &= 0xDF;
# define DISABLE_PWM2C_INTERRUPT        T2CON &= 0xBF;
# define DISABLE_PWM2D_INTERRUPT        T2CON &= 0x7F;

/* ENABLE PWM OUTPUT */
#define ENABLE_PWM2A_OUTPUT        T2OE |= 0x03;
#define ENABLE_PWM2B_OUTPUT        T2OE |= 0x0C;
#define ENABLE_PWM2C_OUTPUT        T2OE |= 0x30;
#define ENABLE_PWM2D_OUTPUT        T2OE |= 0xC0;

/* DISABLE PWM OUTPUT */
#define DISABLE_PWM2A_OUTPUT        T2OE &= 0xFC;
#define DISABLE_PWM2B_OUTPUT        T2OE &= 0xF3;
#define DISABLE_PWM2C_OUTPUT        T2OE &= 0xCF;
#define DISABLE_PWM2D_OUTPUT        T2OE &= 0x3F;

/* INIT PWMs */
#define INIT_PWM2A()    do{ SET_PRESCALE_TIMER2A; SET_TIMER2A_MODE; DISABLE_PWM2A_INTERRUPT; DISABLE_PWM2A_OUTPUT; ENABLE_PWM2A; }while(0);
#define INIT_PWM2B()    do{ SET_PRESCALE_TIMER2B; SET_TIMER2B_MODE; DISABLE_PWM2B_INTERRUPT; DISABLE_PWM2B_OUTPUT; ENABLE_PWM2B; }while(0);
#define INIT_PWM2C()    do{ SET_PRESCALE_TIMER2C; SET_TIMER2C_MODE; DISABLE_PWM2C_INTERRUPT; DISABLE_PWM2C_OUTPUT; ENABLE_PWM2C; }while(0);
#define INIT_PWM2D()    do{ SET_PRESCALE_TIMER2D; SET_TIMER2D_MODE; DISABLE_PWM2D_INTERRUPT; DISABLE_PWM2D_OUTPUT; ENABLE_PWM2D; }while(0);

/* ENABLE PWMs OUTPUT */
#define START_PWM2A()    do{ DISABLE_PWM2A; ENABLE_PWM2A_OUTPUT; ENABLE_PWM2A; }while(0);
#define START_PWM2B()    do{ DISABLE_PWM2B; ENABLE_PWM2B_OUTPUT; ENABLE_PWM2B; }while(0);
#define START_PWM2C()    do{ DISABLE_PWM2C; ENABLE_PWM2C_OUTPUT; ENABLE_PWM2C; }while(0);
#define START_PWM2D()    do{ DISABLE_PWM2D; ENABLE_PWM2D_OUTPUT; ENABLE_PWM2D; }while(0);

/* DISABLE PWMs OUTPUT */
#define STOP_PWM2A()    do{ DISABLE_PWM2A; DISABLE_PWM2A_OUTPUT; }while(0);
#define STOP_PWM2B()    do{ DISABLE_PWM2B; DISABLE_PWM2B_OUTPUT; }while(0);
#define STOP_PWM2C()    do{ DISABLE_PWM2C; DISABLE_PWM2C_OUTPUT; }while(0);
#define STOP_PWM2D()    do{ DISABLE_PWM2D; DISABLE_PWM2D_OUTPUT; }while(0);

#endif //WHEELSON_NUVOTON_FIRMWARE_MOTORSINTERNAL_H