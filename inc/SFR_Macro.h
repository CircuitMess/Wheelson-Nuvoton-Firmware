//EIPH1                     
#define set_PWKTH EIPH1 |= SET_BIT2
#define set_PT3H EIPH1 |= SET_BIT1
#define set_PSH_1 EIPH1 |= SET_BIT0
                            
#define clr_PWKTH EIPH1 &= ~SET_BIT2
#define clr_PT3H EIPH1 &= ~SET_BIT1
#define clr_PSH_1 EIPH1 &= ~SET_BIT0
                            
//EIP1                      
#define set_PWKT EIP1 |= SET_BIT2
#define set_PT3 EIP1 |= SET_BIT1
#define set_PS_1 EIP1 |= SET_BIT0
                            
#define clr_PWKT EIP1 &= ~SET_BIT2
#define clr_PT3 EIP1 &= ~SET_BIT1
#define clr_PS_1 EIP1 &= ~SET_BIT0
                            
//LCDDAT

//LCDPTR

//LCDCLK
#define set_LCDCKS1 LCDCLK |= SET_BIT5
#define set_LCDCKS0 LCDCLK |= SET_BIT4
#define set_LCDDIV2 LCDCLK |= SET_BIT2
#define set_LCDDIV1 LCDCLK |= SET_BIT1
#define set_LCDDIV0 LCDCLK |= SET_BIT0

#define clr_LCDCKS1 LCDCLK &= ~SET_BIT5
#define clr_LCDCKS0 LCDCLK &= ~SET_BIT4
#define clr_LCDDIV2 LCDCLK &= ~SET_BIT2
#define clr_LCDDIV1 LCDCLK &= ~SET_BIT1
#define clr_LCDDIV0 LCDCLK &= ~SET_BIT0

//SCON_1
#define set_FE_1 FE_1 = 1
#define set_SM1_1 SM1_1 = 1
#define set_SM2_1 SM2_1 = 1
#define set_REN_1 REN_1 = 1
#define set_TB8_1 TB8_1 = 1
#define set_RB8_1 RB8_1 = 1
#define set_TI_1 TI_1 = 1
#define set_RI_1 RI_1 = 1

#define clr_FE_1 FE_1 = 0
#define clr_SM1_1 SM1_1 = 0
#define clr_SM2_1 SM2_1 = 0
#define clr_REN_1 REN_1 = 0
#define clr_TB8_1 TB8_1 = 0
#define clr_RB8_1 RB8_1 = 0
#define clr_TI_1 TI_1 = 0
#define clr_RI_1 RI_1 = 0
                            
//EIPH                      
#define set_PT2H EIPH |= SET_BIT7
#define set_PT2CH EIPH |= SET_BIT5
#define set_PWDTH EIPH |= SET_BIT4
#define set_PT2BH EIPH |= SET_BIT3
#define set_PT2AH EIPH |= SET_BIT2
#define set_PPIH EIPH |= SET_BIT1
#define set_PI2CH EIPH |= SET_BIT0
                            
#define clr_PT2H EIPH &= ~SET_BIT7
#define clr_PT2CH EIPH &= ~SET_BIT5
#define clr_PWDTH EIPH &= ~SET_BIT4
#define clr_PT2BH EIPH &= ~SET_BIT3
#define clr_PT2AH EIPH &= ~SET_BIT2
#define clr_PPIH EIPH &= ~SET_BIT1
#define clr_PI2CH EIPH &= ~SET_BIT0
                            
//P0DIDS                    
#define set_P07DIDS P0DIDS |= SET_BIT7
#define set_P06DIDS P0DIDS |= SET_BIT6
#define set_P05DIDS P0DIDS |= SET_BIT5
#define set_P04DIDS P0DIDS |= SET_BIT4
#define set_P03DIDS P0DIDS |= SET_BIT3
#define set_P02DIDS P0DIDS |= SET_BIT2
#define set_P01DIDS P0DIDS |= SET_BIT1
#define set_P00DIDS P0DIDS |= SET_BIT0
                            
#define clr_P07DIDS P0DIDS &= ~SET_BIT7
#define clr_P06DIDS P0DIDS &= ~SET_BIT6
#define clr_P05DIDS P0DIDS &= ~SET_BIT5
#define clr_P04DIDS P0DIDS &= ~SET_BIT4
#define clr_P03DIDS P0DIDS &= ~SET_BIT3
#define clr_P02DIDS P0DIDS &= ~SET_BIT2
#define clr_P01DIDS P0DIDS &= ~SET_BIT1
#define clr_P00DIDS P0DIDS &= ~SET_BIT0

//ADCAQT

//B
                            
//EIP                       
#define set_PT2D EIP |= SET_BIT7
#define set_PT2C EIP |= SET_BIT5
#define set_PWDT EIP |= SET_BIT4
#define set_PT2B EIP |= SET_BIT3
#define set_PT2A EIP |= SET_BIT2
#define set_PPI EIP |= SET_BIT1
#define set_PI2C EIP |= SET_BIT0
                            
#define clr_PT2D EIP &= ~SET_BIT7
#define clr_PT2C EIP &= ~SET_BIT5
#define clr_PWDT EIP &= ~SET_BIT4
#define clr_PT2B EIP &= ~SET_BIT3
#define clr_PT2A EIP &= ~SET_BIT2
#define clr_PPI EIP &= ~SET_BIT1
#define clr_PI2C EIP &= ~SET_BIT0

//LCDSEG3
#define set_SEG31EN LCDSEG3 |= SET_BIT7
#define set_SEG30EN LCDSEG3 |= SET_BIT6
#define set_SEG29EN LCDSEG3 |= SET_BIT5
#define set_SEG28EN LCDSEG3 |= SET_BIT4
#define set_SEG27EN LCDSEG3 |= SET_BIT3
#define set_SEG26EN LCDSEG3 |= SET_BIT2
#define set_SEG25EN LCDSEG3 |= SET_BIT1
#define set_SEG24EN LCDSEG3 |= SET_BIT0

#define clr_SEG31EN LCDSEG3 &= ~SET_BIT7
#define clr_SEG30EN LCDSEG3 &= ~SET_BIT6
#define clr_SEG29EN LCDSEG3 &= ~SET_BIT5
#define clr_SEG28EN LCDSEG3 &= ~SET_BIT4
#define clr_SEG27EN LCDSEG3 &= ~SET_BIT3
#define clr_SEG26EN LCDSEG3 &= ~SET_BIT2
#define clr_SEG25EN LCDSEG3 &= ~SET_BIT1
#define clr_SEG24EN LCDSEG3 &= ~SET_BIT0

//PITYP
#define set_PIT7 PITYP |= SET_BIT7
#define set_PIT6 PITYP |= SET_BIT6
#define set_PIT5 PITYP |= SET_BIT5
#define set_PIT4 PITYP |= SET_BIT4
#define set_PIT3 PITYP |= SET_BIT3
#define set_PIT2 PITYP |= SET_BIT2
#define set_PIT1 PITYP |= SET_BIT1
#define set_PIT0 PITYP |= SET_BIT0

#define clr_PIT7 PITYP &= ~SET_BIT7
#define clr_PIT6 PITYP &= ~SET_BIT6
#define clr_PIT5 PITYP &= ~SET_BIT5
#define clr_PIT4 PITYP &= ~SET_BIT4
#define clr_PIT3 PITYP &= ~SET_BIT3
#define clr_PIT2 PITYP &= ~SET_BIT2
#define clr_PIT1 PITYP &= ~SET_BIT1
#define clr_PIT0 PITYP &= ~SET_BIT0

//PIF
#define set_PIF7 PIF |= SET_BIT7
#define set_PIF6 PIF |= SET_BIT6
#define set_PIF5 PIF |= SET_BIT5
#define set_PIF4 PIF |= SET_BIT4
#define set_PIF3 PIF |= SET_BIT3
#define set_PIF2 PIF |= SET_BIT2
#define set_PIF1 PIF |= SET_BIT1
#define set_PIF0 PIF |= SET_BIT0

#define clr_PIF7 PIF &= ~SET_BIT7
#define clr_PIF6 PIF &= ~SET_BIT6
#define clr_PIF5 PIF &= ~SET_BIT5
#define clr_PIF4 PIF &= ~SET_BIT4
#define clr_PIF3 PIF &= ~SET_BIT3
#define clr_PIF2 PIF &= ~SET_BIT2
#define clr_PIF1 PIF &= ~SET_BIT1
#define clr_PIF0 PIF &= ~SET_BIT0

//PIPEN                     
#define set_PIPEN7 PIPEN |= SET_BIT7
#define set_PIPEN6 PIPEN |= SET_BIT6
#define set_PIPEN5 PIPEN |= SET_BIT5
#define set_PIPEN4 PIPEN |= SET_BIT4
#define set_PIPEN3 PIPEN |= SET_BIT3
#define set_PIPEN2 PIPEN |= SET_BIT2
#define set_PIPEN1 PIPEN |= SET_BIT1
#define set_PIPEN0 PIPEN |= SET_BIT0
                            
#define clr_PIPEN7 PIPEN &= ~SET_BIT7
#define clr_PIPEN6 PIPEN &= ~SET_BIT6
#define clr_PIPEN5 PIPEN &= ~SET_BIT5
#define clr_PIPEN4 PIPEN &= ~SET_BIT4
#define clr_PIPEN3 PIPEN &= ~SET_BIT3
#define clr_PIPEN2 PIPEN &= ~SET_BIT2
#define clr_PIPEN1 PIPEN &= ~SET_BIT1
#define clr_PIPEN0 PIPEN &= ~SET_BIT0
                            
//PINEN                     
#define set_PINEN7 PINEN |= SET_BIT7
#define set_PINEN6 PINEN |= SET_BIT6
#define set_PINEN5 PINEN |= SET_BIT5
#define set_PINEN4 PINEN |= SET_BIT4
#define set_PINEN3 PINEN |= SET_BIT3
#define set_PINEN2 PINEN |= SET_BIT2
#define set_PINEN1 PINEN |= SET_BIT1
#define set_PINEN0 PINEN |= SET_BIT0
                            
#define clr_PINEN7 PINEN &= ~SET_BIT7
#define clr_PINEN6 PINEN &= ~SET_BIT6
#define clr_PINEN5 PINEN &= ~SET_BIT5
#define clr_PINEN4 PINEN &= ~SET_BIT4
#define clr_PINEN3 PINEN &= ~SET_BIT3
#define clr_PINEN2 PINEN &= ~SET_BIT2
#define clr_PINEN1 PINEN &= ~SET_BIT1
#define clr_PINEN0 PINEN &= ~SET_BIT0
                            
//PICON                     
#define set_PIPS2 PICON |= SET_BIT2
#define set_PIPS1 PICON |= SET_BIT1
#define set_PIPS0 PICON |= SET_BIT0
                            
#define clr_PIPS2 PICON &= ~SET_BIT2
#define clr_PIPS1 PICON &= ~SET_BIT1
#define clr_PIPS0 PICON &= ~SET_BIT0

//ADCCON0
#define set_ADCF ADCF = 1
#define set_ADCS ADCS = 1
#define set_ADCHS3 ADCHS3 = 1
#define set_ADCHS2 ADCHS2 = 1
#define set_ADCHS1 ADCHS1 = 1
#define set_ADCHS0 ADCHS0 = 1

#define clr_ADCF ADCF = 0
#define clr_ADCS ADCS = 0
#define clr_ADCHS3 ADCHS3 = 0
#define clr_ADCHS2 ADCHS2 = 0
#define clr_ADCHS1 ADCHS1 = 0
#define clr_ADCHS0 ADCHS0 = 0

//LCDSEG2
#define set_SEG23EN LCDSEG2 |= SET_BIT7
#define set_SEG22EN LCDSEG2 |= SET_BIT6
#define set_SEG21EN LCDSEG2 |= SET_BIT5
#define set_SEG20EN LCDSEG2 |= SET_BIT4
#define set_SEG19EN LCDSEG2 |= SET_BIT3
#define set_SEG18EN LCDSEG2 |= SET_BIT2
#define set_SEG17EN LCDSEG2 |= SET_BIT1
#define set_SEG16EN LCDSEG2 |= SET_BIT0

#define clr_SEG23EN LCDSEG2 &= ~SET_BIT7
#define clr_SEG22EN LCDSEG2 &= ~SET_BIT6
#define clr_SEG21EN LCDSEG2 &= ~SET_BIT5
#define clr_SEG20EN LCDSEG2 &= ~SET_BIT4
#define clr_SEG19EN LCDSEG2 &= ~SET_BIT3
#define clr_SEG18EN LCDSEG2 &= ~SET_BIT2
#define clr_SEG17EN LCDSEG2 &= ~SET_BIT1
#define clr_SEG16EN LCDSEG2 &= ~SET_BIT0

//LCDSEG1
#define set_SEG15EN LCDSEG1 |= SET_BIT7
#define set_SEG14EN LCDSEG1 |= SET_BIT6
#define set_SEG13EN LCDSEG1 |= SET_BIT5
#define set_SEG12EN LCDSEG1 |= SET_BIT4
#define set_SEG11EN LCDSEG1 |= SET_BIT3
#define set_SEG10EN LCDSEG1 |= SET_BIT2
#define set_SEG9EN LCDSEG1 |= SET_BIT1
#define set_SEG8EN LCDSEG1 |= SET_BIT0

#define clr_SEG15EN LCDSEG1 &= ~SET_BIT7
#define clr_SEG14EN LCDSEG1 &= ~SET_BIT6
#define clr_SEG13EN LCDSEG1 &= ~SET_BIT5
#define clr_SEG12EN LCDSEG1 &= ~SET_BIT4
#define clr_SEG11EN LCDSEG1 &= ~SET_BIT3
#define clr_SEG10EN LCDSEG1 &= ~SET_BIT2
#define clr_SEG9EN LCDSEG1 &= ~SET_BIT1
#define clr_SEG8EN LCDSEG1 &= ~SET_BIT0

//LCDSEG0
#define set_SEG7EN LCDSEG0 |= SET_BIT7
#define set_SEG6EN LCDSEG0 |= SET_BIT6
#define set_SEG5EN LCDSEG0 |= SET_BIT5
#define set_SEG4EN LCDSEG0 |= SET_BIT4
#define set_SEG3EN LCDSEG0 |= SET_BIT3
#define set_SEG2EN LCDSEG0 |= SET_BIT2
#define set_SEG1EN LCDSEG0 |= SET_BIT1
#define set_SEG0EN LCDSEG0 |= SET_BIT0

#define clr_SEG7EN LCDSEG0 &= ~SET_BIT7
#define clr_SEG6EN LCDSEG0 &= ~SET_BIT6
#define clr_SEG5EN LCDSEG0 &= ~SET_BIT5
#define clr_SEG4EN LCDSEG0 &= ~SET_BIT4
#define clr_SEG3EN LCDSEG0 &= ~SET_BIT3
#define clr_SEG2EN LCDSEG0 &= ~SET_BIT2
#define clr_SEG1EN LCDSEG0 &= ~SET_BIT1
#define clr_SEG0EN LCDSEG0 &= ~SET_BIT0

//ADCMPH

//ADCMPL

//ADCON2                    
#define set_ADCMPOP ADCCON2 |= SET_BIT6
#define set_ADCMPEN ADCCON2 |= SET_BIT5
#define set_ADCMPO ADCCON2 |= SET_BIT4
                            
#define clr_ADCMPOP ADCCON2 &= ~SET_BIT6
#define clr_ADCMPEN ADCCON2 &= ~SET_BIT5
#define clr_ADCMPO ADCCON2 &= ~SET_BIT4
                            
//ADCON1                    
#define set_ADCDIV2 ADCCON1 |= SET_BIT6
#define set_ADCDIV1 ADCCON1 |= SET_BIT5
#define set_ADCDIV0 ADCCON1 |= SET_BIT4
#define set_ADCEX ADCCON1 |= SET_BIT1
#define set_ADCEN ADCCON1 |= SET_BIT0
                            
#define clr_ADCDIV2 ADCCON1 &= ~SET_BIT6
#define clr_ADCDIV1 ADCCON1 &= ~SET_BIT5
#define clr_ADCDIV0 ADCCON1 &= ~SET_BIT4
#define clr_ADCEX ADCCON1 &= ~SET_BIT1
#define clr_ADCEN ADCCON1 &= ~SET_BIT0

//ACC

//P5M2

//P5S

//P5M1

//P4M2

//P4S

//P4M1

//P4

//P5

//R2DH

//R2DL

//R2CH

//R2CL

//PSW

//R2BH

//R2BL

//R2AH

//R2AL

//T2OE
#define set_T2DOE2 T2OE |= SET_BIT7
#define set_T2DOE1 T2OE |= SET_BIT6
#define set_T2COE2 T2OE |= SET_BIT5
#define set_T2COE1 T2OE |= SET_BIT4
#define set_T2BOE2 T2OE |= SET_BIT3
#define set_T2BOE1 T2OE |= SET_BIT2
#define set_T2AOE2 T2OE |= SET_BIT1
#define set_T2AOE1 T2OE |= SET_BIT0

#define clr_T2DOE2 T2OE &= ~SET_BIT7
#define clr_T2DOE1 T2OE &= ~SET_BIT6
#define clr_T2COE2 T2OE &= ~SET_BIT5
#define clr_T2COE1 T2OE &= ~SET_BIT4
#define clr_T2BOE2 T2OE &= ~SET_BIT3
#define clr_T2BOE1 T2OE &= ~SET_BIT2
#define clr_T2AOE2 T2OE &= ~SET_BIT1
#define clr_T2AOE1 T2OE &= ~SET_BIT0

//T2MOD1                     
#define set_T2DM T2MOD1 |= SET_BIT7
#define set_T2DPS2 T2MOD1 |= SET_BIT6
#define set_T2DPS1 T2MOD1 |= SET_BIT5
#define set_T2DPS0 T2MOD1 |= SET_BIT4
#define set_T2CM T2MOD1 |= SET_BIT3
#define set_T2CPS2 T2MOD1 |= SET_BIT2
#define set_T2CPS1 T2MOD1 |= SET_BIT1
#define set_T2CPS0 T2MOD1 |= SET_BIT0
                            
#define clr_T2DM T2MOD1 &= ~SET_BIT7
#define clr_T2DPS2 T2MOD1 &= ~SET_BIT6
#define clr_T2DPS1 T2MOD1 &= ~SET_BIT5
#define clr_T2DPS0 T2MOD1 &= ~SET_BIT4
#define clr_T2CM T2MOD1 &= ~SET_BIT3
#define clr_T2CPS2 T2MOD1 &= ~SET_BIT2
#define clr_T2CPS1 T2MOD1 &= ~SET_BIT1
#define clr_T2CPS0 T2MOD1 &= ~SET_BIT0

//T2MOD0
#define set_T2BM T2MOD0 |= SET_BIT7
#define set_T2BPS2 T2MOD0 |= SET_BIT6
#define set_T2BPS1 T2MOD0 |= SET_BIT5
#define set_T2BPS0 T2MOD0 |= SET_BIT4
#define set_T2AM T2MOD0 |= SET_BIT3
#define set_T2APS2 T2MOD0 |= SET_BIT2
#define set_T2APS1 T2MOD0 |= SET_BIT1
#define set_T2APS0 T2MOD0 |= SET_BIT0
                            
#define clr_T2BM T2MOD0 &= ~SET_BIT7
#define clr_T2BPS2 T2MOD0 &= ~SET_BIT6
#define clr_T2BPS1 T2MOD0 &= ~SET_BIT5
#define clr_T2BPS0 T2MOD0 &= ~SET_BIT4
#define clr_T2AM T2MOD0 &= ~SET_BIT3
#define clr_T2APS2 T2MOD0 &= ~SET_BIT2
#define clr_T2APS1 T2MOD0 &= ~SET_BIT1
#define clr_T2APS0 T2MOD0 &= ~SET_BIT0

//T2CON  
#define set_TF2D TF2D = 1
#define set_TF2C TF2C = 1
#define set_TF2B TF2B = 1
#define set_TF2A TF2A = 1
#define set_TR2D TR2D = 1
#define set_TR2C TR2C = 1
#define set_TR2B TR2B = 1
#define set_TR2A TR2A = 1

#define clr_TF2D TF2D = 0
#define clr_TF2C TF2C = 0
#define clr_TF2B TF2B = 0
#define clr_TF2A TF2A = 0
#define clr_TR2D TR2D = 0
#define clr_TR2C TR2C = 0
#define clr_TR2B TR2B = 0
#define clr_TR2A TR2A = 0


//TA

//RH3

//RL3
                            
//T3CON                     
#define set_SMOD_1 T3CON |= SET_BIT7
#define set_SMOD0_1 T3CON |= SET_BIT6
#define set_BRCK T3CON |= SET_BIT5
#define set_TF3 T3CON |= SET_BIT4
#define set_TR3 T3CON |= SET_BIT3
#define set_T3PS2 T3CON |= SET_BIT2
#define set_T3PS1 T3CON |= SET_BIT1
#define set_T3PS0 T3CON |= SET_BIT0
                            
#define clr_SMOD_1 T3CON &= ~SET_BIT7
#define clr_SMOD0_1 T3CON &= ~SET_BIT6
#define clr_BRCK T3CON &= ~SET_BIT5
#define clr_TF3 T3CON &= ~SET_BIT4
#define clr_TR3 T3CON &= ~SET_BIT3
#define clr_T3PS2 T3CON &= ~SET_BIT2
#define clr_T3PS1 T3CON &= ~SET_BIT1
#define clr_T3PS0 T3CON &= ~SET_BIT0

//ADCRH

//ADCRL

//I2ADDR
#define set_GC I2ADDR |= SET_BIT0
#define clr_GC I2ADDR &= ~SET_BIT0

//I2CON  
#define set_I2CEN I2CEN = 1
#define set_STA STA = 1
#define set_STO STO = 1
#define set_SI SI = 1
#define set_AA AA = 1

#define clr_I2CEN I2CEN = 0
#define clr_STA STA = 0
#define clr_STO STO = 0
#define clr_SI SI = 0
#define clr_AA AA = 0

//I2TOC

//I2CLK

//I2STAT

//I2DAT

//SADDR_1

//SADEN_1

//SADEN

//IP
#define set_PADC PADC = 1
#define set_PBOD PBOD = 1
#define set_PS PS = 1
#define set_PT1 PT1 = 1
#define set_PX1 PX1 = 1
#define set_PT0 PT0 = 1
#define set_PX0 PX0 = 1

#define clr_PADC PADC = 0
#define clr_PBOD PBOD = 0
#define clr_PS PS = 0
#define clr_PT1 PT1 = 0
#define clr_PX1 PX1 = 0
#define clr_PT0 PT0 = 0
#define clr_PX0 PX0 = 0

//IPH                       
#define set_PADCH IPH |= SET_BIT6
#define set_PBODH IPH |= SET_BIT5
#define set_PSH IPH |= SET_BIT4
#define set_PT1H IPH |= SET_BIT3
#define set_PX11 IPH |= SET_BIT2
#define set_PT0H IPH |= SET_BIT1
#define set_PX0H IPH |= SET_BIT0
                            
#define clr_PADCH IPH &= ~SET_BIT6
#define clr_PBODH IPH &= ~SET_BIT5
#define clr_PSH IPH &= ~SET_BIT4
#define clr_PT1H IPH &= ~SET_BIT3
#define clr_PX11 IPH &= ~SET_BIT2
#define clr_PT0H IPH &= ~SET_BIT1
#define clr_PX0H IPH &= ~SET_BIT0

//P2M2
#define set_P2M2_7 P2M2 |= SET_BIT7
#define set_P2M2_6 P2M2 |= SET_BIT6
#define set_P2M2_5 P2M2 |= SET_BIT5
#define set_P2M2_4 P2M2 |= SET_BIT4
#define set_P2M2_3 P2M2 |= SET_BIT3
#define set_P2M2_2 P2M2 |= SET_BIT2
#define set_P2M2_1 P2M2 |= SET_BIT1
#define set_P2M2_0 P2M2 |= SET_BIT0

#define clr_P2M2_7 P2M2 &= ~SET_BIT7
#define clr_P2M2_6 P2M2 &= ~SET_BIT6
#define clr_P2M2_5 P2M2 &= ~SET_BIT5
#define clr_P2M2_4 P2M2 &= ~SET_BIT4
#define clr_P2M2_3 P2M2 &= ~SET_BIT3
#define clr_P2M2_2 P2M2 &= ~SET_BIT2
#define clr_P2M2_1 P2M2 &= ~SET_BIT1
#define clr_P2M2_0 P2M2 &= ~SET_BIT0

//P2S
#define set_P2S_7 P2S |= SET_BIT7
#define set_P2S_6 P2S |= SET_BIT6
#define set_P2S_5 P2S |= SET_BIT5
#define set_P2S_4 P2S |= SET_BIT4
#define set_P2S_3 P2S |= SET_BIT3
#define set_P2S_2 P2S |= SET_BIT2
#define set_P2S_1 P2S |= SET_BIT1
#define set_P2S_0 P2S |= SET_BIT0

#define clr_P2S_7 P2S &= ~SET_BIT7
#define clr_P2S_6 P2S &= ~SET_BIT6
#define clr_P2S_5 P2S &= ~SET_BIT5
#define clr_P2S_4 P2S &= ~SET_BIT4
#define clr_P2S_3 P2S &= ~SET_BIT3
#define clr_P2S_2 P2S &= ~SET_BIT2
#define clr_P2S_1 P2S &= ~SET_BIT1
#define clr_P2S_0 P2S &= ~SET_BIT0

//P2M1
#define set_P2M1_7 P2M1 |= SET_BIT7
#define set_P2M1_6 P2M1 |= SET_BIT6
#define set_P2M1_5 P2M1 |= SET_BIT5
#define set_P2M1_4 P2M1 |= SET_BIT4
#define set_P2M1_3 P2M1 |= SET_BIT3
#define set_P2M1_2 P2M1 |= SET_BIT2
#define set_P2M1_1 P2M1 |= SET_BIT1
#define set_P2M1_0 P2M1 |= SET_BIT0

#define clr_P2M1_7 P2M1 &= ~SET_BIT7
#define clr_P2M1_6 P2M1 &= ~SET_BIT6
#define clr_P2M1_5 P2M1 &= ~SET_BIT5
#define clr_P2M1_4 P2M1 &= ~SET_BIT4
#define clr_P2M1_3 P2M1 &= ~SET_BIT3
#define clr_P2M1_2 P2M1 &= ~SET_BIT2
#define clr_P2M1_1 P2M1 &= ~SET_BIT1
#define clr_P2M1_0 P2M1 &= ~SET_BIT0

//P1OS

//P1M2

//P1S

//P1M1

//P0M2
#define set_P0M2_7 P0M2 |= SET_BIT7
#define set_P0M2_6 P0M2 |= SET_BIT6
#define set_P0M2_5 P0M2 |= SET_BIT5
#define set_P0M2_4 P0M2 |= SET_BIT4
#define set_P0M2_3 P0M2 |= SET_BIT3
#define set_P0M2_2 P0M2 |= SET_BIT2
#define set_P0M2_1 P0M2 |= SET_BIT1
#define set_P0M2_0 P0M2 |= SET_BIT0

#define clr_P0M2_7 P0M2 &= ~SET_BIT7
#define clr_P0M2_6 P0M2 &= ~SET_BIT6
#define clr_P0M2_5 P0M2 &= ~SET_BIT5
#define clr_P0M2_4 P0M2 &= ~SET_BIT4
#define clr_P0M2_3 P0M2 &= ~SET_BIT3
#define clr_P0M2_2 P0M2 &= ~SET_BIT2
#define clr_P0M2_1 P0M2 &= ~SET_BIT1
#define clr_P0M2_0 P0M2 &= ~SET_BIT0

//P0S
#define set_P0S_7 P0S |= SET_BIT7
#define set_P0S_6 P0S |= SET_BIT6
#define set_P0S_5 P0S |= SET_BIT5
#define set_P0S_4 P0S |= SET_BIT4
#define set_P0S_3 P0S |= SET_BIT3
#define set_P0S_2 P0S |= SET_BIT2
#define set_P0S_1 P0S |= SET_BIT1
#define set_P0S_0 P0S |= SET_BIT0

#define clr_P0S_7 P0S &= ~SET_BIT7
#define clr_P0S_6 P0S &= ~SET_BIT6
#define clr_P0S_5 P0S &= ~SET_BIT5
#define clr_P0S_4 P0S &= ~SET_BIT4
#define clr_P0S_3 P0S &= ~SET_BIT3
#define clr_P0S_2 P0S &= ~SET_BIT2
#define clr_P0S_1 P0S &= ~SET_BIT1
#define clr_P0S_0 P0S &= ~SET_BIT0

//P0M1
#define set_P0M1_7 P0M1 |= SET_BIT7
#define set_P0M1_6 P0M1 |= SET_BIT6
#define set_P0M1_5 P0M1 |= SET_BIT5
#define set_P0M1_4 P0M1 |= SET_BIT4
#define set_P0M1_3 P0M1 |= SET_BIT3
#define set_P0M1_2 P0M1 |= SET_BIT2
#define set_P0M1_1 P0M1 |= SET_BIT1
#define set_P0M1_0 P0M1 |= SET_BIT0

#define clr_P0M1_7 P0M1 &= ~SET_BIT7
#define clr_P0M1_6 P0M1 &= ~SET_BIT6
#define clr_P0M1_5 P0M1 &= ~SET_BIT5
#define clr_P0M1_4 P0M1 &= ~SET_BIT4
#define clr_P0M1_3 P0M1 &= ~SET_BIT3
#define clr_P0M1_2 P0M1 &= ~SET_BIT2
#define clr_P0M1_1 P0M1 &= ~SET_BIT1
#define clr_P0M1_0 P0M1 &= ~SET_BIT0

//P3

//IAPCN
#define set_FOEN IAPN |= SET_BIT5
#define set_FCEN IAPN |= SET_BIT4
#define set_FCTRL3 IAPN |= SET_BIT3
#define set_FCTRL2 IAPN |= SET_BIT2
#define set_FCTRL1 IAPN |= SET_BIT1
#define set_FCTRL0 IAPN |= SET_BIT0
                            
#define clr_FOEN IAPN &= ~SET_BIT5
#define clr_FCEN IAPN &= ~SET_BIT4
#define clr_FCTRL3 IAPN &= ~SET_BIT3
#define clr_FCTRL2 IAPN &= ~SET_BIT2
#define clr_FCTRL1 IAPN &= ~SET_BIT1
#define clr_FCTRL0 IAPN &= ~SET_BIT0

//IAPFD

//P3M2
#define set_CLOEN P3M2 |= SET_BIT7
#define set_P36UP P3M2 |= SET_BIT6

#define clr_CLOEN P3M2 &= ~SET_BIT7
#define clr_P36UP P3M2 &= ~SET_BIT6

//P3S

//P3M1
#define set_T1OE P3M1 |= SET_BIT7
#define set_T0OE P3M1 |= SET_BIT6

#define clr_T1OE P3M1 &= ~SET_BIT7
#define clr_T0OE P3M1 &= ~SET_BIT6


//BODCON1
#define set_LPBOD1 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON1 |= SET_BIT2;EA = BIT_TMP;
#define set_LPBOD0 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON1 |= SET_BIT1;EA = BIT_TMP;
#define set_BODFLT BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON1 |= SET_BIT0;EA = BIT_TMP;
        
#define clr_LPBOD1 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON1 &= ~SET_BIT2;EA = BIT_TMP;
#define clr_LPBOD0 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON1 &= ~SET_BIT1;EA = BIT_TMP;
#define clr_BODFLT BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON1 &= ~SET_BIT0;EA = BIT_TMP;

//WDCON
#define set_WDTEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON |= SET_BIT7;EA = BIT_TMP;
#define set_WDCLR BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON |= SET_BIT6;EA = BIT_TMP;
#define set_WDTF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON |= SET_BIT5;EA = BIT_TMP;
#define set_WDTRF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON |= SET_BIT3;EA = BIT_TMP;
#define set_WPS2 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON |= SET_BIT2;EA = BIT_TMP;
#define set_WPS1 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON |= SET_BIT1;EA = BIT_TMP;
#define set_WPS0 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON |= SET_BIT0;EA = BIT_TMP;
        
#define clr_WDTEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON &= ~SET_BIT7;EA = BIT_TMP;
#define clr_WDCLR BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON &= ~SET_BIT6;EA = BIT_TMP;
#define clr_WDTF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON &= ~SET_BIT5;EA = BIT_TMP;
#define clr_WDTRF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON &= ~SET_BIT3;EA = BIT_TMP;
#define clr_WPS2 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON &= ~SET_BIT2;EA = BIT_TMP;
#define clr_WPS1 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON &= ~SET_BIT1;EA = BIT_TMP;
#define clr_WPS0 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;WDCON &= ~SET_BIT0;EA = BIT_TMP;

//SADDR

//IE
#define set_EA EA = 1
#define set_EADC EADC = 1
#define set_EBOD EBOD = 1
#define set_ES ES = 1
#define set_ET1 ET1 = 1
#define set_EX1 EX1 = 1
#define set_ET0 ET0 = 1
#define set_EX0 EX0 = 1

#define clr_EA EA = 0
#define clr_EADC EADC = 0
#define clr_EBOD EBOD = 0
#define clr_ES ES = 0
#define clr_ET1 ET1 = 0
#define clr_EX1 EX1 = 0
#define clr_ET0 ET0 = 0
#define clr_EX0 EX0 = 0

//IAPAH

//IAPAL

//IAPUEN
#define set_CFUEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;IAPUEN |= SET_BIT2;EA = BIT_TMP;
#define set_LDUEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;IAPUEN |= SET_BIT1;EA = BIT_TMP;
#define set_APUEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;IAPUEN |= SET_BIT0;EA = BIT_TMP;

#define clr_CFUEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;IAPUEN &= ~SET_BIT2;EA = BIT_TMP;
#define clr_LDUEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;IAPUEN &= ~SET_BIT1;EA = BIT_TMP;
#define clr_APUEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;IAPUEN &= ~SET_BIT0;EA = BIT_TMP;

//IAPTRG
#define set_IAPGO BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;IAPTRG |= SET_BIT0;EA = BIT_TMP
#define clr_IAPGO BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;IAPTRG &= ~SET_BIT0;EA = BIT_TMP

//BODCON0
#define set_BODEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 |= SET_BIT7;EA = BIT_TMP;
#define set_BOV1 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 |= SET_BIT5;EA = BIT_TMP;
#define set_BOV0 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 |= SET_BIT4;EA = BIT_TMP;
#define set_BOF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 |= SET_BIT3;EA = BIT_TMP;
#define set_BORST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 |= SET_BIT2;EA = BIT_TMP;
#define set_BORF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 |= SET_BIT1;EA = BIT_TMP;
#define set_BOS BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 |= SET_BIT0;EA = BIT_TMP;

#define clr_BODEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 &= ~SET_BIT7;EA = BIT_TMP;
#define clr_BOV1 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 &= ~SET_BIT5;EA = BIT_TMP;
#define clr_BOV0 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 &= ~SET_BIT4;EA = BIT_TMP;
#define clr_BOF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 &= ~SET_BIT3;EA = BIT_TMP;
#define clr_BORST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 &= ~SET_BIT2;EA = BIT_TMP;
#define clr_BORF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 &= ~SET_BIT1;EA = BIT_TMP;
#define clr_BOS BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;BODCON0 &= ~SET_BIT0;EA = BIT_TMP;

//AUXR1
#define set_SWRF AUXR1 |= SET_BIT7
#define set_RSTPINF AUXR1 |= SET_BIT6
#define set_T1LXTM AUXR1 |= SET_BIT5
#define set_T0LXTM AUXR1 |= SET_BIT4
#define set_GF2 AUXR1 |= SET_BIT3
#define set_DPS AUXR1 |= SET_BIT0
                            
#define clr_SWRF AUXR1 &= ~SET_BIT7
#define clr_RSTPINF AUXR1 &= ~SET_BIT6
#define clr_T1LXTM AUXR1 &= ~SET_BIT5
#define clr_T0LXTM AUXR1 &= ~SET_BIT4
#define clr_GF2 AUXR1 &= ~SET_BIT3
#define clr_DPS AUXR1 &= ~SET_BIT0

//P2

//CHPCON
#define set_SWRST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CHPCON |= SET_BIT7;EA = BIT_TMP;
#define set_IAPFF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CHPCON |= SET_BIT6;EA = BIT_TMP;
#define set_BS BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CHPCON |= SET_BIT1;EA = BIT_TMP;
#define set_IAPEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CHPCON |= SET_BIT0;EA = BIT_TMP;
       
#define clr_SWRST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CHPCON &= ~SET_BIT7;EA = BIT_TMP;
#define clr_IAPFF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CHPCON &= ~SET_BIT6;EA = BIT_TMP;
#define clr_BS BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CHPCON &= ~SET_BIT1;EA = BIT_TMP;
#define clr_IAPEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CHPCON &= ~SET_BIT0;EA = BIT_TMP;

//RSR

//EIE1                      
#define set_EWKT EIE1 |= SET_BIT2
#define set_ET3 EIE1 |= SET_BIT1
#define set_ES_1 EIE1 |= SET_BIT0
                            
#define clr_EWKT EIE1 &= ~SET_BIT2
#define clr_ET3 EIE1 &= ~SET_BIT1
#define clr_ES_1 EIE1 &= ~SET_BIT0
                            
//EIE                       
#define set_ET2D EIE |= SET_BIT7
#define set_ET2C EIE |= SET_BIT5
#define set_EWDT EIE |= SET_BIT4
#define set_ET2B EIE |= SET_BIT3
#define set_ET2A EIE |= SET_BIT2
#define set_EPI EIE |= SET_BIT1
#define set_EI2C EIE |= SET_BIT0
                            
#define clr_ET2D EIE &= ~SET_BIT7
#define clr_ET2C EIE &= ~SET_BIT5
#define clr_EWDT EIE &= ~SET_BIT4
#define clr_ET2B EIE &= ~SET_BIT3
#define clr_ET2A EIE &= ~SET_BIT2
#define clr_EPI EIE &= ~SET_BIT1
#define clr_EI2C EIE &= ~SET_BIT0

//SBUF_1

//SBUF

//SCON
#define set_FE FE = 1
#define set_SM1 SM1 = 1
#define set_SM2 SM2 = 1
#define set_REN REN = 1
#define set_TB8 TB8 = 1
#define set_RB8 RB8 = 1
#define set_TI TI = 1
#define set_RI RI = 1

#define clr_FE FE = 0
#define clr_SM1 SM1 = 0
#define clr_SM2 SM2 = 0
#define clr_REN REN = 0
#define clr_TB8 TB8 = 0
#define clr_RB8 RB8 = 0
#define clr_TI TI = 0
#define clr_RI RI = 0

//CKEN 
#define set_EXTEN1 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKEN |= SET_BIT7;EA = BIT_TMP;
#define set_EXTEN0 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKEN |= SET_BIT6;EA = BIT_TMP;
#define set_HIRCEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKEN |= SET_BIT5;EA = BIT_TMP;
#define set_LIRCEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKEN |= SET_BIT4;EA = BIT_TMP;
#define set_CKSWTF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKEN |= SET_BIT0;EA = BIT_TMP;
       
#define clr_EXTEN1 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKEN &= ~SET_BIT7;EA = BIT_TMP;
#define clr_EXTEN0 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKEN &= ~SET_BIT6;EA = BIT_TMP;
#define clr_HIRCEN BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKEN &= ~SET_BIT5;EA = BIT_TMP;
#define clr_CKSWTF BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKEN &= ~SET_BIT0;EA = BIT_TMP;

//CKSWT
#define set_HXTST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT |= SET_BIT7;EA = BIT_TMP;
#define set_LXTST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT |= SET_BIT6;EA = BIT_TMP;
#define set_HIRCST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT |= SET_BIT5;EA = BIT_TMP;
#define set_ECLKST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT |= SET_BIT3;EA = BIT_TMP;
#define set_OSC2 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT |= SET_BIT2;EA = BIT_TMP;
#define set_OSC1 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT |= SET_BIT1;EA = BIT_TMP;
#define set_OSC0 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT |= SET_BIT0;EA = BIT_TMP;

#define clr_HXTST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT &= ~SET_BIT7;EA = BIT_TMP;
#define clr_LXTST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT &= ~SET_BIT6;EA = BIT_TMP;
#define clr_HIRCST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT &= ~SET_BIT5;EA = BIT_TMP;
#define clr_ECLKST BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT &= ~SET_BIT3;EA = BIT_TMP;
#define clr_OSC2 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT &= ~SET_BIT2;EA = BIT_TMP;
#define clr_OSC1 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT &= ~SET_BIT1;EA = BIT_TMP;
#define clr_OSC0 BIT_TMP = EA;EA = 0;TA = 0xAA;TA = 0x55;CKSWT &= ~SET_BIT0;EA = BIT_TMP;

//CKDIV

//SFRS
#define set_SFRSEL SFRS |= SET_BIT0
#define clr_SFRSEL SFRS &= ~SET_BIT0

//P1

//WKCON
#define set_WKTCK WKCON |= SET_BIT5
#define set_WKTF WKCON |= SET_BIT4
#define set_WKTR WKCON |= SET_BIT3
#define set_WKPS2 WKCON |= SET_BIT2
#define set_WKPS1 WKCON |= SET_BIT1
#define set_WKPS0 WKCON |= SET_BIT0
                            
#define clr_WKTCK WKCON &= ~SET_BIT5
#define clr_WKTF WKCON &= ~SET_BIT4
#define clr_WKTR WKCON &= ~SET_BIT3
#define clr_WKPS2 WKCON &= ~SET_BIT2
#define clr_WKPS1 WKCON &= ~SET_BIT1
#define clr_WKPS0 WKCON &= ~SET_BIT0

//CKCON
#define set_T1M CKCON |= SET_BIT4
#define set_T0M CKCON |= SET_BIT3
                            
#define clr_T1M CKCON &= ~SET_BIT4
#define clr_T0M CKCON &= ~SET_BIT3

//TH1

//TH0

//TL1

//TL0

//TMOD
#define set_GATE_T1 TMOD |= SET_BIT7
#define set_CT_T1 TMOD |= SET_BIT6
#define set_M1_T1 TMOD |= SET_BIT5
#define set_M0_T1 TMOD |= SET_BIT4
#define set_GATE_T0 TMOD |= SET_BIT3
#define set_CT_T0 TMOD |= SET_BIT2
#define set_M1_T0 TMOD |= SET_BIT1
#define set_M0_T0 TMOD |= SET_BIT0
                            
#define clr_GATE_T1 TMOD &= ~SET_BIT7
#define clr_CT_T1 TMOD &= ~SET_BIT6
#define clr_M1_T1 TMOD &= ~SET_BIT5
#define clr_M0_T1 TMOD &= ~SET_BIT4
#define clr_GATE_T0 TMOD &= ~SET_BIT3
#define clr_CT_T0 TMOD &= ~SET_BIT2
#define clr_M1_T0 TMOD &= ~SET_BIT1
#define clr_M0_T0 TMOD &= ~SET_BIT0

//TCON
#define set_TF1 TF1 = 1
#define set_TR1 TR1 = 1
#define set_TF0 TF0 = 1
#define set_TR0 TR0 = 1
#define set_IE1 IE1 = 1
#define set_IT1 IT1 = 1
#define set_IE0 IE0 = 1
#define set_IT0 IT0 = 1

#define clr_TF1 TF1 = 0
#define clr_TR1 TR1 = 0
#define clr_TF0 TF0 = 0
#define clr_TR0 TR0 = 0
#define clr_IE1 IE1 = 0
#define clr_IT1 IT1 = 0
#define clr_IE0 IE0 = 0
#define clr_IT0 IT0 = 0

//PCON
#define set_SMOD PCON |= SET_BIT7
#define set_SMOD0 PCON |= SET_BIT6
#define set_POF PCON |= SET_BIT4
#define set_GF1 PCON |= SET_BIT3
#define set_GF0 PCON |= SET_BIT2
#define set_PD PCON |= SET_BIT1
#define set_IDLE PCON |= SET_BIT0
                            
#define clr_SMOD PCON &= ~SET_BIT7
#define clr_SMOD0 PCON &= ~SET_BIT6
#define clr_POF PCON &= ~SET_BIT4
#define clr_GF1 PCON &= ~SET_BIT3
#define clr_GF0 PCON &= ~SET_BIT2
#define clr_PD PCON &= ~SET_BIT1
#define clr_IDLE PCON &= ~SET_BIT0

//RWK

//DPH

//DPL

//SP

//P0
#define set_P07 P07 = 1
#define set_P06 P06 = 1
#define set_P05 P05 = 1
#define set_P04 P04 = 1
#define set_P03 P03 = 1
#define set_P02 P02 = 1
#define set_P01 P01 = 1
#define set_P00 P00 = 1

#define clr_P07 P07 = 0
#define clr_P06 P06 = 0
#define clr_P05 P05 = 0
#define clr_P04 P04 = 0
#define clr_P03 P03 = 0
#define clr_P02 P02 = 0
#define clr_P01 P01 = 0
#define clr_P00 P00 = 0

//P1
#define set_P12 P12 = 1
#define set_P11 P11 = 1
#define set_P10 P10 = 1

#define clr_P12 P12 = 0
#define clr_P11 P11 = 0
#define clr_P10 P10 = 0

//P2
#define set_P26 P26 = 1
#define set_P25 P25 = 1
#define set_P24 P24 = 1
#define set_P23 P23 = 1
#define set_P22 P22 = 1
#define set_P21 P21 = 1
#define set_P20 P20 = 1

#define clr_P26 P26 = 0
#define clr_P25 P25 = 0
#define clr_P24 P24 = 0
#define clr_P23 P23 = 0
#define clr_P22 P22 = 0
#define clr_P21 P21 = 0
#define clr_P20 P20 = 0

//P3
#define set_P37 P37 = 1
#define set_P36 P36 = 1
#define set_P35 P35 = 1
#define set_P34 P34 = 1
#define set_P33 P33 = 1
#define set_P32 P32 = 1
#define set_P31 P31 = 1
#define set_P30 P30 = 1

#define clr_P37 P37 = 0
#define clr_P36 P36 = 0
#define clr_P35 P35 = 0
#define clr_P34 P34 = 0
#define clr_P33 P33 = 0
#define clr_P32 P32 = 0
#define clr_P31 P31 = 0
#define clr_P30 P30 = 0
