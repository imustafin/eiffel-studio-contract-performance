#include "epoly4.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R2359[381])();
void R2359_init () {
	R2359[0] = (char *(*)()) F519_3527;
	R2359[1] = (char *(*)()) F520_3527;
	R2359[2] = (char *(*)()) F521_3527;
	R2359[85] = (char *(*)()) F489_3333;
	R2359[86] = (char *(*)()) F490_3333;
	R2359[87] = (char *(*)()) F491_3333;
	R2359[88] = (char *(*)()) F492_3333;
	R2359[89] = (char *(*)()) F494_3333;
	R2359[90] = (char *(*)()) F493_3333;
	R2359[91] = (char *(*)()) F495_3333;
	R2359[92] = (char *(*)()) F496_3333;
	R2359[93] = (char *(*)()) F497_3333;
	R2359[94] = (char *(*)()) F498_3333;
	R2359[95] = (char *(*)()) F499_3333;
	R2359[96] = (char *(*)()) F500_3333;
	R2359[97] = (char *(*)()) F501_3333;
	R2359[98] = (char *(*)()) F502_3333;
	R2359[99] = (char *(*)()) F503_3333;
	{long i; for (i = 104; i < 106; i++) R2359[i] = (char *(*)()) F622_4724;}
	R2359[380] = (char *(*)()) F622_4724;
}

char *(*R2360[381])();
void R2360_init () {
	R2360[0] = (char *(*)()) F519_3537;
	R2360[1] = (char *(*)()) F520_3537;
	R2360[2] = (char *(*)()) F521_3537;
	R2360[85] = (char *(*)()) F604_4107;
	R2360[86] = (char *(*)()) F605_4107;
	R2360[87] = (char *(*)()) F606_4107;
	R2360[88] = (char *(*)()) F607_4107;
	R2360[89] = (char *(*)()) F608_4107;
	R2360[90] = (char *(*)()) F609_4107;
	R2360[91] = (char *(*)()) F610_4107;
	R2360[92] = (char *(*)()) F611_4107;
	R2360[93] = (char *(*)()) F612_4107;
	R2360[94] = (char *(*)()) F613_4107;
	R2360[95] = (char *(*)()) F614_4107;
	R2360[96] = (char *(*)()) F615_4107;
	R2360[97] = (char *(*)()) F616_4107;
	R2360[98] = (char *(*)()) F617_4107;
	R2360[99] = (char *(*)()) F618_4107;
	{long i; for (i = 104; i < 106; i++) R2360[i] = (char *(*)()) F622_4783;}
	R2360[380] = (char *(*)()) F899_7038;
}

char *(*R2374[381])();
void R2374_init () {
	R2374[0] = (char *(*)()) F397_2751;
	R2374[1] = (char *(*)()) F401_2751_2374_4;
	R2374[2] = (char *(*)()) F410_2751_2374_4;
	R2374[85] = (char *(*)()) F604_4113;
	R2374[86] = (char *(*)()) F605_4113_2374_4;
	R2374[87] = (char *(*)()) F606_4113_2374_4;
	R2374[88] = (char *(*)()) F607_4113_2374_4;
	R2374[89] = (char *(*)()) F608_4113_2374_4;
	R2374[90] = (char *(*)()) F609_4113_2374_4;
	R2374[91] = (char *(*)()) F610_4113_2374_4;
	R2374[92] = (char *(*)()) F611_4113_2374_4;
	R2374[93] = (char *(*)()) F612_4113_2374_4;
	R2374[94] = (char *(*)()) F613_4113_2374_4;
	R2374[95] = (char *(*)()) F614_4113_2374_4;
	R2374[96] = (char *(*)()) F615_4113_2374_4;
	R2374[97] = (char *(*)()) F616_4113_2374_4;
	R2374[98] = (char *(*)()) F617_4113_2374_4;
	R2374[99] = (char *(*)()) F618_4113_2374_4;
	{long i; for (i = 104; i < 106; i++) R2374[i] = (char *(*)()) F403_2751_2374_4;}
	R2374[380] = (char *(*)()) F403_2751_2374_4;
}
static void F401_2751_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F401_2751(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F410_2751_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F410_2751(Current, *(EIF_BOOLEAN *)arg1);
}
static void F605_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F605_4113(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F606_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F606_4113(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F607_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F607_4113(Current, *(EIF_POINTER *)arg1);
}
static void F608_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F608_4113(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F609_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F609_4113(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F610_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_4113(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F611_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F611_4113(Current, *(EIF_REAL_64 *)arg1);
}
static void F612_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F612_4113(Current, *(EIF_REAL_32 *)arg1);
}
static void F613_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F613_4113(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F614_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F614_4113(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F615_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F615_4113(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F616_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F616_4113(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F617_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F617_4113(Current, *(EIF_BOOLEAN *)arg1);
}
static void F618_4113_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F618_4113(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F403_2751_2374_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F403_2751(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2556[456])();
void R2556_init () {
	R2556[0] = (char *(*)()) F443_3143_2556_51;
	R2556[1] = (char *(*)()) F444_3191;
	R2556[2] = (char *(*)()) F445_3191_2556_51;
	R2556[3] = (char *(*)()) F446_3191_2556_51;
	R2556[4] = (char *(*)()) F447_3191_2556_51;
	R2556[5] = (char *(*)()) F448_3191_2556_51;
	R2556[6] = (char *(*)()) F449_3191_2556_51;
	R2556[7] = (char *(*)()) F450_3191_2556_51;
	R2556[8] = (char *(*)()) F451_3191_2556_51;
	R2556[9] = (char *(*)()) F452_3191_2556_51;
	R2556[10] = (char *(*)()) F453_3191_2556_51;
	R2556[11] = (char *(*)()) F454_3191_2556_51;
	R2556[12] = (char *(*)()) F455_3191_2556_51;
	R2556[13] = (char *(*)()) F456_3191_2556_51;
	R2556[14] = (char *(*)()) F457_3191_2556_51;
	R2556[15] = (char *(*)()) F458_3191_2556_51;
	R2556[76] = (char *(*)()) F459_3259;
	R2556[77] = (char *(*)()) F463_3259_2556_51;
	R2556[78] = (char *(*)()) F472_3259_2556_51;
	R2556[88] = (char *(*)()) F531_3085;
	R2556[89] = (char *(*)()) F532_3085_2556_51;
	R2556[90] = (char *(*)()) F533_3085_2556_51;
	R2556[91] = (char *(*)()) F534_3085_2556_51;
	R2556[92] = (char *(*)()) F535_3085_2556_51;
	R2556[93] = (char *(*)()) F536_3085_2556_51;
	R2556[94] = (char *(*)()) F537_3085_2556_51;
	R2556[95] = (char *(*)()) F538_3085_2556_51;
	R2556[96] = (char *(*)()) F539_3085_2556_51;
	R2556[97] = (char *(*)()) F540_3085_2556_51;
	R2556[98] = (char *(*)()) F541_3085_2556_51;
	R2556[99] = (char *(*)()) F542_3085_2556_51;
	R2556[100] = (char *(*)()) F543_3085_2556_51;
	R2556[101] = (char *(*)()) F544_3085_2556_51;
	R2556[102] = (char *(*)()) F545_3085_2556_51;
	R2556[153] = (char *(*)()) F596_3939;
	R2556[154] = (char *(*)()) F597_3939;
	R2556[155] = (char *(*)()) F598_3939_2556_51;
	R2556[156] = (char *(*)()) F599_3939_2556_51;
	R2556[157] = (char *(*)()) F600_3939_2556_51;
	R2556[158] = (char *(*)()) F596_3939;
	R2556[159] = (char *(*)()) F599_3939_2556_51;
	R2556[160] = (char *(*)()) F596_3939;
	R2556[161] = (char *(*)()) F604_4079;
	R2556[162] = (char *(*)()) F605_4079_2556_51;
	R2556[163] = (char *(*)()) F606_4079_2556_51;
	R2556[164] = (char *(*)()) F607_4079_2556_51;
	R2556[165] = (char *(*)()) F608_4079_2556_51;
	R2556[166] = (char *(*)()) F609_4079_2556_51;
	R2556[167] = (char *(*)()) F610_4079_2556_51;
	R2556[168] = (char *(*)()) F611_4079_2556_51;
	R2556[169] = (char *(*)()) F612_4079_2556_51;
	R2556[170] = (char *(*)()) F613_4079_2556_51;
	R2556[171] = (char *(*)()) F614_4079_2556_51;
	R2556[172] = (char *(*)()) F615_4079_2556_51;
	R2556[173] = (char *(*)()) F616_4079_2556_51;
	R2556[174] = (char *(*)()) F617_4079_2556_51;
	R2556[175] = (char *(*)()) F618_4079_2556_51;
	R2556[369] = (char *(*)()) F812_5317;
	R2556[450] = (char *(*)()) F893_6696_2556_51;
	R2556[452] = (char *(*)()) F895_6904_2556_51;
	R2556[454] = (char *(*)()) F897_6993_2556_51;
	R2556[455] = (char *(*)()) F898_7015_2556_51;
}
static EIF_REFERENCE F443_3143_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F443_3143(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F445_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F445_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F446_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F446_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F447_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F447_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(883, 0x00).id, 883, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F448_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F448_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F449_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F449_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F450_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F450_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(823, 0x00).id, 823, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F451_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F451_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F452_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F452_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(817, 0x00).id, 817, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F453_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F453_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(814, 0x00).id, 814, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F454_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F454_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F455_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F455_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F456_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F456_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(826, 0x00).id, 826, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F457_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F457_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F458_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F458_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(820, 0x00).id, 820, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F463_3259_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F463_3259(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F472_3259_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F472_3259(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F532_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F532_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F533_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F533_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F534_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F534_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(883, 0x00).id, 883, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F535_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F535_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F536_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F536_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F537_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F537_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(823, 0x00).id, 823, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F538_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F538_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F539_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F539_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(817, 0x00).id, 817, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F540_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F540_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(814, 0x00).id, 814, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F541_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F541_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F542_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F542_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F543_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F543_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(826, 0x00).id, 826, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F544_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F544_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F545_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F545_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(820, 0x00).id, 820, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F598_3939_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F598_3939(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F599_3939_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F599_3939(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F600_3939_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F600_3939(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F605_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F605_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F606_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F606_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F607_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F607_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(883, 0x00).id, 883, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F608_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F608_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F609_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F609_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F610_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F610_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(823, 0x00).id, 823, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F611_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F611_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F612_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F612_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(817, 0x00).id, 817, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F613_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F613_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(814, 0x00).id, 814, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F614_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F614_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F615_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F615_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F616_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F616_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(826, 0x00).id, 826, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F617_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F617_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F618_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F618_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(820, 0x00).id, 820, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F893_6696_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F893_6696(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(823, 0x00).id, 823, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F895_6904_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F895_6904(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(820, 0x00).id, 820, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F897_6993_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F897_6993(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(823, 0x00).id, 823, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F898_7015_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F898_7015(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(820, 0x00).id, 820, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R2557[456])();
void R2557_init () {
	R2557[0] = (char *(*)()) F443_3140;
	R2557[1] = (char *(*)()) F444_3196;
	R2557[2] = (char *(*)()) F445_3196;
	R2557[3] = (char *(*)()) F446_3196;
	R2557[4] = (char *(*)()) F447_3196;
	R2557[5] = (char *(*)()) F448_3196;
	R2557[6] = (char *(*)()) F449_3196;
	R2557[7] = (char *(*)()) F450_3196;
	R2557[8] = (char *(*)()) F451_3196;
	R2557[9] = (char *(*)()) F452_3196;
	R2557[10] = (char *(*)()) F453_3196;
	R2557[11] = (char *(*)()) F454_3196;
	R2557[12] = (char *(*)()) F455_3196;
	R2557[13] = (char *(*)()) F456_3196;
	R2557[14] = (char *(*)()) F457_3196;
	R2557[15] = (char *(*)()) F458_3196;
	R2557[76] = (char *(*)()) F459_3262;
	R2557[77] = (char *(*)()) F463_3262;
	R2557[78] = (char *(*)()) F472_3262;
	R2557[88] = (char *(*)()) F531_3093;
	R2557[89] = (char *(*)()) F532_3093;
	R2557[90] = (char *(*)()) F533_3093;
	R2557[91] = (char *(*)()) F534_3093;
	R2557[92] = (char *(*)()) F535_3093;
	R2557[93] = (char *(*)()) F536_3093;
	R2557[94] = (char *(*)()) F537_3093;
	R2557[95] = (char *(*)()) F538_3093;
	R2557[96] = (char *(*)()) F539_3093;
	R2557[97] = (char *(*)()) F540_3093;
	R2557[98] = (char *(*)()) F541_3093;
	R2557[99] = (char *(*)()) F542_3093;
	R2557[100] = (char *(*)()) F543_3093;
	R2557[101] = (char *(*)()) F544_3093;
	R2557[102] = (char *(*)()) F545_3093;
	R2557[153] = (char *(*)()) F596_3944;
	R2557[154] = (char *(*)()) F597_3944;
	R2557[155] = (char *(*)()) F598_3944;
	R2557[156] = (char *(*)()) F599_3944;
	R2557[157] = (char *(*)()) F600_3944;
	R2557[158] = (char *(*)()) F596_3944;
	R2557[159] = (char *(*)()) F599_3944;
	R2557[160] = (char *(*)()) F596_3944;
	R2557[161] = (char *(*)()) F459_3262;
	R2557[162] = (char *(*)()) F460_3262;
	R2557[163] = (char *(*)()) F461_3262;
	R2557[164] = (char *(*)()) F462_3262;
	R2557[165] = (char *(*)()) F464_3262;
	R2557[166] = (char *(*)()) F463_3262;
	R2557[167] = (char *(*)()) F465_3262;
	R2557[168] = (char *(*)()) F466_3262;
	R2557[169] = (char *(*)()) F467_3262;
	R2557[170] = (char *(*)()) F468_3262;
	R2557[171] = (char *(*)()) F469_3262;
	R2557[172] = (char *(*)()) F470_3262;
	R2557[173] = (char *(*)()) F471_3262;
	R2557[174] = (char *(*)()) F472_3262;
	R2557[175] = (char *(*)()) F473_3262;
	R2557[369] = (char *(*)()) F812_5347;
	R2557[450] = (char *(*)()) F891_6628;
	R2557[452] = (char *(*)()) F894_6869;
	R2557[454] = (char *(*)()) F891_6628;
	R2557[455] = (char *(*)()) F894_6869;
}

EIF_TYPE_INDEX *Y2557_gen_type [486];
EIF_TYPE_INDEX Y2557 [486];
void Y2557_init (void)
{
	egc_routines_types [2557] = Y2557;
	egc_routines_gen_types [2557] = Y2557_gen_type;
	egc_routines_offset [2557] = 412;
	{long i; for (i = 0; i < 109; i++) Y2557[i] = 844;};
	{long i; for (i = 118; i < 133; i++) Y2557[i] = 844;};
	{long i; for (i = 183; i < 206; i++) Y2557[i] = 844;};
	Y2557[399] = 844;
	Y2557[478] = 844;
	{long i; for (i = 480; i < 483; i++) Y2557[i] = 844;};
	{long i; for (i = 484; i < 486; i++) Y2557[i] = 844;};
}

char *(*R2558[456])();
void R2558_init () {
	R2558[0] = (char *(*)()) F443_3142;
	R2558[1] = (char *(*)()) F444_3197;
	R2558[2] = (char *(*)()) F445_3197;
	R2558[3] = (char *(*)()) F446_3197;
	R2558[4] = (char *(*)()) F447_3197;
	R2558[5] = (char *(*)()) F448_3197;
	R2558[6] = (char *(*)()) F449_3197;
	R2558[7] = (char *(*)()) F450_3197;
	R2558[8] = (char *(*)()) F451_3197;
	R2558[9] = (char *(*)()) F452_3197;
	R2558[10] = (char *(*)()) F453_3197;
	R2558[11] = (char *(*)()) F454_3197;
	R2558[12] = (char *(*)()) F455_3197;
	R2558[13] = (char *(*)()) F456_3197;
	R2558[14] = (char *(*)()) F457_3197;
	R2558[15] = (char *(*)()) F458_3197;
	R2558[76] = (char *(*)()) F519_3524;
	R2558[77] = (char *(*)()) F520_3524;
	R2558[78] = (char *(*)()) F521_3524;
	R2558[88] = (char *(*)()) F531_3094;
	R2558[89] = (char *(*)()) F532_3094;
	R2558[90] = (char *(*)()) F533_3094;
	R2558[91] = (char *(*)()) F534_3094;
	R2558[92] = (char *(*)()) F535_3094;
	R2558[93] = (char *(*)()) F536_3094;
	R2558[94] = (char *(*)()) F537_3094;
	R2558[95] = (char *(*)()) F538_3094;
	R2558[96] = (char *(*)()) F539_3094;
	R2558[97] = (char *(*)()) F540_3094;
	R2558[98] = (char *(*)()) F541_3094;
	R2558[99] = (char *(*)()) F542_3094;
	R2558[100] = (char *(*)()) F543_3094;
	R2558[101] = (char *(*)()) F544_3094;
	R2558[102] = (char *(*)()) F545_3094;
	R2558[153] = (char *(*)()) F596_3945;
	R2558[154] = (char *(*)()) F597_3945;
	R2558[155] = (char *(*)()) F598_3945;
	R2558[156] = (char *(*)()) F599_3945;
	R2558[157] = (char *(*)()) F600_3945;
	R2558[158] = (char *(*)()) F596_3945;
	R2558[159] = (char *(*)()) F599_3945;
	R2558[160] = (char *(*)()) F596_3945;
	R2558[161] = (char *(*)()) F604_4094;
	R2558[162] = (char *(*)()) F605_4094;
	R2558[163] = (char *(*)()) F606_4094;
	R2558[164] = (char *(*)()) F607_4094;
	R2558[165] = (char *(*)()) F608_4094;
	R2558[166] = (char *(*)()) F609_4094;
	R2558[167] = (char *(*)()) F610_4094;
	R2558[168] = (char *(*)()) F611_4094;
	R2558[169] = (char *(*)()) F612_4094;
	R2558[170] = (char *(*)()) F613_4094;
	R2558[171] = (char *(*)()) F614_4094;
	R2558[172] = (char *(*)()) F615_4094;
	R2558[173] = (char *(*)()) F616_4094;
	R2558[174] = (char *(*)()) F617_4094;
	R2558[175] = (char *(*)()) F618_4094;
	R2558[369] = (char *(*)()) F812_5346;
	R2558[450] = (char *(*)()) F891_6626;
	R2558[452] = (char *(*)()) F894_6867;
	R2558[454] = (char *(*)()) F891_6626;
	R2558[455] = (char *(*)()) F894_6867;
}

char *(*R2560[456])();
void R2560_init () {
	R2560[0] = (char *(*)()) F443_3146;
	R2560[1] = (char *(*)()) F444_3206;
	R2560[2] = (char *(*)()) F445_3206;
	R2560[3] = (char *(*)()) F446_3206;
	R2560[4] = (char *(*)()) F447_3206;
	R2560[5] = (char *(*)()) F448_3206;
	R2560[6] = (char *(*)()) F449_3206;
	R2560[7] = (char *(*)()) F450_3206;
	R2560[8] = (char *(*)()) F451_3206;
	R2560[9] = (char *(*)()) F452_3206;
	R2560[10] = (char *(*)()) F453_3206;
	R2560[11] = (char *(*)()) F454_3206;
	R2560[12] = (char *(*)()) F455_3206;
	R2560[13] = (char *(*)()) F456_3206;
	R2560[14] = (char *(*)()) F457_3206;
	R2560[15] = (char *(*)()) F458_3206;
	R2560[76] = (char *(*)()) F459_3267;
	R2560[77] = (char *(*)()) F463_3267;
	R2560[78] = (char *(*)()) F472_3267;
	R2560[88] = (char *(*)()) F531_3099;
	R2560[89] = (char *(*)()) F532_3099;
	R2560[90] = (char *(*)()) F533_3099;
	R2560[91] = (char *(*)()) F534_3099;
	R2560[92] = (char *(*)()) F535_3099;
	R2560[93] = (char *(*)()) F536_3099;
	R2560[94] = (char *(*)()) F537_3099;
	R2560[95] = (char *(*)()) F538_3099;
	R2560[96] = (char *(*)()) F539_3099;
	R2560[97] = (char *(*)()) F540_3099;
	R2560[98] = (char *(*)()) F541_3099;
	R2560[99] = (char *(*)()) F542_3099;
	R2560[100] = (char *(*)()) F543_3099;
	R2560[101] = (char *(*)()) F544_3099;
	R2560[102] = (char *(*)()) F545_3099;
	R2560[153] = (char *(*)()) F596_3962;
	R2560[154] = (char *(*)()) F597_3962;
	R2560[155] = (char *(*)()) F598_3962;
	R2560[156] = (char *(*)()) F599_3962;
	R2560[157] = (char *(*)()) F600_3962;
	R2560[158] = (char *(*)()) F596_3962;
	R2560[159] = (char *(*)()) F599_3962;
	R2560[160] = (char *(*)()) F596_3962;
	R2560[161] = (char *(*)()) F604_4100;
	R2560[162] = (char *(*)()) F605_4100;
	R2560[163] = (char *(*)()) F606_4100;
	R2560[164] = (char *(*)()) F607_4100;
	R2560[165] = (char *(*)()) F608_4100;
	R2560[166] = (char *(*)()) F609_4100;
	R2560[167] = (char *(*)()) F610_4100;
	R2560[168] = (char *(*)()) F611_4100;
	R2560[169] = (char *(*)()) F612_4100;
	R2560[170] = (char *(*)()) F613_4100;
	R2560[171] = (char *(*)()) F614_4100;
	R2560[172] = (char *(*)()) F615_4100;
	R2560[173] = (char *(*)()) F616_4100;
	R2560[174] = (char *(*)()) F617_4100;
	R2560[175] = (char *(*)()) F618_4100;
	R2560[369] = (char *(*)()) F812_5344;
	R2560[450] = (char *(*)()) F890_6522;
	R2560[452] = (char *(*)()) F890_6522;
	{long i; for (i = 454; i < 456; i++) R2560[i] = (char *(*)()) F890_6522;}
}

char *(*R2561[15])();
void R2561_init () {
	R2561[0] = (char *(*)()) F531_3082;
	R2561[1] = (char *(*)()) F532_3082;
	R2561[2] = (char *(*)()) F533_3082;
	R2561[3] = (char *(*)()) F534_3082;
	R2561[4] = (char *(*)()) F535_3082;
	R2561[5] = (char *(*)()) F536_3082;
	R2561[6] = (char *(*)()) F537_3082;
	R2561[7] = (char *(*)()) F538_3082;
	R2561[8] = (char *(*)()) F539_3082;
	R2561[9] = (char *(*)()) F540_3082;
	R2561[10] = (char *(*)()) F541_3082;
	R2561[11] = (char *(*)()) F542_3082;
	R2561[12] = (char *(*)()) F543_3082;
	R2561[13] = (char *(*)()) F544_3082;
	R2561[14] = (char *(*)()) F545_3082;
}

char *(*R2562[15])();
void R2562_init () {
	R2562[0] = (char *(*)()) F531_3083;
	R2562[1] = (char *(*)()) F532_3083_2562_122;
	R2562[2] = (char *(*)()) F533_3083_2562_122;
	R2562[3] = (char *(*)()) F534_3083_2562_122;
	R2562[4] = (char *(*)()) F535_3083_2562_122;
	R2562[5] = (char *(*)()) F536_3083_2562_122;
	R2562[6] = (char *(*)()) F537_3083_2562_122;
	R2562[7] = (char *(*)()) F538_3083_2562_122;
	R2562[8] = (char *(*)()) F539_3083_2562_122;
	R2562[9] = (char *(*)()) F540_3083_2562_122;
	R2562[10] = (char *(*)()) F541_3083_2562_122;
	R2562[11] = (char *(*)()) F542_3083_2562_122;
	R2562[12] = (char *(*)()) F543_3083_2562_122;
	R2562[13] = (char *(*)()) F544_3083_2562_122;
	R2562[14] = (char *(*)()) F545_3083_2562_122;
}
static void F532_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F532_3083(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F533_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F533_3083(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F534_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F534_3083(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F535_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F535_3083(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F536_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F536_3083(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F537_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F537_3083(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F538_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F538_3083(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F539_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F539_3083(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F540_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F540_3083(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F541_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F541_3083(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F542_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F542_3083(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F543_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F543_3083(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F544_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F544_3083(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F545_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F545_3083(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R2563[15])();
void R2563_init () {
	R2563[0] = (char *(*)()) F531_3084;
	R2563[1] = (char *(*)()) F532_3084;
	R2563[2] = (char *(*)()) F533_3084;
	R2563[3] = (char *(*)()) F534_3084;
	R2563[4] = (char *(*)()) F535_3084;
	R2563[5] = (char *(*)()) F536_3084;
	R2563[6] = (char *(*)()) F537_3084;
	R2563[7] = (char *(*)()) F538_3084;
	R2563[8] = (char *(*)()) F539_3084;
	R2563[9] = (char *(*)()) F540_3084;
	R2563[10] = (char *(*)()) F541_3084;
	R2563[11] = (char *(*)()) F542_3084;
	R2563[12] = (char *(*)()) F543_3084;
	R2563[13] = (char *(*)()) F544_3084;
	R2563[14] = (char *(*)()) F545_3084;
}

char *(*R2568[15])();
void R2568_init () {
	R2568[0] = (char *(*)()) F531_3090;
	R2568[1] = (char *(*)()) F532_3090;
	R2568[2] = (char *(*)()) F533_3090;
	R2568[3] = (char *(*)()) F534_3090;
	R2568[4] = (char *(*)()) F535_3090;
	R2568[5] = (char *(*)()) F536_3090;
	R2568[6] = (char *(*)()) F537_3090;
	R2568[7] = (char *(*)()) F538_3090;
	R2568[8] = (char *(*)()) F539_3090;
	R2568[9] = (char *(*)()) F540_3090;
	R2568[10] = (char *(*)()) F541_3090;
	R2568[11] = (char *(*)()) F542_3090;
	R2568[12] = (char *(*)()) F543_3090;
	R2568[13] = (char *(*)()) F544_3090;
	R2568[14] = (char *(*)()) F545_3090;
}

char *(*R2570[15])();
void R2570_init () {
	R2570[0] = (char *(*)()) F531_3097;
	R2570[1] = (char *(*)()) F532_3097_2570_323;
	R2570[2] = (char *(*)()) F533_3097_2570_323;
	R2570[3] = (char *(*)()) F534_3097_2570_323;
	R2570[4] = (char *(*)()) F535_3097_2570_323;
	R2570[5] = (char *(*)()) F536_3097_2570_323;
	R2570[6] = (char *(*)()) F537_3097_2570_323;
	R2570[7] = (char *(*)()) F538_3097_2570_323;
	R2570[8] = (char *(*)()) F539_3097_2570_323;
	R2570[9] = (char *(*)()) F540_3097_2570_323;
	R2570[10] = (char *(*)()) F541_3097_2570_323;
	R2570[11] = (char *(*)()) F542_3097_2570_323;
	R2570[12] = (char *(*)()) F543_3097_2570_323;
	R2570[13] = (char *(*)()) F544_3097_2570_323;
	R2570[14] = (char *(*)()) F545_3097_2570_323;
}
static EIF_BOOLEAN F532_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F532_3097(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F533_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F533_3097(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F534_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F534_3097(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F535_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F535_3097(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F536_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F536_3097(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F537_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F537_3097(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F538_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F538_3097(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F539_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F539_3097(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F540_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F540_3097(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F541_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F541_3097(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F542_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F542_3097(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F543_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F543_3097(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F544_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F544_3097(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F545_3097_2570_323 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F545_3097(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}

char *(*R2571[15])();
void R2571_init () {
	R2571[0] = (char *(*)()) F531_3098;
	R2571[1] = (char *(*)()) F532_3098;
	R2571[2] = (char *(*)()) F533_3098;
	R2571[3] = (char *(*)()) F534_3098;
	R2571[4] = (char *(*)()) F535_3098;
	R2571[5] = (char *(*)()) F536_3098;
	R2571[6] = (char *(*)()) F537_3098;
	R2571[7] = (char *(*)()) F538_3098;
	R2571[8] = (char *(*)()) F539_3098;
	R2571[9] = (char *(*)()) F540_3098;
	R2571[10] = (char *(*)()) F541_3098;
	R2571[11] = (char *(*)()) F542_3098;
	R2571[12] = (char *(*)()) F543_3098;
	R2571[13] = (char *(*)()) F544_3098;
	R2571[14] = (char *(*)()) F545_3098;
}

char *(*R2572[15])();
void R2572_init () {
	R2572[0] = (char *(*)()) F531_3100;
	R2572[1] = (char *(*)()) F532_3100_2572_122;
	R2572[2] = (char *(*)()) F533_3100_2572_122;
	R2572[3] = (char *(*)()) F534_3100_2572_122;
	R2572[4] = (char *(*)()) F535_3100_2572_122;
	R2572[5] = (char *(*)()) F536_3100_2572_122;
	R2572[6] = (char *(*)()) F537_3100_2572_122;
	R2572[7] = (char *(*)()) F538_3100_2572_122;
	R2572[8] = (char *(*)()) F539_3100_2572_122;
	R2572[9] = (char *(*)()) F540_3100_2572_122;
	R2572[10] = (char *(*)()) F541_3100_2572_122;
	R2572[11] = (char *(*)()) F542_3100_2572_122;
	R2572[12] = (char *(*)()) F543_3100_2572_122;
	R2572[13] = (char *(*)()) F544_3100_2572_122;
	R2572[14] = (char *(*)()) F545_3100_2572_122;
}
static void F532_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F532_3100(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F533_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F533_3100(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F534_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F534_3100(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F535_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F535_3100(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F536_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F536_3100(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F537_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F537_3100(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F538_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F538_3100(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F539_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F539_3100(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F540_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F540_3100(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F541_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F541_3100(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F542_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F542_3100(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F543_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F543_3100(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F544_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F544_3100(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F545_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F545_3100(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R2573[15])();
void R2573_init () {
	R2573[0] = (char *(*)()) F531_3101;
	R2573[1] = (char *(*)()) F532_3101_2573_122;
	R2573[2] = (char *(*)()) F533_3101_2573_122;
	R2573[3] = (char *(*)()) F534_3101_2573_122;
	R2573[4] = (char *(*)()) F535_3101_2573_122;
	R2573[5] = (char *(*)()) F536_3101_2573_122;
	R2573[6] = (char *(*)()) F537_3101_2573_122;
	R2573[7] = (char *(*)()) F538_3101_2573_122;
	R2573[8] = (char *(*)()) F539_3101_2573_122;
	R2573[9] = (char *(*)()) F540_3101_2573_122;
	R2573[10] = (char *(*)()) F541_3101_2573_122;
	R2573[11] = (char *(*)()) F542_3101_2573_122;
	R2573[12] = (char *(*)()) F543_3101_2573_122;
	R2573[13] = (char *(*)()) F544_3101_2573_122;
	R2573[14] = (char *(*)()) F545_3101_2573_122;
}
static void F532_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F532_3101(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F533_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F533_3101(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F534_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F534_3101(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F535_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F535_3101(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F536_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F536_3101(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F537_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F537_3101(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F538_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F538_3101(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F539_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F539_3101(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F540_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F540_3101(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F541_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F541_3101(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F542_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F542_3101(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F543_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F543_3101(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F544_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F544_3101(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F545_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F545_3101(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R2574[15])();
void R2574_init () {
	R2574[0] = (char *(*)()) F531_3102;
	R2574[1] = (char *(*)()) F532_3102_2574_4;
	R2574[2] = (char *(*)()) F533_3102_2574_4;
	R2574[3] = (char *(*)()) F534_3102_2574_4;
	R2574[4] = (char *(*)()) F535_3102_2574_4;
	R2574[5] = (char *(*)()) F536_3102_2574_4;
	R2574[6] = (char *(*)()) F537_3102_2574_4;
	R2574[7] = (char *(*)()) F538_3102_2574_4;
	R2574[8] = (char *(*)()) F539_3102_2574_4;
	R2574[9] = (char *(*)()) F540_3102_2574_4;
	R2574[10] = (char *(*)()) F541_3102_2574_4;
	R2574[11] = (char *(*)()) F542_3102_2574_4;
	R2574[12] = (char *(*)()) F543_3102_2574_4;
	R2574[13] = (char *(*)()) F544_3102_2574_4;
	R2574[14] = (char *(*)()) F545_3102_2574_4;
}
static void F532_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F532_3102(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F533_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F533_3102(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F534_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F534_3102(Current, *(EIF_POINTER *)arg1);
}
static void F535_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F535_3102(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F536_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F536_3102(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F537_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F537_3102(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F538_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F538_3102(Current, *(EIF_REAL_64 *)arg1);
}
static void F539_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F539_3102(Current, *(EIF_REAL_32 *)arg1);
}
static void F540_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F540_3102(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F541_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F541_3102(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F542_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F542_3102(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F543_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F543_3102(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F544_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F544_3102(Current, *(EIF_BOOLEAN *)arg1);
}
static void F545_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F545_3102(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2576[15])();
void R2576_init () {
	R2576[0] = (char *(*)()) F531_3104;
	R2576[1] = (char *(*)()) F532_3104_2576_134;
	R2576[2] = (char *(*)()) F533_3104_2576_134;
	R2576[3] = (char *(*)()) F534_3104_2576_134;
	R2576[4] = (char *(*)()) F535_3104_2576_134;
	R2576[5] = (char *(*)()) F536_3104_2576_134;
	R2576[6] = (char *(*)()) F537_3104_2576_134;
	R2576[7] = (char *(*)()) F538_3104_2576_134;
	R2576[8] = (char *(*)()) F539_3104_2576_134;
	R2576[9] = (char *(*)()) F540_3104_2576_134;
	R2576[10] = (char *(*)()) F541_3104_2576_134;
	R2576[11] = (char *(*)()) F542_3104_2576_134;
	R2576[12] = (char *(*)()) F543_3104_2576_134;
	R2576[13] = (char *(*)()) F544_3104_2576_134;
	R2576[14] = (char *(*)()) F545_3104_2576_134;
}
static void F532_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F532_3104(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F533_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F533_3104(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F534_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F534_3104(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F535_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F535_3104(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F536_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F536_3104(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F537_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F537_3104(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F538_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F538_3104(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F539_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F539_3104(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F540_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F540_3104(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F541_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F541_3104(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F542_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F542_3104(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F543_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F543_3104(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F544_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F544_3104(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F545_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F545_3104(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}

char *(*R2578[15])();
void R2578_init () {
	R2578[0] = (char *(*)()) F531_3106;
	R2578[1] = (char *(*)()) F532_3106;
	R2578[2] = (char *(*)()) F533_3106;
	R2578[3] = (char *(*)()) F534_3106;
	R2578[4] = (char *(*)()) F535_3106;
	R2578[5] = (char *(*)()) F536_3106;
	R2578[6] = (char *(*)()) F537_3106;
	R2578[7] = (char *(*)()) F538_3106;
	R2578[8] = (char *(*)()) F539_3106;
	R2578[9] = (char *(*)()) F540_3106;
	R2578[10] = (char *(*)()) F541_3106;
	R2578[11] = (char *(*)()) F542_3106;
	R2578[12] = (char *(*)()) F543_3106;
	R2578[13] = (char *(*)()) F544_3106;
	R2578[14] = (char *(*)()) F545_3106;
}

char *(*R2579[15])();
void R2579_init () {
	R2579[0] = (char *(*)()) F531_3107;
	R2579[1] = (char *(*)()) F532_3107;
	R2579[2] = (char *(*)()) F533_3107;
	R2579[3] = (char *(*)()) F534_3107;
	R2579[4] = (char *(*)()) F535_3107;
	R2579[5] = (char *(*)()) F536_3107;
	R2579[6] = (char *(*)()) F537_3107;
	R2579[7] = (char *(*)()) F538_3107;
	R2579[8] = (char *(*)()) F539_3107;
	R2579[9] = (char *(*)()) F540_3107;
	R2579[10] = (char *(*)()) F541_3107;
	R2579[11] = (char *(*)()) F542_3107;
	R2579[12] = (char *(*)()) F543_3107;
	R2579[13] = (char *(*)()) F544_3107;
	R2579[14] = (char *(*)()) F545_3107;
}

char *(*R2580[15])();
void R2580_init () {
	R2580[0] = (char *(*)()) F531_3108;
	R2580[1] = (char *(*)()) F532_3108;
	R2580[2] = (char *(*)()) F533_3108;
	R2580[3] = (char *(*)()) F534_3108;
	R2580[4] = (char *(*)()) F535_3108;
	R2580[5] = (char *(*)()) F536_3108;
	R2580[6] = (char *(*)()) F537_3108;
	R2580[7] = (char *(*)()) F538_3108;
	R2580[8] = (char *(*)()) F539_3108;
	R2580[9] = (char *(*)()) F540_3108;
	R2580[10] = (char *(*)()) F541_3108;
	R2580[11] = (char *(*)()) F542_3108;
	R2580[12] = (char *(*)()) F543_3108;
	R2580[13] = (char *(*)()) F544_3108;
	R2580[14] = (char *(*)()) F545_3108;
}

char *(*R2581[15])();
void R2581_init () {
	R2581[0] = (char *(*)()) F531_3109;
	R2581[1] = (char *(*)()) F532_3109;
	R2581[2] = (char *(*)()) F533_3109;
	R2581[3] = (char *(*)()) F534_3109;
	R2581[4] = (char *(*)()) F535_3109;
	R2581[5] = (char *(*)()) F536_3109;
	R2581[6] = (char *(*)()) F537_3109;
	R2581[7] = (char *(*)()) F538_3109;
	R2581[8] = (char *(*)()) F539_3109;
	R2581[9] = (char *(*)()) F540_3109;
	R2581[10] = (char *(*)()) F541_3109;
	R2581[11] = (char *(*)()) F542_3109;
	R2581[12] = (char *(*)()) F543_3109;
	R2581[13] = (char *(*)()) F544_3109;
	R2581[14] = (char *(*)()) F545_3109;
}

char *(*R2582[15])();
void R2582_init () {
	R2582[0] = (char *(*)()) F531_3110;
	R2582[1] = (char *(*)()) F532_3110;
	R2582[2] = (char *(*)()) F533_3110;
	R2582[3] = (char *(*)()) F534_3110;
	R2582[4] = (char *(*)()) F535_3110;
	R2582[5] = (char *(*)()) F536_3110;
	R2582[6] = (char *(*)()) F537_3110;
	R2582[7] = (char *(*)()) F538_3110;
	R2582[8] = (char *(*)()) F539_3110;
	R2582[9] = (char *(*)()) F540_3110;
	R2582[10] = (char *(*)()) F541_3110;
	R2582[11] = (char *(*)()) F542_3110;
	R2582[12] = (char *(*)()) F543_3110;
	R2582[13] = (char *(*)()) F544_3110;
	R2582[14] = (char *(*)()) F545_3110;
}

char *(*R2583[15])();
void R2583_init () {
	R2583[0] = (char *(*)()) F531_3111;
	R2583[1] = (char *(*)()) F532_3111;
	R2583[2] = (char *(*)()) F533_3111;
	R2583[3] = (char *(*)()) F534_3111;
	R2583[4] = (char *(*)()) F535_3111;
	R2583[5] = (char *(*)()) F536_3111;
	R2583[6] = (char *(*)()) F537_3111;
	R2583[7] = (char *(*)()) F538_3111;
	R2583[8] = (char *(*)()) F539_3111;
	R2583[9] = (char *(*)()) F540_3111;
	R2583[10] = (char *(*)()) F541_3111;
	R2583[11] = (char *(*)()) F542_3111;
	R2583[12] = (char *(*)()) F543_3111;
	R2583[13] = (char *(*)()) F544_3111;
	R2583[14] = (char *(*)()) F545_3111;
}

char *(*R2584[15])();
void R2584_init () {
	R2584[0] = (char *(*)()) F531_3112;
	R2584[1] = (char *(*)()) F532_3112;
	R2584[2] = (char *(*)()) F533_3112;
	R2584[3] = (char *(*)()) F534_3112;
	R2584[4] = (char *(*)()) F535_3112;
	R2584[5] = (char *(*)()) F536_3112;
	R2584[6] = (char *(*)()) F537_3112;
	R2584[7] = (char *(*)()) F538_3112;
	R2584[8] = (char *(*)()) F539_3112;
	R2584[9] = (char *(*)()) F540_3112;
	R2584[10] = (char *(*)()) F541_3112;
	R2584[11] = (char *(*)()) F542_3112;
	R2584[12] = (char *(*)()) F543_3112;
	R2584[13] = (char *(*)()) F544_3112;
	R2584[14] = (char *(*)()) F545_3112;
}

char *(*R2586[15])();
void R2586_init () {
	R2586[0] = (char *(*)()) F531_3114;
	R2586[1] = (char *(*)()) F532_3114;
	R2586[2] = (char *(*)()) F533_3114;
	R2586[3] = (char *(*)()) F534_3114;
	R2586[4] = (char *(*)()) F535_3114;
	R2586[5] = (char *(*)()) F536_3114;
	R2586[6] = (char *(*)()) F537_3114;
	R2586[7] = (char *(*)()) F538_3114;
	R2586[8] = (char *(*)()) F539_3114;
	R2586[9] = (char *(*)()) F540_3114;
	R2586[10] = (char *(*)()) F541_3114;
	R2586[11] = (char *(*)()) F542_3114;
	R2586[12] = (char *(*)()) F543_3114;
	R2586[13] = (char *(*)()) F544_3114;
	R2586[14] = (char *(*)()) F545_3114;
}

char *(*R2589[15])();
void R2589_init () {
	R2589[0] = (char *(*)()) F531_3117;
	R2589[1] = (char *(*)()) F532_3117;
	R2589[2] = (char *(*)()) F533_3117;
	R2589[3] = (char *(*)()) F534_3117;
	R2589[4] = (char *(*)()) F535_3117;
	R2589[5] = (char *(*)()) F536_3117;
	R2589[6] = (char *(*)()) F537_3117;
	R2589[7] = (char *(*)()) F538_3117;
	R2589[8] = (char *(*)()) F539_3117;
	R2589[9] = (char *(*)()) F540_3117;
	R2589[10] = (char *(*)()) F541_3117;
	R2589[11] = (char *(*)()) F542_3117;
	R2589[12] = (char *(*)()) F543_3117;
	R2589[13] = (char *(*)()) F544_3117;
	R2589[14] = (char *(*)()) F545_3117;
}

char *(*R2590[15])();
void R2590_init () {
	R2590[0] = (char *(*)()) F531_3118;
	R2590[1] = (char *(*)()) F532_3118_2590_106;
	R2590[2] = (char *(*)()) F533_3118_2590_106;
	R2590[3] = (char *(*)()) F534_3118_2590_106;
	R2590[4] = (char *(*)()) F535_3118_2590_106;
	R2590[5] = (char *(*)()) F536_3118_2590_106;
	R2590[6] = (char *(*)()) F537_3118_2590_106;
	R2590[7] = (char *(*)()) F538_3118_2590_106;
	R2590[8] = (char *(*)()) F539_3118_2590_106;
	R2590[9] = (char *(*)()) F540_3118_2590_106;
	R2590[10] = (char *(*)()) F541_3118_2590_106;
	R2590[11] = (char *(*)()) F542_3118_2590_106;
	R2590[12] = (char *(*)()) F543_3118_2590_106;
	R2590[13] = (char *(*)()) F544_3118_2590_106;
	R2590[14] = (char *(*)()) F545_3118_2590_106;
}
static EIF_REFERENCE F532_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F532_3118(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_REFERENCE F533_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F533_3118(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_REFERENCE F534_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F534_3118(Current, *(EIF_POINTER *)arg1, arg2);
}
static EIF_REFERENCE F535_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F535_3118(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F536_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F536_3118(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_REFERENCE F537_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F537_3118(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static EIF_REFERENCE F538_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F538_3118(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F539_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F539_3118(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F540_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F540_3118(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static EIF_REFERENCE F541_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F541_3118(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static EIF_REFERENCE F542_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F542_3118(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F543_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F543_3118(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static EIF_REFERENCE F544_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F544_3118(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static EIF_REFERENCE F545_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F545_3118(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R2592[15])();
void R2592_init () {
	R2592[0] = (char *(*)()) F531_3120;
	R2592[1] = (char *(*)()) F532_3120;
	R2592[2] = (char *(*)()) F533_3120;
	R2592[3] = (char *(*)()) F534_3120;
	R2592[4] = (char *(*)()) F535_3120;
	R2592[5] = (char *(*)()) F536_3120;
	R2592[6] = (char *(*)()) F537_3120;
	R2592[7] = (char *(*)()) F538_3120;
	R2592[8] = (char *(*)()) F539_3120;
	R2592[9] = (char *(*)()) F540_3120;
	R2592[10] = (char *(*)()) F541_3120;
	R2592[11] = (char *(*)()) F542_3120;
	R2592[12] = (char *(*)()) F543_3120;
	R2592[13] = (char *(*)()) F544_3120;
	R2592[14] = (char *(*)()) F545_3120;
}

char *(*R2594[15])();
void R2594_init () {
	R2594[0] = (char *(*)()) F531_3122;
	R2594[1] = (char *(*)()) F532_3122;
	R2594[2] = (char *(*)()) F533_3122;
	R2594[3] = (char *(*)()) F534_3122;
	R2594[4] = (char *(*)()) F535_3122;
	R2594[5] = (char *(*)()) F536_3122;
	R2594[6] = (char *(*)()) F537_3122;
	R2594[7] = (char *(*)()) F538_3122;
	R2594[8] = (char *(*)()) F539_3122;
	R2594[9] = (char *(*)()) F540_3122;
	R2594[10] = (char *(*)()) F541_3122;
	R2594[11] = (char *(*)()) F542_3122;
	R2594[12] = (char *(*)()) F543_3122;
	R2594[13] = (char *(*)()) F544_3122;
	R2594[14] = (char *(*)()) F545_3122;
}

char *(*R2595[15])();
void R2595_init () {
	R2595[0] = (char *(*)()) F531_3123;
	R2595[1] = (char *(*)()) F532_3123;
	R2595[2] = (char *(*)()) F533_3123;
	R2595[3] = (char *(*)()) F534_3123;
	R2595[4] = (char *(*)()) F535_3123;
	R2595[5] = (char *(*)()) F536_3123;
	R2595[6] = (char *(*)()) F537_3123;
	R2595[7] = (char *(*)()) F538_3123;
	R2595[8] = (char *(*)()) F539_3123;
	R2595[9] = (char *(*)()) F540_3123;
	R2595[10] = (char *(*)()) F541_3123;
	R2595[11] = (char *(*)()) F542_3123;
	R2595[12] = (char *(*)()) F543_3123;
	R2595[13] = (char *(*)()) F544_3123;
	R2595[14] = (char *(*)()) F545_3123;
}

char *(*R2596[15])();
void R2596_init () {
	R2596[0] = (char *(*)()) F531_3124;
	R2596[1] = (char *(*)()) F532_3124;
	R2596[2] = (char *(*)()) F533_3124;
	R2596[3] = (char *(*)()) F534_3124;
	R2596[4] = (char *(*)()) F535_3124;
	R2596[5] = (char *(*)()) F536_3124;
	R2596[6] = (char *(*)()) F537_3124;
	R2596[7] = (char *(*)()) F538_3124;
	R2596[8] = (char *(*)()) F539_3124;
	R2596[9] = (char *(*)()) F540_3124;
	R2596[10] = (char *(*)()) F541_3124;
	R2596[11] = (char *(*)()) F542_3124;
	R2596[12] = (char *(*)()) F543_3124;
	R2596[13] = (char *(*)()) F544_3124;
	R2596[14] = (char *(*)()) F545_3124;
}

char *(*R2597[15])();
void R2597_init () {
	R2597[0] = (char *(*)()) F531_3125;
	R2597[1] = (char *(*)()) F532_3125;
	R2597[2] = (char *(*)()) F533_3125;
	R2597[3] = (char *(*)()) F534_3125;
	R2597[4] = (char *(*)()) F535_3125;
	R2597[5] = (char *(*)()) F536_3125;
	R2597[6] = (char *(*)()) F537_3125;
	R2597[7] = (char *(*)()) F538_3125;
	R2597[8] = (char *(*)()) F539_3125;
	R2597[9] = (char *(*)()) F540_3125;
	R2597[10] = (char *(*)()) F541_3125;
	R2597[11] = (char *(*)()) F542_3125;
	R2597[12] = (char *(*)()) F543_3125;
	R2597[13] = (char *(*)()) F544_3125;
	R2597[14] = (char *(*)()) F545_3125;
}

char *(*R2601[15])();
void R2601_init () {
	R2601[0] = (char *(*)()) F531_3130;
	R2601[1] = (char *(*)()) F532_3130;
	R2601[2] = (char *(*)()) F533_3130;
	R2601[3] = (char *(*)()) F534_3130;
	R2601[4] = (char *(*)()) F535_3130;
	R2601[5] = (char *(*)()) F536_3130;
	R2601[6] = (char *(*)()) F537_3130;
	R2601[7] = (char *(*)()) F538_3130;
	R2601[8] = (char *(*)()) F539_3130;
	R2601[9] = (char *(*)()) F540_3130;
	R2601[10] = (char *(*)()) F541_3130;
	R2601[11] = (char *(*)()) F542_3130;
	R2601[12] = (char *(*)()) F543_3130;
	R2601[13] = (char *(*)()) F544_3130;
	R2601[14] = (char *(*)()) F545_3130;
}

char *(*R2627[15])();
void R2627_init () {
	R2627[0] = (char *(*)()) F444_3185;
	R2627[1] = (char *(*)()) F445_3185;
	R2627[2] = (char *(*)()) F446_3185;
	R2627[3] = (char *(*)()) F447_3185;
	R2627[4] = (char *(*)()) F448_3185;
	R2627[5] = (char *(*)()) F449_3185;
	R2627[6] = (char *(*)()) F450_3185;
	R2627[7] = (char *(*)()) F451_3185;
	R2627[8] = (char *(*)()) F452_3185;
	R2627[9] = (char *(*)()) F453_3185;
	R2627[10] = (char *(*)()) F454_3185;
	R2627[11] = (char *(*)()) F455_3185;
	R2627[12] = (char *(*)()) F456_3185;
	R2627[13] = (char *(*)()) F457_3185;
	R2627[14] = (char *(*)()) F458_3185;
}

char *(*R2628[15])();
void R2628_init () {
	R2628[0] = (char *(*)()) F444_3186;
	R2628[1] = (char *(*)()) F445_3186_2628_134;
	R2628[2] = (char *(*)()) F446_3186_2628_134;
	R2628[3] = (char *(*)()) F447_3186_2628_134;
	R2628[4] = (char *(*)()) F448_3186_2628_134;
	R2628[5] = (char *(*)()) F449_3186_2628_134;
	R2628[6] = (char *(*)()) F450_3186_2628_134;
	R2628[7] = (char *(*)()) F451_3186_2628_134;
	R2628[8] = (char *(*)()) F452_3186_2628_134;
	R2628[9] = (char *(*)()) F453_3186_2628_134;
	R2628[10] = (char *(*)()) F454_3186_2628_134;
	R2628[11] = (char *(*)()) F455_3186_2628_134;
	R2628[12] = (char *(*)()) F456_3186_2628_134;
	R2628[13] = (char *(*)()) F457_3186_2628_134;
	R2628[14] = (char *(*)()) F458_3186_2628_134;
}
static void F445_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F445_3186(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F446_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F446_3186(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F447_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F447_3186(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F448_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F448_3186(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F449_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F449_3186(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F450_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F450_3186(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F451_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F451_3186(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F452_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F452_3186(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F453_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F453_3186(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F454_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F454_3186(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F455_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F455_3186(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F456_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F456_3186(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F457_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F457_3186(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F458_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F458_3186(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}

char *(*R2631[15])();
void R2631_init () {
	R2631[0] = (char *(*)()) F444_3189;
	R2631[1] = (char *(*)()) F445_3189;
	R2631[2] = (char *(*)()) F446_3189;
	R2631[3] = (char *(*)()) F447_3189;
	R2631[4] = (char *(*)()) F448_3189;
	R2631[5] = (char *(*)()) F449_3189;
	R2631[6] = (char *(*)()) F450_3189;
	R2631[7] = (char *(*)()) F451_3189;
	R2631[8] = (char *(*)()) F452_3189;
	R2631[9] = (char *(*)()) F453_3189;
	R2631[10] = (char *(*)()) F454_3189;
	R2631[11] = (char *(*)()) F455_3189;
	R2631[12] = (char *(*)()) F456_3189;
	R2631[13] = (char *(*)()) F457_3189;
	R2631[14] = (char *(*)()) F458_3189;
}

char *(*R2634[15])();
void R2634_init () {
	R2634[0] = (char *(*)()) F444_3202;
	R2634[1] = (char *(*)()) F445_3202;
	R2634[2] = (char *(*)()) F446_3202;
	R2634[3] = (char *(*)()) F447_3202;
	R2634[4] = (char *(*)()) F448_3202;
	R2634[5] = (char *(*)()) F449_3202;
	R2634[6] = (char *(*)()) F450_3202;
	R2634[7] = (char *(*)()) F451_3202;
	R2634[8] = (char *(*)()) F452_3202;
	R2634[9] = (char *(*)()) F453_3202;
	R2634[10] = (char *(*)()) F454_3202;
	R2634[11] = (char *(*)()) F455_3202;
	R2634[12] = (char *(*)()) F456_3202;
	R2634[13] = (char *(*)()) F457_3202;
	R2634[14] = (char *(*)()) F458_3202;
}

char *(*R2635[15])();
void R2635_init () {
	R2635[0] = (char *(*)()) F444_3203;
	R2635[1] = (char *(*)()) F445_3203_2635_2;
	R2635[2] = (char *(*)()) F446_3203_2635_2;
	R2635[3] = (char *(*)()) F447_3203_2635_2;
	R2635[4] = (char *(*)()) F448_3203_2635_2;
	R2635[5] = (char *(*)()) F449_3203_2635_2;
	R2635[6] = (char *(*)()) F450_3203_2635_2;
	R2635[7] = (char *(*)()) F451_3203_2635_2;
	R2635[8] = (char *(*)()) F452_3203_2635_2;
	R2635[9] = (char *(*)()) F453_3203_2635_2;
	R2635[10] = (char *(*)()) F454_3203_2635_2;
	R2635[11] = (char *(*)()) F455_3203_2635_2;
	R2635[12] = (char *(*)()) F456_3203_2635_2;
	R2635[13] = (char *(*)()) F457_3203_2635_2;
	R2635[14] = (char *(*)()) F458_3203_2635_2;
}
static EIF_BOOLEAN F445_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F445_3203(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F446_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F446_3203(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F447_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F447_3203(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F448_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F448_3203(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F449_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F449_3203(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F450_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F450_3203(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F451_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F451_3203(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F452_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F452_3203(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F453_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F453_3203(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F454_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F454_3203(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F455_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F455_3203(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F456_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F456_3203(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F457_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F457_3203(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F458_3203_2635_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F458_3203(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2636[15])();
void R2636_init () {
	R2636[0] = (char *(*)()) F444_3205;
	R2636[1] = (char *(*)()) F445_3205;
	R2636[2] = (char *(*)()) F446_3205;
	R2636[3] = (char *(*)()) F447_3205;
	R2636[4] = (char *(*)()) F448_3205;
	R2636[5] = (char *(*)()) F449_3205;
	R2636[6] = (char *(*)()) F450_3205;
	R2636[7] = (char *(*)()) F451_3205;
	R2636[8] = (char *(*)()) F452_3205;
	R2636[9] = (char *(*)()) F453_3205;
	R2636[10] = (char *(*)()) F454_3205;
	R2636[11] = (char *(*)()) F455_3205;
	R2636[12] = (char *(*)()) F456_3205;
	R2636[13] = (char *(*)()) F457_3205;
	R2636[14] = (char *(*)()) F458_3205;
}

char *(*R2641[15])();
void R2641_init () {
	R2641[0] = (char *(*)()) F444_3215;
	R2641[1] = (char *(*)()) F445_3215;
	R2641[2] = (char *(*)()) F446_3215;
	R2641[3] = (char *(*)()) F447_3215;
	R2641[4] = (char *(*)()) F448_3215;
	R2641[5] = (char *(*)()) F449_3215;
	R2641[6] = (char *(*)()) F450_3215;
	R2641[7] = (char *(*)()) F451_3215;
	R2641[8] = (char *(*)()) F452_3215;
	R2641[9] = (char *(*)()) F453_3215;
	R2641[10] = (char *(*)()) F454_3215;
	R2641[11] = (char *(*)()) F455_3215;
	R2641[12] = (char *(*)()) F456_3215;
	R2641[13] = (char *(*)()) F457_3215;
	R2641[14] = (char *(*)()) F458_3215;
}

char *(*R2648[15])();
void R2648_init () {
	R2648[0] = (char *(*)()) F444_3223;
	R2648[1] = (char *(*)()) F445_3223;
	R2648[2] = (char *(*)()) F446_3223;
	R2648[3] = (char *(*)()) F447_3223;
	R2648[4] = (char *(*)()) F448_3223;
	R2648[5] = (char *(*)()) F449_3223;
	R2648[6] = (char *(*)()) F450_3223;
	R2648[7] = (char *(*)()) F451_3223;
	R2648[8] = (char *(*)()) F452_3223;
	R2648[9] = (char *(*)()) F453_3223;
	R2648[10] = (char *(*)()) F454_3223;
	R2648[11] = (char *(*)()) F455_3223;
	R2648[12] = (char *(*)()) F456_3223;
	R2648[13] = (char *(*)()) F457_3223;
	R2648[14] = (char *(*)()) F458_3223;
}

char *(*R2650[15])();
void R2650_init () {
	R2650[0] = (char *(*)()) F444_3225;
	R2650[1] = (char *(*)()) F445_3225;
	R2650[2] = (char *(*)()) F446_3225;
	R2650[3] = (char *(*)()) F447_3225;
	R2650[4] = (char *(*)()) F448_3225;
	R2650[5] = (char *(*)()) F449_3225;
	R2650[6] = (char *(*)()) F450_3225;
	R2650[7] = (char *(*)()) F451_3225;
	R2650[8] = (char *(*)()) F452_3225;
	R2650[9] = (char *(*)()) F453_3225;
	R2650[10] = (char *(*)()) F454_3225;
	R2650[11] = (char *(*)()) F455_3225;
	R2650[12] = (char *(*)()) F456_3225;
	R2650[13] = (char *(*)()) F457_3225;
	R2650[14] = (char *(*)()) F458_3225;
}

char *(*R2651[15])();
void R2651_init () {
	R2651[0] = (char *(*)()) F444_3226;
	R2651[1] = (char *(*)()) F445_3226;
	R2651[2] = (char *(*)()) F446_3226;
	R2651[3] = (char *(*)()) F447_3226;
	R2651[4] = (char *(*)()) F448_3226;
	R2651[5] = (char *(*)()) F449_3226;
	R2651[6] = (char *(*)()) F450_3226;
	R2651[7] = (char *(*)()) F451_3226;
	R2651[8] = (char *(*)()) F452_3226;
	R2651[9] = (char *(*)()) F453_3226;
	R2651[10] = (char *(*)()) F454_3226;
	R2651[11] = (char *(*)()) F455_3226;
	R2651[12] = (char *(*)()) F456_3226;
	R2651[13] = (char *(*)()) F457_3226;
	R2651[14] = (char *(*)()) F458_3226;
}

char *(*R2655[15])();
void R2655_init () {
	R2655[0] = (char *(*)()) F444_3231;
	R2655[1] = (char *(*)()) F445_3231_2655_134;
	R2655[2] = (char *(*)()) F446_3231_2655_134;
	R2655[3] = (char *(*)()) F447_3231_2655_134;
	R2655[4] = (char *(*)()) F448_3231_2655_134;
	R2655[5] = (char *(*)()) F449_3231_2655_134;
	R2655[6] = (char *(*)()) F450_3231_2655_134;
	R2655[7] = (char *(*)()) F451_3231_2655_134;
	R2655[8] = (char *(*)()) F452_3231_2655_134;
	R2655[9] = (char *(*)()) F453_3231_2655_134;
	R2655[10] = (char *(*)()) F454_3231_2655_134;
	R2655[11] = (char *(*)()) F455_3231_2655_134;
	R2655[12] = (char *(*)()) F456_3231_2655_134;
	R2655[13] = (char *(*)()) F457_3231_2655_134;
	R2655[14] = (char *(*)()) F458_3231_2655_134;
}
static void F445_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F445_3231(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F446_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F446_3231(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F447_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F447_3231(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F448_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F448_3231(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F449_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F449_3231(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F450_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F450_3231(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F451_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F451_3231(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F452_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F452_3231(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F453_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F453_3231(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F454_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F454_3231(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F455_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F455_3231(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F456_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F456_3231(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F457_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F457_3231(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F458_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F458_3231(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}

char *(*R2657[15])();
void R2657_init () {
	R2657[0] = (char *(*)()) F444_3234;
	R2657[1] = (char *(*)()) F445_3234;
	R2657[2] = (char *(*)()) F446_3234;
	R2657[3] = (char *(*)()) F447_3234;
	R2657[4] = (char *(*)()) F448_3234;
	R2657[5] = (char *(*)()) F449_3234;
	R2657[6] = (char *(*)()) F450_3234;
	R2657[7] = (char *(*)()) F451_3234;
	R2657[8] = (char *(*)()) F452_3234;
	R2657[9] = (char *(*)()) F453_3234;
	R2657[10] = (char *(*)()) F454_3234;
	R2657[11] = (char *(*)()) F455_3234;
	R2657[12] = (char *(*)()) F456_3234;
	R2657[13] = (char *(*)()) F457_3234;
	R2657[14] = (char *(*)()) F458_3234;
}

char *(*R2661[15])();
void R2661_init () {
	R2661[0] = (char *(*)()) F444_3240;
	R2661[1] = (char *(*)()) F445_3240;
	R2661[2] = (char *(*)()) F446_3240;
	R2661[3] = (char *(*)()) F447_3240;
	R2661[4] = (char *(*)()) F448_3240;
	R2661[5] = (char *(*)()) F449_3240;
	R2661[6] = (char *(*)()) F450_3240;
	R2661[7] = (char *(*)()) F451_3240;
	R2661[8] = (char *(*)()) F452_3240;
	R2661[9] = (char *(*)()) F453_3240;
	R2661[10] = (char *(*)()) F454_3240;
	R2661[11] = (char *(*)()) F455_3240;
	R2661[12] = (char *(*)()) F456_3240;
	R2661[13] = (char *(*)()) F457_3240;
	R2661[14] = (char *(*)()) F458_3240;
}

char *(*R2662[15])();
void R2662_init () {
	R2662[0] = (char *(*)()) F444_3243;
	R2662[1] = (char *(*)()) F445_3243;
	R2662[2] = (char *(*)()) F446_3243;
	R2662[3] = (char *(*)()) F447_3243;
	R2662[4] = (char *(*)()) F448_3243;
	R2662[5] = (char *(*)()) F449_3243;
	R2662[6] = (char *(*)()) F450_3243;
	R2662[7] = (char *(*)()) F451_3243;
	R2662[8] = (char *(*)()) F452_3243;
	R2662[9] = (char *(*)()) F453_3243;
	R2662[10] = (char *(*)()) F454_3243;
	R2662[11] = (char *(*)()) F455_3243;
	R2662[12] = (char *(*)()) F456_3243;
	R2662[13] = (char *(*)()) F457_3243;
	R2662[14] = (char *(*)()) F458_3243;
}

char *(*R2676[100])();
void R2676_init () {
	R2676[0] = (char *(*)()) F519_3518;
	R2676[1] = (char *(*)()) F520_3518_2676_1;
	R2676[2] = (char *(*)()) F521_3518_2676_1;
	R2676[85] = (char *(*)()) F604_4081;
	R2676[86] = (char *(*)()) F605_4081_2676_1;
	R2676[87] = (char *(*)()) F606_4081_2676_1;
	R2676[88] = (char *(*)()) F607_4081_2676_1;
	R2676[89] = (char *(*)()) F608_4081_2676_1;
	R2676[90] = (char *(*)()) F609_4081_2676_1;
	R2676[91] = (char *(*)()) F610_4081_2676_1;
	R2676[92] = (char *(*)()) F611_4081_2676_1;
	R2676[93] = (char *(*)()) F612_4081_2676_1;
	R2676[94] = (char *(*)()) F613_4081_2676_1;
	R2676[95] = (char *(*)()) F614_4081_2676_1;
	R2676[96] = (char *(*)()) F615_4081_2676_1;
	R2676[97] = (char *(*)()) F616_4081_2676_1;
	R2676[98] = (char *(*)()) F617_4081_2676_1;
	R2676[99] = (char *(*)()) F618_4081_2676_1;
}
static EIF_REFERENCE F520_3518_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F520_3518(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F521_3518_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F521_3518(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F605_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F605_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F606_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F606_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F607_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F607_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(883, 0x00).id, 883, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F608_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F608_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F609_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F609_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F610_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F610_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(823, 0x00).id, 823, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F611_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F611_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F612_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F612_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(817, 0x00).id, 817, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F613_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F613_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(814, 0x00).id, 814, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F614_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F614_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F615_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F615_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F616_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F616_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(826, 0x00).id, 826, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F617_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F617_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F618_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F618_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(820, 0x00).id, 820, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R2677[100])();
void R2677_init () {
	R2677[0] = (char *(*)()) F519_3519;
	R2677[1] = (char *(*)()) F520_3519_2677_1;
	R2677[2] = (char *(*)()) F521_3519_2677_1;
	R2677[85] = (char *(*)()) F604_4082;
	R2677[86] = (char *(*)()) F605_4082_2677_1;
	R2677[87] = (char *(*)()) F606_4082_2677_1;
	R2677[88] = (char *(*)()) F607_4082_2677_1;
	R2677[89] = (char *(*)()) F608_4082_2677_1;
	R2677[90] = (char *(*)()) F609_4082_2677_1;
	R2677[91] = (char *(*)()) F610_4082_2677_1;
	R2677[92] = (char *(*)()) F611_4082_2677_1;
	R2677[93] = (char *(*)()) F612_4082_2677_1;
	R2677[94] = (char *(*)()) F613_4082_2677_1;
	R2677[95] = (char *(*)()) F614_4082_2677_1;
	R2677[96] = (char *(*)()) F615_4082_2677_1;
	R2677[97] = (char *(*)()) F616_4082_2677_1;
	R2677[98] = (char *(*)()) F617_4082_2677_1;
	R2677[99] = (char *(*)()) F618_4082_2677_1;
}
static EIF_REFERENCE F520_3519_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F520_3519(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F521_3519_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F521_3519(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F605_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F605_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F606_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F606_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F607_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F607_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(883, 0x00).id, 883, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F608_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F608_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F609_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F609_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F610_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F610_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(823, 0x00).id, 823, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F611_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F611_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F612_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F612_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(817, 0x00).id, 817, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F613_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F613_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(814, 0x00).id, 814, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F614_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F614_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F615_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F615_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F616_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F616_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(826, 0x00).id, 826, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F617_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F617_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F618_4082_2677_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F618_4082(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(820, 0x00).id, 820, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R2678[100])();
void R2678_init () {
	R2678[0] = (char *(*)()) F519_3538;
	R2678[1] = (char *(*)()) F520_3538;
	R2678[2] = (char *(*)()) F521_3538;
	R2678[85] = (char *(*)()) F604_4103;
	R2678[86] = (char *(*)()) F605_4103;
	R2678[87] = (char *(*)()) F606_4103;
	R2678[88] = (char *(*)()) F607_4103;
	R2678[89] = (char *(*)()) F608_4103;
	R2678[90] = (char *(*)()) F609_4103;
	R2678[91] = (char *(*)()) F610_4103;
	R2678[92] = (char *(*)()) F611_4103;
	R2678[93] = (char *(*)()) F612_4103;
	R2678[94] = (char *(*)()) F613_4103;
	R2678[95] = (char *(*)()) F614_4103;
	R2678[96] = (char *(*)()) F615_4103;
	R2678[97] = (char *(*)()) F616_4103;
	R2678[98] = (char *(*)()) F617_4103;
	R2678[99] = (char *(*)()) F618_4103;
}

char *(*R2679[100])();
void R2679_init () {
	R2679[0] = (char *(*)()) F519_3539;
	R2679[1] = (char *(*)()) F520_3539;
	R2679[2] = (char *(*)()) F521_3539;
	R2679[85] = (char *(*)()) F604_4108;
	R2679[86] = (char *(*)()) F605_4108;
	R2679[87] = (char *(*)()) F606_4108;
	R2679[88] = (char *(*)()) F607_4108;
	R2679[89] = (char *(*)()) F608_4108;
	R2679[90] = (char *(*)()) F609_4108;
	R2679[91] = (char *(*)()) F610_4108;
	R2679[92] = (char *(*)()) F611_4108;
	R2679[93] = (char *(*)()) F612_4108;
	R2679[94] = (char *(*)()) F613_4108;
	R2679[95] = (char *(*)()) F614_4108;
	R2679[96] = (char *(*)()) F615_4108;
	R2679[97] = (char *(*)()) F616_4108;
	R2679[98] = (char *(*)()) F617_4108;
	R2679[99] = (char *(*)()) F618_4108;
}

char *(*R2680[100])();
void R2680_init () {
	R2680[0] = (char *(*)()) F519_3529;
	R2680[1] = (char *(*)()) F520_3529;
	R2680[2] = (char *(*)()) F521_3529;
	R2680[85] = (char *(*)()) F459_3268;
	R2680[86] = (char *(*)()) F460_3268;
	R2680[87] = (char *(*)()) F461_3268;
	R2680[88] = (char *(*)()) F462_3268;
	R2680[89] = (char *(*)()) F464_3268;
	R2680[90] = (char *(*)()) F463_3268;
	R2680[91] = (char *(*)()) F465_3268;
	R2680[92] = (char *(*)()) F466_3268;
	R2680[93] = (char *(*)()) F467_3268;
	R2680[94] = (char *(*)()) F468_3268;
	R2680[95] = (char *(*)()) F469_3268;
	R2680[96] = (char *(*)()) F470_3268;
	R2680[97] = (char *(*)()) F471_3268;
	R2680[98] = (char *(*)()) F472_3268;
	R2680[99] = (char *(*)()) F473_3268;
}

char *(*R2681[100])();
void R2681_init () {
	R2681[0] = (char *(*)()) F519_3530;
	R2681[1] = (char *(*)()) F520_3530;
	R2681[2] = (char *(*)()) F521_3530;
	R2681[85] = (char *(*)()) F459_3269;
	R2681[86] = (char *(*)()) F460_3269;
	R2681[87] = (char *(*)()) F461_3269;
	R2681[88] = (char *(*)()) F462_3269;
	R2681[89] = (char *(*)()) F464_3269;
	R2681[90] = (char *(*)()) F463_3269;
	R2681[91] = (char *(*)()) F465_3269;
	R2681[92] = (char *(*)()) F466_3269;
	R2681[93] = (char *(*)()) F467_3269;
	R2681[94] = (char *(*)()) F468_3269;
	R2681[95] = (char *(*)()) F469_3269;
	R2681[96] = (char *(*)()) F470_3269;
	R2681[97] = (char *(*)()) F471_3269;
	R2681[98] = (char *(*)()) F472_3269;
	R2681[99] = (char *(*)()) F473_3269;
}

char *(*R2682[100])();
void R2682_init () {
	R2682[0] = (char *(*)()) F459_3271;
	R2682[1] = (char *(*)()) F463_3271;
	R2682[2] = (char *(*)()) F472_3271;
	R2682[85] = (char *(*)()) F459_3271;
	R2682[86] = (char *(*)()) F460_3271;
	R2682[87] = (char *(*)()) F461_3271;
	R2682[88] = (char *(*)()) F462_3271;
	R2682[89] = (char *(*)()) F464_3271;
	R2682[90] = (char *(*)()) F463_3271;
	R2682[91] = (char *(*)()) F465_3271;
	R2682[92] = (char *(*)()) F466_3271;
	R2682[93] = (char *(*)()) F467_3271;
	R2682[94] = (char *(*)()) F468_3271;
	R2682[95] = (char *(*)()) F469_3271;
	R2682[96] = (char *(*)()) F470_3271;
	R2682[97] = (char *(*)()) F471_3271;
	R2682[98] = (char *(*)()) F472_3271;
	R2682[99] = (char *(*)()) F473_3271;
}

char *(*R2686[100])();
void R2686_init () {
	R2686[0] = (char *(*)()) F367_2603;
	R2686[1] = (char *(*)()) F371_2603_2686_137;
	R2686[2] = (char *(*)()) F381_2603_2686_137;
	R2686[85] = (char *(*)()) F367_2603;
	R2686[86] = (char *(*)()) F369_2603_2686_137;
	R2686[87] = (char *(*)()) F370_2603_2686_137;
	R2686[88] = (char *(*)()) F373_2603_2686_137;
	R2686[89] = (char *(*)()) F374_2603_2686_137;
	R2686[90] = (char *(*)()) F371_2603_2686_137;
	R2686[91] = (char *(*)()) F368_2603_2686_137;
	R2686[92] = (char *(*)()) F375_2603_2686_137;
	R2686[93] = (char *(*)()) F376_2603_2686_137;
	R2686[94] = (char *(*)()) F377_2603_2686_137;
	R2686[95] = (char *(*)()) F378_2603_2686_137;
	R2686[96] = (char *(*)()) F379_2603_2686_137;
	R2686[97] = (char *(*)()) F380_2603_2686_137;
	R2686[98] = (char *(*)()) F381_2603_2686_137;
	R2686[99] = (char *(*)()) F372_2603_2686_137;
}
static EIF_INTEGER_32 F371_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F371_2603(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F381_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F381_2603(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static EIF_INTEGER_32 F369_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F369_2603(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_INTEGER_32 F370_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F370_2603(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F373_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F373_2603(Current, *(EIF_POINTER *)arg1, arg2);
}
static EIF_INTEGER_32 F374_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F374_2603(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F368_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F368_2603(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F375_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F375_2603(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F376_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F376_2603(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F377_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F377_2603(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F378_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F378_2603(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static EIF_INTEGER_32 F379_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F379_2603(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F380_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F380_2603(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F372_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F372_2603(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R2687[100])();
void R2687_init () {
	R2687[0] = (char *(*)()) F367_2602;
	R2687[1] = (char *(*)()) F371_2602_2687_2;
	R2687[2] = (char *(*)()) F381_2602_2687_2;
	R2687[85] = (char *(*)()) F367_2602;
	R2687[86] = (char *(*)()) F369_2602_2687_2;
	R2687[87] = (char *(*)()) F370_2602_2687_2;
	R2687[88] = (char *(*)()) F373_2602_2687_2;
	R2687[89] = (char *(*)()) F374_2602_2687_2;
	R2687[90] = (char *(*)()) F371_2602_2687_2;
	R2687[91] = (char *(*)()) F368_2602_2687_2;
	R2687[92] = (char *(*)()) F375_2602_2687_2;
	R2687[93] = (char *(*)()) F376_2602_2687_2;
	R2687[94] = (char *(*)()) F377_2602_2687_2;
	R2687[95] = (char *(*)()) F378_2602_2687_2;
	R2687[96] = (char *(*)()) F379_2602_2687_2;
	R2687[97] = (char *(*)()) F380_2602_2687_2;
	R2687[98] = (char *(*)()) F381_2602_2687_2;
	R2687[99] = (char *(*)()) F372_2602_2687_2;
}
static EIF_BOOLEAN F371_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F371_2602(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F381_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F381_2602(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F369_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F369_2602(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F370_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F370_2602(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F373_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F373_2602(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F374_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F374_2602(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F368_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F368_2602(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F375_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F375_2602(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F376_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F376_2602(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F377_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F377_2602(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F378_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F378_2602(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F379_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F379_2602(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F380_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F380_2602(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F372_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F372_2602(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2689[100])();
void R2689_init () {
	R2689[0] = (char *(*)()) F367_2606;
	R2689[1] = (char *(*)()) F371_2606_2689_9;
	R2689[2] = (char *(*)()) F381_2606_2689_9;
	R2689[85] = (char *(*)()) F367_2606;
	R2689[86] = (char *(*)()) F369_2606_2689_9;
	R2689[87] = (char *(*)()) F370_2606_2689_9;
	R2689[88] = (char *(*)()) F373_2606_2689_9;
	R2689[89] = (char *(*)()) F374_2606_2689_9;
	R2689[90] = (char *(*)()) F371_2606_2689_9;
	R2689[91] = (char *(*)()) F368_2606_2689_9;
	R2689[92] = (char *(*)()) F375_2606_2689_9;
	R2689[93] = (char *(*)()) F376_2606_2689_9;
	R2689[94] = (char *(*)()) F377_2606_2689_9;
	R2689[95] = (char *(*)()) F378_2606_2689_9;
	R2689[96] = (char *(*)()) F379_2606_2689_9;
	R2689[97] = (char *(*)()) F380_2606_2689_9;
	R2689[98] = (char *(*)()) F381_2606_2689_9;
	R2689[99] = (char *(*)()) F372_2606_2689_9;
}
static EIF_INTEGER_32 F371_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F371_2606(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F381_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F381_2606(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_INTEGER_32 F369_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F369_2606(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_INTEGER_32 F370_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F370_2606(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_INTEGER_32 F373_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F373_2606(Current, *(EIF_POINTER *)arg1);
}
static EIF_INTEGER_32 F374_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F374_2606(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_INTEGER_32 F368_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F368_2606(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_INTEGER_32 F375_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F375_2606(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_INTEGER_32 F376_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F376_2606(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_INTEGER_32 F377_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F377_2606(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_INTEGER_32 F378_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F378_2606(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_INTEGER_32 F379_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F379_2606(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_INTEGER_32 F380_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F380_2606(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_INTEGER_32 F372_2606_2689_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F372_2606(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2706[100])();
void R2706_init () {
	R2706[0] = (char *(*)()) F519_3541;
	R2706[1] = (char *(*)()) F520_3541_2706_4;
	R2706[2] = (char *(*)()) F521_3541_2706_4;
	R2706[85] = (char *(*)()) F604_4111;
	R2706[86] = (char *(*)()) F605_4111_2706_4;
	R2706[87] = (char *(*)()) F606_4111_2706_4;
	R2706[88] = (char *(*)()) F607_4111_2706_4;
	R2706[89] = (char *(*)()) F608_4111_2706_4;
	R2706[90] = (char *(*)()) F609_4111_2706_4;
	R2706[91] = (char *(*)()) F610_4111_2706_4;
	R2706[92] = (char *(*)()) F611_4111_2706_4;
	R2706[93] = (char *(*)()) F612_4111_2706_4;
	R2706[94] = (char *(*)()) F613_4111_2706_4;
	R2706[95] = (char *(*)()) F614_4111_2706_4;
	R2706[96] = (char *(*)()) F615_4111_2706_4;
	R2706[97] = (char *(*)()) F616_4111_2706_4;
	R2706[98] = (char *(*)()) F617_4111_2706_4;
	R2706[99] = (char *(*)()) F618_4111_2706_4;
}
static void F520_3541_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F520_3541(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F521_3541_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F521_3541(Current, *(EIF_BOOLEAN *)arg1);
}
static void F605_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F605_4111(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F606_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F606_4111(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F607_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F607_4111(Current, *(EIF_POINTER *)arg1);
}
static void F608_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F608_4111(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F609_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F609_4111(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F610_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_4111(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F611_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F611_4111(Current, *(EIF_REAL_64 *)arg1);
}
static void F612_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F612_4111(Current, *(EIF_REAL_32 *)arg1);
}
static void F613_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F613_4111(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F614_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F614_4111(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F615_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F615_4111(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F616_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F616_4111(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F617_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F617_4111(Current, *(EIF_BOOLEAN *)arg1);
}
static void F618_4111_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F618_4111(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2707[100])();
void R2707_init () {
	R2707[0] = (char *(*)()) F519_3543;
	R2707[1] = (char *(*)()) F520_3543_2707_4;
	R2707[2] = (char *(*)()) F521_3543_2707_4;
	R2707[85] = (char *(*)()) F604_4115;
	R2707[86] = (char *(*)()) F605_4115_2707_4;
	R2707[87] = (char *(*)()) F606_4115_2707_4;
	R2707[88] = (char *(*)()) F607_4115_2707_4;
	R2707[89] = (char *(*)()) F608_4115_2707_4;
	R2707[90] = (char *(*)()) F609_4115_2707_4;
	R2707[91] = (char *(*)()) F610_4115_2707_4;
	R2707[92] = (char *(*)()) F611_4115_2707_4;
	R2707[93] = (char *(*)()) F612_4115_2707_4;
	R2707[94] = (char *(*)()) F613_4115_2707_4;
	R2707[95] = (char *(*)()) F614_4115_2707_4;
	R2707[96] = (char *(*)()) F615_4115_2707_4;
	R2707[97] = (char *(*)()) F616_4115_2707_4;
	R2707[98] = (char *(*)()) F617_4115_2707_4;
	R2707[99] = (char *(*)()) F618_4115_2707_4;
}
static void F520_3543_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F520_3543(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F521_3543_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F521_3543(Current, *(EIF_BOOLEAN *)arg1);
}
static void F605_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F605_4115(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F606_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F606_4115(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F607_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F607_4115(Current, *(EIF_POINTER *)arg1);
}
static void F608_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F608_4115(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F609_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F609_4115(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F610_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_4115(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F611_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F611_4115(Current, *(EIF_REAL_64 *)arg1);
}
static void F612_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F612_4115(Current, *(EIF_REAL_32 *)arg1);
}
static void F613_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F613_4115(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F614_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F614_4115(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F615_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F615_4115(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F616_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F616_4115(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F617_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F617_4115(Current, *(EIF_BOOLEAN *)arg1);
}
static void F618_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F618_4115(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2708[100])();
void R2708_init () {
	R2708[0] = (char *(*)()) F519_3544;
	R2708[1] = (char *(*)()) F520_3544_2708_4;
	R2708[2] = (char *(*)()) F521_3544_2708_4;
	R2708[85] = (char *(*)()) F604_4116;
	R2708[86] = (char *(*)()) F605_4116_2708_4;
	R2708[87] = (char *(*)()) F606_4116_2708_4;
	R2708[88] = (char *(*)()) F607_4116_2708_4;
	R2708[89] = (char *(*)()) F608_4116_2708_4;
	R2708[90] = (char *(*)()) F609_4116_2708_4;
	R2708[91] = (char *(*)()) F610_4116_2708_4;
	R2708[92] = (char *(*)()) F611_4116_2708_4;
	R2708[93] = (char *(*)()) F612_4116_2708_4;
	R2708[94] = (char *(*)()) F613_4116_2708_4;
	R2708[95] = (char *(*)()) F614_4116_2708_4;
	R2708[96] = (char *(*)()) F615_4116_2708_4;
	R2708[97] = (char *(*)()) F616_4116_2708_4;
	R2708[98] = (char *(*)()) F617_4116_2708_4;
	R2708[99] = (char *(*)()) F618_4116_2708_4;
}
static void F520_3544_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F520_3544(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F521_3544_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F521_3544(Current, *(EIF_BOOLEAN *)arg1);
}
static void F605_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F605_4116(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F606_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F606_4116(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F607_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F607_4116(Current, *(EIF_POINTER *)arg1);
}
static void F608_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F608_4116(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F609_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F609_4116(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F610_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_4116(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F611_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F611_4116(Current, *(EIF_REAL_64 *)arg1);
}
static void F612_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F612_4116(Current, *(EIF_REAL_32 *)arg1);
}
static void F613_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F613_4116(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F614_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F614_4116(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F615_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F615_4116(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F616_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F616_4116(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F617_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F617_4116(Current, *(EIF_BOOLEAN *)arg1);
}
static void F618_4116_2708_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F618_4116(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2710[100])();
void R2710_init () {
	R2710[0] = (char *(*)()) F519_3547;
	R2710[1] = (char *(*)()) F520_3547;
	R2710[2] = (char *(*)()) F521_3547;
	R2710[85] = (char *(*)()) F604_4119;
	R2710[86] = (char *(*)()) F605_4119;
	R2710[87] = (char *(*)()) F606_4119;
	R2710[88] = (char *(*)()) F607_4119;
	R2710[89] = (char *(*)()) F608_4119;
	R2710[90] = (char *(*)()) F609_4119;
	R2710[91] = (char *(*)()) F610_4119;
	R2710[92] = (char *(*)()) F611_4119;
	R2710[93] = (char *(*)()) F612_4119;
	R2710[94] = (char *(*)()) F613_4119;
	R2710[95] = (char *(*)()) F614_4119;
	R2710[96] = (char *(*)()) F615_4119;
	R2710[97] = (char *(*)()) F616_4119;
	R2710[98] = (char *(*)()) F617_4119;
	R2710[99] = (char *(*)()) F618_4119;
}

char *(*R2712[100])();
void R2712_init () {
	R2712[0] = (char *(*)()) F519_3550;
	R2712[1] = (char *(*)()) F520_3550;
	R2712[2] = (char *(*)()) F521_3550;
	R2712[85] = (char *(*)()) F604_4130;
	R2712[86] = (char *(*)()) F605_4130;
	R2712[87] = (char *(*)()) F606_4130;
	R2712[88] = (char *(*)()) F607_4130;
	R2712[89] = (char *(*)()) F608_4130;
	R2712[90] = (char *(*)()) F609_4130;
	R2712[91] = (char *(*)()) F610_4130;
	R2712[92] = (char *(*)()) F611_4130;
	R2712[93] = (char *(*)()) F612_4130;
	R2712[94] = (char *(*)()) F613_4130;
	R2712[95] = (char *(*)()) F614_4130;
	R2712[96] = (char *(*)()) F615_4130;
	R2712[97] = (char *(*)()) F616_4130;
	R2712[98] = (char *(*)()) F617_4130;
	R2712[99] = (char *(*)()) F618_4130;
}

char *(*R2713[100])();
void R2713_init () {
	R2713[0] = (char *(*)()) F519_3553;
	R2713[1] = (char *(*)()) F520_3553;
	R2713[2] = (char *(*)()) F521_3553;
	R2713[85] = (char *(*)()) F604_4134;
	R2713[86] = (char *(*)()) F605_4134;
	R2713[87] = (char *(*)()) F606_4134;
	R2713[88] = (char *(*)()) F607_4134;
	R2713[89] = (char *(*)()) F608_4134;
	R2713[90] = (char *(*)()) F609_4134;
	R2713[91] = (char *(*)()) F610_4134;
	R2713[92] = (char *(*)()) F611_4134;
	R2713[93] = (char *(*)()) F612_4134;
	R2713[94] = (char *(*)()) F613_4134;
	R2713[95] = (char *(*)()) F614_4134;
	R2713[96] = (char *(*)()) F615_4134;
	R2713[97] = (char *(*)()) F616_4134;
	R2713[98] = (char *(*)()) F617_4134;
	R2713[99] = (char *(*)()) F618_4134;
}

char *(*R2753[100])();
void R2753_init () {
	R2753[0] = (char *(*)()) F474_3327;
	R2753[1] = (char *(*)()) F478_3327;
	R2753[2] = (char *(*)()) F487_3327;
	R2753[85] = (char *(*)()) F474_3327;
	R2753[86] = (char *(*)()) F475_3327;
	R2753[87] = (char *(*)()) F476_3327;
	R2753[88] = (char *(*)()) F477_3327;
	R2753[89] = (char *(*)()) F479_3327;
	R2753[90] = (char *(*)()) F478_3327;
	R2753[91] = (char *(*)()) F480_3327;
	R2753[92] = (char *(*)()) F481_3327;
	R2753[93] = (char *(*)()) F482_3327;
	R2753[94] = (char *(*)()) F483_3327;
	R2753[95] = (char *(*)()) F484_3327;
	R2753[96] = (char *(*)()) F485_3327;
	R2753[97] = (char *(*)()) F486_3327;
	R2753[98] = (char *(*)()) F487_3327;
	R2753[99] = (char *(*)()) F488_3327;
}

char *(*R2763[3])();
void R2763_init () {
	R2763[0] = (char *(*)()) F519_3515;
	R2763[1] = (char *(*)()) F520_3515;
	R2763[2] = (char *(*)()) F521_3515;
}

char *(*R2766[3])();
void R2766_init () {
	R2766[0] = (char *(*)()) F519_3554;
	R2766[1] = (char *(*)()) F520_3554_2766_5;
	R2766[2] = (char *(*)()) F521_3554_2766_5;
}
static EIF_REFERENCE F520_3554_2766_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F520_3554(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F521_3554_2766_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F521_3554(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R2767[3])();
void R2767_init () {
	R2767[0] = (char *(*)()) F519_3555;
	R2767[1] = (char *(*)()) F520_3555;
	R2767[2] = (char *(*)()) F521_3555;
}

char *(*R2768[3])();
void R2768_init () {
	R2768[0] = (char *(*)()) F519_3556;
	R2768[1] = (char *(*)()) F520_3556;
	R2768[2] = (char *(*)()) F521_3556;
}

char *(*R2770[3])();
void R2770_init () {
	R2770[0] = (char *(*)()) F519_3558;
	R2770[1] = (char *(*)()) F520_3558;
	R2770[2] = (char *(*)()) F521_3558;
}

char *(*R2771[3])();
void R2771_init () {
	R2771[0] = (char *(*)()) F519_3559;
	R2771[1] = (char *(*)()) F520_3559;
	R2771[2] = (char *(*)()) F521_3559;
}

char *(*R2772[3])();
void R2772_init () {
	R2772[0] = (char *(*)()) F519_3560;
	R2772[1] = (char *(*)()) F520_3560;
	R2772[2] = (char *(*)()) F521_3560;
}

char *(*R2934[316])();
void R2934_init () {
	R2934[0] = (char *(*)()) F593_3856;
	R2934[1] = (char *(*)()) F594_3914;
	R2934[2] = (char *(*)()) F595_7537;
	R2934[3] = (char *(*)()) F596_3983;
	R2934[4] = (char *(*)()) F597_3983;
	R2934[5] = (char *(*)()) F598_3983;
	R2934[6] = (char *(*)()) F599_3983;
	R2934[7] = (char *(*)()) F600_3983;
	R2934[8] = (char *(*)()) F596_3983;
	R2934[9] = (char *(*)()) F599_3983;
	R2934[10] = (char *(*)()) F596_3983;
	R2934[11] = (char *(*)()) F604_4133;
	R2934[12] = (char *(*)()) F605_4133;
	R2934[13] = (char *(*)()) F606_4133;
	R2934[14] = (char *(*)()) F607_4133;
	R2934[15] = (char *(*)()) F608_4133;
	R2934[16] = (char *(*)()) F609_4133;
	R2934[17] = (char *(*)()) F610_4133;
	R2934[18] = (char *(*)()) F611_4133;
	R2934[19] = (char *(*)()) F612_4133;
	R2934[20] = (char *(*)()) F613_4133;
	R2934[21] = (char *(*)()) F614_4133;
	R2934[22] = (char *(*)()) F615_4133;
	R2934[23] = (char *(*)()) F616_4133;
	R2934[24] = (char *(*)()) F617_4133;
	R2934[25] = (char *(*)()) F618_4133;
	R2934[219] = (char *(*)()) F812_5421;
	{long i; for (i = 293; i < 297; i++) R2934[i] = (char *(*)()) F885_6476;}
	R2934[300] = (char *(*)()) F893_6780;
	R2934[302] = (char *(*)()) F895_6988;
	R2934[305] = (char *(*)()) F898_7030;
	{long i; for (i = 309; i < 311; i++) R2934[i] = (char *(*)()) F595_7537;}
	{long i; for (i = 313; i < 316; i++) R2934[i] = (char *(*)()) F595_7537;}
}

char *(*R2970[8])();
void R2970_init () {
	R2970[0] = (char *(*)()) F596_3924;
	R2970[1] = (char *(*)()) F597_3924;
	R2970[2] = (char *(*)()) F598_3924;
	R2970[3] = (char *(*)()) F599_3924;
	R2970[4] = (char *(*)()) F600_3924;
	R2970[5] = (char *(*)()) F596_3924;
	R2970[6] = (char *(*)()) F599_3924;
	R2970[7] = (char *(*)()) F596_3924;
}

char *(*R2971[8])();
void R2971_init () {
	R2971[0] = (char *(*)()) F596_3925;
	R2971[1] = (char *(*)()) F597_3925;
	R2971[2] = (char *(*)()) F598_3925;
	R2971[3] = (char *(*)()) F599_3925;
	R2971[4] = (char *(*)()) F600_3925;
	R2971[5] = (char *(*)()) F596_3925;
	R2971[6] = (char *(*)()) F599_3925;
	R2971[7] = (char *(*)()) F596_3925;
}

char *(*R2972[8])();
void R2972_init () {
	R2972[0] = (char *(*)()) F596_3926;
	R2972[1] = (char *(*)()) F597_3926;
	R2972[2] = (char *(*)()) F598_3926;
	R2972[3] = (char *(*)()) F599_3926;
	R2972[4] = (char *(*)()) F600_3926;
	R2972[5] = (char *(*)()) F596_3926;
	R2972[6] = (char *(*)()) F599_3926;
	R2972[7] = (char *(*)()) F596_3926;
}

char *(*R2973[8])();
void R2973_init () {
	R2973[0] = (char *(*)()) F596_3927;
	R2973[1] = (char *(*)()) F597_3927;
	R2973[2] = (char *(*)()) F598_3927_2973_1;
	R2973[3] = (char *(*)()) F599_3927_2973_1;
	R2973[4] = (char *(*)()) F600_3927_2973_1;
	R2973[5] = (char *(*)()) F596_3927;
	R2973[6] = (char *(*)()) F599_3927_2973_1;
	R2973[7] = (char *(*)()) F596_3927;
}
static EIF_REFERENCE F598_3927_2973_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F598_3927(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F599_3927_2973_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F599_3927(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F600_3927_2973_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F600_3927(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2974[8])();
void R2974_init () {
	R2974[0] = (char *(*)()) F596_3929;
	R2974[1] = (char *(*)()) F597_3929_2974_5;
	R2974[2] = (char *(*)()) F598_3929_2974_5;
	R2974[3] = (char *(*)()) F599_3929_2974_5;
	R2974[4] = (char *(*)()) F600_3929_2974_5;
	R2974[5] = (char *(*)()) F596_3929;
	R2974[6] = (char *(*)()) F599_3929_2974_5;
	R2974[7] = (char *(*)()) F596_3929;
}
static EIF_REFERENCE F597_3929_2974_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F597_3929(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F598_3929_2974_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F598_3929(Current, *(EIF_POINTER *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F599_3929_2974_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F599_3929(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F600_3929_2974_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F600_3929(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2978[8])();
void R2978_init () {
	R2978[0] = (char *(*)()) F596_3935;
	R2978[1] = (char *(*)()) F597_3935;
	R2978[2] = (char *(*)()) F598_3935_2978_1;
	R2978[3] = (char *(*)()) F599_3935_2978_1;
	R2978[4] = (char *(*)()) F600_3935_2978_1;
	R2978[5] = (char *(*)()) F596_3935;
	R2978[6] = (char *(*)()) F599_3935_2978_1;
	R2978[7] = (char *(*)()) F596_3935;
}
static EIF_REFERENCE F598_3935_2978_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F598_3935(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F599_3935_2978_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F599_3935(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F600_3935_2978_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F600_3935(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2979[8])();
void R2979_init () {
	R2979[0] = (char *(*)()) F596_3936;
	R2979[1] = (char *(*)()) F597_3936_2979_1;
	R2979[2] = (char *(*)()) F598_3936_2979_1;
	R2979[3] = (char *(*)()) F599_3936;
	R2979[4] = (char *(*)()) F600_3936_2979_1;
	R2979[5] = (char *(*)()) F596_3936;
	R2979[6] = (char *(*)()) F599_3936;
	R2979[7] = (char *(*)()) F596_3936;
}
static EIF_REFERENCE F597_3936_2979_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F597_3936(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F598_3936_2979_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F598_3936(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(883, 0x00).id, 883, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F600_3936_2979_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F600_3936(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2981[8])();
void R2981_init () {
	R2981[0] = (char *(*)()) F596_3940;
	R2981[1] = (char *(*)()) F597_3940_2981_9;
	R2981[2] = (char *(*)()) F598_3940_2981_9;
	R2981[3] = (char *(*)()) F599_3940;
	R2981[4] = (char *(*)()) F600_3940_2981_9;
	R2981[5] = (char *(*)()) F601_4038;
	R2981[6] = (char *(*)()) F602_4038;
	R2981[7] = (char *(*)()) F596_3940;
}
static EIF_INTEGER_32 F597_3940_2981_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F597_3940(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F598_3940_2981_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F598_3940(Current, *(EIF_POINTER *)arg1);
}
static EIF_INTEGER_32 F600_3940_2981_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F600_3940(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2983[8])();
void R2983_init () {
	R2983[0] = (char *(*)()) F596_3947;
	R2983[1] = (char *(*)()) F597_3947_2983_3;
	R2983[2] = (char *(*)()) F598_3947_2983_3;
	R2983[3] = (char *(*)()) F599_3947;
	R2983[4] = (char *(*)()) F600_3947_2983_3;
	R2983[5] = (char *(*)()) F601_4040;
	R2983[6] = (char *(*)()) F602_4040;
	R2983[7] = (char *(*)()) F596_3947;
}
static EIF_BOOLEAN F597_3947_2983_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F597_3947(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static EIF_BOOLEAN F598_3947_2983_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F598_3947(Current, *(EIF_POINTER *)arg1, *(EIF_POINTER *)arg2);
}
static EIF_BOOLEAN F600_3947_2983_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F600_3947(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

char *(*R2985[8])();
void R2985_init () {
	R2985[0] = (char *(*)()) F596_3952;
	R2985[1] = (char *(*)()) F597_3952;
	R2985[2] = (char *(*)()) F598_3952;
	R2985[3] = (char *(*)()) F599_3952;
	R2985[4] = (char *(*)()) F600_3952;
	R2985[5] = (char *(*)()) F596_3952;
	R2985[6] = (char *(*)()) F599_3952;
	R2985[7] = (char *(*)()) F596_3952;
}

char *(*R2986[8])();
void R2986_init () {
	R2986[0] = (char *(*)()) F596_3953;
	R2986[1] = (char *(*)()) F597_3953;
	R2986[2] = (char *(*)()) F598_3953;
	R2986[3] = (char *(*)()) F599_3953;
	R2986[4] = (char *(*)()) F600_3953;
	R2986[5] = (char *(*)()) F596_3953;
	R2986[6] = (char *(*)()) F599_3953;
	R2986[7] = (char *(*)()) F596_3953;
}

char *(*R2987[8])();
void R2987_init () {
	R2987[0] = (char *(*)()) F596_3954;
	R2987[1] = (char *(*)()) F597_3954;
	R2987[2] = (char *(*)()) F598_3954;
	R2987[3] = (char *(*)()) F599_3954;
	R2987[4] = (char *(*)()) F600_3954;
	R2987[5] = (char *(*)()) F596_3954;
	R2987[6] = (char *(*)()) F599_3954;
	R2987[7] = (char *(*)()) F596_3954;
}

char *(*R2988[8])();
void R2988_init () {
	R2988[0] = (char *(*)()) F596_3955;
	R2988[1] = (char *(*)()) F597_3955;
	R2988[2] = (char *(*)()) F598_3955;
	R2988[3] = (char *(*)()) F599_3955;
	R2988[4] = (char *(*)()) F600_3955;
	R2988[5] = (char *(*)()) F596_3955;
	R2988[6] = (char *(*)()) F599_3955;
	R2988[7] = (char *(*)()) F596_3955;
}

char *(*R2989[8])();
void R2989_init () {
	R2989[0] = (char *(*)()) F596_3956;
	R2989[1] = (char *(*)()) F597_3956;
	R2989[2] = (char *(*)()) F598_3956;
	R2989[3] = (char *(*)()) F599_3956;
	R2989[4] = (char *(*)()) F600_3956;
	R2989[5] = (char *(*)()) F596_3956;
	R2989[6] = (char *(*)()) F599_3956;
	R2989[7] = (char *(*)()) F596_3956;
}

char *(*R2990[8])();
void R2990_init () {
	R2990[0] = (char *(*)()) F596_3957;
	R2990[1] = (char *(*)()) F597_3957;
	R2990[2] = (char *(*)()) F598_3957;
	R2990[3] = (char *(*)()) F599_3957;
	R2990[4] = (char *(*)()) F600_3957;
	R2990[5] = (char *(*)()) F596_3957;
	R2990[6] = (char *(*)()) F599_3957;
	R2990[7] = (char *(*)()) F596_3957;
}

char *(*R2991[8])();
void R2991_init () {
	R2991[0] = (char *(*)()) F596_3958;
	R2991[1] = (char *(*)()) F597_3958;
	R2991[2] = (char *(*)()) F598_3958;
	R2991[3] = (char *(*)()) F599_3958;
	R2991[4] = (char *(*)()) F600_3958;
	R2991[5] = (char *(*)()) F596_3958;
	R2991[6] = (char *(*)()) F599_3958;
	R2991[7] = (char *(*)()) F596_3958;
}

char *(*R2992[8])();
void R2992_init () {
	R2992[0] = (char *(*)()) F596_3959;
	R2992[1] = (char *(*)()) F597_3959;
	R2992[2] = (char *(*)()) F598_3959;
	R2992[3] = (char *(*)()) F599_3959;
	R2992[4] = (char *(*)()) F600_3959;
	R2992[5] = (char *(*)()) F596_3959;
	R2992[6] = (char *(*)()) F599_3959;
	R2992[7] = (char *(*)()) F596_3959;
}

char *(*R2993[8])();
void R2993_init () {
	R2993[0] = (char *(*)()) F596_3960;
	R2993[1] = (char *(*)()) F597_3960;
	R2993[2] = (char *(*)()) F598_3960;
	R2993[3] = (char *(*)()) F599_3960;
	R2993[4] = (char *(*)()) F600_3960;
	R2993[5] = (char *(*)()) F596_3960;
	R2993[6] = (char *(*)()) F599_3960;
	R2993[7] = (char *(*)()) F596_3960;
}

char *(*R2995[8])();
void R2995_init () {
	R2995[0] = (char *(*)()) F596_3963;
	R2995[1] = (char *(*)()) F597_3963;
	R2995[2] = (char *(*)()) F598_3963;
	R2995[3] = (char *(*)()) F599_3963;
	R2995[4] = (char *(*)()) F600_3963;
	R2995[5] = (char *(*)()) F596_3963;
	R2995[6] = (char *(*)()) F599_3963;
	R2995[7] = (char *(*)()) F596_3963;
}

char *(*R2996[8])();
void R2996_init () {
	R2996[0] = (char *(*)()) F596_3964;
	R2996[1] = (char *(*)()) F597_3964;
	R2996[2] = (char *(*)()) F598_3964;
	R2996[3] = (char *(*)()) F599_3964;
	R2996[4] = (char *(*)()) F600_3964;
	R2996[5] = (char *(*)()) F596_3964;
	R2996[6] = (char *(*)()) F599_3964;
	R2996[7] = (char *(*)()) F596_3964;
}

char *(*R2998[8])();
void R2998_init () {
	R2998[0] = (char *(*)()) F596_3966;
	R2998[1] = (char *(*)()) F597_3966_2998_4;
	R2998[2] = (char *(*)()) F598_3966_2998_4;
	R2998[3] = (char *(*)()) F599_3966;
	R2998[4] = (char *(*)()) F600_3966_2998_4;
	R2998[5] = (char *(*)()) F596_3966;
	R2998[6] = (char *(*)()) F599_3966;
	R2998[7] = (char *(*)()) F596_3966;
}
static void F597_3966_2998_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F597_3966(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F598_3966_2998_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F598_3966(Current, *(EIF_POINTER *)arg1);
}
static void F600_3966_2998_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F600_3966(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R3000[8])();
void R3000_init () {
	R3000[0] = (char *(*)()) F596_3968;
	R3000[1] = (char *(*)()) F597_3968;
	R3000[2] = (char *(*)()) F598_3968;
	R3000[3] = (char *(*)()) F599_3968;
	R3000[4] = (char *(*)()) F600_3968;
	R3000[5] = (char *(*)()) F596_3968;
	R3000[6] = (char *(*)()) F599_3968;
	R3000[7] = (char *(*)()) F596_3968;
}

char *(*R3001[8])();
void R3001_init () {
	R3001[0] = (char *(*)()) F596_3969;
	R3001[1] = (char *(*)()) F597_3969;
	R3001[2] = (char *(*)()) F598_3969;
	R3001[3] = (char *(*)()) F599_3969;
	R3001[4] = (char *(*)()) F600_3969;
	R3001[5] = (char *(*)()) F596_3969;
	R3001[6] = (char *(*)()) F599_3969;
	R3001[7] = (char *(*)()) F596_3969;
}

char *(*R3006[8])();
void R3006_init () {
	R3006[0] = (char *(*)()) F596_3976;
	R3006[1] = (char *(*)()) F597_3976_3006_4;
	R3006[2] = (char *(*)()) F598_3976_3006_4;
	R3006[3] = (char *(*)()) F599_3976;
	R3006[4] = (char *(*)()) F600_3976_3006_4;
	R3006[5] = (char *(*)()) F596_3976;
	R3006[6] = (char *(*)()) F599_3976;
	R3006[7] = (char *(*)()) F596_3976;
}
static void F597_3976_3006_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F597_3976(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F598_3976_3006_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F598_3976(Current, *(EIF_POINTER *)arg1);
}
static void F600_3976_3006_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F600_3976(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R3008[8])();
void R3008_init () {
	R3008[0] = (char *(*)()) F596_3982;
	R3008[1] = (char *(*)()) F597_3982;
	R3008[2] = (char *(*)()) F598_3982;
	R3008[3] = (char *(*)()) F599_3982;
	R3008[4] = (char *(*)()) F600_3982;
	R3008[5] = (char *(*)()) F601_4042;
	R3008[6] = (char *(*)()) F602_4042;
	R3008[7] = (char *(*)()) F596_3982;
}

char *(*R3017[8])();
void R3017_init () {
	R3017[0] = (char *(*)()) F596_3992;
	R3017[1] = (char *(*)()) F597_3992;
	R3017[2] = (char *(*)()) F598_3992;
	R3017[3] = (char *(*)()) F599_3992;
	R3017[4] = (char *(*)()) F600_3992;
	R3017[5] = (char *(*)()) F596_3992;
	R3017[6] = (char *(*)()) F599_3992;
	R3017[7] = (char *(*)()) F596_3992;
}

char *(*R3018[8])();
void R3018_init () {
	R3018[0] = (char *(*)()) F596_3993;
	R3018[1] = (char *(*)()) F597_3993;
	R3018[2] = (char *(*)()) F598_3993;
	R3018[3] = (char *(*)()) F599_3993;
	R3018[4] = (char *(*)()) F600_3993;
	R3018[5] = (char *(*)()) F596_3993;
	R3018[6] = (char *(*)()) F599_3993;
	R3018[7] = (char *(*)()) F596_3993;
}

char *(*R3025[8])();
void R3025_init () {
	R3025[0] = (char *(*)()) F596_4000;
	R3025[1] = (char *(*)()) F597_4000;
	R3025[2] = (char *(*)()) F598_4000_3025_1;
	R3025[3] = (char *(*)()) F599_4000_3025_1;
	R3025[4] = (char *(*)()) F600_4000_3025_1;
	R3025[5] = (char *(*)()) F596_4000;
	R3025[6] = (char *(*)()) F599_4000_3025_1;
	R3025[7] = (char *(*)()) F596_4000;
}
static EIF_REFERENCE F598_4000_3025_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F598_4000(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F599_4000_3025_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F599_4000(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F600_4000_3025_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F600_4000(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3026[8])();
void R3026_init () {
	R3026[0] = (char *(*)()) F596_4001;
	R3026[1] = (char *(*)()) F597_4001_3026_1;
	R3026[2] = (char *(*)()) F598_4001_3026_1;
	R3026[3] = (char *(*)()) F599_4001;
	R3026[4] = (char *(*)()) F600_4001_3026_1;
	R3026[5] = (char *(*)()) F596_4001;
	R3026[6] = (char *(*)()) F599_4001;
	R3026[7] = (char *(*)()) F596_4001;
}
static EIF_REFERENCE F597_4001_3026_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F597_4001(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F598_4001_3026_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F598_4001(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(883, 0x00).id, 883, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F600_4001_3026_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F600_4001(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3027[8])();
void R3027_init () {
	R3027[0] = (char *(*)()) F596_4002;
	R3027[1] = (char *(*)()) F597_4002;
	R3027[2] = (char *(*)()) F598_4002;
	R3027[3] = (char *(*)()) F599_4002;
	R3027[4] = (char *(*)()) F600_4002;
	R3027[5] = (char *(*)()) F596_4002;
	R3027[6] = (char *(*)()) F599_4002;
	R3027[7] = (char *(*)()) F596_4002;
}

char *(*R3028[8])();
void R3028_init () {
	R3028[0] = (char *(*)()) F596_4003;
	R3028[1] = (char *(*)()) F597_4003;
	R3028[2] = (char *(*)()) F598_4003;
	R3028[3] = (char *(*)()) F599_4003;
	R3028[4] = (char *(*)()) F600_4003;
	R3028[5] = (char *(*)()) F596_4003;
	R3028[6] = (char *(*)()) F599_4003;
	R3028[7] = (char *(*)()) F596_4003;
}

char *(*R3029[8])();
void R3029_init () {
	R3029[0] = (char *(*)()) F596_4004;
	R3029[1] = (char *(*)()) F597_4004;
	R3029[2] = (char *(*)()) F598_4004;
	R3029[3] = (char *(*)()) F599_4004;
	R3029[4] = (char *(*)()) F600_4004;
	R3029[5] = (char *(*)()) F596_4004;
	R3029[6] = (char *(*)()) F599_4004;
	R3029[7] = (char *(*)()) F596_4004;
}

char *(*R3030[8])();
void R3030_init () {
	R3030[0] = (char *(*)()) F596_4005;
	R3030[1] = (char *(*)()) F597_4005;
	R3030[2] = (char *(*)()) F598_4005;
	R3030[3] = (char *(*)()) F599_4005;
	R3030[4] = (char *(*)()) F600_4005;
	R3030[5] = (char *(*)()) F596_4005;
	R3030[6] = (char *(*)()) F599_4005;
	R3030[7] = (char *(*)()) F596_4005;
}

char *(*R3031[8])();
void R3031_init () {
	R3031[0] = (char *(*)()) F596_4006;
	R3031[1] = (char *(*)()) F597_4006;
	R3031[2] = (char *(*)()) F598_4006;
	R3031[3] = (char *(*)()) F599_4006;
	R3031[4] = (char *(*)()) F600_4006;
	R3031[5] = (char *(*)()) F596_4006;
	R3031[6] = (char *(*)()) F599_4006;
	R3031[7] = (char *(*)()) F596_4006;
}

char *(*R3032[8])();
void R3032_init () {
	R3032[0] = (char *(*)()) F596_4007;
	R3032[1] = (char *(*)()) F597_4007;
	R3032[2] = (char *(*)()) F598_4007;
	R3032[3] = (char *(*)()) F599_4007;
	R3032[4] = (char *(*)()) F600_4007;
	R3032[5] = (char *(*)()) F596_4007;
	R3032[6] = (char *(*)()) F599_4007;
	R3032[7] = (char *(*)()) F596_4007;
}

char *(*R3033[8])();
void R3033_init () {
	R3033[0] = (char *(*)()) F596_4008;
	R3033[1] = (char *(*)()) F597_4008;
	R3033[2] = (char *(*)()) F598_4008;
	R3033[3] = (char *(*)()) F599_4008;
	R3033[4] = (char *(*)()) F600_4008;
	R3033[5] = (char *(*)()) F596_4008;
	R3033[6] = (char *(*)()) F599_4008;
	R3033[7] = (char *(*)()) F596_4008;
}

char *(*R3034[8])();
void R3034_init () {
	R3034[0] = (char *(*)()) F596_4009;
	R3034[1] = (char *(*)()) F597_4009;
	R3034[2] = (char *(*)()) F598_4009;
	R3034[3] = (char *(*)()) F599_4009;
	R3034[4] = (char *(*)()) F600_4009;
	R3034[5] = (char *(*)()) F596_4009;
	R3034[6] = (char *(*)()) F599_4009;
	R3034[7] = (char *(*)()) F596_4009;
}

char *(*R3035[8])();
void R3035_init () {
	R3035[0] = (char *(*)()) F596_4010;
	R3035[1] = (char *(*)()) F597_4010;
	R3035[2] = (char *(*)()) F598_4010;
	R3035[3] = (char *(*)()) F599_4010;
	R3035[4] = (char *(*)()) F600_4010;
	R3035[5] = (char *(*)()) F596_4010;
	R3035[6] = (char *(*)()) F599_4010;
	R3035[7] = (char *(*)()) F596_4010;
}

char *(*R3037[8])();
void R3037_init () {
	R3037[0] = (char *(*)()) F596_4012;
	R3037[1] = (char *(*)()) F597_4012_3037_1;
	R3037[2] = (char *(*)()) F598_4012_3037_1;
	R3037[3] = (char *(*)()) F599_4012;
	R3037[4] = (char *(*)()) F600_4012_3037_1;
	R3037[5] = (char *(*)()) F596_4012;
	R3037[6] = (char *(*)()) F599_4012;
	R3037[7] = (char *(*)()) F596_4012;
}
static EIF_REFERENCE F597_4012_3037_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F597_4012(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F598_4012_3037_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F598_4012(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(883, 0x00).id, 883, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F600_4012_3037_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F600_4012(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3038[8])();
void R3038_init () {
	R3038[0] = (char *(*)()) F596_4013;
	R3038[1] = (char *(*)()) F597_4013;
	R3038[2] = (char *(*)()) F598_4013_3038_1;
	R3038[3] = (char *(*)()) F599_4013_3038_1;
	R3038[4] = (char *(*)()) F600_4013_3038_1;
	R3038[5] = (char *(*)()) F596_4013;
	R3038[6] = (char *(*)()) F599_4013_3038_1;
	R3038[7] = (char *(*)()) F596_4013;
}
static EIF_REFERENCE F598_4013_3038_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F598_4013(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F599_4013_3038_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F599_4013(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F600_4013_3038_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F600_4013(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3039[8])();
void R3039_init () {
	R3039[0] = (char *(*)()) F596_4014;
	R3039[1] = (char *(*)()) F597_4014_3039_4;
	R3039[2] = (char *(*)()) F598_4014_3039_4;
	R3039[3] = (char *(*)()) F599_4014;
	R3039[4] = (char *(*)()) F600_4014_3039_4;
	R3039[5] = (char *(*)()) F596_4014;
	R3039[6] = (char *(*)()) F599_4014;
	R3039[7] = (char *(*)()) F596_4014;
}
static void F597_4014_3039_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F597_4014(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F598_4014_3039_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F598_4014(Current, *(EIF_POINTER *)arg1);
}
static void F600_4014_3039_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F600_4014(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R3040[8])();
void R3040_init () {
	R3040[0] = (char *(*)()) F596_4015;
	R3040[1] = (char *(*)()) F597_4015_3040_4;
	R3040[2] = (char *(*)()) F598_4015_3040_4;
	R3040[3] = (char *(*)()) F599_4015;
	R3040[4] = (char *(*)()) F600_4015_3040_4;
	R3040[5] = (char *(*)()) F596_4015;
	R3040[6] = (char *(*)()) F599_4015;
	R3040[7] = (char *(*)()) F596_4015;
}
static void F597_4015_3040_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F597_4015(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F598_4015_3040_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F598_4015(Current, *(EIF_POINTER *)arg1);
}
static void F600_4015_3040_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F600_4015(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R3045[8])();
void R3045_init () {
	R3045[0] = (char *(*)()) F596_4020;
	R3045[1] = (char *(*)()) F597_4020;
	R3045[2] = (char *(*)()) F598_4020;
	R3045[3] = (char *(*)()) F599_4020;
	R3045[4] = (char *(*)()) F600_4020;
	R3045[5] = (char *(*)()) F596_4020;
	R3045[6] = (char *(*)()) F599_4020;
	R3045[7] = (char *(*)()) F596_4020;
}

char *(*R3057[8])();
void R3057_init () {
	R3057[0] = (char *(*)()) F596_4032;
	R3057[1] = (char *(*)()) F597_4032;
	R3057[2] = (char *(*)()) F598_4032;
	R3057[3] = (char *(*)()) F599_4032;
	R3057[4] = (char *(*)()) F600_4032;
	R3057[5] = (char *(*)()) F596_4032;
	R3057[6] = (char *(*)()) F599_4032;
	R3057[7] = (char *(*)()) F596_4032;
}

char *(*R3058[8])();
void R3058_init () {
	R3058[0] = (char *(*)()) F596_4033;
	R3058[1] = (char *(*)()) F597_4033;
	R3058[2] = (char *(*)()) F598_4033;
	R3058[3] = (char *(*)()) F599_4033;
	R3058[4] = (char *(*)()) F600_4033;
	R3058[5] = (char *(*)()) F596_4033;
	R3058[6] = (char *(*)()) F599_4033;
	R3058[7] = (char *(*)()) F596_4033;
}

char *(*R3061[2])();
void R3061_init () {
	R3061[0] = (char *(*)()) F601_4036;
	R3061[1] = (char *(*)()) F602_4036;
}

char *(*R3081[15])();
void R3081_init () {
	R3081[0] = (char *(*)()) F604_4073;
	R3081[1] = (char *(*)()) F605_4073;
	R3081[2] = (char *(*)()) F606_4073;
	R3081[3] = (char *(*)()) F607_4073;
	R3081[4] = (char *(*)()) F608_4073;
	R3081[5] = (char *(*)()) F609_4073;
	R3081[6] = (char *(*)()) F610_4073;
	R3081[7] = (char *(*)()) F611_4073;
	R3081[8] = (char *(*)()) F612_4073;
	R3081[9] = (char *(*)()) F613_4073;
	R3081[10] = (char *(*)()) F614_4073;
	R3081[11] = (char *(*)()) F615_4073;
	R3081[12] = (char *(*)()) F616_4073;
	R3081[13] = (char *(*)()) F617_4073;
	R3081[14] = (char *(*)()) F618_4073;
}

char *(*R3085[15])();
void R3085_init () {
	R3085[0] = (char *(*)()) F604_4077;
	R3085[1] = (char *(*)()) F605_4077;
	R3085[2] = (char *(*)()) F606_4077;
	R3085[3] = (char *(*)()) F607_4077;
	R3085[4] = (char *(*)()) F608_4077;
	R3085[5] = (char *(*)()) F609_4077;
	R3085[6] = (char *(*)()) F610_4077;
	R3085[7] = (char *(*)()) F611_4077;
	R3085[8] = (char *(*)()) F612_4077;
	R3085[9] = (char *(*)()) F613_4077;
	R3085[10] = (char *(*)()) F614_4077;
	R3085[11] = (char *(*)()) F615_4077;
	R3085[12] = (char *(*)()) F616_4077;
	R3085[13] = (char *(*)()) F617_4077;
	R3085[14] = (char *(*)()) F618_4077;
}

char *(*R3086[15])();
void R3086_init () {
	R3086[0] = (char *(*)()) F604_4086;
	R3086[1] = (char *(*)()) F605_4086;
	R3086[2] = (char *(*)()) F606_4086;
	R3086[3] = (char *(*)()) F607_4086;
	R3086[4] = (char *(*)()) F608_4086;
	R3086[5] = (char *(*)()) F609_4086;
	R3086[6] = (char *(*)()) F610_4086;
	R3086[7] = (char *(*)()) F611_4086;
	R3086[8] = (char *(*)()) F612_4086;
	R3086[9] = (char *(*)()) F613_4086;
	R3086[10] = (char *(*)()) F614_4086;
	R3086[11] = (char *(*)()) F615_4086;
	R3086[12] = (char *(*)()) F616_4086;
	R3086[13] = (char *(*)()) F617_4086;
	R3086[14] = (char *(*)()) F618_4086;
}

char *(*R3089[15])();
void R3089_init () {
	R3089[0] = (char *(*)()) F604_4096;
	R3089[1] = (char *(*)()) F605_4096;
	R3089[2] = (char *(*)()) F606_4096;
	R3089[3] = (char *(*)()) F607_4096;
	R3089[4] = (char *(*)()) F608_4096;
	R3089[5] = (char *(*)()) F609_4096;
	R3089[6] = (char *(*)()) F610_4096;
	R3089[7] = (char *(*)()) F611_4096;
	R3089[8] = (char *(*)()) F612_4096;
	R3089[9] = (char *(*)()) F613_4096;
	R3089[10] = (char *(*)()) F614_4096;
	R3089[11] = (char *(*)()) F615_4096;
	R3089[12] = (char *(*)()) F616_4096;
	R3089[13] = (char *(*)()) F617_4096;
	R3089[14] = (char *(*)()) F618_4096;
}

char *(*R3093[15])();
void R3093_init () {
	R3093[0] = (char *(*)()) F604_4136;
	R3093[1] = (char *(*)()) F605_4136_3093_122;
	R3093[2] = (char *(*)()) F606_4136_3093_122;
	R3093[3] = (char *(*)()) F607_4136_3093_122;
	R3093[4] = (char *(*)()) F608_4136_3093_122;
	R3093[5] = (char *(*)()) F609_4136_3093_122;
	R3093[6] = (char *(*)()) F610_4136_3093_122;
	R3093[7] = (char *(*)()) F611_4136_3093_122;
	R3093[8] = (char *(*)()) F612_4136_3093_122;
	R3093[9] = (char *(*)()) F613_4136_3093_122;
	R3093[10] = (char *(*)()) F614_4136_3093_122;
	R3093[11] = (char *(*)()) F615_4136_3093_122;
	R3093[12] = (char *(*)()) F616_4136_3093_122;
	R3093[13] = (char *(*)()) F617_4136_3093_122;
	R3093[14] = (char *(*)()) F618_4136_3093_122;
}
static void F605_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F605_4136(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F606_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F606_4136(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F607_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F607_4136(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F608_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F608_4136(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F609_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F609_4136(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F610_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F610_4136(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F611_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F611_4136(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F612_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F612_4136(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F613_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F613_4136(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F614_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F614_4136(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F615_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F615_4136(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F616_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F616_4136(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F617_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F617_4136(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F618_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F618_4136(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R3094[15])();
void R3094_init () {
	R3094[0] = (char *(*)()) F604_4137;
	R3094[1] = (char *(*)()) F605_4137;
	R3094[2] = (char *(*)()) F606_4137;
	R3094[3] = (char *(*)()) F607_4137;
	R3094[4] = (char *(*)()) F608_4137;
	R3094[5] = (char *(*)()) F609_4137;
	R3094[6] = (char *(*)()) F610_4137;
	R3094[7] = (char *(*)()) F611_4137;
	R3094[8] = (char *(*)()) F612_4137;
	R3094[9] = (char *(*)()) F613_4137;
	R3094[10] = (char *(*)()) F614_4137;
	R3094[11] = (char *(*)()) F615_4137;
	R3094[12] = (char *(*)()) F616_4137;
	R3094[13] = (char *(*)()) F617_4137;
	R3094[14] = (char *(*)()) F618_4137;
}

char *(*R3427[277])();
void R3427_init () {
	R3427[0] = (char *(*)()) F621_4530;
	R3427[1] = (char *(*)()) F624_4967;
	R3427[276] = (char *(*)()) F624_4967;
}

char *(*R3443[277])();
void R3443_init () {
	{long i; for (i = 0; i < 2; i++) R3443[i] = (char *(*)()) F622_4727;}
	R3443[276] = (char *(*)()) F899_7035;
}

char *(*R3452[277])();
void R3452_init () {
	R3452[0] = (char *(*)()) F623_4918;
	R3452[1] = (char *(*)()) F624_4968;
	R3452[276] = (char *(*)()) F624_4968;
}

char *(*R3454[277])();
void R3454_init () {
	{long i; for (i = 0; i < 2; i++) R3454[i] = (char *(*)()) F622_4806;}
	R3454[276] = (char *(*)()) F899_7066;
}

char *(*R3456[277])();
void R3456_init () {
	{long i; for (i = 0; i < 2; i++) R3456[i] = (char *(*)()) F622_4801;}
	R3456[276] = (char *(*)()) F899_7058;
}

char *(*R3458[277])();
void R3458_init () {
	{long i; for (i = 0; i < 2; i++) R3458[i] = (char *(*)()) F622_4804;}
	R3458[276] = (char *(*)()) F899_7056;
}

char *(*R3460[277])();
void R3460_init () {
	R3460[0] = (char *(*)()) F623_4932;
	R3460[1] = (char *(*)()) F624_4982;
	R3460[276] = (char *(*)()) F899_7060;
}

char *(*R3475[277])();
void R3475_init () {
	R3475[0] = (char *(*)()) F623_4934;
	R3475[1] = (char *(*)()) F624_4984;
	R3475[276] = (char *(*)()) F899_7062;
}

char *(*R3478[277])();
void R3478_init () {
	R3478[0] = (char *(*)()) F623_4948;
	R3478[1] = (char *(*)()) F624_4997;
	R3478[276] = (char *(*)()) F899_7040;
}

char *(*R3480[277])();
void R3480_init () {
	R3480[0] = (char *(*)()) F623_4950;
	R3480[1] = (char *(*)()) F624_4999;
	R3480[276] = (char *(*)()) F899_7042;
}

char *(*R3482[277])();
void R3482_init () {
	{long i; for (i = 0; i < 2; i++) R3482[i] = (char *(*)()) F622_4832;}
	R3482[276] = (char *(*)()) F899_7053;
}

char *(*R3495[277])();
void R3495_init () {
	{long i; for (i = 0; i < 2; i++) R3495[i] = (char *(*)()) F622_4839;}
	R3495[276] = (char *(*)()) F899_7047;
}

char *(*R3498[277])();
void R3498_init () {
	{long i; for (i = 0; i < 2; i++) R3498[i] = (char *(*)()) F622_4836;}
	R3498[276] = (char *(*)()) F899_7044;
}


#ifdef __cplusplus
}
#endif
