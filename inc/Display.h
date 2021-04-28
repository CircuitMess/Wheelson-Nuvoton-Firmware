#define COM0 0x01
#define COM1 0x02
#define COM2 0x04
#define COM3 0x08

typedef enum
{
    E_NUM_0,
    E_NUM_1,
    E_NUM_2,
    E_NUM_3,
    E_NUM_4,
    E_NUM_5,
    E_NUM_6,
    E_NUM_7,
    E_NUM_8,
    E_NUM_9,
    E_NUM_A,
    E_NUM_B,
    E_NUM_C,
    E_NUM_D,
    E_NUM_E,
    E_NUM_F,
}E_DISPLAY_NUM;


void LCD_Initial();
void LCD_Display_All_Clear();
void LCD_Try_Run();
void LCD_Blank();
void LCD_Display_Num_1(unsigned char u8Num_1);
void LCD_Display_Num_2(unsigned char u8Num_2);
void LCD_Display_Num_3(unsigned char u8Num_3);
void LCD_Display_Num_4(unsigned char u8Num_4);
void LCD_Display_Num_5(unsigned char u8Num_5);
void LCD_Display_Num_6(unsigned char u8Num_6);
void LCD_Display_Num_7(unsigned char u8Num_7);
void LCD_Display_3DP();
void LCD_Display_Degree();
void LCD_Display_nuvoTon_Logo();
void LCD_Display_N76E616_Pattern();
void LCD_Display_Welcome_Pattern();

