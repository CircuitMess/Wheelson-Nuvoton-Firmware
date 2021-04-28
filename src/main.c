#include <stdio.h>
#include <stdlib.h>
#include "N76E616.h"
#include "Version.h"
#include "Typedef.h"
#include "Define.h"
#include "SFR_Macro.h"
#include "Common.h"
#include "Delay.h"

void main(void){
	// backlight
	P1M1 &= CLR_BIT2;
	P1M2 &= CLR_BIT2;
	P1 &= CLR_BIT2;

	for(;;);
}
