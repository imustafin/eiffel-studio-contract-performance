#include "epoly7.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R2123[12])();
void R2123_init () {
	R2123[0] = (char *(*)()) F498_2575;
	R2123[1] = (char *(*)()) F499_2575;
	R2123[2] = (char *(*)()) F500_2575;
	R2123[3] = (char *(*)()) F501_2575;
	R2123[4] = (char *(*)()) F502_2575;
	R2123[5] = (char *(*)()) F503_2575;
	R2123[6] = (char *(*)()) F504_2575;
	R2123[7] = (char *(*)()) F505_2575;
	R2123[8] = (char *(*)()) F506_2575;
	R2123[9] = (char *(*)()) F507_2575;
	R2123[10] = (char *(*)()) F508_2575;
	R2123[11] = (char *(*)()) F509_2575;
}

char *(*R2124[12])();
void R2124_init () {
	R2124[0] = (char *(*)()) F498_2576;
	R2124[1] = (char *(*)()) F499_2576_2124_136;
	R2124[2] = (char *(*)()) F500_2576_2124_136;
	R2124[3] = (char *(*)()) F501_2576_2124_136;
	R2124[4] = (char *(*)()) F502_2576_2124_136;
	R2124[5] = (char *(*)()) F503_2576_2124_136;
	R2124[6] = (char *(*)()) F504_2576_2124_136;
	R2124[7] = (char *(*)()) F505_2576_2124_136;
	R2124[8] = (char *(*)()) F506_2576_2124_136;
	R2124[9] = (char *(*)()) F507_2576_2124_136;
	R2124[10] = (char *(*)()) F508_2576_2124_136;
	R2124[11] = (char *(*)()) F509_2576_2124_136;
}
static void F499_2576_2124_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F499_2576(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F500_2576_2124_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F500_2576(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F501_2576_2124_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F501_2576(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F502_2576_2124_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F502_2576(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F503_2576_2124_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F503_2576(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F504_2576_2124_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F504_2576(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F505_2576_2124_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F505_2576(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F506_2576_2124_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F506_2576(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F507_2576_2124_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F507_2576(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F508_2576_2124_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F508_2576(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static void F509_2576_2124_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F509_2576(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}

char *(*R2127[12])();
void R2127_init () {
	R2127[0] = (char *(*)()) F498_2579;
	R2127[1] = (char *(*)()) F499_2579;
	R2127[2] = (char *(*)()) F500_2579;
	R2127[3] = (char *(*)()) F501_2579;
	R2127[4] = (char *(*)()) F502_2579;
	R2127[5] = (char *(*)()) F503_2579;
	R2127[6] = (char *(*)()) F504_2579;
	R2127[7] = (char *(*)()) F505_2579;
	R2127[8] = (char *(*)()) F506_2579;
	R2127[9] = (char *(*)()) F507_2579;
	R2127[10] = (char *(*)()) F508_2579;
	R2127[11] = (char *(*)()) F509_2579;
}

char *(*R2130[12])();
void R2130_init () {
	R2130[0] = (char *(*)()) F498_2592;
	R2130[1] = (char *(*)()) F499_2592;
	R2130[2] = (char *(*)()) F500_2592;
	R2130[3] = (char *(*)()) F501_2592;
	R2130[4] = (char *(*)()) F502_2592;
	R2130[5] = (char *(*)()) F503_2592;
	R2130[6] = (char *(*)()) F504_2592;
	R2130[7] = (char *(*)()) F505_2592;
	R2130[8] = (char *(*)()) F506_2592;
	R2130[9] = (char *(*)()) F507_2592;
	R2130[10] = (char *(*)()) F508_2592;
	R2130[11] = (char *(*)()) F509_2592;
}

char *(*R2131[12])();
void R2131_init () {
	R2131[0] = (char *(*)()) F498_2593;
	R2131[1] = (char *(*)()) F499_2593_2131_2;
	R2131[2] = (char *(*)()) F500_2593_2131_2;
	R2131[3] = (char *(*)()) F501_2593_2131_2;
	R2131[4] = (char *(*)()) F502_2593_2131_2;
	R2131[5] = (char *(*)()) F503_2593_2131_2;
	R2131[6] = (char *(*)()) F504_2593_2131_2;
	R2131[7] = (char *(*)()) F505_2593_2131_2;
	R2131[8] = (char *(*)()) F506_2593_2131_2;
	R2131[9] = (char *(*)()) F507_2593_2131_2;
	R2131[10] = (char *(*)()) F508_2593_2131_2;
	R2131[11] = (char *(*)()) F509_2593_2131_2;
}
static EIF_BOOLEAN F499_2593_2131_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F499_2593(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F500_2593_2131_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F500_2593(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F501_2593_2131_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F501_2593(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F502_2593_2131_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F502_2593(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F503_2593_2131_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F503_2593(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F504_2593_2131_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F504_2593(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F505_2593_2131_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F505_2593(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F506_2593_2131_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F506_2593(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F507_2593_2131_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F507_2593(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F508_2593_2131_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F508_2593(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F509_2593_2131_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F509_2593(Current, *(EIF_POINTER *)arg1);
}

char *(*R2132[12])();
void R2132_init () {
	R2132[0] = (char *(*)()) F498_2595;
	R2132[1] = (char *(*)()) F499_2595;
	R2132[2] = (char *(*)()) F500_2595;
	R2132[3] = (char *(*)()) F501_2595;
	R2132[4] = (char *(*)()) F502_2595;
	R2132[5] = (char *(*)()) F503_2595;
	R2132[6] = (char *(*)()) F504_2595;
	R2132[7] = (char *(*)()) F505_2595;
	R2132[8] = (char *(*)()) F506_2595;
	R2132[9] = (char *(*)()) F507_2595;
	R2132[10] = (char *(*)()) F508_2595;
	R2132[11] = (char *(*)()) F509_2595;
}

char *(*R2137[12])();
void R2137_init () {
	R2137[0] = (char *(*)()) F498_2605;
	R2137[1] = (char *(*)()) F499_2605;
	R2137[2] = (char *(*)()) F500_2605;
	R2137[3] = (char *(*)()) F501_2605;
	R2137[4] = (char *(*)()) F502_2605;
	R2137[5] = (char *(*)()) F503_2605;
	R2137[6] = (char *(*)()) F504_2605;
	R2137[7] = (char *(*)()) F505_2605;
	R2137[8] = (char *(*)()) F506_2605;
	R2137[9] = (char *(*)()) F507_2605;
	R2137[10] = (char *(*)()) F508_2605;
	R2137[11] = (char *(*)()) F509_2605;
}

char *(*R2144[12])();
void R2144_init () {
	R2144[0] = (char *(*)()) F498_2613;
	R2144[1] = (char *(*)()) F499_2613;
	R2144[2] = (char *(*)()) F500_2613;
	R2144[3] = (char *(*)()) F501_2613;
	R2144[4] = (char *(*)()) F502_2613;
	R2144[5] = (char *(*)()) F503_2613;
	R2144[6] = (char *(*)()) F504_2613;
	R2144[7] = (char *(*)()) F505_2613;
	R2144[8] = (char *(*)()) F506_2613;
	R2144[9] = (char *(*)()) F507_2613;
	R2144[10] = (char *(*)()) F508_2613;
	R2144[11] = (char *(*)()) F509_2613;
}

char *(*R2146[12])();
void R2146_init () {
	R2146[0] = (char *(*)()) F498_2615;
	R2146[1] = (char *(*)()) F499_2615;
	R2146[2] = (char *(*)()) F500_2615;
	R2146[3] = (char *(*)()) F501_2615;
	R2146[4] = (char *(*)()) F502_2615;
	R2146[5] = (char *(*)()) F503_2615;
	R2146[6] = (char *(*)()) F504_2615;
	R2146[7] = (char *(*)()) F505_2615;
	R2146[8] = (char *(*)()) F506_2615;
	R2146[9] = (char *(*)()) F507_2615;
	R2146[10] = (char *(*)()) F508_2615;
	R2146[11] = (char *(*)()) F509_2615;
}

char *(*R2147[12])();
void R2147_init () {
	R2147[0] = (char *(*)()) F498_2616;
	R2147[1] = (char *(*)()) F499_2616;
	R2147[2] = (char *(*)()) F500_2616;
	R2147[3] = (char *(*)()) F501_2616;
	R2147[4] = (char *(*)()) F502_2616;
	R2147[5] = (char *(*)()) F503_2616;
	R2147[6] = (char *(*)()) F504_2616;
	R2147[7] = (char *(*)()) F505_2616;
	R2147[8] = (char *(*)()) F506_2616;
	R2147[9] = (char *(*)()) F507_2616;
	R2147[10] = (char *(*)()) F508_2616;
	R2147[11] = (char *(*)()) F509_2616;
}

char *(*R2151[12])();
void R2151_init () {
	R2151[0] = (char *(*)()) F498_2621;
	R2151[1] = (char *(*)()) F499_2621_2151_136;
	R2151[2] = (char *(*)()) F500_2621_2151_136;
	R2151[3] = (char *(*)()) F501_2621_2151_136;
	R2151[4] = (char *(*)()) F502_2621_2151_136;
	R2151[5] = (char *(*)()) F503_2621_2151_136;
	R2151[6] = (char *(*)()) F504_2621_2151_136;
	R2151[7] = (char *(*)()) F505_2621_2151_136;
	R2151[8] = (char *(*)()) F506_2621_2151_136;
	R2151[9] = (char *(*)()) F507_2621_2151_136;
	R2151[10] = (char *(*)()) F508_2621_2151_136;
	R2151[11] = (char *(*)()) F509_2621_2151_136;
}
static void F499_2621_2151_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F499_2621(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F500_2621_2151_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F500_2621(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F501_2621_2151_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F501_2621(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F502_2621_2151_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F502_2621(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F503_2621_2151_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F503_2621(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F504_2621_2151_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F504_2621(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F505_2621_2151_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F505_2621(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F506_2621_2151_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F506_2621(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F507_2621_2151_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F507_2621(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F508_2621_2151_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F508_2621(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static void F509_2621_2151_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F509_2621(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}

char *(*R2153[12])();
void R2153_init () {
	R2153[0] = (char *(*)()) F498_2624;
	R2153[1] = (char *(*)()) F499_2624;
	R2153[2] = (char *(*)()) F500_2624;
	R2153[3] = (char *(*)()) F501_2624;
	R2153[4] = (char *(*)()) F502_2624;
	R2153[5] = (char *(*)()) F503_2624;
	R2153[6] = (char *(*)()) F504_2624;
	R2153[7] = (char *(*)()) F505_2624;
	R2153[8] = (char *(*)()) F506_2624;
	R2153[9] = (char *(*)()) F507_2624;
	R2153[10] = (char *(*)()) F508_2624;
	R2153[11] = (char *(*)()) F509_2624;
}

char *(*R2157[12])();
void R2157_init () {
	R2157[0] = (char *(*)()) F498_2630;
	R2157[1] = (char *(*)()) F499_2630;
	R2157[2] = (char *(*)()) F500_2630;
	R2157[3] = (char *(*)()) F501_2630;
	R2157[4] = (char *(*)()) F502_2630;
	R2157[5] = (char *(*)()) F503_2630;
	R2157[6] = (char *(*)()) F504_2630;
	R2157[7] = (char *(*)()) F505_2630;
	R2157[8] = (char *(*)()) F506_2630;
	R2157[9] = (char *(*)()) F507_2630;
	R2157[10] = (char *(*)()) F508_2630;
	R2157[11] = (char *(*)()) F509_2630;
}

char *(*R2158[12])();
void R2158_init () {
	R2158[0] = (char *(*)()) F498_2633;
	R2158[1] = (char *(*)()) F499_2633;
	R2158[2] = (char *(*)()) F500_2633;
	R2158[3] = (char *(*)()) F501_2633;
	R2158[4] = (char *(*)()) F502_2633;
	R2158[5] = (char *(*)()) F503_2633;
	R2158[6] = (char *(*)()) F504_2633;
	R2158[7] = (char *(*)()) F505_2633;
	R2158[8] = (char *(*)()) F506_2633;
	R2158[9] = (char *(*)()) F507_2633;
	R2158[10] = (char *(*)()) F508_2633;
	R2158[11] = (char *(*)()) F509_2633;
}

char *(*R2161[16])();
void R2161_init () {
	R2161[0] = (char *(*)()) F558_2697;
	R2161[1] = (char *(*)()) F559_2697_2161_1;
	R2161[4] = (char *(*)()) F562_2782;
	R2161[5] = (char *(*)()) F563_2782_2161_1;
	R2161[6] = (char *(*)()) F564_2782_2161_1;
	R2161[7] = (char *(*)()) F565_2782_2161_1;
	R2161[8] = (char *(*)()) F566_2782_2161_1;
	R2161[9] = (char *(*)()) F567_2782_2161_1;
	R2161[10] = (char *(*)()) F568_2782_2161_1;
	R2161[11] = (char *(*)()) F569_2782_2161_1;
	R2161[12] = (char *(*)()) F570_2782_2161_1;
	R2161[13] = (char *(*)()) F571_2782_2161_1;
	R2161[14] = (char *(*)()) F572_2782_2161_1;
	R2161[15] = (char *(*)()) F573_2782_2161_1;
}
static EIF_REFERENCE F559_2697_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F559_2697(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F563_2782_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F563_2782(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F564_2782_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F564_2782(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F565_2782_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F565_2782(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F566_2782_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F566_2782(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F567_2782_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F567_2782(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F568_2782_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F568_2782(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F569_2782_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F569_2782(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F570_2782_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F570_2782(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F571_2782_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F571_2782(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F572_2782_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F572_2782(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F573_2782_2161_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F573_2782(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R2162[16])();
void R2162_init () {
	R2162[0] = (char *(*)()) F558_2698;
	R2162[1] = (char *(*)()) F559_2698_2162_1;
	R2162[4] = (char *(*)()) F562_2783;
	R2162[5] = (char *(*)()) F563_2783_2162_1;
	R2162[6] = (char *(*)()) F564_2783_2162_1;
	R2162[7] = (char *(*)()) F565_2783_2162_1;
	R2162[8] = (char *(*)()) F566_2783_2162_1;
	R2162[9] = (char *(*)()) F567_2783_2162_1;
	R2162[10] = (char *(*)()) F568_2783_2162_1;
	R2162[11] = (char *(*)()) F569_2783_2162_1;
	R2162[12] = (char *(*)()) F570_2783_2162_1;
	R2162[13] = (char *(*)()) F571_2783_2162_1;
	R2162[14] = (char *(*)()) F572_2783_2162_1;
	R2162[15] = (char *(*)()) F573_2783_2162_1;
}
static EIF_REFERENCE F559_2698_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F559_2698(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F563_2783_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F563_2783(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F564_2783_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F564_2783(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F565_2783_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F565_2783(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F566_2783_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F566_2783(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F567_2783_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F567_2783(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F568_2783_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F568_2783(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F569_2783_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F569_2783(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F570_2783_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F570_2783(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F571_2783_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F571_2783(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F572_2783_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F572_2783(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F573_2783_2162_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F573_2783(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R2163[16])();
void R2163_init () {
	R2163[0] = (char *(*)()) F558_2717;
	R2163[1] = (char *(*)()) F559_2717;
	R2163[4] = (char *(*)()) F562_2804;
	R2163[5] = (char *(*)()) F563_2804;
	R2163[6] = (char *(*)()) F564_2804;
	R2163[7] = (char *(*)()) F565_2804;
	R2163[8] = (char *(*)()) F566_2804;
	R2163[9] = (char *(*)()) F567_2804;
	R2163[10] = (char *(*)()) F568_2804;
	R2163[11] = (char *(*)()) F569_2804;
	R2163[12] = (char *(*)()) F570_2804;
	R2163[13] = (char *(*)()) F571_2804;
	R2163[14] = (char *(*)()) F572_2804;
	R2163[15] = (char *(*)()) F573_2804;
}

char *(*R2164[16])();
void R2164_init () {
	R2164[0] = (char *(*)()) F558_2718;
	R2164[1] = (char *(*)()) F559_2718;
	R2164[4] = (char *(*)()) F562_2809;
	R2164[5] = (char *(*)()) F563_2809;
	R2164[6] = (char *(*)()) F564_2809;
	R2164[7] = (char *(*)()) F565_2809;
	R2164[8] = (char *(*)()) F566_2809;
	R2164[9] = (char *(*)()) F567_2809;
	R2164[10] = (char *(*)()) F568_2809;
	R2164[11] = (char *(*)()) F569_2809;
	R2164[12] = (char *(*)()) F570_2809;
	R2164[13] = (char *(*)()) F571_2809;
	R2164[14] = (char *(*)()) F572_2809;
	R2164[15] = (char *(*)()) F573_2809;
}

char *(*R2165[16])();
void R2165_init () {
	R2165[0] = (char *(*)()) F558_2708;
	R2165[1] = (char *(*)()) F559_2708;
	R2165[4] = (char *(*)()) F510_2647;
	R2165[5] = (char *(*)()) F511_2647;
	R2165[6] = (char *(*)()) F512_2647;
	R2165[7] = (char *(*)()) F513_2647;
	R2165[8] = (char *(*)()) F514_2647;
	R2165[9] = (char *(*)()) F515_2647;
	R2165[10] = (char *(*)()) F516_2647;
	R2165[11] = (char *(*)()) F517_2647;
	R2165[12] = (char *(*)()) F518_2647;
	R2165[13] = (char *(*)()) F519_2647;
	R2165[14] = (char *(*)()) F520_2647;
	R2165[15] = (char *(*)()) F521_2647;
}

char *(*R2166[16])();
void R2166_init () {
	R2166[0] = (char *(*)()) F558_2709;
	R2166[1] = (char *(*)()) F559_2709;
	R2166[4] = (char *(*)()) F510_2648;
	R2166[5] = (char *(*)()) F511_2648;
	R2166[6] = (char *(*)()) F512_2648;
	R2166[7] = (char *(*)()) F513_2648;
	R2166[8] = (char *(*)()) F514_2648;
	R2166[9] = (char *(*)()) F515_2648;
	R2166[10] = (char *(*)()) F516_2648;
	R2166[11] = (char *(*)()) F517_2648;
	R2166[12] = (char *(*)()) F518_2648;
	R2166[13] = (char *(*)()) F519_2648;
	R2166[14] = (char *(*)()) F520_2648;
	R2166[15] = (char *(*)()) F521_2648;
}

char *(*R2167[16])();
void R2167_init () {
	R2167[0] = (char *(*)()) F510_2650;
	R2167[1] = (char *(*)()) F511_2650;
	R2167[4] = (char *(*)()) F510_2650;
	R2167[5] = (char *(*)()) F511_2650;
	R2167[6] = (char *(*)()) F512_2650;
	R2167[7] = (char *(*)()) F513_2650;
	R2167[8] = (char *(*)()) F514_2650;
	R2167[9] = (char *(*)()) F515_2650;
	R2167[10] = (char *(*)()) F516_2650;
	R2167[11] = (char *(*)()) F517_2650;
	R2167[12] = (char *(*)()) F518_2650;
	R2167[13] = (char *(*)()) F519_2650;
	R2167[14] = (char *(*)()) F520_2650;
	R2167[15] = (char *(*)()) F521_2650;
}

char *(*R2171[16])();
void R2171_init () {
	R2171[0] = (char *(*)()) F305_2098;
	R2171[1] = (char *(*)()) F306_2098_2171_159;
	R2171[4] = (char *(*)()) F305_2098;
	R2171[5] = (char *(*)()) F306_2098_2171_159;
	R2171[6] = (char *(*)()) F309_2098_2171_159;
	R2171[7] = (char *(*)()) F310_2098_2171_159;
	R2171[8] = (char *(*)()) F311_2098_2171_159;
	R2171[9] = (char *(*)()) F312_2098_2171_159;
	R2171[10] = (char *(*)()) F313_2098_2171_159;
	R2171[11] = (char *(*)()) F308_2098_2171_159;
	R2171[12] = (char *(*)()) F314_2098_2171_159;
	R2171[13] = (char *(*)()) F315_2098_2171_159;
	R2171[14] = (char *(*)()) F307_2098_2171_159;
	R2171[15] = (char *(*)()) F316_2098_2171_159;
}
static EIF_INTEGER_32 F306_2098_2171_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F306_2098(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F309_2098_2171_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F309_2098(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_INTEGER_32 F310_2098_2171_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F310_2098(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F311_2098_2171_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F311_2098(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F312_2098_2171_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F312_2098(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F313_2098_2171_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F313_2098(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F308_2098_2171_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F308_2098(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F314_2098_2171_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F314_2098(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static EIF_INTEGER_32 F315_2098_2171_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F315_2098(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F307_2098_2171_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F307_2098(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F316_2098_2171_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F316_2098(Current, *(EIF_POINTER *)arg1, arg2);
}

char *(*R2172[16])();
void R2172_init () {
	R2172[0] = (char *(*)()) F305_2097;
	R2172[1] = (char *(*)()) F306_2097_2172_2;
	R2172[4] = (char *(*)()) F305_2097;
	R2172[5] = (char *(*)()) F306_2097_2172_2;
	R2172[6] = (char *(*)()) F309_2097_2172_2;
	R2172[7] = (char *(*)()) F310_2097_2172_2;
	R2172[8] = (char *(*)()) F311_2097_2172_2;
	R2172[9] = (char *(*)()) F312_2097_2172_2;
	R2172[10] = (char *(*)()) F313_2097_2172_2;
	R2172[11] = (char *(*)()) F308_2097_2172_2;
	R2172[12] = (char *(*)()) F314_2097_2172_2;
	R2172[13] = (char *(*)()) F315_2097_2172_2;
	R2172[14] = (char *(*)()) F307_2097_2172_2;
	R2172[15] = (char *(*)()) F316_2097_2172_2;
}
static EIF_BOOLEAN F306_2097_2172_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F306_2097(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F309_2097_2172_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F309_2097(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F310_2097_2172_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F310_2097(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F311_2097_2172_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F311_2097(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F312_2097_2172_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F312_2097(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F313_2097_2172_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F313_2097(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F308_2097_2172_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F308_2097(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F314_2097_2172_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F314_2097(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F315_2097_2172_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F315_2097(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F307_2097_2172_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F307_2097(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F316_2097_2172_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F316_2097(Current, *(EIF_POINTER *)arg1);
}

char *(*R2174[16])();
void R2174_init () {
	R2174[0] = (char *(*)()) F305_2101;
	R2174[1] = (char *(*)()) F306_2101_2174_11;
	R2174[4] = (char *(*)()) F305_2101;
	R2174[5] = (char *(*)()) F306_2101_2174_11;
	R2174[6] = (char *(*)()) F309_2101_2174_11;
	R2174[7] = (char *(*)()) F310_2101_2174_11;
	R2174[8] = (char *(*)()) F311_2101_2174_11;
	R2174[9] = (char *(*)()) F312_2101_2174_11;
	R2174[10] = (char *(*)()) F313_2101_2174_11;
	R2174[11] = (char *(*)()) F308_2101_2174_11;
	R2174[12] = (char *(*)()) F314_2101_2174_11;
	R2174[13] = (char *(*)()) F315_2101_2174_11;
	R2174[14] = (char *(*)()) F307_2101_2174_11;
	R2174[15] = (char *(*)()) F316_2101_2174_11;
}
static EIF_INTEGER_32 F306_2101_2174_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F306_2101(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F309_2101_2174_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F309_2101(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_INTEGER_32 F310_2101_2174_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F310_2101(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_INTEGER_32 F311_2101_2174_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F311_2101(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_INTEGER_32 F312_2101_2174_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F312_2101(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_INTEGER_32 F313_2101_2174_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F313_2101(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_INTEGER_32 F308_2101_2174_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F308_2101(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_INTEGER_32 F314_2101_2174_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F314_2101(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_INTEGER_32 F315_2101_2174_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F315_2101(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_INTEGER_32 F307_2101_2174_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F307_2101(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_INTEGER_32 F316_2101_2174_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F316_2101(Current, *(EIF_POINTER *)arg1);
}

char *(*R2175[16])();
void R2175_init () {
	R2175[0] = (char *(*)()) F558_2720;
	R2175[1] = (char *(*)()) F559_2720_2175_4;
	R2175[4] = (char *(*)()) F562_2812;
	R2175[5] = (char *(*)()) F563_2812_2175_4;
	R2175[6] = (char *(*)()) F564_2812_2175_4;
	R2175[7] = (char *(*)()) F565_2812_2175_4;
	R2175[8] = (char *(*)()) F566_2812_2175_4;
	R2175[9] = (char *(*)()) F567_2812_2175_4;
	R2175[10] = (char *(*)()) F568_2812_2175_4;
	R2175[11] = (char *(*)()) F569_2812_2175_4;
	R2175[12] = (char *(*)()) F570_2812_2175_4;
	R2175[13] = (char *(*)()) F571_2812_2175_4;
	R2175[14] = (char *(*)()) F572_2812_2175_4;
	R2175[15] = (char *(*)()) F573_2812_2175_4;
}
static void F559_2720_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F559_2720(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F563_2812_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F563_2812(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F564_2812_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F564_2812(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F565_2812_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F565_2812(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F566_2812_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F566_2812(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F567_2812_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F567_2812(Current, *(EIF_REAL_32 *)arg1);
}
static void F568_2812_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F568_2812(Current, *(EIF_REAL_64 *)arg1);
}
static void F569_2812_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F569_2812(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F570_2812_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F570_2812(Current, *(EIF_BOOLEAN *)arg1);
}
static void F571_2812_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F571_2812(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F572_2812_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F572_2812(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F573_2812_2175_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F573_2812(Current, *(EIF_POINTER *)arg1);
}

char *(*R2176[16])();
void R2176_init () {
	R2176[0] = (char *(*)()) F558_2722;
	R2176[1] = (char *(*)()) F559_2722_2176_4;
	R2176[4] = (char *(*)()) F562_2816;
	R2176[5] = (char *(*)()) F563_2816_2176_4;
	R2176[6] = (char *(*)()) F564_2816_2176_4;
	R2176[7] = (char *(*)()) F565_2816_2176_4;
	R2176[8] = (char *(*)()) F566_2816_2176_4;
	R2176[9] = (char *(*)()) F567_2816_2176_4;
	R2176[10] = (char *(*)()) F568_2816_2176_4;
	R2176[11] = (char *(*)()) F569_2816_2176_4;
	R2176[12] = (char *(*)()) F570_2816_2176_4;
	R2176[13] = (char *(*)()) F571_2816_2176_4;
	R2176[14] = (char *(*)()) F572_2816_2176_4;
	R2176[15] = (char *(*)()) F573_2816_2176_4;
}
static void F559_2722_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F559_2722(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F563_2816_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F563_2816(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F564_2816_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F564_2816(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F565_2816_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F565_2816(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F566_2816_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F566_2816(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F567_2816_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F567_2816(Current, *(EIF_REAL_32 *)arg1);
}
static void F568_2816_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F568_2816(Current, *(EIF_REAL_64 *)arg1);
}
static void F569_2816_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F569_2816(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F570_2816_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F570_2816(Current, *(EIF_BOOLEAN *)arg1);
}
static void F571_2816_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F571_2816(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F572_2816_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F572_2816(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F573_2816_2176_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F573_2816(Current, *(EIF_POINTER *)arg1);
}

char *(*R2177[16])();
void R2177_init () {
	R2177[0] = (char *(*)()) F558_2723;
	R2177[1] = (char *(*)()) F559_2723_2177_4;
	R2177[4] = (char *(*)()) F562_2817;
	R2177[5] = (char *(*)()) F563_2817_2177_4;
	R2177[6] = (char *(*)()) F564_2817_2177_4;
	R2177[7] = (char *(*)()) F565_2817_2177_4;
	R2177[8] = (char *(*)()) F566_2817_2177_4;
	R2177[9] = (char *(*)()) F567_2817_2177_4;
	R2177[10] = (char *(*)()) F568_2817_2177_4;
	R2177[11] = (char *(*)()) F569_2817_2177_4;
	R2177[12] = (char *(*)()) F570_2817_2177_4;
	R2177[13] = (char *(*)()) F571_2817_2177_4;
	R2177[14] = (char *(*)()) F572_2817_2177_4;
	R2177[15] = (char *(*)()) F573_2817_2177_4;
}
static void F559_2723_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F559_2723(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F563_2817_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F563_2817(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F564_2817_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F564_2817(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F565_2817_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F565_2817(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F566_2817_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F566_2817(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F567_2817_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F567_2817(Current, *(EIF_REAL_32 *)arg1);
}
static void F568_2817_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F568_2817(Current, *(EIF_REAL_64 *)arg1);
}
static void F569_2817_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F569_2817(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F570_2817_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F570_2817(Current, *(EIF_BOOLEAN *)arg1);
}
static void F571_2817_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F571_2817(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F572_2817_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F572_2817(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F573_2817_2177_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F573_2817(Current, *(EIF_POINTER *)arg1);
}

char *(*R2179[16])();
void R2179_init () {
	R2179[0] = (char *(*)()) F558_2726;
	R2179[1] = (char *(*)()) F559_2726;
	R2179[4] = (char *(*)()) F562_2820;
	R2179[5] = (char *(*)()) F563_2820;
	R2179[6] = (char *(*)()) F564_2820;
	R2179[7] = (char *(*)()) F565_2820;
	R2179[8] = (char *(*)()) F566_2820;
	R2179[9] = (char *(*)()) F567_2820;
	R2179[10] = (char *(*)()) F568_2820;
	R2179[11] = (char *(*)()) F569_2820;
	R2179[12] = (char *(*)()) F570_2820;
	R2179[13] = (char *(*)()) F571_2820;
	R2179[14] = (char *(*)()) F572_2820;
	R2179[15] = (char *(*)()) F573_2820;
}

char *(*R2181[16])();
void R2181_init () {
	R2181[0] = (char *(*)()) F558_2729;
	R2181[1] = (char *(*)()) F559_2729;
	R2181[4] = (char *(*)()) F562_2831;
	R2181[5] = (char *(*)()) F563_2831;
	R2181[6] = (char *(*)()) F564_2831;
	R2181[7] = (char *(*)()) F565_2831;
	R2181[8] = (char *(*)()) F566_2831;
	R2181[9] = (char *(*)()) F567_2831;
	R2181[10] = (char *(*)()) F568_2831;
	R2181[11] = (char *(*)()) F569_2831;
	R2181[12] = (char *(*)()) F570_2831;
	R2181[13] = (char *(*)()) F571_2831;
	R2181[14] = (char *(*)()) F572_2831;
	R2181[15] = (char *(*)()) F573_2831;
}

char *(*R2182[16])();
void R2182_init () {
	R2182[0] = (char *(*)()) F558_2732;
	R2182[1] = (char *(*)()) F559_2732;
	R2182[4] = (char *(*)()) F562_2835;
	R2182[5] = (char *(*)()) F563_2835;
	R2182[6] = (char *(*)()) F564_2835;
	R2182[7] = (char *(*)()) F565_2835;
	R2182[8] = (char *(*)()) F566_2835;
	R2182[9] = (char *(*)()) F567_2835;
	R2182[10] = (char *(*)()) F568_2835;
	R2182[11] = (char *(*)()) F569_2835;
	R2182[12] = (char *(*)()) F570_2835;
	R2182[13] = (char *(*)()) F571_2835;
	R2182[14] = (char *(*)()) F572_2835;
	R2182[15] = (char *(*)()) F573_2835;
}

char *(*R2183[16])();
void R2183_init () {
	R2183[0] = (char *(*)()) F522_2677;
	R2183[1] = (char *(*)()) F523_2677;
	R2183[4] = (char *(*)()) F522_2677;
	R2183[5] = (char *(*)()) F523_2677;
	R2183[6] = (char *(*)()) F524_2677;
	R2183[7] = (char *(*)()) F525_2677;
	R2183[8] = (char *(*)()) F526_2677;
	R2183[9] = (char *(*)()) F527_2677;
	R2183[10] = (char *(*)()) F528_2677;
	R2183[11] = (char *(*)()) F529_2677;
	R2183[12] = (char *(*)()) F530_2677;
	R2183[13] = (char *(*)()) F531_2677;
	R2183[14] = (char *(*)()) F532_2677;
	R2183[15] = (char *(*)()) F533_2677;
}

char *(*R2184[2])();
void R2184_init () {
	R2184[0] = (char *(*)()) F558_2694;
	R2184[1] = (char *(*)()) F559_2694;
}

char *(*R2187[2])();
void R2187_init () {
	R2187[0] = (char *(*)()) F558_2733;
	R2187[1] = (char *(*)()) F559_2733_2187_5;
}
static EIF_REFERENCE F559_2733_2187_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F559_2733(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2188[2])();
void R2188_init () {
	R2188[0] = (char *(*)()) F558_2734;
	R2188[1] = (char *(*)()) F559_2734;
}

char *(*R2189[2])();
void R2189_init () {
	R2189[0] = (char *(*)()) F558_2735;
	R2189[1] = (char *(*)()) F559_2735;
}

char *(*R2191[2])();
void R2191_init () {
	R2191[0] = (char *(*)()) F558_2737;
	R2191[1] = (char *(*)()) F559_2737;
}

char *(*R2192[2])();
void R2192_init () {
	R2192[0] = (char *(*)()) F558_2738;
	R2192[1] = (char *(*)()) F559_2738;
}

char *(*R2193[2])();
void R2193_init () {
	R2193[0] = (char *(*)()) F558_2739;
	R2193[1] = (char *(*)()) F559_2739;
}

char *(*R2197[229])();
void R2197_init () {
	R2197[0] = (char *(*)()) F560_2740;
	R2197[1] = (char *(*)()) F561_2766;
	R2197[2] = (char *(*)()) F562_2834;
	R2197[3] = (char *(*)()) F563_2834;
	R2197[4] = (char *(*)()) F564_2834;
	R2197[5] = (char *(*)()) F565_2834;
	R2197[6] = (char *(*)()) F566_2834;
	R2197[7] = (char *(*)()) F567_2834;
	R2197[8] = (char *(*)()) F568_2834;
	R2197[9] = (char *(*)()) F569_2834;
	R2197[10] = (char *(*)()) F570_2834;
	R2197[11] = (char *(*)()) F571_2834;
	R2197[12] = (char *(*)()) F572_2834;
	R2197[13] = (char *(*)()) F573_2834;
	R2197[14] = (char *(*)()) F574_2850;
	R2197[15] = (char *(*)()) F575_2918;
	R2197[16] = (char *(*)()) F576_2918;
	R2197[17] = (char *(*)()) F577_2918;
	R2197[18] = (char *(*)()) F578_2918;
	R2197[19] = (char *(*)()) F575_2918;
	R2197[20] = (char *(*)()) F576_2918;
	R2197[21] = (char *(*)()) F575_2918;
	R2197[132] = (char *(*)()) F692_3406;
	{long i; for (i = 206; i < 210; i++) R2197[i] = (char *(*)()) F765_4461;}
	R2197[214] = (char *(*)()) F774_4697;
	R2197[215] = (char *(*)()) F775_4788;
	R2197[218] = (char *(*)()) F778_4949;
	{long i; for (i = 222; i < 224; i++) R2197[i] = (char *(*)()) F574_2850;}
	{long i; for (i = 226; i < 229; i++) R2197[i] = (char *(*)()) F574_2850;}
}

char *(*R2209[12])();
void R2209_init () {
	R2209[0] = (char *(*)()) F562_2774;
	R2209[1] = (char *(*)()) F563_2774;
	R2209[2] = (char *(*)()) F564_2774;
	R2209[3] = (char *(*)()) F565_2774;
	R2209[4] = (char *(*)()) F566_2774;
	R2209[5] = (char *(*)()) F567_2774;
	R2209[6] = (char *(*)()) F568_2774;
	R2209[7] = (char *(*)()) F569_2774;
	R2209[8] = (char *(*)()) F570_2774;
	R2209[9] = (char *(*)()) F571_2774;
	R2209[10] = (char *(*)()) F572_2774;
	R2209[11] = (char *(*)()) F573_2774;
}

char *(*R2213[12])();
void R2213_init () {
	R2213[0] = (char *(*)()) F562_2778;
	R2213[1] = (char *(*)()) F563_2778;
	R2213[2] = (char *(*)()) F564_2778;
	R2213[3] = (char *(*)()) F565_2778;
	R2213[4] = (char *(*)()) F566_2778;
	R2213[5] = (char *(*)()) F567_2778;
	R2213[6] = (char *(*)()) F568_2778;
	R2213[7] = (char *(*)()) F569_2778;
	R2213[8] = (char *(*)()) F570_2778;
	R2213[9] = (char *(*)()) F571_2778;
	R2213[10] = (char *(*)()) F572_2778;
	R2213[11] = (char *(*)()) F573_2778;
}

char *(*R2214[12])();
void R2214_init () {
	R2214[0] = (char *(*)()) F562_2787;
	R2214[1] = (char *(*)()) F563_2787;
	R2214[2] = (char *(*)()) F564_2787;
	R2214[3] = (char *(*)()) F565_2787;
	R2214[4] = (char *(*)()) F566_2787;
	R2214[5] = (char *(*)()) F567_2787;
	R2214[6] = (char *(*)()) F568_2787;
	R2214[7] = (char *(*)()) F569_2787;
	R2214[8] = (char *(*)()) F570_2787;
	R2214[9] = (char *(*)()) F571_2787;
	R2214[10] = (char *(*)()) F572_2787;
	R2214[11] = (char *(*)()) F573_2787;
}

char *(*R2217[12])();
void R2217_init () {
	R2217[0] = (char *(*)()) F562_2797;
	R2217[1] = (char *(*)()) F563_2797;
	R2217[2] = (char *(*)()) F564_2797;
	R2217[3] = (char *(*)()) F565_2797;
	R2217[4] = (char *(*)()) F566_2797;
	R2217[5] = (char *(*)()) F567_2797;
	R2217[6] = (char *(*)()) F568_2797;
	R2217[7] = (char *(*)()) F569_2797;
	R2217[8] = (char *(*)()) F570_2797;
	R2217[9] = (char *(*)()) F571_2797;
	R2217[10] = (char *(*)()) F572_2797;
	R2217[11] = (char *(*)()) F573_2797;
}

char *(*R2221[12])();
void R2221_init () {
	R2221[0] = (char *(*)()) F562_2837;
	R2221[1] = (char *(*)()) F563_2837_2221_109;
	R2221[2] = (char *(*)()) F564_2837_2221_109;
	R2221[3] = (char *(*)()) F565_2837_2221_109;
	R2221[4] = (char *(*)()) F566_2837_2221_109;
	R2221[5] = (char *(*)()) F567_2837_2221_109;
	R2221[6] = (char *(*)()) F568_2837_2221_109;
	R2221[7] = (char *(*)()) F569_2837_2221_109;
	R2221[8] = (char *(*)()) F570_2837_2221_109;
	R2221[9] = (char *(*)()) F571_2837_2221_109;
	R2221[10] = (char *(*)()) F572_2837_2221_109;
	R2221[11] = (char *(*)()) F573_2837_2221_109;
}
static void F563_2837_2221_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F563_2837(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F564_2837_2221_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F564_2837(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F565_2837_2221_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F565_2837(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F566_2837_2221_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F566_2837(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F567_2837_2221_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F567_2837(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F568_2837_2221_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F568_2837(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F569_2837_2221_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F569_2837(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F570_2837_2221_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F570_2837(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F571_2837_2221_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F571_2837(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F572_2837_2221_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F572_2837(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F573_2837_2221_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F573_2837(Current, *(EIF_POINTER *)arg1, arg2);
}

char *(*R2222[12])();
void R2222_init () {
	R2222[0] = (char *(*)()) F562_2838;
	R2222[1] = (char *(*)()) F563_2838;
	R2222[2] = (char *(*)()) F564_2838;
	R2222[3] = (char *(*)()) F565_2838;
	R2222[4] = (char *(*)()) F566_2838;
	R2222[5] = (char *(*)()) F567_2838;
	R2222[6] = (char *(*)()) F568_2838;
	R2222[7] = (char *(*)()) F569_2838;
	R2222[8] = (char *(*)()) F570_2838;
	R2222[9] = (char *(*)()) F571_2838;
	R2222[10] = (char *(*)()) F572_2838;
	R2222[11] = (char *(*)()) F573_2838;
}

char *(*R2236[7])();
void R2236_init () {
	R2236[0] = (char *(*)()) F575_2859;
	R2236[1] = (char *(*)()) F576_2859;
	R2236[2] = (char *(*)()) F577_2859;
	R2236[3] = (char *(*)()) F578_2859;
	R2236[4] = (char *(*)()) F575_2859;
	R2236[5] = (char *(*)()) F576_2859;
	R2236[6] = (char *(*)()) F575_2859;
}

char *(*R2237[7])();
void R2237_init () {
	R2237[0] = (char *(*)()) F575_2860;
	R2237[1] = (char *(*)()) F576_2860;
	R2237[2] = (char *(*)()) F577_2860;
	R2237[3] = (char *(*)()) F578_2860;
	R2237[4] = (char *(*)()) F575_2860;
	R2237[5] = (char *(*)()) F576_2860;
	R2237[6] = (char *(*)()) F575_2860;
}

char *(*R2238[7])();
void R2238_init () {
	R2238[0] = (char *(*)()) F575_2861;
	R2238[1] = (char *(*)()) F576_2861;
	R2238[2] = (char *(*)()) F577_2861;
	R2238[3] = (char *(*)()) F578_2861;
	R2238[4] = (char *(*)()) F575_2861;
	R2238[5] = (char *(*)()) F576_2861;
	R2238[6] = (char *(*)()) F575_2861;
}

char *(*R2239[7])();
void R2239_init () {
	R2239[0] = (char *(*)()) F575_2862;
	R2239[1] = (char *(*)()) F576_2862_2239_1;
	R2239[2] = (char *(*)()) F577_2862;
	R2239[3] = (char *(*)()) F578_2862_2239_1;
	R2239[4] = (char *(*)()) F575_2862;
	R2239[5] = (char *(*)()) F576_2862_2239_1;
	R2239[6] = (char *(*)()) F575_2862;
}
static EIF_REFERENCE F576_2862_2239_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F576_2862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F578_2862_2239_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F578_2862(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2240[7])();
void R2240_init () {
	R2240[0] = (char *(*)()) F575_2864;
	R2240[1] = (char *(*)()) F576_2864_2240_5;
	R2240[2] = (char *(*)()) F577_2864_2240_5;
	R2240[3] = (char *(*)()) F578_2864_2240_5;
	R2240[4] = (char *(*)()) F575_2864;
	R2240[5] = (char *(*)()) F576_2864_2240_5;
	R2240[6] = (char *(*)()) F575_2864;
}
static EIF_REFERENCE F576_2864_2240_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F576_2864(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F577_2864_2240_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F577_2864(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F578_2864_2240_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F578_2864(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2244[7])();
void R2244_init () {
	R2244[0] = (char *(*)()) F575_2870;
	R2244[1] = (char *(*)()) F576_2870_2244_1;
	R2244[2] = (char *(*)()) F577_2870;
	R2244[3] = (char *(*)()) F578_2870_2244_1;
	R2244[4] = (char *(*)()) F575_2870;
	R2244[5] = (char *(*)()) F576_2870_2244_1;
	R2244[6] = (char *(*)()) F575_2870;
}
static EIF_REFERENCE F576_2870_2244_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F576_2870(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F578_2870_2244_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F578_2870(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2245[7])();
void R2245_init () {
	R2245[0] = (char *(*)()) F575_2871;
	R2245[1] = (char *(*)()) F576_2871;
	R2245[2] = (char *(*)()) F577_2871_2245_1;
	R2245[3] = (char *(*)()) F578_2871_2245_1;
	R2245[4] = (char *(*)()) F575_2871;
	R2245[5] = (char *(*)()) F576_2871;
	R2245[6] = (char *(*)()) F575_2871;
}
static EIF_REFERENCE F577_2871_2245_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F577_2871(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F578_2871_2245_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F578_2871(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2247[7])();
void R2247_init () {
	R2247[0] = (char *(*)()) F575_2875;
	R2247[1] = (char *(*)()) F576_2875;
	R2247[2] = (char *(*)()) F577_2875_2247_11;
	R2247[3] = (char *(*)()) F578_2875_2247_11;
	R2247[4] = (char *(*)()) F579_2973;
	R2247[5] = (char *(*)()) F580_2973;
	R2247[6] = (char *(*)()) F575_2875;
}
static EIF_INTEGER_32 F577_2875_2247_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F577_2875(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F578_2875_2247_11 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F578_2875(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2249[7])();
void R2249_init () {
	R2249[0] = (char *(*)()) F575_2882;
	R2249[1] = (char *(*)()) F576_2882;
	R2249[2] = (char *(*)()) F577_2882_2249_3;
	R2249[3] = (char *(*)()) F578_2882_2249_3;
	R2249[4] = (char *(*)()) F579_2975;
	R2249[5] = (char *(*)()) F580_2975;
	R2249[6] = (char *(*)()) F575_2882;
}
static EIF_BOOLEAN F577_2882_2249_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F577_2882(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static EIF_BOOLEAN F578_2882_2249_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F578_2882(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

char *(*R2251[7])();
void R2251_init () {
	R2251[0] = (char *(*)()) F575_2887;
	R2251[1] = (char *(*)()) F576_2887;
	R2251[2] = (char *(*)()) F577_2887;
	R2251[3] = (char *(*)()) F578_2887;
	R2251[4] = (char *(*)()) F575_2887;
	R2251[5] = (char *(*)()) F576_2887;
	R2251[6] = (char *(*)()) F575_2887;
}

char *(*R2252[7])();
void R2252_init () {
	R2252[0] = (char *(*)()) F575_2888;
	R2252[1] = (char *(*)()) F576_2888;
	R2252[2] = (char *(*)()) F577_2888;
	R2252[3] = (char *(*)()) F578_2888;
	R2252[4] = (char *(*)()) F575_2888;
	R2252[5] = (char *(*)()) F576_2888;
	R2252[6] = (char *(*)()) F575_2888;
}

char *(*R2253[7])();
void R2253_init () {
	R2253[0] = (char *(*)()) F575_2889;
	R2253[1] = (char *(*)()) F576_2889;
	R2253[2] = (char *(*)()) F577_2889;
	R2253[3] = (char *(*)()) F578_2889;
	R2253[4] = (char *(*)()) F575_2889;
	R2253[5] = (char *(*)()) F576_2889;
	R2253[6] = (char *(*)()) F575_2889;
}

char *(*R2254[7])();
void R2254_init () {
	R2254[0] = (char *(*)()) F575_2890;
	R2254[1] = (char *(*)()) F576_2890;
	R2254[2] = (char *(*)()) F577_2890;
	R2254[3] = (char *(*)()) F578_2890;
	R2254[4] = (char *(*)()) F575_2890;
	R2254[5] = (char *(*)()) F576_2890;
	R2254[6] = (char *(*)()) F575_2890;
}

char *(*R2255[7])();
void R2255_init () {
	R2255[0] = (char *(*)()) F575_2891;
	R2255[1] = (char *(*)()) F576_2891;
	R2255[2] = (char *(*)()) F577_2891;
	R2255[3] = (char *(*)()) F578_2891;
	R2255[4] = (char *(*)()) F575_2891;
	R2255[5] = (char *(*)()) F576_2891;
	R2255[6] = (char *(*)()) F575_2891;
}

char *(*R2256[7])();
void R2256_init () {
	R2256[0] = (char *(*)()) F575_2892;
	R2256[1] = (char *(*)()) F576_2892;
	R2256[2] = (char *(*)()) F577_2892;
	R2256[3] = (char *(*)()) F578_2892;
	R2256[4] = (char *(*)()) F575_2892;
	R2256[5] = (char *(*)()) F576_2892;
	R2256[6] = (char *(*)()) F575_2892;
}

char *(*R2257[7])();
void R2257_init () {
	R2257[0] = (char *(*)()) F575_2893;
	R2257[1] = (char *(*)()) F576_2893;
	R2257[2] = (char *(*)()) F577_2893;
	R2257[3] = (char *(*)()) F578_2893;
	R2257[4] = (char *(*)()) F575_2893;
	R2257[5] = (char *(*)()) F576_2893;
	R2257[6] = (char *(*)()) F575_2893;
}

char *(*R2258[7])();
void R2258_init () {
	R2258[0] = (char *(*)()) F575_2894;
	R2258[1] = (char *(*)()) F576_2894;
	R2258[2] = (char *(*)()) F577_2894;
	R2258[3] = (char *(*)()) F578_2894;
	R2258[4] = (char *(*)()) F575_2894;
	R2258[5] = (char *(*)()) F576_2894;
	R2258[6] = (char *(*)()) F575_2894;
}

char *(*R2259[7])();
void R2259_init () {
	R2259[0] = (char *(*)()) F575_2895;
	R2259[1] = (char *(*)()) F576_2895;
	R2259[2] = (char *(*)()) F577_2895;
	R2259[3] = (char *(*)()) F578_2895;
	R2259[4] = (char *(*)()) F575_2895;
	R2259[5] = (char *(*)()) F576_2895;
	R2259[6] = (char *(*)()) F575_2895;
}

char *(*R2261[7])();
void R2261_init () {
	R2261[0] = (char *(*)()) F575_2898;
	R2261[1] = (char *(*)()) F576_2898;
	R2261[2] = (char *(*)()) F577_2898;
	R2261[3] = (char *(*)()) F578_2898;
	R2261[4] = (char *(*)()) F575_2898;
	R2261[5] = (char *(*)()) F576_2898;
	R2261[6] = (char *(*)()) F575_2898;
}

char *(*R2262[7])();
void R2262_init () {
	R2262[0] = (char *(*)()) F575_2899;
	R2262[1] = (char *(*)()) F576_2899;
	R2262[2] = (char *(*)()) F577_2899;
	R2262[3] = (char *(*)()) F578_2899;
	R2262[4] = (char *(*)()) F575_2899;
	R2262[5] = (char *(*)()) F576_2899;
	R2262[6] = (char *(*)()) F575_2899;
}

char *(*R2264[7])();
void R2264_init () {
	R2264[0] = (char *(*)()) F575_2901;
	R2264[1] = (char *(*)()) F576_2901;
	R2264[2] = (char *(*)()) F577_2901_2264_4;
	R2264[3] = (char *(*)()) F578_2901_2264_4;
	R2264[4] = (char *(*)()) F575_2901;
	R2264[5] = (char *(*)()) F576_2901;
	R2264[6] = (char *(*)()) F575_2901;
}
static void F577_2901_2264_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F577_2901(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F578_2901_2264_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F578_2901(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2266[7])();
void R2266_init () {
	R2266[0] = (char *(*)()) F575_2903;
	R2266[1] = (char *(*)()) F576_2903;
	R2266[2] = (char *(*)()) F577_2903;
	R2266[3] = (char *(*)()) F578_2903;
	R2266[4] = (char *(*)()) F575_2903;
	R2266[5] = (char *(*)()) F576_2903;
	R2266[6] = (char *(*)()) F575_2903;
}

char *(*R2267[7])();
void R2267_init () {
	R2267[0] = (char *(*)()) F575_2904;
	R2267[1] = (char *(*)()) F576_2904;
	R2267[2] = (char *(*)()) F577_2904;
	R2267[3] = (char *(*)()) F578_2904;
	R2267[4] = (char *(*)()) F575_2904;
	R2267[5] = (char *(*)()) F576_2904;
	R2267[6] = (char *(*)()) F575_2904;
}

char *(*R2272[7])();
void R2272_init () {
	R2272[0] = (char *(*)()) F575_2911;
	R2272[1] = (char *(*)()) F576_2911;
	R2272[2] = (char *(*)()) F577_2911_2272_4;
	R2272[3] = (char *(*)()) F578_2911_2272_4;
	R2272[4] = (char *(*)()) F575_2911;
	R2272[5] = (char *(*)()) F576_2911;
	R2272[6] = (char *(*)()) F575_2911;
}
static void F577_2911_2272_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F577_2911(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F578_2911_2272_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F578_2911(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2274[7])();
void R2274_init () {
	R2274[0] = (char *(*)()) F575_2917;
	R2274[1] = (char *(*)()) F576_2917;
	R2274[2] = (char *(*)()) F577_2917;
	R2274[3] = (char *(*)()) F578_2917;
	R2274[4] = (char *(*)()) F579_2977;
	R2274[5] = (char *(*)()) F580_2977;
	R2274[6] = (char *(*)()) F575_2917;
}

char *(*R2283[7])();
void R2283_init () {
	R2283[0] = (char *(*)()) F575_2927;
	R2283[1] = (char *(*)()) F576_2927;
	R2283[2] = (char *(*)()) F577_2927;
	R2283[3] = (char *(*)()) F578_2927;
	R2283[4] = (char *(*)()) F575_2927;
	R2283[5] = (char *(*)()) F576_2927;
	R2283[6] = (char *(*)()) F575_2927;
}

char *(*R2284[7])();
void R2284_init () {
	R2284[0] = (char *(*)()) F575_2928;
	R2284[1] = (char *(*)()) F576_2928;
	R2284[2] = (char *(*)()) F577_2928;
	R2284[3] = (char *(*)()) F578_2928;
	R2284[4] = (char *(*)()) F575_2928;
	R2284[5] = (char *(*)()) F576_2928;
	R2284[6] = (char *(*)()) F575_2928;
}

char *(*R2291[7])();
void R2291_init () {
	R2291[0] = (char *(*)()) F575_2935;
	R2291[1] = (char *(*)()) F576_2935_2291_1;
	R2291[2] = (char *(*)()) F577_2935;
	R2291[3] = (char *(*)()) F578_2935_2291_1;
	R2291[4] = (char *(*)()) F575_2935;
	R2291[5] = (char *(*)()) F576_2935_2291_1;
	R2291[6] = (char *(*)()) F575_2935;
}
static EIF_REFERENCE F576_2935_2291_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F576_2935(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F578_2935_2291_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F578_2935(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2292[7])();
void R2292_init () {
	R2292[0] = (char *(*)()) F575_2936;
	R2292[1] = (char *(*)()) F576_2936;
	R2292[2] = (char *(*)()) F577_2936_2292_1;
	R2292[3] = (char *(*)()) F578_2936_2292_1;
	R2292[4] = (char *(*)()) F575_2936;
	R2292[5] = (char *(*)()) F576_2936;
	R2292[6] = (char *(*)()) F575_2936;
}
static EIF_REFERENCE F577_2936_2292_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F577_2936(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F578_2936_2292_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F578_2936(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2293[7])();
void R2293_init () {
	R2293[0] = (char *(*)()) F575_2937;
	R2293[1] = (char *(*)()) F576_2937;
	R2293[2] = (char *(*)()) F577_2937;
	R2293[3] = (char *(*)()) F578_2937;
	R2293[4] = (char *(*)()) F575_2937;
	R2293[5] = (char *(*)()) F576_2937;
	R2293[6] = (char *(*)()) F575_2937;
}

char *(*R2294[7])();
void R2294_init () {
	R2294[0] = (char *(*)()) F575_2938;
	R2294[1] = (char *(*)()) F576_2938;
	R2294[2] = (char *(*)()) F577_2938;
	R2294[3] = (char *(*)()) F578_2938;
	R2294[4] = (char *(*)()) F575_2938;
	R2294[5] = (char *(*)()) F576_2938;
	R2294[6] = (char *(*)()) F575_2938;
}

char *(*R2295[7])();
void R2295_init () {
	R2295[0] = (char *(*)()) F575_2939;
	R2295[1] = (char *(*)()) F576_2939;
	R2295[2] = (char *(*)()) F577_2939;
	R2295[3] = (char *(*)()) F578_2939;
	R2295[4] = (char *(*)()) F575_2939;
	R2295[5] = (char *(*)()) F576_2939;
	R2295[6] = (char *(*)()) F575_2939;
}

char *(*R2296[7])();
void R2296_init () {
	R2296[0] = (char *(*)()) F575_2940;
	R2296[1] = (char *(*)()) F576_2940;
	R2296[2] = (char *(*)()) F577_2940;
	R2296[3] = (char *(*)()) F578_2940;
	R2296[4] = (char *(*)()) F575_2940;
	R2296[5] = (char *(*)()) F576_2940;
	R2296[6] = (char *(*)()) F575_2940;
}

char *(*R2297[7])();
void R2297_init () {
	R2297[0] = (char *(*)()) F575_2941;
	R2297[1] = (char *(*)()) F576_2941;
	R2297[2] = (char *(*)()) F577_2941;
	R2297[3] = (char *(*)()) F578_2941;
	R2297[4] = (char *(*)()) F575_2941;
	R2297[5] = (char *(*)()) F576_2941;
	R2297[6] = (char *(*)()) F575_2941;
}

char *(*R2298[7])();
void R2298_init () {
	R2298[0] = (char *(*)()) F575_2942;
	R2298[1] = (char *(*)()) F576_2942;
	R2298[2] = (char *(*)()) F577_2942;
	R2298[3] = (char *(*)()) F578_2942;
	R2298[4] = (char *(*)()) F575_2942;
	R2298[5] = (char *(*)()) F576_2942;
	R2298[6] = (char *(*)()) F575_2942;
}

char *(*R2299[7])();
void R2299_init () {
	R2299[0] = (char *(*)()) F575_2943;
	R2299[1] = (char *(*)()) F576_2943;
	R2299[2] = (char *(*)()) F577_2943;
	R2299[3] = (char *(*)()) F578_2943;
	R2299[4] = (char *(*)()) F575_2943;
	R2299[5] = (char *(*)()) F576_2943;
	R2299[6] = (char *(*)()) F575_2943;
}

char *(*R2300[7])();
void R2300_init () {
	R2300[0] = (char *(*)()) F575_2944;
	R2300[1] = (char *(*)()) F576_2944;
	R2300[2] = (char *(*)()) F577_2944;
	R2300[3] = (char *(*)()) F578_2944;
	R2300[4] = (char *(*)()) F575_2944;
	R2300[5] = (char *(*)()) F576_2944;
	R2300[6] = (char *(*)()) F575_2944;
}

char *(*R2301[7])();
void R2301_init () {
	R2301[0] = (char *(*)()) F575_2945;
	R2301[1] = (char *(*)()) F576_2945;
	R2301[2] = (char *(*)()) F577_2945;
	R2301[3] = (char *(*)()) F578_2945;
	R2301[4] = (char *(*)()) F575_2945;
	R2301[5] = (char *(*)()) F576_2945;
	R2301[6] = (char *(*)()) F575_2945;
}

char *(*R2303[7])();
void R2303_init () {
	R2303[0] = (char *(*)()) F575_2947;
	R2303[1] = (char *(*)()) F576_2947;
	R2303[2] = (char *(*)()) F577_2947_2303_1;
	R2303[3] = (char *(*)()) F578_2947_2303_1;
	R2303[4] = (char *(*)()) F575_2947;
	R2303[5] = (char *(*)()) F576_2947;
	R2303[6] = (char *(*)()) F575_2947;
}
static EIF_REFERENCE F577_2947_2303_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F577_2947(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F578_2947_2303_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F578_2947(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2304[7])();
void R2304_init () {
	R2304[0] = (char *(*)()) F575_2948;
	R2304[1] = (char *(*)()) F576_2948_2304_1;
	R2304[2] = (char *(*)()) F577_2948;
	R2304[3] = (char *(*)()) F578_2948_2304_1;
	R2304[4] = (char *(*)()) F575_2948;
	R2304[5] = (char *(*)()) F576_2948_2304_1;
	R2304[6] = (char *(*)()) F575_2948;
}
static EIF_REFERENCE F576_2948_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F576_2948(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F578_2948_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F578_2948(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2305[7])();
void R2305_init () {
	R2305[0] = (char *(*)()) F575_2949;
	R2305[1] = (char *(*)()) F576_2949;
	R2305[2] = (char *(*)()) F577_2949_2305_4;
	R2305[3] = (char *(*)()) F578_2949_2305_4;
	R2305[4] = (char *(*)()) F575_2949;
	R2305[5] = (char *(*)()) F576_2949;
	R2305[6] = (char *(*)()) F575_2949;
}
static void F577_2949_2305_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F577_2949(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F578_2949_2305_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F578_2949(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2306[7])();
void R2306_init () {
	R2306[0] = (char *(*)()) F575_2950;
	R2306[1] = (char *(*)()) F576_2950;
	R2306[2] = (char *(*)()) F577_2950_2306_4;
	R2306[3] = (char *(*)()) F578_2950_2306_4;
	R2306[4] = (char *(*)()) F575_2950;
	R2306[5] = (char *(*)()) F576_2950;
	R2306[6] = (char *(*)()) F575_2950;
}
static void F577_2950_2306_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F577_2950(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F578_2950_2306_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F578_2950(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2311[7])();
void R2311_init () {
	R2311[0] = (char *(*)()) F575_2955;
	R2311[1] = (char *(*)()) F576_2955;
	R2311[2] = (char *(*)()) F577_2955;
	R2311[3] = (char *(*)()) F578_2955;
	R2311[4] = (char *(*)()) F575_2955;
	R2311[5] = (char *(*)()) F576_2955;
	R2311[6] = (char *(*)()) F575_2955;
}

char *(*R2323[7])();
void R2323_init () {
	R2323[0] = (char *(*)()) F575_2967;
	R2323[1] = (char *(*)()) F576_2967;
	R2323[2] = (char *(*)()) F577_2967;
	R2323[3] = (char *(*)()) F578_2967;
	R2323[4] = (char *(*)()) F575_2967;
	R2323[5] = (char *(*)()) F576_2967;
	R2323[6] = (char *(*)()) F575_2967;
}

char *(*R2324[7])();
void R2324_init () {
	R2324[0] = (char *(*)()) F575_2968;
	R2324[1] = (char *(*)()) F576_2968;
	R2324[2] = (char *(*)()) F577_2968;
	R2324[3] = (char *(*)()) F578_2968;
	R2324[4] = (char *(*)()) F575_2968;
	R2324[5] = (char *(*)()) F576_2968;
	R2324[6] = (char *(*)()) F575_2968;
}

char *(*R2327[2])();
void R2327_init () {
	R2327[0] = (char *(*)()) F579_2971;
	R2327[1] = (char *(*)()) F580_2971;
}

char *(*R2432[12])();
void R2432_init () {
	R2432[0] = (char *(*)()) F586_3101;
	R2432[1] = (char *(*)()) F587_3101;
	R2432[2] = (char *(*)()) F588_3101;
	R2432[3] = (char *(*)()) F589_3101;
	R2432[4] = (char *(*)()) F590_3101;
	R2432[5] = (char *(*)()) F591_3101;
	R2432[6] = (char *(*)()) F592_3101;
	R2432[7] = (char *(*)()) F593_3101;
	R2432[8] = (char *(*)()) F594_3101;
	R2432[9] = (char *(*)()) F595_3101;
	R2432[10] = (char *(*)()) F596_3101;
	R2432[11] = (char *(*)()) F597_3101;
}

char *(*R2433[12])();
void R2433_init () {
	R2433[0] = (char *(*)()) F586_3102;
	R2433[1] = (char *(*)()) F587_3102;
	R2433[2] = (char *(*)()) F588_3102;
	R2433[3] = (char *(*)()) F589_3102;
	R2433[4] = (char *(*)()) F590_3102;
	R2433[5] = (char *(*)()) F591_3102;
	R2433[6] = (char *(*)()) F592_3102;
	R2433[7] = (char *(*)()) F593_3102;
	R2433[8] = (char *(*)()) F594_3102;
	R2433[9] = (char *(*)()) F595_3102;
	R2433[10] = (char *(*)()) F596_3102;
	R2433[11] = (char *(*)()) F597_3102;
}

char *(*R2434[12])();
void R2434_init () {
	R2434[0] = (char *(*)()) F586_3105;
	R2434[1] = (char *(*)()) F587_3105;
	R2434[2] = (char *(*)()) F588_3105;
	R2434[3] = (char *(*)()) F589_3105;
	R2434[4] = (char *(*)()) F590_3105;
	R2434[5] = (char *(*)()) F591_3105;
	R2434[6] = (char *(*)()) F592_3105;
	R2434[7] = (char *(*)()) F593_3105;
	R2434[8] = (char *(*)()) F594_3105;
	R2434[9] = (char *(*)()) F595_3105;
	R2434[10] = (char *(*)()) F596_3105;
	R2434[11] = (char *(*)()) F597_3105;
}

char *(*R2435[12])();
void R2435_init () {
	R2435[0] = (char *(*)()) F586_3088;
	R2435[1] = (char *(*)()) F587_3088;
	R2435[2] = (char *(*)()) F588_3088;
	R2435[3] = (char *(*)()) F589_3088;
	R2435[4] = (char *(*)()) F590_3088;
	R2435[5] = (char *(*)()) F591_3088;
	R2435[6] = (char *(*)()) F592_3088;
	R2435[7] = (char *(*)()) F593_3088;
	R2435[8] = (char *(*)()) F594_3088;
	R2435[9] = (char *(*)()) F595_3088;
	R2435[10] = (char *(*)()) F596_3088;
	R2435[11] = (char *(*)()) F597_3088;
}

char *(*R2436[12])();
void R2436_init () {
	R2436[0] = (char *(*)()) F586_3089;
	R2436[1] = (char *(*)()) F587_3089_2436_109;
	R2436[2] = (char *(*)()) F588_3089_2436_109;
	R2436[3] = (char *(*)()) F589_3089_2436_109;
	R2436[4] = (char *(*)()) F590_3089_2436_109;
	R2436[5] = (char *(*)()) F591_3089_2436_109;
	R2436[6] = (char *(*)()) F592_3089_2436_109;
	R2436[7] = (char *(*)()) F593_3089_2436_109;
	R2436[8] = (char *(*)()) F594_3089_2436_109;
	R2436[9] = (char *(*)()) F595_3089_2436_109;
	R2436[10] = (char *(*)()) F596_3089_2436_109;
	R2436[11] = (char *(*)()) F597_3089_2436_109;
}
static void F587_3089_2436_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F587_3089(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F588_3089_2436_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F588_3089(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F589_3089_2436_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F589_3089(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F590_3089_2436_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F590_3089(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F591_3089_2436_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F591_3089(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F592_3089_2436_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F592_3089(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F593_3089_2436_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F593_3089(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F594_3089_2436_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F594_3089(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F595_3089_2436_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F595_3089(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F596_3089_2436_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F596_3089(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F597_3089_2436_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F597_3089(Current, *(EIF_POINTER *)arg1, arg2);
}

char *(*R2437[12])();
void R2437_init () {
	R2437[0] = (char *(*)()) F586_3090;
	R2437[1] = (char *(*)()) F587_3090;
	R2437[2] = (char *(*)()) F588_3090;
	R2437[3] = (char *(*)()) F589_3090;
	R2437[4] = (char *(*)()) F590_3090;
	R2437[5] = (char *(*)()) F591_3090;
	R2437[6] = (char *(*)()) F592_3090;
	R2437[7] = (char *(*)()) F593_3090;
	R2437[8] = (char *(*)()) F594_3090;
	R2437[9] = (char *(*)()) F595_3090;
	R2437[10] = (char *(*)()) F596_3090;
	R2437[11] = (char *(*)()) F597_3090;
}

char *(*R2442[12])();
void R2442_init () {
	R2442[0] = (char *(*)()) F586_3096;
	R2442[1] = (char *(*)()) F587_3096;
	R2442[2] = (char *(*)()) F588_3096;
	R2442[3] = (char *(*)()) F589_3096;
	R2442[4] = (char *(*)()) F590_3096;
	R2442[5] = (char *(*)()) F591_3096;
	R2442[6] = (char *(*)()) F592_3096;
	R2442[7] = (char *(*)()) F593_3096;
	R2442[8] = (char *(*)()) F594_3096;
	R2442[9] = (char *(*)()) F595_3096;
	R2442[10] = (char *(*)()) F596_3096;
	R2442[11] = (char *(*)()) F597_3096;
}

char *(*R2444[12])();
void R2444_init () {
	R2444[0] = (char *(*)()) F586_3103;
	R2444[1] = (char *(*)()) F587_3103_2444_274;
	R2444[2] = (char *(*)()) F588_3103_2444_274;
	R2444[3] = (char *(*)()) F589_3103_2444_274;
	R2444[4] = (char *(*)()) F590_3103_2444_274;
	R2444[5] = (char *(*)()) F591_3103_2444_274;
	R2444[6] = (char *(*)()) F592_3103_2444_274;
	R2444[7] = (char *(*)()) F593_3103_2444_274;
	R2444[8] = (char *(*)()) F594_3103_2444_274;
	R2444[9] = (char *(*)()) F595_3103_2444_274;
	R2444[10] = (char *(*)()) F596_3103_2444_274;
	R2444[11] = (char *(*)()) F597_3103_2444_274;
}
static EIF_BOOLEAN F587_3103_2444_274 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F587_3103(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F588_3103_2444_274 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F588_3103(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F589_3103_2444_274 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F589_3103(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F590_3103_2444_274 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F590_3103(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F591_3103_2444_274 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F591_3103(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F592_3103_2444_274 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F592_3103(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F593_3103_2444_274 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F593_3103(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F594_3103_2444_274 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F594_3103(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F595_3103_2444_274 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F595_3103(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F596_3103_2444_274 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F596_3103(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F597_3103_2444_274 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F597_3103(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}

char *(*R2445[12])();
void R2445_init () {
	R2445[0] = (char *(*)()) F586_3104;
	R2445[1] = (char *(*)()) F587_3104;
	R2445[2] = (char *(*)()) F588_3104;
	R2445[3] = (char *(*)()) F589_3104;
	R2445[4] = (char *(*)()) F590_3104;
	R2445[5] = (char *(*)()) F591_3104;
	R2445[6] = (char *(*)()) F592_3104;
	R2445[7] = (char *(*)()) F593_3104;
	R2445[8] = (char *(*)()) F594_3104;
	R2445[9] = (char *(*)()) F595_3104;
	R2445[10] = (char *(*)()) F596_3104;
	R2445[11] = (char *(*)()) F597_3104;
}

char *(*R2446[12])();
void R2446_init () {
	R2446[0] = (char *(*)()) F586_3106;
	R2446[1] = (char *(*)()) F587_3106_2446_109;
	R2446[2] = (char *(*)()) F588_3106_2446_109;
	R2446[3] = (char *(*)()) F589_3106_2446_109;
	R2446[4] = (char *(*)()) F590_3106_2446_109;
	R2446[5] = (char *(*)()) F591_3106_2446_109;
	R2446[6] = (char *(*)()) F592_3106_2446_109;
	R2446[7] = (char *(*)()) F593_3106_2446_109;
	R2446[8] = (char *(*)()) F594_3106_2446_109;
	R2446[9] = (char *(*)()) F595_3106_2446_109;
	R2446[10] = (char *(*)()) F596_3106_2446_109;
	R2446[11] = (char *(*)()) F597_3106_2446_109;
}
static void F587_3106_2446_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F587_3106(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F588_3106_2446_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F588_3106(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F589_3106_2446_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F589_3106(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F590_3106_2446_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F590_3106(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F591_3106_2446_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F591_3106(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F592_3106_2446_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F592_3106(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F593_3106_2446_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F593_3106(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F594_3106_2446_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F594_3106(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F595_3106_2446_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F595_3106(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F596_3106_2446_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F596_3106(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F597_3106_2446_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F597_3106(Current, *(EIF_POINTER *)arg1, arg2);
}

char *(*R2447[12])();
void R2447_init () {
	R2447[0] = (char *(*)()) F586_3107;
	R2447[1] = (char *(*)()) F587_3107_2447_109;
	R2447[2] = (char *(*)()) F588_3107_2447_109;
	R2447[3] = (char *(*)()) F589_3107_2447_109;
	R2447[4] = (char *(*)()) F590_3107_2447_109;
	R2447[5] = (char *(*)()) F591_3107_2447_109;
	R2447[6] = (char *(*)()) F592_3107_2447_109;
	R2447[7] = (char *(*)()) F593_3107_2447_109;
	R2447[8] = (char *(*)()) F594_3107_2447_109;
	R2447[9] = (char *(*)()) F595_3107_2447_109;
	R2447[10] = (char *(*)()) F596_3107_2447_109;
	R2447[11] = (char *(*)()) F597_3107_2447_109;
}
static void F587_3107_2447_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F587_3107(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F588_3107_2447_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F588_3107(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F589_3107_2447_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F589_3107(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F590_3107_2447_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F590_3107(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F591_3107_2447_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F591_3107(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F592_3107_2447_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F592_3107(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F593_3107_2447_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F593_3107(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F594_3107_2447_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F594_3107(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F595_3107_2447_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F595_3107(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F596_3107_2447_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F596_3107(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F597_3107_2447_109 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F597_3107(Current, *(EIF_POINTER *)arg1, arg2);
}

char *(*R2448[12])();
void R2448_init () {
	R2448[0] = (char *(*)()) F586_3108;
	R2448[1] = (char *(*)()) F587_3108_2448_4;
	R2448[2] = (char *(*)()) F588_3108_2448_4;
	R2448[3] = (char *(*)()) F589_3108_2448_4;
	R2448[4] = (char *(*)()) F590_3108_2448_4;
	R2448[5] = (char *(*)()) F591_3108_2448_4;
	R2448[6] = (char *(*)()) F592_3108_2448_4;
	R2448[7] = (char *(*)()) F593_3108_2448_4;
	R2448[8] = (char *(*)()) F594_3108_2448_4;
	R2448[9] = (char *(*)()) F595_3108_2448_4;
	R2448[10] = (char *(*)()) F596_3108_2448_4;
	R2448[11] = (char *(*)()) F597_3108_2448_4;
}
static void F587_3108_2448_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F587_3108(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F588_3108_2448_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F588_3108(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F589_3108_2448_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F589_3108(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F590_3108_2448_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F590_3108(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F591_3108_2448_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F591_3108(Current, *(EIF_REAL_32 *)arg1);
}
static void F592_3108_2448_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F592_3108(Current, *(EIF_REAL_64 *)arg1);
}
static void F593_3108_2448_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F593_3108(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F594_3108_2448_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F594_3108(Current, *(EIF_BOOLEAN *)arg1);
}
static void F595_3108_2448_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F595_3108(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F596_3108_2448_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F596_3108(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F597_3108_2448_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F597_3108(Current, *(EIF_POINTER *)arg1);
}

char *(*R2450[12])();
void R2450_init () {
	R2450[0] = (char *(*)()) F586_3110;
	R2450[1] = (char *(*)()) F587_3110_2450_136;
	R2450[2] = (char *(*)()) F588_3110_2450_136;
	R2450[3] = (char *(*)()) F589_3110_2450_136;
	R2450[4] = (char *(*)()) F590_3110_2450_136;
	R2450[5] = (char *(*)()) F591_3110_2450_136;
	R2450[6] = (char *(*)()) F592_3110_2450_136;
	R2450[7] = (char *(*)()) F593_3110_2450_136;
	R2450[8] = (char *(*)()) F594_3110_2450_136;
	R2450[9] = (char *(*)()) F595_3110_2450_136;
	R2450[10] = (char *(*)()) F596_3110_2450_136;
	R2450[11] = (char *(*)()) F597_3110_2450_136;
}
static void F587_3110_2450_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F587_3110(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F588_3110_2450_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F588_3110(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F589_3110_2450_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F589_3110(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F590_3110_2450_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F590_3110(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F591_3110_2450_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F591_3110(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F592_3110_2450_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F592_3110(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F593_3110_2450_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F593_3110(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F594_3110_2450_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F594_3110(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F595_3110_2450_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F595_3110(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F596_3110_2450_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F596_3110(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static void F597_3110_2450_136 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F597_3110(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}

char *(*R2452[12])();
void R2452_init () {
	R2452[0] = (char *(*)()) F586_3112;
	R2452[1] = (char *(*)()) F587_3112;
	R2452[2] = (char *(*)()) F588_3112;
	R2452[3] = (char *(*)()) F589_3112;
	R2452[4] = (char *(*)()) F590_3112;
	R2452[5] = (char *(*)()) F591_3112;
	R2452[6] = (char *(*)()) F592_3112;
	R2452[7] = (char *(*)()) F593_3112;
	R2452[8] = (char *(*)()) F594_3112;
	R2452[9] = (char *(*)()) F595_3112;
	R2452[10] = (char *(*)()) F596_3112;
	R2452[11] = (char *(*)()) F597_3112;
}

char *(*R2453[12])();
void R2453_init () {
	R2453[0] = (char *(*)()) F586_3113;
	R2453[1] = (char *(*)()) F587_3113;
	R2453[2] = (char *(*)()) F588_3113;
	R2453[3] = (char *(*)()) F589_3113;
	R2453[4] = (char *(*)()) F590_3113;
	R2453[5] = (char *(*)()) F591_3113;
	R2453[6] = (char *(*)()) F592_3113;
	R2453[7] = (char *(*)()) F593_3113;
	R2453[8] = (char *(*)()) F594_3113;
	R2453[9] = (char *(*)()) F595_3113;
	R2453[10] = (char *(*)()) F596_3113;
	R2453[11] = (char *(*)()) F597_3113;
}

char *(*R2454[12])();
void R2454_init () {
	R2454[0] = (char *(*)()) F586_3114;
	R2454[1] = (char *(*)()) F587_3114;
	R2454[2] = (char *(*)()) F588_3114;
	R2454[3] = (char *(*)()) F589_3114;
	R2454[4] = (char *(*)()) F590_3114;
	R2454[5] = (char *(*)()) F591_3114;
	R2454[6] = (char *(*)()) F592_3114;
	R2454[7] = (char *(*)()) F593_3114;
	R2454[8] = (char *(*)()) F594_3114;
	R2454[9] = (char *(*)()) F595_3114;
	R2454[10] = (char *(*)()) F596_3114;
	R2454[11] = (char *(*)()) F597_3114;
}

char *(*R2455[12])();
void R2455_init () {
	R2455[0] = (char *(*)()) F586_3115;
	R2455[1] = (char *(*)()) F587_3115;
	R2455[2] = (char *(*)()) F588_3115;
	R2455[3] = (char *(*)()) F589_3115;
	R2455[4] = (char *(*)()) F590_3115;
	R2455[5] = (char *(*)()) F591_3115;
	R2455[6] = (char *(*)()) F592_3115;
	R2455[7] = (char *(*)()) F593_3115;
	R2455[8] = (char *(*)()) F594_3115;
	R2455[9] = (char *(*)()) F595_3115;
	R2455[10] = (char *(*)()) F596_3115;
	R2455[11] = (char *(*)()) F597_3115;
}

char *(*R2456[12])();
void R2456_init () {
	R2456[0] = (char *(*)()) F586_3116;
	R2456[1] = (char *(*)()) F587_3116;
	R2456[2] = (char *(*)()) F588_3116;
	R2456[3] = (char *(*)()) F589_3116;
	R2456[4] = (char *(*)()) F590_3116;
	R2456[5] = (char *(*)()) F591_3116;
	R2456[6] = (char *(*)()) F592_3116;
	R2456[7] = (char *(*)()) F593_3116;
	R2456[8] = (char *(*)()) F594_3116;
	R2456[9] = (char *(*)()) F595_3116;
	R2456[10] = (char *(*)()) F596_3116;
	R2456[11] = (char *(*)()) F597_3116;
}

char *(*R2457[12])();
void R2457_init () {
	R2457[0] = (char *(*)()) F586_3117;
	R2457[1] = (char *(*)()) F587_3117;
	R2457[2] = (char *(*)()) F588_3117;
	R2457[3] = (char *(*)()) F589_3117;
	R2457[4] = (char *(*)()) F590_3117;
	R2457[5] = (char *(*)()) F591_3117;
	R2457[6] = (char *(*)()) F592_3117;
	R2457[7] = (char *(*)()) F593_3117;
	R2457[8] = (char *(*)()) F594_3117;
	R2457[9] = (char *(*)()) F595_3117;
	R2457[10] = (char *(*)()) F596_3117;
	R2457[11] = (char *(*)()) F597_3117;
}

char *(*R2458[12])();
void R2458_init () {
	R2458[0] = (char *(*)()) F586_3118;
	R2458[1] = (char *(*)()) F587_3118;
	R2458[2] = (char *(*)()) F588_3118;
	R2458[3] = (char *(*)()) F589_3118;
	R2458[4] = (char *(*)()) F590_3118;
	R2458[5] = (char *(*)()) F591_3118;
	R2458[6] = (char *(*)()) F592_3118;
	R2458[7] = (char *(*)()) F593_3118;
	R2458[8] = (char *(*)()) F594_3118;
	R2458[9] = (char *(*)()) F595_3118;
	R2458[10] = (char *(*)()) F596_3118;
	R2458[11] = (char *(*)()) F597_3118;
}

char *(*R2460[12])();
void R2460_init () {
	R2460[0] = (char *(*)()) F586_3120;
	R2460[1] = (char *(*)()) F587_3120;
	R2460[2] = (char *(*)()) F588_3120;
	R2460[3] = (char *(*)()) F589_3120;
	R2460[4] = (char *(*)()) F590_3120;
	R2460[5] = (char *(*)()) F591_3120;
	R2460[6] = (char *(*)()) F592_3120;
	R2460[7] = (char *(*)()) F593_3120;
	R2460[8] = (char *(*)()) F594_3120;
	R2460[9] = (char *(*)()) F595_3120;
	R2460[10] = (char *(*)()) F596_3120;
	R2460[11] = (char *(*)()) F597_3120;
}

char *(*R2463[12])();
void R2463_init () {
	R2463[0] = (char *(*)()) F586_3123;
	R2463[1] = (char *(*)()) F587_3123;
	R2463[2] = (char *(*)()) F588_3123;
	R2463[3] = (char *(*)()) F589_3123;
	R2463[4] = (char *(*)()) F590_3123;
	R2463[5] = (char *(*)()) F591_3123;
	R2463[6] = (char *(*)()) F592_3123;
	R2463[7] = (char *(*)()) F593_3123;
	R2463[8] = (char *(*)()) F594_3123;
	R2463[9] = (char *(*)()) F595_3123;
	R2463[10] = (char *(*)()) F596_3123;
	R2463[11] = (char *(*)()) F597_3123;
}

char *(*R2464[12])();
void R2464_init () {
	R2464[0] = (char *(*)()) F586_3124;
	R2464[1] = (char *(*)()) F587_3124_2464_215;
	R2464[2] = (char *(*)()) F588_3124_2464_215;
	R2464[3] = (char *(*)()) F589_3124_2464_215;
	R2464[4] = (char *(*)()) F590_3124_2464_215;
	R2464[5] = (char *(*)()) F591_3124_2464_215;
	R2464[6] = (char *(*)()) F592_3124_2464_215;
	R2464[7] = (char *(*)()) F593_3124_2464_215;
	R2464[8] = (char *(*)()) F594_3124_2464_215;
	R2464[9] = (char *(*)()) F595_3124_2464_215;
	R2464[10] = (char *(*)()) F596_3124_2464_215;
	R2464[11] = (char *(*)()) F597_3124_2464_215;
}
static EIF_REFERENCE F587_3124_2464_215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F587_3124(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_REFERENCE F588_3124_2464_215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F588_3124(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_REFERENCE F589_3124_2464_215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F589_3124(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_REFERENCE F590_3124_2464_215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F590_3124(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F591_3124_2464_215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F591_3124(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F592_3124_2464_215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F592_3124(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F593_3124_2464_215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F593_3124(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static EIF_REFERENCE F594_3124_2464_215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F594_3124(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static EIF_REFERENCE F595_3124_2464_215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F595_3124(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F596_3124_2464_215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F596_3124(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static EIF_REFERENCE F597_3124_2464_215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F597_3124(Current, *(EIF_POINTER *)arg1, arg2);
}

char *(*R2466[12])();
void R2466_init () {
	R2466[0] = (char *(*)()) F586_3126;
	R2466[1] = (char *(*)()) F587_3126;
	R2466[2] = (char *(*)()) F588_3126;
	R2466[3] = (char *(*)()) F589_3126;
	R2466[4] = (char *(*)()) F590_3126;
	R2466[5] = (char *(*)()) F591_3126;
	R2466[6] = (char *(*)()) F592_3126;
	R2466[7] = (char *(*)()) F593_3126;
	R2466[8] = (char *(*)()) F594_3126;
	R2466[9] = (char *(*)()) F595_3126;
	R2466[10] = (char *(*)()) F596_3126;
	R2466[11] = (char *(*)()) F597_3126;
}

char *(*R2468[12])();
void R2468_init () {
	R2468[0] = (char *(*)()) F586_3128;
	R2468[1] = (char *(*)()) F587_3128;
	R2468[2] = (char *(*)()) F588_3128;
	R2468[3] = (char *(*)()) F589_3128;
	R2468[4] = (char *(*)()) F590_3128;
	R2468[5] = (char *(*)()) F591_3128;
	R2468[6] = (char *(*)()) F592_3128;
	R2468[7] = (char *(*)()) F593_3128;
	R2468[8] = (char *(*)()) F594_3128;
	R2468[9] = (char *(*)()) F595_3128;
	R2468[10] = (char *(*)()) F596_3128;
	R2468[11] = (char *(*)()) F597_3128;
}

char *(*R2469[12])();
void R2469_init () {
	R2469[0] = (char *(*)()) F586_3129;
	R2469[1] = (char *(*)()) F587_3129;
	R2469[2] = (char *(*)()) F588_3129;
	R2469[3] = (char *(*)()) F589_3129;
	R2469[4] = (char *(*)()) F590_3129;
	R2469[5] = (char *(*)()) F591_3129;
	R2469[6] = (char *(*)()) F592_3129;
	R2469[7] = (char *(*)()) F593_3129;
	R2469[8] = (char *(*)()) F594_3129;
	R2469[9] = (char *(*)()) F595_3129;
	R2469[10] = (char *(*)()) F596_3129;
	R2469[11] = (char *(*)()) F597_3129;
}

char *(*R2470[12])();
void R2470_init () {
	R2470[0] = (char *(*)()) F586_3130;
	R2470[1] = (char *(*)()) F587_3130;
	R2470[2] = (char *(*)()) F588_3130;
	R2470[3] = (char *(*)()) F589_3130;
	R2470[4] = (char *(*)()) F590_3130;
	R2470[5] = (char *(*)()) F591_3130;
	R2470[6] = (char *(*)()) F592_3130;
	R2470[7] = (char *(*)()) F593_3130;
	R2470[8] = (char *(*)()) F594_3130;
	R2470[9] = (char *(*)()) F595_3130;
	R2470[10] = (char *(*)()) F596_3130;
	R2470[11] = (char *(*)()) F597_3130;
}

char *(*R2471[12])();
void R2471_init () {
	R2471[0] = (char *(*)()) F586_3131;
	R2471[1] = (char *(*)()) F587_3131;
	R2471[2] = (char *(*)()) F588_3131;
	R2471[3] = (char *(*)()) F589_3131;
	R2471[4] = (char *(*)()) F590_3131;
	R2471[5] = (char *(*)()) F591_3131;
	R2471[6] = (char *(*)()) F592_3131;
	R2471[7] = (char *(*)()) F593_3131;
	R2471[8] = (char *(*)()) F594_3131;
	R2471[9] = (char *(*)()) F595_3131;
	R2471[10] = (char *(*)()) F596_3131;
	R2471[11] = (char *(*)()) F597_3131;
}

char *(*R2475[12])();
void R2475_init () {
	R2475[0] = (char *(*)()) F586_3136;
	R2475[1] = (char *(*)()) F587_3136;
	R2475[2] = (char *(*)()) F588_3136;
	R2475[3] = (char *(*)()) F589_3136;
	R2475[4] = (char *(*)()) F590_3136;
	R2475[5] = (char *(*)()) F591_3136;
	R2475[6] = (char *(*)()) F592_3136;
	R2475[7] = (char *(*)()) F593_3136;
	R2475[8] = (char *(*)()) F594_3136;
	R2475[9] = (char *(*)()) F595_3136;
	R2475[10] = (char *(*)()) F596_3136;
	R2475[11] = (char *(*)()) F597_3136;
}

char *(*R2479[45])();
void R2479_init () {
	R2479[0] = (char *(*)()) F599_3153;
	R2479[1] = (char *(*)()) F600_3153;
	R2479[2] = (char *(*)()) F601_3153;
	R2479[3] = (char *(*)()) F602_3153;
	R2479[4] = (char *(*)()) F603_3153;
	R2479[5] = (char *(*)()) F604_3153;
	R2479[6] = (char *(*)()) F605_3153;
	R2479[7] = (char *(*)()) F606_3153;
	R2479[8] = (char *(*)()) F607_3153;
	R2479[9] = (char *(*)()) F608_3153;
	R2479[10] = (char *(*)()) F609_3153;
	R2479[11] = (char *(*)()) F610_3153;
	R2479[12] = (char *(*)()) F611_3153;
	R2479[13] = (char *(*)()) F612_3153;
	R2479[14] = (char *(*)()) F613_3153;
	R2479[15] = (char *(*)()) F614_3168;
	R2479[16] = (char *(*)()) F615_3168;
	R2479[17] = (char *(*)()) F616_3168;
	R2479[18] = (char *(*)()) F617_3168;
	R2479[19] = (char *(*)()) F618_3168;
	R2479[20] = (char *(*)()) F619_3168;
	R2479[21] = (char *(*)()) F620_3168;
	R2479[22] = (char *(*)()) F621_3168;
	R2479[23] = (char *(*)()) F622_3168;
	R2479[24] = (char *(*)()) F623_3168;
	R2479[25] = (char *(*)()) F624_3168;
	R2479[26] = (char *(*)()) F625_3168;
	R2479[27] = (char *(*)()) F626_3168;
	R2479[28] = (char *(*)()) F627_3168;
	R2479[29] = (char *(*)()) F628_3168;
	R2479[30] = (char *(*)()) F629_3186;
	R2479[31] = (char *(*)()) F630_3186;
	R2479[32] = (char *(*)()) F631_3186;
	R2479[33] = (char *(*)()) F632_3186;
	R2479[34] = (char *(*)()) F633_3186;
	R2479[35] = (char *(*)()) F634_3186;
	R2479[36] = (char *(*)()) F635_3186;
	R2479[37] = (char *(*)()) F636_3186;
	R2479[38] = (char *(*)()) F637_3186;
	R2479[39] = (char *(*)()) F638_3186;
	R2479[40] = (char *(*)()) F639_3186;
	R2479[41] = (char *(*)()) F640_3186;
	R2479[42] = (char *(*)()) F641_3186;
	R2479[43] = (char *(*)()) F642_3186;
	R2479[44] = (char *(*)()) F643_3186;
}

char *(*R2480[45])();
void R2480_init () {
	R2480[0] = (char *(*)()) F599_3154;
	R2480[1] = (char *(*)()) F600_3154;
	R2480[2] = (char *(*)()) F601_3154;
	R2480[3] = (char *(*)()) F602_3154;
	R2480[4] = (char *(*)()) F603_3154;
	R2480[5] = (char *(*)()) F604_3154;
	R2480[6] = (char *(*)()) F605_3154;
	R2480[7] = (char *(*)()) F606_3154;
	R2480[8] = (char *(*)()) F607_3154;
	R2480[9] = (char *(*)()) F608_3154;
	R2480[10] = (char *(*)()) F609_3154;
	R2480[11] = (char *(*)()) F610_3154;
	R2480[12] = (char *(*)()) F611_3154;
	R2480[13] = (char *(*)()) F612_3154;
	R2480[14] = (char *(*)()) F613_3154;
	R2480[15] = (char *(*)()) F614_3169;
	R2480[16] = (char *(*)()) F615_3169;
	R2480[17] = (char *(*)()) F616_3169;
	R2480[18] = (char *(*)()) F617_3169;
	R2480[19] = (char *(*)()) F618_3169;
	R2480[20] = (char *(*)()) F619_3169;
	R2480[21] = (char *(*)()) F620_3169;
	R2480[22] = (char *(*)()) F621_3169;
	R2480[23] = (char *(*)()) F622_3169;
	R2480[24] = (char *(*)()) F623_3169;
	R2480[25] = (char *(*)()) F624_3169;
	R2480[26] = (char *(*)()) F625_3169;
	R2480[27] = (char *(*)()) F626_3169;
	R2480[28] = (char *(*)()) F627_3169;
	R2480[29] = (char *(*)()) F628_3169;
	R2480[30] = (char *(*)()) F629_3187;
	R2480[31] = (char *(*)()) F630_3187;
	R2480[32] = (char *(*)()) F631_3187;
	R2480[33] = (char *(*)()) F632_3187;
	R2480[34] = (char *(*)()) F633_3187;
	R2480[35] = (char *(*)()) F634_3187;
	R2480[36] = (char *(*)()) F635_3187;
	R2480[37] = (char *(*)()) F636_3187;
	R2480[38] = (char *(*)()) F637_3187;
	R2480[39] = (char *(*)()) F638_3187;
	R2480[40] = (char *(*)()) F639_3187;
	R2480[41] = (char *(*)()) F640_3187;
	R2480[42] = (char *(*)()) F641_3187;
	R2480[43] = (char *(*)()) F642_3187;
	R2480[44] = (char *(*)()) F643_3187;
}

char *(*R2481[45])();
void R2481_init () {
	R2481[0] = (char *(*)()) F599_3155;
	R2481[1] = (char *(*)()) F600_3155;
	R2481[2] = (char *(*)()) F601_3155;
	R2481[3] = (char *(*)()) F602_3155;
	R2481[4] = (char *(*)()) F603_3155;
	R2481[5] = (char *(*)()) F604_3155;
	R2481[6] = (char *(*)()) F605_3155;
	R2481[7] = (char *(*)()) F606_3155;
	R2481[8] = (char *(*)()) F607_3155;
	R2481[9] = (char *(*)()) F608_3155;
	R2481[10] = (char *(*)()) F609_3155;
	R2481[11] = (char *(*)()) F610_3155;
	R2481[12] = (char *(*)()) F611_3155;
	R2481[13] = (char *(*)()) F612_3155;
	R2481[14] = (char *(*)()) F613_3155;
	R2481[15] = (char *(*)()) F614_3170;
	R2481[16] = (char *(*)()) F615_3170;
	R2481[17] = (char *(*)()) F616_3170;
	R2481[18] = (char *(*)()) F617_3170;
	R2481[19] = (char *(*)()) F618_3170;
	R2481[20] = (char *(*)()) F619_3170;
	R2481[21] = (char *(*)()) F620_3170;
	R2481[22] = (char *(*)()) F621_3170;
	R2481[23] = (char *(*)()) F622_3170;
	R2481[24] = (char *(*)()) F623_3170;
	R2481[25] = (char *(*)()) F624_3170;
	R2481[26] = (char *(*)()) F625_3170;
	R2481[27] = (char *(*)()) F626_3170;
	R2481[28] = (char *(*)()) F627_3170;
	R2481[29] = (char *(*)()) F628_3170;
	R2481[30] = (char *(*)()) F629_3188;
	R2481[31] = (char *(*)()) F630_3188;
	R2481[32] = (char *(*)()) F631_3188;
	R2481[33] = (char *(*)()) F632_3188;
	R2481[34] = (char *(*)()) F633_3188;
	R2481[35] = (char *(*)()) F634_3188;
	R2481[36] = (char *(*)()) F635_3188;
	R2481[37] = (char *(*)()) F636_3188;
	R2481[38] = (char *(*)()) F637_3188;
	R2481[39] = (char *(*)()) F638_3188;
	R2481[40] = (char *(*)()) F639_3188;
	R2481[41] = (char *(*)()) F640_3188;
	R2481[42] = (char *(*)()) F641_3188;
	R2481[43] = (char *(*)()) F642_3188;
	R2481[44] = (char *(*)()) F643_3188;
}

char *(*R2482[45])();
void R2482_init () {
	R2482[0] = (char *(*)()) F599_3156;
	R2482[1] = (char *(*)()) F600_3156;
	R2482[2] = (char *(*)()) F601_3156;
	R2482[3] = (char *(*)()) F602_3156;
	R2482[4] = (char *(*)()) F603_3156;
	R2482[5] = (char *(*)()) F604_3156;
	R2482[6] = (char *(*)()) F605_3156;
	R2482[7] = (char *(*)()) F606_3156;
	R2482[8] = (char *(*)()) F607_3156;
	R2482[9] = (char *(*)()) F608_3156;
	R2482[10] = (char *(*)()) F609_3156;
	R2482[11] = (char *(*)()) F610_3156;
	R2482[12] = (char *(*)()) F611_3156;
	R2482[13] = (char *(*)()) F612_3156;
	R2482[14] = (char *(*)()) F613_3156;
	R2482[15] = (char *(*)()) F614_3171;
	R2482[16] = (char *(*)()) F615_3171;
	R2482[17] = (char *(*)()) F616_3171;
	R2482[18] = (char *(*)()) F617_3171;
	R2482[19] = (char *(*)()) F618_3171;
	R2482[20] = (char *(*)()) F619_3171;
	R2482[21] = (char *(*)()) F620_3171;
	R2482[22] = (char *(*)()) F621_3171;
	R2482[23] = (char *(*)()) F622_3171;
	R2482[24] = (char *(*)()) F623_3171;
	R2482[25] = (char *(*)()) F624_3171;
	R2482[26] = (char *(*)()) F625_3171;
	R2482[27] = (char *(*)()) F626_3171;
	R2482[28] = (char *(*)()) F627_3171;
	R2482[29] = (char *(*)()) F628_3171;
	R2482[30] = (char *(*)()) F629_3189;
	R2482[31] = (char *(*)()) F630_3189;
	R2482[32] = (char *(*)()) F631_3189;
	R2482[33] = (char *(*)()) F632_3189;
	R2482[34] = (char *(*)()) F633_3189;
	R2482[35] = (char *(*)()) F634_3189;
	R2482[36] = (char *(*)()) F635_3189;
	R2482[37] = (char *(*)()) F636_3189;
	R2482[38] = (char *(*)()) F637_3189;
	R2482[39] = (char *(*)()) F638_3189;
	R2482[40] = (char *(*)()) F639_3189;
	R2482[41] = (char *(*)()) F640_3189;
	R2482[42] = (char *(*)()) F641_3189;
	R2482[43] = (char *(*)()) F642_3189;
	R2482[44] = (char *(*)()) F643_3189;
}

char *(*R2483[45])();
void R2483_init () {
	R2483[0] = (char *(*)()) F599_3157;
	R2483[1] = (char *(*)()) F600_3157;
	R2483[2] = (char *(*)()) F601_3157;
	R2483[3] = (char *(*)()) F602_3157;
	R2483[4] = (char *(*)()) F603_3157;
	R2483[5] = (char *(*)()) F604_3157;
	R2483[6] = (char *(*)()) F605_3157;
	R2483[7] = (char *(*)()) F606_3157;
	R2483[8] = (char *(*)()) F607_3157;
	R2483[9] = (char *(*)()) F608_3157;
	R2483[10] = (char *(*)()) F609_3157;
	R2483[11] = (char *(*)()) F610_3157;
	R2483[12] = (char *(*)()) F611_3157;
	R2483[13] = (char *(*)()) F612_3157;
	R2483[14] = (char *(*)()) F613_3157;
	R2483[15] = (char *(*)()) F614_3173;
	R2483[16] = (char *(*)()) F615_3173;
	R2483[17] = (char *(*)()) F616_3173;
	R2483[18] = (char *(*)()) F617_3173;
	R2483[19] = (char *(*)()) F618_3173;
	R2483[20] = (char *(*)()) F619_3173;
	R2483[21] = (char *(*)()) F620_3173;
	R2483[22] = (char *(*)()) F621_3173;
	R2483[23] = (char *(*)()) F622_3173;
	R2483[24] = (char *(*)()) F623_3173;
	R2483[25] = (char *(*)()) F624_3173;
	R2483[26] = (char *(*)()) F625_3173;
	R2483[27] = (char *(*)()) F626_3173;
	R2483[28] = (char *(*)()) F627_3173;
	R2483[29] = (char *(*)()) F628_3173;
	R2483[30] = (char *(*)()) F629_3191;
	R2483[31] = (char *(*)()) F630_3191;
	R2483[32] = (char *(*)()) F631_3191;
	R2483[33] = (char *(*)()) F632_3191;
	R2483[34] = (char *(*)()) F633_3191;
	R2483[35] = (char *(*)()) F634_3191;
	R2483[36] = (char *(*)()) F635_3191;
	R2483[37] = (char *(*)()) F636_3191;
	R2483[38] = (char *(*)()) F637_3191;
	R2483[39] = (char *(*)()) F638_3191;
	R2483[40] = (char *(*)()) F639_3191;
	R2483[41] = (char *(*)()) F640_3191;
	R2483[42] = (char *(*)()) F641_3191;
	R2483[43] = (char *(*)()) F642_3191;
	R2483[44] = (char *(*)()) F643_3191;
}

char *(*R2485[45])();
void R2485_init () {
	R2485[0] = (char *(*)()) F599_3158;
	R2485[1] = (char *(*)()) F600_3158;
	R2485[2] = (char *(*)()) F601_3158;
	R2485[3] = (char *(*)()) F602_3158;
	R2485[4] = (char *(*)()) F603_3158;
	R2485[5] = (char *(*)()) F604_3158;
	R2485[6] = (char *(*)()) F605_3158;
	R2485[7] = (char *(*)()) F606_3158;
	R2485[8] = (char *(*)()) F607_3158;
	R2485[9] = (char *(*)()) F608_3158;
	R2485[10] = (char *(*)()) F609_3158;
	R2485[11] = (char *(*)()) F610_3158;
	R2485[12] = (char *(*)()) F611_3158;
	R2485[13] = (char *(*)()) F612_3158;
	R2485[14] = (char *(*)()) F613_3158;
	R2485[15] = (char *(*)()) F614_3174;
	R2485[16] = (char *(*)()) F615_3174;
	R2485[17] = (char *(*)()) F616_3174;
	R2485[18] = (char *(*)()) F617_3174;
	R2485[19] = (char *(*)()) F618_3174;
	R2485[20] = (char *(*)()) F619_3174;
	R2485[21] = (char *(*)()) F620_3174;
	R2485[22] = (char *(*)()) F621_3174;
	R2485[23] = (char *(*)()) F622_3174;
	R2485[24] = (char *(*)()) F623_3174;
	R2485[25] = (char *(*)()) F624_3174;
	R2485[26] = (char *(*)()) F625_3174;
	R2485[27] = (char *(*)()) F626_3174;
	R2485[28] = (char *(*)()) F627_3174;
	R2485[29] = (char *(*)()) F628_3174;
	R2485[30] = (char *(*)()) F629_3192;
	R2485[31] = (char *(*)()) F630_3192;
	R2485[32] = (char *(*)()) F631_3192;
	R2485[33] = (char *(*)()) F632_3192;
	R2485[34] = (char *(*)()) F633_3192;
	R2485[35] = (char *(*)()) F634_3192;
	R2485[36] = (char *(*)()) F635_3192;
	R2485[37] = (char *(*)()) F636_3192;
	R2485[38] = (char *(*)()) F637_3192;
	R2485[39] = (char *(*)()) F638_3192;
	R2485[40] = (char *(*)()) F639_3192;
	R2485[41] = (char *(*)()) F640_3192;
	R2485[42] = (char *(*)()) F641_3192;
	R2485[43] = (char *(*)()) F642_3192;
	R2485[44] = (char *(*)()) F643_3192;
}

char *(*R2486[45])();
void R2486_init () {
	R2486[0] = (char *(*)()) F599_3159;
	R2486[1] = (char *(*)()) F600_3159;
	R2486[2] = (char *(*)()) F601_3159;
	R2486[3] = (char *(*)()) F602_3159;
	R2486[4] = (char *(*)()) F603_3159;
	R2486[5] = (char *(*)()) F604_3159;
	R2486[6] = (char *(*)()) F605_3159;
	R2486[7] = (char *(*)()) F606_3159;
	R2486[8] = (char *(*)()) F607_3159;
	R2486[9] = (char *(*)()) F608_3159;
	R2486[10] = (char *(*)()) F609_3159;
	R2486[11] = (char *(*)()) F610_3159;
	R2486[12] = (char *(*)()) F611_3159;
	R2486[13] = (char *(*)()) F612_3159;
	R2486[14] = (char *(*)()) F613_3159;
	R2486[15] = (char *(*)()) F614_3175;
	R2486[16] = (char *(*)()) F615_3175;
	R2486[17] = (char *(*)()) F616_3175;
	R2486[18] = (char *(*)()) F617_3175;
	R2486[19] = (char *(*)()) F618_3175;
	R2486[20] = (char *(*)()) F619_3175;
	R2486[21] = (char *(*)()) F620_3175;
	R2486[22] = (char *(*)()) F621_3175;
	R2486[23] = (char *(*)()) F622_3175;
	R2486[24] = (char *(*)()) F623_3175;
	R2486[25] = (char *(*)()) F624_3175;
	R2486[26] = (char *(*)()) F625_3175;
	R2486[27] = (char *(*)()) F626_3175;
	R2486[28] = (char *(*)()) F627_3175;
	R2486[29] = (char *(*)()) F628_3175;
	R2486[30] = (char *(*)()) F629_3193;
	R2486[31] = (char *(*)()) F630_3193;
	R2486[32] = (char *(*)()) F631_3193;
	R2486[33] = (char *(*)()) F632_3193;
	R2486[34] = (char *(*)()) F633_3193;
	R2486[35] = (char *(*)()) F634_3193;
	R2486[36] = (char *(*)()) F635_3193;
	R2486[37] = (char *(*)()) F636_3193;
	R2486[38] = (char *(*)()) F637_3193;
	R2486[39] = (char *(*)()) F638_3193;
	R2486[40] = (char *(*)()) F639_3193;
	R2486[41] = (char *(*)()) F640_3193;
	R2486[42] = (char *(*)()) F641_3193;
	R2486[43] = (char *(*)()) F642_3193;
	R2486[44] = (char *(*)()) F643_3193;
}

char *(*R2487[45])();
void R2487_init () {
	R2487[0] = (char *(*)()) F599_3160;
	R2487[1] = (char *(*)()) F600_3160;
	R2487[2] = (char *(*)()) F601_3160;
	R2487[3] = (char *(*)()) F602_3160;
	R2487[4] = (char *(*)()) F603_3160;
	R2487[5] = (char *(*)()) F604_3160;
	R2487[6] = (char *(*)()) F605_3160;
	R2487[7] = (char *(*)()) F606_3160;
	R2487[8] = (char *(*)()) F607_3160;
	R2487[9] = (char *(*)()) F608_3160;
	R2487[10] = (char *(*)()) F609_3160;
	R2487[11] = (char *(*)()) F610_3160;
	R2487[12] = (char *(*)()) F611_3160;
	R2487[13] = (char *(*)()) F612_3160;
	R2487[14] = (char *(*)()) F613_3160;
	R2487[15] = (char *(*)()) F614_3176;
	R2487[16] = (char *(*)()) F615_3176;
	R2487[17] = (char *(*)()) F616_3176;
	R2487[18] = (char *(*)()) F617_3176;
	R2487[19] = (char *(*)()) F618_3176;
	R2487[20] = (char *(*)()) F619_3176;
	R2487[21] = (char *(*)()) F620_3176;
	R2487[22] = (char *(*)()) F621_3176;
	R2487[23] = (char *(*)()) F622_3176;
	R2487[24] = (char *(*)()) F623_3176;
	R2487[25] = (char *(*)()) F624_3176;
	R2487[26] = (char *(*)()) F625_3176;
	R2487[27] = (char *(*)()) F626_3176;
	R2487[28] = (char *(*)()) F627_3176;
	R2487[29] = (char *(*)()) F628_3176;
	R2487[30] = (char *(*)()) F629_3194;
	R2487[31] = (char *(*)()) F630_3194;
	R2487[32] = (char *(*)()) F631_3194;
	R2487[33] = (char *(*)()) F632_3194;
	R2487[34] = (char *(*)()) F633_3194;
	R2487[35] = (char *(*)()) F634_3194;
	R2487[36] = (char *(*)()) F635_3194;
	R2487[37] = (char *(*)()) F636_3194;
	R2487[38] = (char *(*)()) F637_3194;
	R2487[39] = (char *(*)()) F638_3194;
	R2487[40] = (char *(*)()) F639_3194;
	R2487[41] = (char *(*)()) F640_3194;
	R2487[42] = (char *(*)()) F641_3194;
	R2487[43] = (char *(*)()) F642_3194;
	R2487[44] = (char *(*)()) F643_3194;
}

char *(*R2490[15])();
void R2490_init () {
	R2490[0] = (char *(*)()) F599_3152;
	R2490[1] = (char *(*)()) F600_3152_2490_1;
	R2490[2] = (char *(*)()) F601_3152_2490_1;
	R2490[3] = (char *(*)()) F602_3152_2490_1;
	R2490[4] = (char *(*)()) F603_3152_2490_1;
	R2490[5] = (char *(*)()) F604_3152_2490_1;
	R2490[6] = (char *(*)()) F605_3152_2490_1;
	R2490[7] = (char *(*)()) F606_3152_2490_1;
	R2490[8] = (char *(*)()) F607_3152_2490_1;
	R2490[9] = (char *(*)()) F608_3152_2490_1;
	R2490[10] = (char *(*)()) F609_3152_2490_1;
	R2490[11] = (char *(*)()) F610_3152_2490_1;
	R2490[12] = (char *(*)()) F611_3152_2490_1;
	R2490[13] = (char *(*)()) F612_3152_2490_1;
	R2490[14] = (char *(*)()) F613_3152_2490_1;
}
static EIF_REFERENCE F600_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F600_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F601_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F601_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F602_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F602_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F603_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F603_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F604_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F604_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F605_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F605_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F606_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F606_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F607_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F607_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F608_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F608_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F609_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F609_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F610_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F610_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F611_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F611_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F612_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F612_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F613_3152_2490_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F613_3152(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R2491[15])();
void R2491_init () {
	R2491[0] = (char *(*)()) F599_3161;
	R2491[1] = (char *(*)()) F600_3161;
	R2491[2] = (char *(*)()) F601_3161;
	R2491[3] = (char *(*)()) F602_3161;
	R2491[4] = (char *(*)()) F603_3161;
	R2491[5] = (char *(*)()) F604_3161;
	R2491[6] = (char *(*)()) F605_3161;
	R2491[7] = (char *(*)()) F606_3161;
	R2491[8] = (char *(*)()) F607_3161;
	R2491[9] = (char *(*)()) F608_3161;
	R2491[10] = (char *(*)()) F609_3161;
	R2491[11] = (char *(*)()) F610_3161;
	R2491[12] = (char *(*)()) F611_3161;
	R2491[13] = (char *(*)()) F612_3161;
	R2491[14] = (char *(*)()) F613_3161;
}

char *(*R2492[15])();
void R2492_init () {
	R2492[0] = (char *(*)()) F599_3162;
	R2492[1] = (char *(*)()) F600_3162_2492_5;
	R2492[2] = (char *(*)()) F601_3162_2492_5;
	R2492[3] = (char *(*)()) F602_3162_2492_5;
	R2492[4] = (char *(*)()) F603_3162_2492_5;
	R2492[5] = (char *(*)()) F604_3162_2492_5;
	R2492[6] = (char *(*)()) F605_3162_2492_5;
	R2492[7] = (char *(*)()) F606_3162_2492_5;
	R2492[8] = (char *(*)()) F607_3162_2492_5;
	R2492[9] = (char *(*)()) F608_3162_2492_5;
	R2492[10] = (char *(*)()) F609_3162_2492_5;
	R2492[11] = (char *(*)()) F610_3162_2492_5;
	R2492[12] = (char *(*)()) F611_3162_2492_5;
	R2492[13] = (char *(*)()) F612_3162_2492_5;
	R2492[14] = (char *(*)()) F613_3162_2492_5;
}
static EIF_REFERENCE F600_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F600_3162(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_REFERENCE F601_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F601_3162(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_REFERENCE F602_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F602_3162(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_REFERENCE F603_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F603_3162(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_REFERENCE F604_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F604_3162(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F605_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F605_3162(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_REFERENCE F606_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F606_3162(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_REFERENCE F607_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F607_3162(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_REFERENCE F608_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F608_3162(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_REFERENCE F609_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F609_3162(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_REFERENCE F610_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F610_3162(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_REFERENCE F611_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F611_3162(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_REFERENCE F612_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F612_3162(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_REFERENCE F613_3162_2492_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F613_3162(Current, *(EIF_POINTER *)arg1);
}

char *(*R2493[15])();
void R2493_init () {
	R2493[0] = (char *(*)()) F599_3163;
	R2493[1] = (char *(*)()) F600_3163_2493_1;
	R2493[2] = (char *(*)()) F601_3163_2493_1;
	R2493[3] = (char *(*)()) F602_3163_2493_1;
	R2493[4] = (char *(*)()) F603_3163_2493_1;
	R2493[5] = (char *(*)()) F604_3163_2493_1;
	R2493[6] = (char *(*)()) F605_3163_2493_1;
	R2493[7] = (char *(*)()) F606_3163_2493_1;
	R2493[8] = (char *(*)()) F607_3163_2493_1;
	R2493[9] = (char *(*)()) F608_3163_2493_1;
	R2493[10] = (char *(*)()) F609_3163_2493_1;
	R2493[11] = (char *(*)()) F610_3163_2493_1;
	R2493[12] = (char *(*)()) F611_3163_2493_1;
	R2493[13] = (char *(*)()) F612_3163_2493_1;
	R2493[14] = (char *(*)()) F613_3163_2493_1;
}
static EIF_REFERENCE F600_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F600_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F601_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F601_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F602_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F602_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F603_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F603_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F604_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F604_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F605_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F605_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F606_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F606_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F607_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F607_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F608_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F608_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F609_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F609_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F610_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F610_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F611_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F611_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F612_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F612_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F613_3163_2493_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F613_3163(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R2497[15])();
void R2497_init () {
	R2497[0] = (char *(*)()) F614_3166;
	R2497[1] = (char *(*)()) F615_3166_2497_1;
	R2497[2] = (char *(*)()) F616_3166_2497_1;
	R2497[3] = (char *(*)()) F617_3166_2497_1;
	R2497[4] = (char *(*)()) F618_3166_2497_1;
	R2497[5] = (char *(*)()) F619_3166_2497_1;
	R2497[6] = (char *(*)()) F620_3166_2497_1;
	R2497[7] = (char *(*)()) F621_3166_2497_1;
	R2497[8] = (char *(*)()) F622_3166_2497_1;
	R2497[9] = (char *(*)()) F623_3166_2497_1;
	R2497[10] = (char *(*)()) F624_3166_2497_1;
	R2497[11] = (char *(*)()) F625_3166_2497_1;
	R2497[12] = (char *(*)()) F626_3166_2497_1;
	R2497[13] = (char *(*)()) F627_3166_2497_1;
	R2497[14] = (char *(*)()) F628_3166_2497_1;
}
static EIF_REFERENCE F615_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F615_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F616_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F616_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F617_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F617_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F618_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F618_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F619_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F619_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F620_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F620_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F621_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F621_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F622_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F622_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F623_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F623_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F624_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F624_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F625_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F625_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F626_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F626_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F627_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F627_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F628_3166_2497_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F628_3166(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}

char *(*R2499[15])();
void R2499_init () {
	R2499[0] = (char *(*)()) F614_3177;
	R2499[1] = (char *(*)()) F615_3177;
	R2499[2] = (char *(*)()) F616_3177;
	R2499[3] = (char *(*)()) F617_3177;
	R2499[4] = (char *(*)()) F618_3177;
	R2499[5] = (char *(*)()) F619_3177;
	R2499[6] = (char *(*)()) F620_3177;
	R2499[7] = (char *(*)()) F621_3177;
	R2499[8] = (char *(*)()) F622_3177;
	R2499[9] = (char *(*)()) F623_3177;
	R2499[10] = (char *(*)()) F624_3177;
	R2499[11] = (char *(*)()) F625_3177;
	R2499[12] = (char *(*)()) F626_3177;
	R2499[13] = (char *(*)()) F627_3177;
	R2499[14] = (char *(*)()) F628_3177;
}

char *(*R2500[15])();
void R2500_init () {
	R2500[0] = (char *(*)()) F614_3178;
	R2500[1] = (char *(*)()) F615_3178_2500_5;
	R2500[2] = (char *(*)()) F616_3178_2500_5;
	R2500[3] = (char *(*)()) F617_3178_2500_5;
	R2500[4] = (char *(*)()) F618_3178_2500_5;
	R2500[5] = (char *(*)()) F619_3178_2500_5;
	R2500[6] = (char *(*)()) F620_3178_2500_5;
	R2500[7] = (char *(*)()) F621_3178_2500_5;
	R2500[8] = (char *(*)()) F622_3178_2500_5;
	R2500[9] = (char *(*)()) F623_3178_2500_5;
	R2500[10] = (char *(*)()) F624_3178_2500_5;
	R2500[11] = (char *(*)()) F625_3178_2500_5;
	R2500[12] = (char *(*)()) F626_3178_2500_5;
	R2500[13] = (char *(*)()) F627_3178_2500_5;
	R2500[14] = (char *(*)()) F628_3178_2500_5;
}
static EIF_REFERENCE F615_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F615_3178(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_REFERENCE F616_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F616_3178(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_REFERENCE F617_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F617_3178(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_REFERENCE F618_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F618_3178(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_REFERENCE F619_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F619_3178(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_REFERENCE F620_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F620_3178(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_REFERENCE F621_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F621_3178(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_REFERENCE F622_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F622_3178(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F623_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F623_3178(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_REFERENCE F624_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F624_3178(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_REFERENCE F625_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F625_3178(Current, *(EIF_POINTER *)arg1);
}
static EIF_REFERENCE F626_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F626_3178(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_REFERENCE F627_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F627_3178(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_REFERENCE F628_3178_2500_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F628_3178(Current, *(EIF_INTEGER_8 *)arg1);
}

char *(*R2501[15])();
void R2501_init () {
	R2501[0] = (char *(*)()) F614_3179;
	R2501[1] = (char *(*)()) F615_3179_2501_1;
	R2501[2] = (char *(*)()) F616_3179_2501_1;
	R2501[3] = (char *(*)()) F617_3179_2501_1;
	R2501[4] = (char *(*)()) F618_3179_2501_1;
	R2501[5] = (char *(*)()) F619_3179_2501_1;
	R2501[6] = (char *(*)()) F620_3179_2501_1;
	R2501[7] = (char *(*)()) F621_3179_2501_1;
	R2501[8] = (char *(*)()) F622_3179_2501_1;
	R2501[9] = (char *(*)()) F623_3179_2501_1;
	R2501[10] = (char *(*)()) F624_3179_2501_1;
	R2501[11] = (char *(*)()) F625_3179_2501_1;
	R2501[12] = (char *(*)()) F626_3179_2501_1;
	R2501[13] = (char *(*)()) F627_3179_2501_1;
	R2501[14] = (char *(*)()) F628_3179_2501_1;
}
static EIF_REFERENCE F615_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F615_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F616_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F616_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F617_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F617_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F618_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F618_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F619_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F619_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F620_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F620_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F621_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F621_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F622_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F622_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F623_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F623_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F624_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F624_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F625_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F625_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F626_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F626_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F627_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F627_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F628_3179_2501_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F628_3179(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}

char *(*R2504[15])();
void R2504_init () {
	R2504[0] = (char *(*)()) F629_3181;
	R2504[1] = (char *(*)()) F630_3181;
	R2504[2] = (char *(*)()) F631_3181;
	R2504[3] = (char *(*)()) F632_3181;
	R2504[4] = (char *(*)()) F633_3181;
	R2504[5] = (char *(*)()) F634_3181;
	R2504[6] = (char *(*)()) F635_3181;
	R2504[7] = (char *(*)()) F636_3181;
	R2504[8] = (char *(*)()) F637_3181;
	R2504[9] = (char *(*)()) F638_3181;
	R2504[10] = (char *(*)()) F639_3181;
	R2504[11] = (char *(*)()) F640_3181;
	R2504[12] = (char *(*)()) F641_3181;
	R2504[13] = (char *(*)()) F642_3181;
	R2504[14] = (char *(*)()) F643_3181;
}

char *(*R2505[15])();
void R2505_init () {
	R2505[0] = (char *(*)()) F629_3182;
	R2505[1] = (char *(*)()) F630_3182_2505_345;
	R2505[2] = (char *(*)()) F631_3182_2505_345;
	R2505[3] = (char *(*)()) F632_3182_2505_345;
	R2505[4] = (char *(*)()) F633_3182_2505_345;
	R2505[5] = (char *(*)()) F634_3182_2505_345;
	R2505[6] = (char *(*)()) F635_3182_2505_345;
	R2505[7] = (char *(*)()) F636_3182_2505_345;
	R2505[8] = (char *(*)()) F637_3182_2505_345;
	R2505[9] = (char *(*)()) F638_3182_2505_345;
	R2505[10] = (char *(*)()) F639_3182_2505_345;
	R2505[11] = (char *(*)()) F640_3182_2505_345;
	R2505[12] = (char *(*)()) F641_3182_2505_345;
	R2505[13] = (char *(*)()) F642_3182_2505_345;
	R2505[14] = (char *(*)()) F643_3182_2505_345;
}
static void F630_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F630_3182(Current, arg1, arg2, arg3, *(EIF_INTEGER_64 *)arg4);
}
static void F631_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F631_3182(Current, arg1, arg2, arg3, *(EIF_CHARACTER_32 *)arg4);
}
static void F632_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F632_3182(Current, arg1, arg2, arg3, *(EIF_BOOLEAN *)arg4);
}
static void F633_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F633_3182(Current, arg1, arg2, arg3, *(EIF_REAL_32 *)arg4);
}
static void F634_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F634_3182(Current, arg1, arg2, arg3, *(EIF_NATURAL_8 *)arg4);
}
static void F635_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F635_3182(Current, arg1, arg2, arg3, *(EIF_NATURAL_64 *)arg4);
}
static void F636_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F636_3182(Current, arg1, arg2, arg3, *(EIF_INTEGER_8 *)arg4);
}
static void F637_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F637_3182(Current, arg1, arg2, arg3, *(EIF_REAL_64 *)arg4);
}
static void F638_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F638_3182(Current, arg1, arg2, arg3, *(EIF_POINTER *)arg4);
}
static void F639_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F639_3182(Current, arg1, arg2, arg3, *(EIF_CHARACTER_8 *)arg4);
}
static void F640_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F640_3182(Current, arg1, arg2, arg3, *(EIF_NATURAL_16 *)arg4);
}
static void F641_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F641_3182(Current, arg1, arg2, arg3, *(EIF_NATURAL_32 *)arg4);
}
static void F642_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F642_3182(Current, arg1, arg2, arg3, *(EIF_INTEGER_16 *)arg4);
}
static void F643_3182_2505_345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F643_3182(Current, arg1, arg2, arg3, *(EIF_INTEGER_32 *)arg4);
}

char *(*R2506[15])();
void R2506_init () {
	R2506[0] = (char *(*)()) F629_3183;
	R2506[1] = (char *(*)()) F630_3183_2506_1;
	R2506[2] = (char *(*)()) F631_3183_2506_1;
	R2506[3] = (char *(*)()) F632_3183_2506_1;
	R2506[4] = (char *(*)()) F633_3183_2506_1;
	R2506[5] = (char *(*)()) F634_3183_2506_1;
	R2506[6] = (char *(*)()) F635_3183_2506_1;
	R2506[7] = (char *(*)()) F636_3183_2506_1;
	R2506[8] = (char *(*)()) F637_3183_2506_1;
	R2506[9] = (char *(*)()) F638_3183_2506_1;
	R2506[10] = (char *(*)()) F639_3183_2506_1;
	R2506[11] = (char *(*)()) F640_3183_2506_1;
	R2506[12] = (char *(*)()) F641_3183_2506_1;
	R2506[13] = (char *(*)()) F642_3183_2506_1;
	R2506[14] = (char *(*)()) F643_3183_2506_1;
}
static EIF_REFERENCE F630_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F630_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F631_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F631_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F632_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F632_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F633_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F633_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F634_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F634_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F635_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F635_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F636_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F636_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F637_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F637_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F638_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F638_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F639_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F639_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F640_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F640_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F641_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F641_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F642_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F642_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F643_3183_2506_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F643_3183(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2509[15])();
void R2509_init () {
	R2509[0] = (char *(*)()) F629_3195;
	R2509[1] = (char *(*)()) F630_3195;
	R2509[2] = (char *(*)()) F631_3195;
	R2509[3] = (char *(*)()) F632_3195;
	R2509[4] = (char *(*)()) F633_3195;
	R2509[5] = (char *(*)()) F634_3195;
	R2509[6] = (char *(*)()) F635_3195;
	R2509[7] = (char *(*)()) F636_3195;
	R2509[8] = (char *(*)()) F637_3195;
	R2509[9] = (char *(*)()) F638_3195;
	R2509[10] = (char *(*)()) F639_3195;
	R2509[11] = (char *(*)()) F640_3195;
	R2509[12] = (char *(*)()) F641_3195;
	R2509[13] = (char *(*)()) F642_3195;
	R2509[14] = (char *(*)()) F643_3195;
}

char *(*R2510[15])();
void R2510_init () {
	R2510[0] = (char *(*)()) F629_3196;
	R2510[1] = (char *(*)()) F630_3196_2510_5;
	R2510[2] = (char *(*)()) F631_3196_2510_5;
	R2510[3] = (char *(*)()) F632_3196_2510_5;
	R2510[4] = (char *(*)()) F633_3196_2510_5;
	R2510[5] = (char *(*)()) F634_3196_2510_5;
	R2510[6] = (char *(*)()) F635_3196_2510_5;
	R2510[7] = (char *(*)()) F636_3196_2510_5;
	R2510[8] = (char *(*)()) F637_3196_2510_5;
	R2510[9] = (char *(*)()) F638_3196_2510_5;
	R2510[10] = (char *(*)()) F639_3196_2510_5;
	R2510[11] = (char *(*)()) F640_3196_2510_5;
	R2510[12] = (char *(*)()) F641_3196_2510_5;
	R2510[13] = (char *(*)()) F642_3196_2510_5;
	R2510[14] = (char *(*)()) F643_3196_2510_5;
}
static EIF_REFERENCE F630_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F630_3196(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_REFERENCE F631_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F631_3196(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_REFERENCE F632_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F632_3196(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_REFERENCE F633_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F633_3196(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_REFERENCE F634_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F634_3196(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_REFERENCE F635_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F635_3196(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_REFERENCE F636_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F636_3196(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_REFERENCE F637_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F637_3196(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_REFERENCE F638_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F638_3196(Current, *(EIF_POINTER *)arg1);
}
static EIF_REFERENCE F639_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F639_3196(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_REFERENCE F640_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F640_3196(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_REFERENCE F641_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F641_3196(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_REFERENCE F642_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F642_3196(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_REFERENCE F643_3196_2510_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F643_3196(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2511[15])();
void R2511_init () {
	R2511[0] = (char *(*)()) F629_3197;
	R2511[1] = (char *(*)()) F630_3197_2511_1;
	R2511[2] = (char *(*)()) F631_3197_2511_1;
	R2511[3] = (char *(*)()) F632_3197_2511_1;
	R2511[4] = (char *(*)()) F633_3197_2511_1;
	R2511[5] = (char *(*)()) F634_3197_2511_1;
	R2511[6] = (char *(*)()) F635_3197_2511_1;
	R2511[7] = (char *(*)()) F636_3197_2511_1;
	R2511[8] = (char *(*)()) F637_3197_2511_1;
	R2511[9] = (char *(*)()) F638_3197_2511_1;
	R2511[10] = (char *(*)()) F639_3197_2511_1;
	R2511[11] = (char *(*)()) F640_3197_2511_1;
	R2511[12] = (char *(*)()) F641_3197_2511_1;
	R2511[13] = (char *(*)()) F642_3197_2511_1;
	R2511[14] = (char *(*)()) F643_3197_2511_1;
}
static EIF_REFERENCE F630_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F630_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F631_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F631_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F632_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F632_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F633_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F633_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F634_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F634_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F635_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F635_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F636_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F636_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F637_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F637_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F638_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F638_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F639_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F639_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F640_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F640_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F641_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F641_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F642_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F642_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F643_3197_2511_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F643_3197(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2517[30])();
void R2517_init () {
	R2517[0] = (char *(*)()) F693_3448;
	R2517[1] = (char *(*)()) F694_3497_2517_5;
	R2517[2] = (char *(*)()) F695_3497_2517_5;
	R2517[3] = (char *(*)()) F696_3542;
	R2517[4] = (char *(*)()) F697_3592_2517_5;
	R2517[5] = (char *(*)()) F698_3592_2517_5;
	R2517[6] = (char *(*)()) F699_3637;
	R2517[7] = (char *(*)()) F700_3687_2517_5;
	R2517[8] = (char *(*)()) F701_3687_2517_5;
	R2517[9] = (char *(*)()) F702_3732;
	R2517[10] = (char *(*)()) F703_3782_2517_5;
	R2517[11] = (char *(*)()) F704_3782_2517_5;
	R2517[12] = (char *(*)()) F705_3826;
	R2517[13] = (char *(*)()) F706_3873_2517_5;
	R2517[14] = (char *(*)()) F707_3873_2517_5;
	R2517[15] = (char *(*)()) F708_3916;
	R2517[16] = (char *(*)()) F709_3963_2517_5;
	R2517[17] = (char *(*)()) F710_3963_2517_5;
	R2517[18] = (char *(*)()) F711_4006;
	R2517[19] = (char *(*)()) F712_4054_2517_5;
	R2517[20] = (char *(*)()) F713_4054_2517_5;
	R2517[21] = (char *(*)()) F714_4097;
	R2517[22] = (char *(*)()) F715_4145_2517_5;
	R2517[23] = (char *(*)()) F716_4145_2517_5;
	R2517[24] = (char *(*)()) F717_4204;
	R2517[25] = (char *(*)()) F718_4222_2517_5;
	R2517[26] = (char *(*)()) F719_4222_2517_5;
	R2517[27] = (char *(*)()) F720_4270;
	R2517[28] = (char *(*)()) F721_4288_2517_5;
	R2517[29] = (char *(*)()) F722_4288_2517_5;
}
static EIF_REFERENCE F694_3497_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F694_3497(Current, *(EIF_INTEGER_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_3497_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F695_3497(Current, *(EIF_INTEGER_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F697_3592_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F697_3592(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F698_3592_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F698_3592(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F700_3687_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F700_3687(Current, *(EIF_INTEGER_16 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F701_3687_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F701_3687(Current, *(EIF_INTEGER_16 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F703_3782_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F703_3782(Current, *(EIF_INTEGER_8 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F704_3782_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F704_3782(Current, *(EIF_INTEGER_8 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F706_3873_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F706_3873(Current, *(EIF_NATURAL_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F707_3873_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F707_3873(Current, *(EIF_NATURAL_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F709_3963_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F709_3963(Current, *(EIF_NATURAL_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F710_3963_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F710_3963(Current, *(EIF_NATURAL_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F712_4054_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F712_4054(Current, *(EIF_NATURAL_16 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F713_4054_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F713_4054(Current, *(EIF_NATURAL_16 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F715_4145_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F715_4145(Current, *(EIF_NATURAL_8 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F716_4145_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F716_4145(Current, *(EIF_NATURAL_8 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F718_4222_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F718_4222(Current, *(EIF_REAL_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F719_4222_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F719_4222(Current, *(EIF_REAL_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F721_4288_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F721_4288(Current, *(EIF_REAL_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F722_4288_2517_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F722_4288(Current, *(EIF_REAL_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}

char *(*R2522[30])();
void R2522_init () {
	R2522[0] = (char *(*)()) F693_3453;
	R2522[1] = (char *(*)()) F694_3502_2522_1;
	R2522[2] = (char *(*)()) F695_3502_2522_1;
	R2522[3] = (char *(*)()) F696_3547;
	R2522[4] = (char *(*)()) F697_3597_2522_1;
	R2522[5] = (char *(*)()) F698_3597_2522_1;
	R2522[6] = (char *(*)()) F699_3642;
	R2522[7] = (char *(*)()) F700_3692_2522_1;
	R2522[8] = (char *(*)()) F701_3692_2522_1;
	R2522[9] = (char *(*)()) F702_3737;
	R2522[10] = (char *(*)()) F703_3787_2522_1;
	R2522[11] = (char *(*)()) F704_3787_2522_1;
	{long i; for (i = 12; i < 15; i++) R2522[i] = (char *(*)()) F705_3831;}
	{long i; for (i = 15; i < 18; i++) R2522[i] = (char *(*)()) F708_3921;}
	{long i; for (i = 18; i < 21; i++) R2522[i] = (char *(*)()) F711_4011;}
	{long i; for (i = 21; i < 24; i++) R2522[i] = (char *(*)()) F714_4102;}
	R2522[24] = (char *(*)()) F717_4210;
	R2522[25] = (char *(*)()) F718_4228_2522_1;
	R2522[26] = (char *(*)()) F719_4228_2522_1;
	R2522[27] = (char *(*)()) F720_4276;
	R2522[28] = (char *(*)()) F721_4294_2522_1;
	R2522[29] = (char *(*)()) F722_4294_2522_1;
}
static EIF_REFERENCE F694_3502_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F694_3502(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_3502_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F695_3502(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F697_3597_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F697_3597(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F698_3597_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F698_3597(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F700_3692_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F700_3692(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F701_3692_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F701_3692(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F703_3787_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F703_3787(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F704_3787_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F704_3787(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F718_4228_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F718_4228(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F719_4228_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F719_4228(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F721_4294_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F721_4294(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F722_4294_2522_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F722_4294(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}

char *(*R2523[133])();
void R2523_init () {
	R2523[0] = (char *(*)()) F646_3234;
	R2523[1] = (char *(*)()) F647_3276;
	R2523[2] = (char *(*)()) F648_3276;
	R2523[3] = (char *(*)()) F649_3276;
	R2523[4] = (char *(*)()) F650_3276;
	R2523[5] = (char *(*)()) F651_3276;
	R2523[6] = (char *(*)()) F652_3276;
	R2523[7] = (char *(*)()) F653_3276;
	R2523[8] = (char *(*)()) F654_3276;
	R2523[9] = (char *(*)()) F655_3276;
	R2523[10] = (char *(*)()) F656_3276;
	R2523[11] = (char *(*)()) F657_3276;
	R2523[12] = (char *(*)()) F658_3276;
	R2523[13] = (char *(*)()) F659_3276;
	R2523[14] = (char *(*)()) F660_3276;
	R2523[15] = (char *(*)()) F661_3276;
	R2523[16] = (char *(*)()) F662_3276;
	R2523[17] = (char *(*)()) F663_3276;
	R2523[18] = (char *(*)()) F664_3276;
	R2523[19] = (char *(*)()) F665_3276;
	R2523[20] = (char *(*)()) F666_3276;
	R2523[21] = (char *(*)()) F667_3276;
	R2523[22] = (char *(*)()) F668_3276;
	R2523[23] = (char *(*)()) F669_3276;
	R2523[24] = (char *(*)()) F670_3276;
	R2523[25] = (char *(*)()) F671_3276;
	R2523[26] = (char *(*)()) F672_3276;
	R2523[27] = (char *(*)()) F673_3276;
	R2523[28] = (char *(*)()) F674_3276;
	R2523[29] = (char *(*)()) F675_3276;
	R2523[30] = (char *(*)()) F676_3276;
	R2523[31] = (char *(*)()) F677_3276;
	R2523[32] = (char *(*)()) F678_3276;
	R2523[33] = (char *(*)()) F679_3276;
	R2523[34] = (char *(*)()) F680_3276;
	R2523[35] = (char *(*)()) F681_3276;
	R2523[36] = (char *(*)()) F682_3276;
	R2523[37] = (char *(*)()) F683_3276;
	R2523[38] = (char *(*)()) F684_3276;
	R2523[39] = (char *(*)()) F685_3276;
	R2523[40] = (char *(*)()) F686_3276;
	R2523[41] = (char *(*)()) F687_3276;
	R2523[42] = (char *(*)()) F688_3276;
	R2523[43] = (char *(*)()) F689_3276;
	R2523[44] = (char *(*)()) F690_3276;
	R2523[45] = (char *(*)()) F691_3276;
	R2523[46] = (char *(*)()) F692_3328;
	{long i; for (i = 47; i < 50; i++) R2523[i] = (char *(*)()) F693_3431;}
	{long i; for (i = 50; i < 53; i++) R2523[i] = (char *(*)()) F696_3525;}
	{long i; for (i = 53; i < 56; i++) R2523[i] = (char *(*)()) F699_3620;}
	{long i; for (i = 56; i < 59; i++) R2523[i] = (char *(*)()) F702_3715;}
	{long i; for (i = 59; i < 62; i++) R2523[i] = (char *(*)()) F705_3810;}
	{long i; for (i = 62; i < 65; i++) R2523[i] = (char *(*)()) F708_3900;}
	{long i; for (i = 65; i < 68; i++) R2523[i] = (char *(*)()) F711_3990;}
	{long i; for (i = 68; i < 71; i++) R2523[i] = (char *(*)()) F714_4081;}
	{long i; for (i = 71; i < 74; i++) R2523[i] = (char *(*)()) F717_4172;}
	{long i; for (i = 74; i < 77; i++) R2523[i] = (char *(*)()) F720_4238;}
	{long i; for (i = 77; i < 80; i++) R2523[i] = (char *(*)()) F723_4305;}
	{long i; for (i = 80; i < 83; i++) R2523[i] = (char *(*)()) F726_4345;}
	{long i; for (i = 83; i < 86; i++) R2523[i] = (char *(*)()) F729_4390;}
	{long i; for (i = 86; i < 117; i++) R2523[i] = (char *(*)()) F732_4411;}
	R2523[117] = (char *(*)()) F763_4437;
	R2523[118] = (char *(*)()) F764_4437;
	{long i; for (i = 120; i < 124; i++) R2523[i] = (char *(*)()) F765_4445;}
	{long i; for (i = 128; i < 130; i++) R2523[i] = (char *(*)()) F770_4504;}
	{long i; for (i = 131; i < 133; i++) R2523[i] = (char *(*)()) F770_4504;}
}

char *(*R2581[45])();
void R2581_init () {
	R2581[0] = (char *(*)()) F647_3272;
	R2581[1] = (char *(*)()) F648_3272;
	R2581[2] = (char *(*)()) F649_3272;
	R2581[3] = (char *(*)()) F650_3272;
	R2581[4] = (char *(*)()) F651_3272;
	R2581[5] = (char *(*)()) F652_3272;
	R2581[6] = (char *(*)()) F653_3272;
	R2581[7] = (char *(*)()) F654_3272;
	R2581[8] = (char *(*)()) F655_3272;
	R2581[9] = (char *(*)()) F656_3272;
	R2581[10] = (char *(*)()) F657_3272;
	R2581[11] = (char *(*)()) F658_3272;
	R2581[12] = (char *(*)()) F659_3272;
	R2581[13] = (char *(*)()) F660_3272;
	R2581[14] = (char *(*)()) F661_3272;
	R2581[15] = (char *(*)()) F662_3272;
	R2581[16] = (char *(*)()) F663_3272;
	R2581[17] = (char *(*)()) F664_3272;
	R2581[18] = (char *(*)()) F665_3272;
	R2581[19] = (char *(*)()) F666_3272;
	R2581[20] = (char *(*)()) F667_3272;
	R2581[21] = (char *(*)()) F668_3272;
	R2581[22] = (char *(*)()) F669_3272;
	R2581[23] = (char *(*)()) F670_3272;
	R2581[24] = (char *(*)()) F671_3272;
	R2581[25] = (char *(*)()) F672_3272;
	R2581[26] = (char *(*)()) F673_3272;
	R2581[27] = (char *(*)()) F674_3272;
	R2581[28] = (char *(*)()) F675_3272;
	R2581[29] = (char *(*)()) F676_3272;
	R2581[30] = (char *(*)()) F677_3272;
	R2581[31] = (char *(*)()) F678_3272;
	R2581[32] = (char *(*)()) F679_3272;
	R2581[33] = (char *(*)()) F680_3272;
	R2581[34] = (char *(*)()) F681_3272;
	R2581[35] = (char *(*)()) F682_3272;
	R2581[36] = (char *(*)()) F683_3272;
	R2581[37] = (char *(*)()) F684_3272;
	R2581[38] = (char *(*)()) F685_3272;
	R2581[39] = (char *(*)()) F686_3272;
	R2581[40] = (char *(*)()) F687_3272;
	R2581[41] = (char *(*)()) F688_3272;
	R2581[42] = (char *(*)()) F689_3272;
	R2581[43] = (char *(*)()) F690_3272;
	R2581[44] = (char *(*)()) F691_3272;
}

char *(*R2582[45])();
void R2582_init () {
	R2582[0] = (char *(*)()) F647_3273;
	R2582[1] = (char *(*)()) F648_3273;
	R2582[2] = (char *(*)()) F649_3273;
	R2582[3] = (char *(*)()) F650_3273;
	R2582[4] = (char *(*)()) F651_3273;
	R2582[5] = (char *(*)()) F652_3273;
	R2582[6] = (char *(*)()) F653_3273;
	R2582[7] = (char *(*)()) F654_3273;
	R2582[8] = (char *(*)()) F655_3273;
	R2582[9] = (char *(*)()) F656_3273;
	R2582[10] = (char *(*)()) F657_3273;
	R2582[11] = (char *(*)()) F658_3273;
	R2582[12] = (char *(*)()) F659_3273;
	R2582[13] = (char *(*)()) F660_3273;
	R2582[14] = (char *(*)()) F661_3273;
	R2582[15] = (char *(*)()) F662_3273;
	R2582[16] = (char *(*)()) F663_3273;
	R2582[17] = (char *(*)()) F664_3273;
	R2582[18] = (char *(*)()) F665_3273;
	R2582[19] = (char *(*)()) F666_3273;
	R2582[20] = (char *(*)()) F667_3273;
	R2582[21] = (char *(*)()) F668_3273;
	R2582[22] = (char *(*)()) F669_3273;
	R2582[23] = (char *(*)()) F670_3273;
	R2582[24] = (char *(*)()) F671_3273;
	R2582[25] = (char *(*)()) F672_3273;
	R2582[26] = (char *(*)()) F673_3273;
	R2582[27] = (char *(*)()) F674_3273;
	R2582[28] = (char *(*)()) F675_3273;
	R2582[29] = (char *(*)()) F676_3273;
	R2582[30] = (char *(*)()) F677_3273;
	R2582[31] = (char *(*)()) F678_3273;
	R2582[32] = (char *(*)()) F679_3273;
	R2582[33] = (char *(*)()) F680_3273;
	R2582[34] = (char *(*)()) F681_3273;
	R2582[35] = (char *(*)()) F682_3273;
	R2582[36] = (char *(*)()) F683_3273;
	R2582[37] = (char *(*)()) F684_3273;
	R2582[38] = (char *(*)()) F685_3273;
	R2582[39] = (char *(*)()) F686_3273;
	R2582[40] = (char *(*)()) F687_3273;
	R2582[41] = (char *(*)()) F688_3273;
	R2582[42] = (char *(*)()) F689_3273;
	R2582[43] = (char *(*)()) F690_3273;
	R2582[44] = (char *(*)()) F691_3273;
}

char *(*R2583[45])();
void R2583_init () {
	R2583[0] = (char *(*)()) F647_3274;
	R2583[1] = (char *(*)()) F648_3274;
	R2583[2] = (char *(*)()) F649_3274;
	R2583[3] = (char *(*)()) F650_3274;
	R2583[4] = (char *(*)()) F651_3274;
	R2583[5] = (char *(*)()) F652_3274;
	R2583[6] = (char *(*)()) F653_3274;
	R2583[7] = (char *(*)()) F654_3274;
	R2583[8] = (char *(*)()) F655_3274;
	R2583[9] = (char *(*)()) F656_3274;
	R2583[10] = (char *(*)()) F657_3274;
	R2583[11] = (char *(*)()) F658_3274;
	R2583[12] = (char *(*)()) F659_3274;
	R2583[13] = (char *(*)()) F660_3274;
	R2583[14] = (char *(*)()) F661_3274;
	R2583[15] = (char *(*)()) F662_3274;
	R2583[16] = (char *(*)()) F663_3274;
	R2583[17] = (char *(*)()) F664_3274;
	R2583[18] = (char *(*)()) F665_3274;
	R2583[19] = (char *(*)()) F666_3274;
	R2583[20] = (char *(*)()) F667_3274;
	R2583[21] = (char *(*)()) F668_3274;
	R2583[22] = (char *(*)()) F669_3274;
	R2583[23] = (char *(*)()) F670_3274;
	R2583[24] = (char *(*)()) F671_3274;
	R2583[25] = (char *(*)()) F672_3274;
	R2583[26] = (char *(*)()) F673_3274;
	R2583[27] = (char *(*)()) F674_3274;
	R2583[28] = (char *(*)()) F675_3274;
	R2583[29] = (char *(*)()) F676_3274;
	R2583[30] = (char *(*)()) F677_3274;
	R2583[31] = (char *(*)()) F678_3274;
	R2583[32] = (char *(*)()) F679_3274;
	R2583[33] = (char *(*)()) F680_3274;
	R2583[34] = (char *(*)()) F681_3274;
	R2583[35] = (char *(*)()) F682_3274;
	R2583[36] = (char *(*)()) F683_3274;
	R2583[37] = (char *(*)()) F684_3274;
	R2583[38] = (char *(*)()) F685_3274;
	R2583[39] = (char *(*)()) F686_3274;
	R2583[40] = (char *(*)()) F687_3274;
	R2583[41] = (char *(*)()) F688_3274;
	R2583[42] = (char *(*)()) F689_3274;
	R2583[43] = (char *(*)()) F690_3274;
	R2583[44] = (char *(*)()) F691_3274;
}

char *(*R2584[45])();
void R2584_init () {
	R2584[0] = (char *(*)()) F647_3275;
	R2584[1] = (char *(*)()) F648_3275;
	R2584[2] = (char *(*)()) F649_3275;
	R2584[3] = (char *(*)()) F650_3275;
	R2584[4] = (char *(*)()) F651_3275;
	R2584[5] = (char *(*)()) F652_3275;
	R2584[6] = (char *(*)()) F653_3275;
	R2584[7] = (char *(*)()) F654_3275;
	R2584[8] = (char *(*)()) F655_3275;
	R2584[9] = (char *(*)()) F656_3275;
	R2584[10] = (char *(*)()) F657_3275;
	R2584[11] = (char *(*)()) F658_3275;
	R2584[12] = (char *(*)()) F659_3275;
	R2584[13] = (char *(*)()) F660_3275;
	R2584[14] = (char *(*)()) F661_3275;
	R2584[15] = (char *(*)()) F662_3275;
	R2584[16] = (char *(*)()) F663_3275;
	R2584[17] = (char *(*)()) F664_3275;
	R2584[18] = (char *(*)()) F665_3275;
	R2584[19] = (char *(*)()) F666_3275;
	R2584[20] = (char *(*)()) F667_3275;
	R2584[21] = (char *(*)()) F668_3275;
	R2584[22] = (char *(*)()) F669_3275;
	R2584[23] = (char *(*)()) F670_3275;
	R2584[24] = (char *(*)()) F671_3275;
	R2584[25] = (char *(*)()) F672_3275;
	R2584[26] = (char *(*)()) F673_3275;
	R2584[27] = (char *(*)()) F674_3275;
	R2584[28] = (char *(*)()) F675_3275;
	R2584[29] = (char *(*)()) F676_3275;
	R2584[30] = (char *(*)()) F677_3275;
	R2584[31] = (char *(*)()) F678_3275;
	R2584[32] = (char *(*)()) F679_3275;
	R2584[33] = (char *(*)()) F680_3275;
	R2584[34] = (char *(*)()) F681_3275;
	R2584[35] = (char *(*)()) F682_3275;
	R2584[36] = (char *(*)()) F683_3275;
	R2584[37] = (char *(*)()) F684_3275;
	R2584[38] = (char *(*)()) F685_3275;
	R2584[39] = (char *(*)()) F686_3275;
	R2584[40] = (char *(*)()) F687_3275;
	R2584[41] = (char *(*)()) F688_3275;
	R2584[42] = (char *(*)()) F689_3275;
	R2584[43] = (char *(*)()) F690_3275;
	R2584[44] = (char *(*)()) F691_3275;
}

char *(*R2585[45])();
void R2585_init () {
	R2585[0] = (char *(*)()) F647_3277;
	R2585[1] = (char *(*)()) F648_3277;
	R2585[2] = (char *(*)()) F649_3277;
	R2585[3] = (char *(*)()) F650_3277;
	R2585[4] = (char *(*)()) F651_3277;
	R2585[5] = (char *(*)()) F652_3277;
	R2585[6] = (char *(*)()) F653_3277;
	R2585[7] = (char *(*)()) F654_3277;
	R2585[8] = (char *(*)()) F655_3277;
	R2585[9] = (char *(*)()) F656_3277;
	R2585[10] = (char *(*)()) F657_3277;
	R2585[11] = (char *(*)()) F658_3277;
	R2585[12] = (char *(*)()) F659_3277;
	R2585[13] = (char *(*)()) F660_3277;
	R2585[14] = (char *(*)()) F661_3277;
	R2585[15] = (char *(*)()) F662_3277;
	R2585[16] = (char *(*)()) F663_3277;
	R2585[17] = (char *(*)()) F664_3277;
	R2585[18] = (char *(*)()) F665_3277;
	R2585[19] = (char *(*)()) F666_3277;
	R2585[20] = (char *(*)()) F667_3277;
	R2585[21] = (char *(*)()) F668_3277;
	R2585[22] = (char *(*)()) F669_3277;
	R2585[23] = (char *(*)()) F670_3277;
	R2585[24] = (char *(*)()) F671_3277;
	R2585[25] = (char *(*)()) F672_3277;
	R2585[26] = (char *(*)()) F673_3277;
	R2585[27] = (char *(*)()) F674_3277;
	R2585[28] = (char *(*)()) F675_3277;
	R2585[29] = (char *(*)()) F676_3277;
	R2585[30] = (char *(*)()) F677_3277;
	R2585[31] = (char *(*)()) F678_3277;
	R2585[32] = (char *(*)()) F679_3277;
	R2585[33] = (char *(*)()) F680_3277;
	R2585[34] = (char *(*)()) F681_3277;
	R2585[35] = (char *(*)()) F682_3277;
	R2585[36] = (char *(*)()) F683_3277;
	R2585[37] = (char *(*)()) F684_3277;
	R2585[38] = (char *(*)()) F685_3277;
	R2585[39] = (char *(*)()) F686_3277;
	R2585[40] = (char *(*)()) F687_3277;
	R2585[41] = (char *(*)()) F688_3277;
	R2585[42] = (char *(*)()) F689_3277;
	R2585[43] = (char *(*)()) F690_3277;
	R2585[44] = (char *(*)()) F691_3277;
}

char *(*R2586[45])();
void R2586_init () {
	R2586[0] = (char *(*)()) F647_3278;
	R2586[1] = (char *(*)()) F648_3278;
	R2586[2] = (char *(*)()) F649_3278;
	R2586[3] = (char *(*)()) F650_3278;
	R2586[4] = (char *(*)()) F651_3278;
	R2586[5] = (char *(*)()) F652_3278;
	R2586[6] = (char *(*)()) F653_3278;
	R2586[7] = (char *(*)()) F654_3278;
	R2586[8] = (char *(*)()) F655_3278;
	R2586[9] = (char *(*)()) F656_3278;
	R2586[10] = (char *(*)()) F657_3278;
	R2586[11] = (char *(*)()) F658_3278;
	R2586[12] = (char *(*)()) F659_3278;
	R2586[13] = (char *(*)()) F660_3278;
	R2586[14] = (char *(*)()) F661_3278;
	R2586[15] = (char *(*)()) F662_3278;
	R2586[16] = (char *(*)()) F663_3278;
	R2586[17] = (char *(*)()) F664_3278;
	R2586[18] = (char *(*)()) F665_3278;
	R2586[19] = (char *(*)()) F666_3278;
	R2586[20] = (char *(*)()) F667_3278;
	R2586[21] = (char *(*)()) F668_3278;
	R2586[22] = (char *(*)()) F669_3278;
	R2586[23] = (char *(*)()) F670_3278;
	R2586[24] = (char *(*)()) F671_3278;
	R2586[25] = (char *(*)()) F672_3278;
	R2586[26] = (char *(*)()) F673_3278;
	R2586[27] = (char *(*)()) F674_3278;
	R2586[28] = (char *(*)()) F675_3278;
	R2586[29] = (char *(*)()) F676_3278;
	R2586[30] = (char *(*)()) F677_3278;
	R2586[31] = (char *(*)()) F678_3278;
	R2586[32] = (char *(*)()) F679_3278;
	R2586[33] = (char *(*)()) F680_3278;
	R2586[34] = (char *(*)()) F681_3278;
	R2586[35] = (char *(*)()) F682_3278;
	R2586[36] = (char *(*)()) F683_3278;
	R2586[37] = (char *(*)()) F684_3278;
	R2586[38] = (char *(*)()) F685_3278;
	R2586[39] = (char *(*)()) F686_3278;
	R2586[40] = (char *(*)()) F687_3278;
	R2586[41] = (char *(*)()) F688_3278;
	R2586[42] = (char *(*)()) F689_3278;
	R2586[43] = (char *(*)()) F690_3278;
	R2586[44] = (char *(*)()) F691_3278;
}

char *(*R2587[45])();
void R2587_init () {
	R2587[0] = (char *(*)()) F647_3279;
	R2587[1] = (char *(*)()) F648_3279;
	R2587[2] = (char *(*)()) F649_3279;
	R2587[3] = (char *(*)()) F650_3279;
	R2587[4] = (char *(*)()) F651_3279;
	R2587[5] = (char *(*)()) F652_3279;
	R2587[6] = (char *(*)()) F653_3279;
	R2587[7] = (char *(*)()) F654_3279;
	R2587[8] = (char *(*)()) F655_3279;
	R2587[9] = (char *(*)()) F656_3279;
	R2587[10] = (char *(*)()) F657_3279;
	R2587[11] = (char *(*)()) F658_3279;
	R2587[12] = (char *(*)()) F659_3279;
	R2587[13] = (char *(*)()) F660_3279;
	R2587[14] = (char *(*)()) F661_3279;
	R2587[15] = (char *(*)()) F662_3279;
	R2587[16] = (char *(*)()) F663_3279;
	R2587[17] = (char *(*)()) F664_3279;
	R2587[18] = (char *(*)()) F665_3279;
	R2587[19] = (char *(*)()) F666_3279;
	R2587[20] = (char *(*)()) F667_3279;
	R2587[21] = (char *(*)()) F668_3279;
	R2587[22] = (char *(*)()) F669_3279;
	R2587[23] = (char *(*)()) F670_3279;
	R2587[24] = (char *(*)()) F671_3279;
	R2587[25] = (char *(*)()) F672_3279;
	R2587[26] = (char *(*)()) F673_3279;
	R2587[27] = (char *(*)()) F674_3279;
	R2587[28] = (char *(*)()) F675_3279;
	R2587[29] = (char *(*)()) F676_3279;
	R2587[30] = (char *(*)()) F677_3279;
	R2587[31] = (char *(*)()) F678_3279;
	R2587[32] = (char *(*)()) F679_3279;
	R2587[33] = (char *(*)()) F680_3279;
	R2587[34] = (char *(*)()) F681_3279;
	R2587[35] = (char *(*)()) F682_3279;
	R2587[36] = (char *(*)()) F683_3279;
	R2587[37] = (char *(*)()) F684_3279;
	R2587[38] = (char *(*)()) F685_3279;
	R2587[39] = (char *(*)()) F686_3279;
	R2587[40] = (char *(*)()) F687_3279;
	R2587[41] = (char *(*)()) F688_3279;
	R2587[42] = (char *(*)()) F689_3279;
	R2587[43] = (char *(*)()) F690_3279;
	R2587[44] = (char *(*)()) F691_3279;
}

char *(*R2589[45])();
void R2589_init () {
	R2589[0] = (char *(*)()) F647_3281;
	R2589[1] = (char *(*)()) F648_3281;
	R2589[2] = (char *(*)()) F649_3281;
	R2589[3] = (char *(*)()) F650_3281;
	R2589[4] = (char *(*)()) F651_3281;
	R2589[5] = (char *(*)()) F652_3281;
	R2589[6] = (char *(*)()) F653_3281;
	R2589[7] = (char *(*)()) F654_3281;
	R2589[8] = (char *(*)()) F655_3281;
	R2589[9] = (char *(*)()) F656_3281;
	R2589[10] = (char *(*)()) F657_3281;
	R2589[11] = (char *(*)()) F658_3281;
	R2589[12] = (char *(*)()) F659_3281;
	R2589[13] = (char *(*)()) F660_3281;
	R2589[14] = (char *(*)()) F661_3281;
	R2589[15] = (char *(*)()) F662_3281;
	R2589[16] = (char *(*)()) F663_3281;
	R2589[17] = (char *(*)()) F664_3281;
	R2589[18] = (char *(*)()) F665_3281;
	R2589[19] = (char *(*)()) F666_3281;
	R2589[20] = (char *(*)()) F667_3281;
	R2589[21] = (char *(*)()) F668_3281;
	R2589[22] = (char *(*)()) F669_3281;
	R2589[23] = (char *(*)()) F670_3281;
	R2589[24] = (char *(*)()) F671_3281;
	R2589[25] = (char *(*)()) F672_3281;
	R2589[26] = (char *(*)()) F673_3281;
	R2589[27] = (char *(*)()) F674_3281;
	R2589[28] = (char *(*)()) F675_3281;
	R2589[29] = (char *(*)()) F676_3281;
	R2589[30] = (char *(*)()) F677_3281;
	R2589[31] = (char *(*)()) F678_3281;
	R2589[32] = (char *(*)()) F679_3281;
	R2589[33] = (char *(*)()) F680_3281;
	R2589[34] = (char *(*)()) F681_3281;
	R2589[35] = (char *(*)()) F682_3281;
	R2589[36] = (char *(*)()) F683_3281;
	R2589[37] = (char *(*)()) F684_3281;
	R2589[38] = (char *(*)()) F685_3281;
	R2589[39] = (char *(*)()) F686_3281;
	R2589[40] = (char *(*)()) F687_3281;
	R2589[41] = (char *(*)()) F688_3281;
	R2589[42] = (char *(*)()) F689_3281;
	R2589[43] = (char *(*)()) F690_3281;
	R2589[44] = (char *(*)()) F691_3281;
}

char *(*R2591[45])();
void R2591_init () {
	R2591[0] = (char *(*)()) F647_3286;
	R2591[1] = (char *(*)()) F648_3286_2591_5;
	R2591[2] = (char *(*)()) F649_3286;
	R2591[3] = (char *(*)()) F650_3286;
	R2591[4] = (char *(*)()) F651_3286_2591_5;
	R2591[5] = (char *(*)()) F652_3286_2591_5;
	R2591[6] = (char *(*)()) F653_3286;
	R2591[7] = (char *(*)()) F654_3286_2591_5;
	R2591[8] = (char *(*)()) F655_3286_2591_5;
	R2591[9] = (char *(*)()) F656_3286;
	R2591[10] = (char *(*)()) F657_3286_2591_5;
	R2591[11] = (char *(*)()) F658_3286_2591_5;
	R2591[12] = (char *(*)()) F659_3286;
	R2591[13] = (char *(*)()) F660_3286_2591_5;
	R2591[14] = (char *(*)()) F661_3286;
	R2591[15] = (char *(*)()) F662_3286_2591_5;
	R2591[16] = (char *(*)()) F663_3286;
	R2591[17] = (char *(*)()) F664_3286_2591_5;
	R2591[18] = (char *(*)()) F665_3286;
	R2591[19] = (char *(*)()) F666_3286_2591_5;
	R2591[20] = (char *(*)()) F667_3286;
	R2591[21] = (char *(*)()) F668_3286_2591_5;
	R2591[22] = (char *(*)()) F669_3286;
	R2591[23] = (char *(*)()) F670_3286_2591_5;
	R2591[24] = (char *(*)()) F671_3286;
	R2591[25] = (char *(*)()) F672_3286_2591_5;
	R2591[26] = (char *(*)()) F673_3286;
	R2591[27] = (char *(*)()) F674_3286_2591_5;
	R2591[28] = (char *(*)()) F675_3286;
	R2591[29] = (char *(*)()) F676_3286_2591_5;
	R2591[30] = (char *(*)()) F677_3286;
	R2591[31] = (char *(*)()) F678_3286;
	R2591[32] = (char *(*)()) F679_3286_2591_5;
	R2591[33] = (char *(*)()) F680_3286_2591_5;
	R2591[34] = (char *(*)()) F681_3286_2591_5;
	R2591[35] = (char *(*)()) F682_3286_2591_5;
	R2591[36] = (char *(*)()) F683_3286_2591_5;
	R2591[37] = (char *(*)()) F684_3286_2591_5;
	R2591[38] = (char *(*)()) F685_3286_2591_5;
	R2591[39] = (char *(*)()) F686_3286_2591_5;
	R2591[40] = (char *(*)()) F687_3286_2591_5;
	R2591[41] = (char *(*)()) F688_3286_2591_5;
	R2591[42] = (char *(*)()) F689_3286_2591_5;
	R2591[43] = (char *(*)()) F690_3286_2591_5;
	R2591[44] = (char *(*)()) F691_3286_2591_5;
}
static EIF_REFERENCE F648_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F648_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F651_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F651_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F652_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64* r = F652_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {734,694,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 734, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F654_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F654_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F655_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REFERENCE* r = F655_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {735,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 735, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REFERENCE* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F657_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F657_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F658_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F658_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F660_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F660_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F662_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F662_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F664_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F664_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F666_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F666_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F668_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F668_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F670_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F670_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F672_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F672_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F674_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F674_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F676_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F676_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F679_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32* r = F679_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {737,724,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 737, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F680_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN* r = F680_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {739,730,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 739, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_BOOLEAN* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F681_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32* r = F681_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {741,709,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 741, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F682_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8* r = F682_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {743,715,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 743, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F683_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32* r = F683_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {745,697,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 745, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F684_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64* r = F684_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {747,706,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 747, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F685_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8* r = F685_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {749,703,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 749, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F686_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8* r = F686_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {751,727,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 751, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F687_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16* r = F687_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {753,712,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 753, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F688_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32* r = F688_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {755,718,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 755, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F689_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16* r = F689_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {757,700,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 757, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F690_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER* r = F690_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {759,763,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 759, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_POINTER* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F691_3286_2591_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64* r = F691_3286(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {761,721,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 761, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_64* *)Result = r;
		return Result;
	}
}

char *(*R2593[45])();
void R2593_init () {
	R2593[0] = (char *(*)()) F647_3288;
	R2593[1] = (char *(*)()) F648_3288_2593_1;
	R2593[2] = (char *(*)()) F649_3288;
	R2593[3] = (char *(*)()) F650_3288;
	R2593[4] = (char *(*)()) F651_3288_2593_1;
	R2593[5] = (char *(*)()) F652_3288_2593_1;
	R2593[6] = (char *(*)()) F653_3288;
	R2593[7] = (char *(*)()) F654_3288_2593_1;
	R2593[8] = (char *(*)()) F655_3288_2593_1;
	R2593[9] = (char *(*)()) F656_3288;
	R2593[10] = (char *(*)()) F657_3288_2593_1;
	R2593[11] = (char *(*)()) F658_3288_2593_1;
	R2593[12] = (char *(*)()) F659_3288;
	R2593[13] = (char *(*)()) F660_3288_2593_1;
	R2593[14] = (char *(*)()) F661_3288;
	R2593[15] = (char *(*)()) F662_3288_2593_1;
	R2593[16] = (char *(*)()) F663_3288;
	R2593[17] = (char *(*)()) F664_3288_2593_1;
	R2593[18] = (char *(*)()) F665_3288;
	R2593[19] = (char *(*)()) F666_3288_2593_1;
	R2593[20] = (char *(*)()) F667_3288;
	R2593[21] = (char *(*)()) F668_3288_2593_1;
	R2593[22] = (char *(*)()) F669_3288;
	R2593[23] = (char *(*)()) F670_3288_2593_1;
	R2593[24] = (char *(*)()) F671_3288;
	R2593[25] = (char *(*)()) F672_3288_2593_1;
	R2593[26] = (char *(*)()) F673_3288;
	R2593[27] = (char *(*)()) F674_3288_2593_1;
	R2593[28] = (char *(*)()) F675_3288;
	R2593[29] = (char *(*)()) F676_3288_2593_1;
	R2593[30] = (char *(*)()) F677_3288;
	R2593[31] = (char *(*)()) F678_3288;
	R2593[32] = (char *(*)()) F679_3288_2593_1;
	R2593[33] = (char *(*)()) F680_3288_2593_1;
	R2593[34] = (char *(*)()) F681_3288_2593_1;
	R2593[35] = (char *(*)()) F682_3288_2593_1;
	R2593[36] = (char *(*)()) F683_3288_2593_1;
	R2593[37] = (char *(*)()) F684_3288_2593_1;
	R2593[38] = (char *(*)()) F685_3288_2593_1;
	R2593[39] = (char *(*)()) F686_3288_2593_1;
	R2593[40] = (char *(*)()) F687_3288_2593_1;
	R2593[41] = (char *(*)()) F688_3288_2593_1;
	R2593[42] = (char *(*)()) F689_3288_2593_1;
	R2593[43] = (char *(*)()) F690_3288_2593_1;
	R2593[44] = (char *(*)()) F691_3288_2593_1;
}
static EIF_REFERENCE F648_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F648_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F651_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F651_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F652_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64* r = F652_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {734,694,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 734, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F654_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F654_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F655_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REFERENCE* r = F655_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {735,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 735, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REFERENCE* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F657_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F657_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F658_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F658_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F660_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F660_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F662_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F662_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F664_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F664_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F666_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F666_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F668_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F668_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F670_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F670_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F672_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F672_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F674_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F674_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F676_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F676_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F679_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32* r = F679_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {737,724,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 737, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F680_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN* r = F680_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {739,730,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 739, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_BOOLEAN* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F681_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32* r = F681_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {741,709,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 741, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F682_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8* r = F682_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {743,715,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 743, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F683_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32* r = F683_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {745,697,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 745, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F684_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64* r = F684_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {747,706,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 747, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F685_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8* r = F685_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {749,703,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 749, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F686_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8* r = F686_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {751,727,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 751, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F687_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16* r = F687_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {753,712,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 753, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F688_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32* r = F688_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {755,718,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 755, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F689_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16* r = F689_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {757,700,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 757, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F690_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER* r = F690_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {759,763,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 759, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_POINTER* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F691_3288_2593_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64* r = F691_3288(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {761,721,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 761, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_64* *)Result = r;
		return Result;
	}
}

char *(*R2594[45])();
void R2594_init () {
	R2594[0] = (char *(*)()) F647_3289;
	R2594[1] = (char *(*)()) F648_3289_2594_1;
	R2594[2] = (char *(*)()) F649_3289;
	R2594[3] = (char *(*)()) F650_3289;
	R2594[4] = (char *(*)()) F651_3289_2594_1;
	R2594[5] = (char *(*)()) F652_3289_2594_1;
	R2594[6] = (char *(*)()) F653_3289;
	R2594[7] = (char *(*)()) F654_3289_2594_1;
	R2594[8] = (char *(*)()) F655_3289_2594_1;
	R2594[9] = (char *(*)()) F656_3289;
	R2594[10] = (char *(*)()) F657_3289_2594_1;
	R2594[11] = (char *(*)()) F658_3289_2594_1;
	R2594[12] = (char *(*)()) F659_3289;
	R2594[13] = (char *(*)()) F660_3289_2594_1;
	R2594[14] = (char *(*)()) F661_3289;
	R2594[15] = (char *(*)()) F662_3289_2594_1;
	R2594[16] = (char *(*)()) F663_3289;
	R2594[17] = (char *(*)()) F664_3289_2594_1;
	R2594[18] = (char *(*)()) F665_3289;
	R2594[19] = (char *(*)()) F666_3289_2594_1;
	R2594[20] = (char *(*)()) F667_3289;
	R2594[21] = (char *(*)()) F668_3289_2594_1;
	R2594[22] = (char *(*)()) F669_3289;
	R2594[23] = (char *(*)()) F670_3289_2594_1;
	R2594[24] = (char *(*)()) F671_3289;
	R2594[25] = (char *(*)()) F672_3289_2594_1;
	R2594[26] = (char *(*)()) F673_3289;
	R2594[27] = (char *(*)()) F674_3289_2594_1;
	R2594[28] = (char *(*)()) F675_3289;
	R2594[29] = (char *(*)()) F676_3289_2594_1;
	R2594[30] = (char *(*)()) F677_3289;
	R2594[31] = (char *(*)()) F678_3289;
	R2594[32] = (char *(*)()) F679_3289_2594_1;
	R2594[33] = (char *(*)()) F680_3289_2594_1;
	R2594[34] = (char *(*)()) F681_3289_2594_1;
	R2594[35] = (char *(*)()) F682_3289_2594_1;
	R2594[36] = (char *(*)()) F683_3289_2594_1;
	R2594[37] = (char *(*)()) F684_3289_2594_1;
	R2594[38] = (char *(*)()) F685_3289_2594_1;
	R2594[39] = (char *(*)()) F686_3289_2594_1;
	R2594[40] = (char *(*)()) F687_3289_2594_1;
	R2594[41] = (char *(*)()) F688_3289_2594_1;
	R2594[42] = (char *(*)()) F689_3289_2594_1;
	R2594[43] = (char *(*)()) F690_3289_2594_1;
	R2594[44] = (char *(*)()) F691_3289_2594_1;
}
static EIF_REFERENCE F648_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F648_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F651_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F651_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F652_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64* r = F652_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {734,694,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 734, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F654_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F654_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F655_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REFERENCE* r = F655_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {735,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 735, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REFERENCE* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F657_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F657_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F658_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F658_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F660_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F660_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F662_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F662_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F664_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F664_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F666_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F666_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F668_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F668_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F670_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F670_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F672_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F672_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F674_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F674_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F676_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F676_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F679_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32* r = F679_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {737,724,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 737, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F680_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN* r = F680_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {739,730,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 739, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_BOOLEAN* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F681_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32* r = F681_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {741,709,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 741, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F682_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8* r = F682_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {743,715,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 743, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F683_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32* r = F683_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {745,697,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 745, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F684_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64* r = F684_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {747,706,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 747, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F685_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8* r = F685_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {749,703,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 749, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F686_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8* r = F686_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {751,727,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 751, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F687_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16* r = F687_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {753,712,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 753, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F688_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32* r = F688_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {755,718,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 755, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F689_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16* r = F689_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {757,700,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 757, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F690_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER* r = F690_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {759,763,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 759, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_POINTER* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F691_3289_2594_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64* r = F691_3289(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {761,721,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 761, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_64* *)Result = r;
		return Result;
	}
}

char *(*R2604[45])();
void R2604_init () {
	R2604[0] = (char *(*)()) F647_3301;
	R2604[1] = (char *(*)()) F648_3301;
	R2604[2] = (char *(*)()) F649_3301;
	R2604[3] = (char *(*)()) F650_3301;
	R2604[4] = (char *(*)()) F651_3301;
	R2604[5] = (char *(*)()) F652_3301;
	R2604[6] = (char *(*)()) F653_3301;
	R2604[7] = (char *(*)()) F654_3301;
	R2604[8] = (char *(*)()) F655_3301;
	R2604[9] = (char *(*)()) F656_3301;
	R2604[10] = (char *(*)()) F657_3301;
	R2604[11] = (char *(*)()) F658_3301;
	R2604[12] = (char *(*)()) F659_3301;
	R2604[13] = (char *(*)()) F660_3301;
	R2604[14] = (char *(*)()) F661_3301;
	R2604[15] = (char *(*)()) F662_3301;
	R2604[16] = (char *(*)()) F663_3301;
	R2604[17] = (char *(*)()) F664_3301;
	R2604[18] = (char *(*)()) F665_3301;
	R2604[19] = (char *(*)()) F666_3301;
	R2604[20] = (char *(*)()) F667_3301;
	R2604[21] = (char *(*)()) F668_3301;
	R2604[22] = (char *(*)()) F669_3301;
	R2604[23] = (char *(*)()) F670_3301;
	R2604[24] = (char *(*)()) F671_3301;
	R2604[25] = (char *(*)()) F672_3301;
	R2604[26] = (char *(*)()) F673_3301;
	R2604[27] = (char *(*)()) F674_3301;
	R2604[28] = (char *(*)()) F675_3301;
	R2604[29] = (char *(*)()) F676_3301;
	R2604[30] = (char *(*)()) F677_3301;
	R2604[31] = (char *(*)()) F678_3301;
	R2604[32] = (char *(*)()) F679_3301;
	R2604[33] = (char *(*)()) F680_3301;
	R2604[34] = (char *(*)()) F681_3301;
	R2604[35] = (char *(*)()) F682_3301;
	R2604[36] = (char *(*)()) F683_3301;
	R2604[37] = (char *(*)()) F684_3301;
	R2604[38] = (char *(*)()) F685_3301;
	R2604[39] = (char *(*)()) F686_3301;
	R2604[40] = (char *(*)()) F687_3301;
	R2604[41] = (char *(*)()) F688_3301;
	R2604[42] = (char *(*)()) F689_3301;
	R2604[43] = (char *(*)()) F690_3301;
	R2604[44] = (char *(*)()) F691_3301;
}

char *(*R2743[3])();
void R2743_init () {
	R2743[0] = (char *(*)()) F693_3460;
	R2743[1] = (char *(*)()) F694_3506;
	R2743[2] = (char *(*)()) F695_3506;
}

char *(*R2744[3])();
void R2744_init () {
	R2744[0] = (char *(*)()) F693_3461;
	R2744[1] = (char *(*)()) F694_3507;
	R2744[2] = (char *(*)()) F695_3507;
}

char *(*R2745[3])();
void R2745_init () {
	R2745[0] = (char *(*)()) F693_3462;
	R2745[1] = (char *(*)()) F694_3508;
	R2745[2] = (char *(*)()) F695_3508;
}

char *(*R2746[3])();
void R2746_init () {
	R2746[0] = (char *(*)()) F693_3463;
	R2746[1] = (char *(*)()) F694_3509;
	R2746[2] = (char *(*)()) F695_3509;
}

char *(*R2747[3])();
void R2747_init () {
	R2747[0] = (char *(*)()) F693_3464;
	R2747[1] = (char *(*)()) F694_3510;
	R2747[2] = (char *(*)()) F695_3510;
}

char *(*R2748[3])();
void R2748_init () {
	R2748[0] = (char *(*)()) F693_3465;
	R2748[1] = (char *(*)()) F694_3511;
	R2748[2] = (char *(*)()) F695_3511;
}

char *(*R2749[3])();
void R2749_init () {
	R2749[0] = (char *(*)()) F693_3466;
	R2749[1] = (char *(*)()) F694_3512;
	R2749[2] = (char *(*)()) F695_3512;
}

char *(*R2772[3])();
void R2772_init () {
	R2772[0] = (char *(*)()) F693_3489;
	R2772[1] = (char *(*)()) F694_3522_2772_33;
	R2772[2] = (char *(*)()) F695_3522_2772_33;
}
static EIF_REFERENCE F694_3522_2772_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F694_3522(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_3522_2772_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F695_3522(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}

char *(*R2773[3])();
void R2773_init () {
	R2773[0] = (char *(*)()) F693_3490;
	R2773[1] = (char *(*)()) F694_3523_2773_33;
	R2773[2] = (char *(*)()) F695_3523_2773_33;
}
static EIF_REFERENCE F694_3523_2773_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F694_3523(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_3523_2773_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F695_3523(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}

char *(*R2795[3])();
void R2795_init () {
	R2795[0] = (char *(*)()) F696_3555;
	R2795[1] = (char *(*)()) F697_3601;
	R2795[2] = (char *(*)()) F698_3601;
}

char *(*R2796[3])();
void R2796_init () {
	R2796[0] = (char *(*)()) F696_3556;
	R2796[1] = (char *(*)()) F697_3602;
	R2796[2] = (char *(*)()) F698_3602;
}

char *(*R2797[3])();
void R2797_init () {
	R2797[0] = (char *(*)()) F696_3557;
	R2797[1] = (char *(*)()) F697_3603;
	R2797[2] = (char *(*)()) F698_3603;
}

char *(*R2798[3])();
void R2798_init () {
	R2798[0] = (char *(*)()) F696_3558;
	R2798[1] = (char *(*)()) F697_3604;
	R2798[2] = (char *(*)()) F698_3604;
}

char *(*R2799[3])();
void R2799_init () {
	R2799[0] = (char *(*)()) F696_3559;
	R2799[1] = (char *(*)()) F697_3605;
	R2799[2] = (char *(*)()) F698_3605;
}

char *(*R2800[3])();
void R2800_init () {
	R2800[0] = (char *(*)()) F696_3560;
	R2800[1] = (char *(*)()) F697_3606;
	R2800[2] = (char *(*)()) F698_3606;
}

char *(*R2802[3])();
void R2802_init () {
	R2802[0] = (char *(*)()) F696_3562;
	R2802[1] = (char *(*)()) F697_3608;
	R2802[2] = (char *(*)()) F698_3608;
}

char *(*R2824[3])();
void R2824_init () {
	R2824[0] = (char *(*)()) F696_3584;
	R2824[1] = (char *(*)()) F697_3617_2824_33;
	R2824[2] = (char *(*)()) F698_3617_2824_33;
}
static EIF_REFERENCE F697_3617_2824_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F697_3617(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F698_3617_2824_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F698_3617(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2825[3])();
void R2825_init () {
	R2825[0] = (char *(*)()) F696_3585;
	R2825[1] = (char *(*)()) F697_3618_2825_33;
	R2825[2] = (char *(*)()) F698_3618_2825_33;
}
static EIF_REFERENCE F697_3618_2825_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F697_3618(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F698_3618_2825_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F698_3618(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R2847[3])();
void R2847_init () {
	R2847[0] = (char *(*)()) F699_3650;
	R2847[1] = (char *(*)()) F700_3696;
	R2847[2] = (char *(*)()) F701_3696;
}

char *(*R2848[3])();
void R2848_init () {
	R2848[0] = (char *(*)()) F699_3651;
	R2848[1] = (char *(*)()) F700_3697;
	R2848[2] = (char *(*)()) F701_3697;
}

char *(*R2849[3])();
void R2849_init () {
	R2849[0] = (char *(*)()) F699_3652;
	R2849[1] = (char *(*)()) F700_3698;
	R2849[2] = (char *(*)()) F701_3698;
}

char *(*R2850[3])();
void R2850_init () {
	R2850[0] = (char *(*)()) F699_3653;
	R2850[1] = (char *(*)()) F700_3699;
	R2850[2] = (char *(*)()) F701_3699;
}

char *(*R2851[3])();
void R2851_init () {
	R2851[0] = (char *(*)()) F699_3654;
	R2851[1] = (char *(*)()) F700_3700;
	R2851[2] = (char *(*)()) F701_3700;
}

char *(*R2853[3])();
void R2853_init () {
	R2853[0] = (char *(*)()) F699_3656;
	R2853[1] = (char *(*)()) F700_3702;
	R2853[2] = (char *(*)()) F701_3702;
}

char *(*R2854[3])();
void R2854_init () {
	R2854[0] = (char *(*)()) F699_3657;
	R2854[1] = (char *(*)()) F700_3703;
	R2854[2] = (char *(*)()) F701_3703;
}

char *(*R2876[3])();
void R2876_init () {
	R2876[0] = (char *(*)()) F699_3679;
	R2876[1] = (char *(*)()) F700_3712_2876_33;
	R2876[2] = (char *(*)()) F701_3712_2876_33;
}
static EIF_REFERENCE F700_3712_2876_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F700_3712(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F701_3712_2876_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F701_3712(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}

char *(*R2877[3])();
void R2877_init () {
	R2877[0] = (char *(*)()) F699_3680;
	R2877[1] = (char *(*)()) F700_3713_2877_33;
	R2877[2] = (char *(*)()) F701_3713_2877_33;
}
static EIF_REFERENCE F700_3713_2877_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F700_3713(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F701_3713_2877_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F701_3713(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}

char *(*R2899[3])();
void R2899_init () {
	R2899[0] = (char *(*)()) F702_3745;
	R2899[1] = (char *(*)()) F703_3791;
	R2899[2] = (char *(*)()) F704_3791;
}

char *(*R2900[3])();
void R2900_init () {
	R2900[0] = (char *(*)()) F702_3746;
	R2900[1] = (char *(*)()) F703_3792;
	R2900[2] = (char *(*)()) F704_3792;
}

char *(*R2901[3])();
void R2901_init () {
	R2901[0] = (char *(*)()) F702_3747;
	R2901[1] = (char *(*)()) F703_3793;
	R2901[2] = (char *(*)()) F704_3793;
}

char *(*R2902[3])();
void R2902_init () {
	R2902[0] = (char *(*)()) F702_3748;
	R2902[1] = (char *(*)()) F703_3794;
	R2902[2] = (char *(*)()) F704_3794;
}

char *(*R2904[3])();
void R2904_init () {
	R2904[0] = (char *(*)()) F702_3750;
	R2904[1] = (char *(*)()) F703_3796;
	R2904[2] = (char *(*)()) F704_3796;
}

char *(*R2905[3])();
void R2905_init () {
	R2905[0] = (char *(*)()) F702_3751;
	R2905[1] = (char *(*)()) F703_3797;
	R2905[2] = (char *(*)()) F704_3797;
}

char *(*R2906[3])();
void R2906_init () {
	R2906[0] = (char *(*)()) F702_3752;
	R2906[1] = (char *(*)()) F703_3798;
	R2906[2] = (char *(*)()) F704_3798;
}

char *(*R2928[3])();
void R2928_init () {
	R2928[0] = (char *(*)()) F702_3774;
	R2928[1] = (char *(*)()) F703_3807_2928_33;
	R2928[2] = (char *(*)()) F704_3807_2928_33;
}
static EIF_REFERENCE F703_3807_2928_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F703_3807(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F704_3807_2928_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F704_3807(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}

char *(*R2929[3])();
void R2929_init () {
	R2929[0] = (char *(*)()) F702_3775;
	R2929[1] = (char *(*)()) F703_3808_2929_33;
	R2929[2] = (char *(*)()) F704_3808_2929_33;
}
static EIF_REFERENCE F703_3808_2929_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F703_3808(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F704_3808_2929_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F704_3808(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}

char *(*R2949[3])();
void R2949_init () {
	R2949[0] = (char *(*)()) F705_3838;
	R2949[1] = (char *(*)()) F706_3881;
	R2949[2] = (char *(*)()) F707_3881;
}

char *(*R2950[3])();
void R2950_init () {
	R2950[0] = (char *(*)()) F705_3839;
	R2950[1] = (char *(*)()) F706_3882;
	R2950[2] = (char *(*)()) F707_3882;
}

char *(*R2951[3])();
void R2951_init () {
	R2951[0] = (char *(*)()) F705_3840;
	R2951[1] = (char *(*)()) F706_3883;
	R2951[2] = (char *(*)()) F707_3883;
}

char *(*R2953[3])();
void R2953_init () {
	R2953[0] = (char *(*)()) F705_3842;
	R2953[1] = (char *(*)()) F706_3885;
	R2953[2] = (char *(*)()) F707_3885;
}

char *(*R2954[3])();
void R2954_init () {
	R2954[0] = (char *(*)()) F705_3843;
	R2954[1] = (char *(*)()) F706_3886;
	R2954[2] = (char *(*)()) F707_3886;
}

char *(*R2955[3])();
void R2955_init () {
	R2955[0] = (char *(*)()) F705_3844;
	R2955[1] = (char *(*)()) F706_3887;
	R2955[2] = (char *(*)()) F707_3887;
}

char *(*R2956[3])();
void R2956_init () {
	R2956[0] = (char *(*)()) F705_3845;
	R2956[1] = (char *(*)()) F706_3888;
	R2956[2] = (char *(*)()) F707_3888;
}

char *(*R2977[3])();
void R2977_init () {
	R2977[0] = (char *(*)()) F705_3866;
	R2977[1] = (char *(*)()) F706_3897_2977_33;
	R2977[2] = (char *(*)()) F707_3897_2977_33;
}
static EIF_REFERENCE F706_3897_2977_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F706_3897(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F707_3897_2977_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F707_3897(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}

char *(*R2978[3])();
void R2978_init () {
	R2978[0] = (char *(*)()) F705_3867;
	R2978[1] = (char *(*)()) F706_3898_2978_33;
	R2978[2] = (char *(*)()) F707_3898_2978_33;
}
static EIF_REFERENCE F706_3898_2978_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F706_3898(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F707_3898_2978_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F707_3898(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}

char *(*R2997[3])();
void R2997_init () {
	R2997[0] = (char *(*)()) F708_3928;
	R2997[1] = (char *(*)()) F709_3971;
	R2997[2] = (char *(*)()) F710_3971;
}

char *(*R2998[3])();
void R2998_init () {
	R2998[0] = (char *(*)()) F708_3929;
	R2998[1] = (char *(*)()) F709_3972;
	R2998[2] = (char *(*)()) F710_3972;
}

char *(*R3000[3])();
void R3000_init () {
	R3000[0] = (char *(*)()) F708_3931;
	R3000[1] = (char *(*)()) F709_3974;
	R3000[2] = (char *(*)()) F710_3974;
}

char *(*R3001[3])();
void R3001_init () {
	R3001[0] = (char *(*)()) F708_3932;
	R3001[1] = (char *(*)()) F709_3975;
	R3001[2] = (char *(*)()) F710_3975;
}

char *(*R3002[3])();
void R3002_init () {
	R3002[0] = (char *(*)()) F708_3933;
	R3002[1] = (char *(*)()) F709_3976;
	R3002[2] = (char *(*)()) F710_3976;
}

char *(*R3003[3])();
void R3003_init () {
	R3003[0] = (char *(*)()) F708_3934;
	R3003[1] = (char *(*)()) F709_3977;
	R3003[2] = (char *(*)()) F710_3977;
}

char *(*R3004[3])();
void R3004_init () {
	R3004[0] = (char *(*)()) F708_3935;
	R3004[1] = (char *(*)()) F709_3978;
	R3004[2] = (char *(*)()) F710_3978;
}

char *(*R3025[3])();
void R3025_init () {
	R3025[0] = (char *(*)()) F708_3956;
	R3025[1] = (char *(*)()) F709_3987_3025_33;
	R3025[2] = (char *(*)()) F710_3987_3025_33;
}
static EIF_REFERENCE F709_3987_3025_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F709_3987(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F710_3987_3025_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F710_3987(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R3026[3])();
void R3026_init () {
	R3026[0] = (char *(*)()) F708_3957;
	R3026[1] = (char *(*)()) F709_3988_3026_33;
	R3026[2] = (char *(*)()) F710_3988_3026_33;
}
static EIF_REFERENCE F709_3988_3026_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F709_3988(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F710_3988_3026_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F710_3988(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R3046[3])();
void R3046_init () {
	R3046[0] = (char *(*)()) F711_4019;
	R3046[1] = (char *(*)()) F712_4062;
	R3046[2] = (char *(*)()) F713_4062;
}

char *(*R3048[3])();
void R3048_init () {
	R3048[0] = (char *(*)()) F711_4021;
	R3048[1] = (char *(*)()) F712_4064;
	R3048[2] = (char *(*)()) F713_4064;
}

char *(*R3049[3])();
void R3049_init () {
	R3049[0] = (char *(*)()) F711_4022;
	R3049[1] = (char *(*)()) F712_4065;
	R3049[2] = (char *(*)()) F713_4065;
}

char *(*R3050[3])();
void R3050_init () {
	R3050[0] = (char *(*)()) F711_4023;
	R3050[1] = (char *(*)()) F712_4066;
	R3050[2] = (char *(*)()) F713_4066;
}

char *(*R3051[3])();
void R3051_init () {
	R3051[0] = (char *(*)()) F711_4024;
	R3051[1] = (char *(*)()) F712_4067;
	R3051[2] = (char *(*)()) F713_4067;
}

char *(*R3052[3])();
void R3052_init () {
	R3052[0] = (char *(*)()) F711_4025;
	R3052[1] = (char *(*)()) F712_4068;
	R3052[2] = (char *(*)()) F713_4068;
}

char *(*R3053[3])();
void R3053_init () {
	R3053[0] = (char *(*)()) F711_4026;
	R3053[1] = (char *(*)()) F712_4069;
	R3053[2] = (char *(*)()) F713_4069;
}

char *(*R3074[3])();
void R3074_init () {
	R3074[0] = (char *(*)()) F711_4047;
	R3074[1] = (char *(*)()) F712_4078_3074_33;
	R3074[2] = (char *(*)()) F713_4078_3074_33;
}
static EIF_REFERENCE F712_4078_3074_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F712_4078(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F713_4078_3074_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F713_4078(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}

char *(*R3075[3])();
void R3075_init () {
	R3075[0] = (char *(*)()) F711_4048;
	R3075[1] = (char *(*)()) F712_4079_3075_33;
	R3075[2] = (char *(*)()) F713_4079_3075_33;
}
static EIF_REFERENCE F712_4079_3075_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F712_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F713_4079_3075_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F713_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}

char *(*R3096[3])();
void R3096_init () {
	R3096[0] = (char *(*)()) F714_4111;
	R3096[1] = (char *(*)()) F715_4154;
	R3096[2] = (char *(*)()) F716_4154;
}

char *(*R3097[3])();
void R3097_init () {
	R3097[0] = (char *(*)()) F714_4112;
	R3097[1] = (char *(*)()) F715_4155;
	R3097[2] = (char *(*)()) F716_4155;
}

char *(*R3098[3])();
void R3098_init () {
	R3098[0] = (char *(*)()) F714_4113;
	R3098[1] = (char *(*)()) F715_4156;
	R3098[2] = (char *(*)()) F716_4156;
}

char *(*R3099[3])();
void R3099_init () {
	R3099[0] = (char *(*)()) F714_4114;
	R3099[1] = (char *(*)()) F715_4157;
	R3099[2] = (char *(*)()) F716_4157;
}

char *(*R3100[3])();
void R3100_init () {
	R3100[0] = (char *(*)()) F714_4115;
	R3100[1] = (char *(*)()) F715_4158;
	R3100[2] = (char *(*)()) F716_4158;
}

char *(*R3101[3])();
void R3101_init () {
	R3101[0] = (char *(*)()) F714_4116;
	R3101[1] = (char *(*)()) F715_4159;
	R3101[2] = (char *(*)()) F716_4159;
}

char *(*R3102[3])();
void R3102_init () {
	R3102[0] = (char *(*)()) F714_4117;
	R3102[1] = (char *(*)()) F715_4160;
	R3102[2] = (char *(*)()) F716_4160;
}

char *(*R3123[3])();
void R3123_init () {
	R3123[0] = (char *(*)()) F714_4138;
	R3123[1] = (char *(*)()) F715_4169_3123_33;
	R3123[2] = (char *(*)()) F716_4169_3123_33;
}
static EIF_REFERENCE F715_4169_3123_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F715_4169(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F716_4169_3123_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F716_4169(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}

char *(*R3124[3])();
void R3124_init () {
	R3124[0] = (char *(*)()) F714_4139;
	R3124[1] = (char *(*)()) F715_4170_3124_33;
	R3124[2] = (char *(*)()) F716_4170_3124_33;
}
static EIF_REFERENCE F715_4170_3124_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F715_4170(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F716_4170_3124_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F716_4170(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}

char *(*R3143[3])();
void R3143_init () {
	R3143[0] = (char *(*)()) F717_4194;
	R3143[1] = (char *(*)()) F718_4217;
	R3143[2] = (char *(*)()) F719_4217;
}

char *(*R3149[3])();
void R3149_init () {
	R3149[0] = (char *(*)()) F717_4200;
	R3149[1] = (char *(*)()) F718_4220;
	R3149[2] = (char *(*)()) F719_4220;
}

char *(*R3150[3])();
void R3150_init () {
	R3150[0] = (char *(*)()) F717_4201;
	R3150[1] = (char *(*)()) F718_4221;
	R3150[2] = (char *(*)()) F719_4221;
}

char *(*R3177[3])();
void R3177_init () {
	R3177[0] = (char *(*)()) F720_4260;
	R3177[1] = (char *(*)()) F721_4283;
	R3177[2] = (char *(*)()) F722_4283;
}

char *(*R3183[3])();
void R3183_init () {
	R3183[0] = (char *(*)()) F720_4266;
	R3183[1] = (char *(*)()) F721_4286;
	R3183[2] = (char *(*)()) F722_4286;
}

char *(*R3184[3])();
void R3184_init () {
	R3184[0] = (char *(*)()) F720_4267;
	R3184[1] = (char *(*)()) F721_4287;
	R3184[2] = (char *(*)()) F722_4287;
}

char *(*R3198[3])();
void R3198_init () {
	R3198[0] = (char *(*)()) F723_4306;
	R3198[1] = (char *(*)()) F724_4340;
	R3198[2] = (char *(*)()) F725_4340;
}

char *(*R3274[3])();
void R3274_init () {
	R3274[0] = (char *(*)()) F729_4395;
	R3274[1] = (char *(*)()) F730_4403_3274_2;
	R3274[2] = (char *(*)()) F731_4403_3274_2;
}
static EIF_BOOLEAN F730_4403_3274_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F730_4403(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F731_4403_3274_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F731_4403(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R3275[3])();
void R3275_init () {
	R3275[0] = (char *(*)()) F729_4396;
	R3275[1] = (char *(*)()) F730_4404_3275_2;
	R3275[2] = (char *(*)()) F731_4404_3275_2;
}
static EIF_BOOLEAN F730_4404_3275_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F730_4404(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F731_4404_3275_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F731_4404(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R3277[3])();
void R3277_init () {
	R3277[0] = (char *(*)()) F729_4398;
	R3277[1] = (char *(*)()) F730_4406;
	R3277[2] = (char *(*)()) F731_4406;
}

char *(*R3278[3])();
void R3278_init () {
	R3278[0] = (char *(*)()) F729_4399;
	R3278[1] = (char *(*)()) F730_4407_3278_2;
	R3278[2] = (char *(*)()) F731_4407_3278_2;
}
static EIF_BOOLEAN F730_4407_3278_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F730_4407(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F731_4407_3278_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F731_4407(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R3279[3])();
void R3279_init () {
	R3279[0] = (char *(*)()) F729_4400;
	R3279[1] = (char *(*)()) F730_4408_3279_2;
	R3279[2] = (char *(*)()) F731_4408_3279_2;
}
static EIF_BOOLEAN F730_4408_3279_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F730_4408(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F731_4408_3279_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F731_4408(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R3318[4])();
void R3318_init () {
	R3318[0] = (char *(*)()) F766_4482;
	R3318[1] = (char *(*)()) F767_4485;
	{long i; for (i = 2; i < 4; i++) R3318[i] = (char *(*)()) F768_4485;}
}

char *(*R3342[3])();
void R3342_init () {
	R3342[0] = (char *(*)()) F767_4484;
	{long i; for (i = 1; i < 3; i++) R3342[i] = (char *(*)()) F768_4484_3342_1;}
}
static EIF_REFERENCE F768_4484_3342_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F768_4484(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

char *(*R3343[3])();
void R3343_init () {
	R3343[0] = (char *(*)()) F767_4486;
	{long i; for (i = 1; i < 3; i++) R3343[i] = (char *(*)()) F768_4486_3343_5;}
}
static EIF_REFERENCE F768_4486_3343_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F768_4486(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

char *(*R3347[3])();
void R3347_init () {
	R3347[0] = (char *(*)()) F767_4493;
	{long i; for (i = 1; i < 3; i++) R3347[i] = (char *(*)()) F768_4493_3347_449;}
}
static EIF_REFERENCE F768_4493_3347_449 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F768_4493(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

static EIF_TYPE_INDEX Y3348_pgtype0[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y3348_pgtype1[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y3348_pgtype2[] = {730,0xFFFF};
EIF_TYPE_INDEX *Y3348_gen_type [3];
EIF_TYPE_INDEX Y3348 [3];
void Y3348_init (void)
{
	egc_routines_types [3348] = Y3348;
	egc_routines_gen_types [3348] = Y3348_gen_type;
	egc_routines_offset [3348] = 766;
	Y3348_gen_type [0] = Y3348_pgtype0;
	Y3348_gen_type [1] = Y3348_pgtype1;
	Y3348_gen_type [2] = Y3348_pgtype2;
	Y3348[2] = 730;
}

char *(*R3349[5])();
void R3349_init () {
	{long i; for (i = 0; i < 2; i++) R3349[i] = (char *(*)()) F773_4625;}
	{long i; for (i = 3; i < 5; i++) R3349[i] = (char *(*)()) F776_4789;}
}

char *(*R3351[5])();
void R3351_init () {
	R3351[0] = (char *(*)()) F774_4684;
	R3351[1] = (char *(*)()) F775_4706;
	R3351[3] = (char *(*)()) F777_4847;
	R3351[4] = (char *(*)()) F778_4868;
}

char *(*R3352[5])();
void R3352_init () {
	R3352[0] = (char *(*)()) F774_4682;
	R3352[1] = (char *(*)()) F775_4704;
	R3352[3] = (char *(*)()) F777_4846;
	R3352[4] = (char *(*)()) F778_4867;
}

char *(*R3353[5])();
void R3353_init () {
	{long i; for (i = 0; i < 2; i++) R3353[i] = (char *(*)()) F773_4636;}
	{long i; for (i = 3; i < 5; i++) R3353[i] = (char *(*)()) F770_4498;}
}

char *(*R3362[5])();
void R3362_init () {
	{long i; for (i = 0; i < 2; i++) R3362[i] = (char *(*)()) F773_4661;}
	{long i; for (i = 3; i < 5; i++) R3362[i] = (char *(*)()) F776_4826;}
}

char *(*R3363[5])();
void R3363_init () {
	{long i; for (i = 0; i < 2; i++) R3363[i] = (char *(*)()) F773_4654;}
	{long i; for (i = 3; i < 5; i++) R3363[i] = (char *(*)()) F776_4819;}
}

char *(*R3365[5])();
void R3365_init () {
	{long i; for (i = 0; i < 2; i++) R3365[i] = (char *(*)()) F773_4656;}
	{long i; for (i = 3; i < 5; i++) R3365[i] = (char *(*)()) F776_4821;}
}

char *(*R3366[5])();
void R3366_init () {
	R3366[0] = (char *(*)()) F774_4693;
	R3366[1] = (char *(*)()) F345_2122;
	R3366[3] = (char *(*)()) F777_4855;
	R3366[4] = (char *(*)()) F346_2122;
}

char *(*R3368[5])();
void R3368_init () {
	{long i; for (i = 0; i < 2; i++) R3368[i] = (char *(*)()) F773_4657;}
	{long i; for (i = 3; i < 5; i++) R3368[i] = (char *(*)()) F776_4822;}
}

char *(*R3369[5])();
void R3369_init () {
	{long i; for (i = 0; i < 2; i++) R3369[i] = (char *(*)()) F773_4658;}
	{long i; for (i = 3; i < 5; i++) R3369[i] = (char *(*)()) F770_4515;}
}

char *(*R3377[5])();
void R3377_init () {
	{long i; for (i = 0; i < 2; i++) R3377[i] = (char *(*)()) F773_4662;}
	{long i; for (i = 3; i < 5; i++) R3377[i] = (char *(*)()) F776_4827;}
}

char *(*R3388[5])();
void R3388_init () {
	{long i; for (i = 0; i < 2; i++) R3388[i] = (char *(*)()) F773_4645;}
	{long i; for (i = 3; i < 5; i++) R3388[i] = (char *(*)()) F776_4810;}
}

char *(*R3389[5])();
void R3389_init () {
	{long i; for (i = 0; i < 2; i++) R3389[i] = (char *(*)()) F773_4644;}
	{long i; for (i = 3; i < 5; i++) R3389[i] = (char *(*)()) F776_4809;}
}

char *(*R3390[5])();
void R3390_init () {
	{long i; for (i = 0; i < 2; i++) R3390[i] = (char *(*)()) F773_4646;}
	{long i; for (i = 3; i < 5; i++) R3390[i] = (char *(*)()) F770_4536;}
}

char *(*R3399[5])();
void R3399_init () {
	{long i; for (i = 0; i < 2; i++) R3399[i] = (char *(*)()) F773_4641;}
	{long i; for (i = 3; i < 5; i++) R3399[i] = (char *(*)()) F776_4806;}
}

char *(*R3410[5])();
void R3410_init () {
	R3410[0] = (char *(*)()) F774_4688;
	R3410[1] = (char *(*)()) F775_4772;
	R3410[3] = (char *(*)()) F777_4851;
	R3410[4] = (char *(*)()) F778_4934;
}

char *(*R3428[5])();
void R3428_init () {
	R3428[0] = (char *(*)()) F774_4686;
	R3428[1] = (char *(*)()) F775_4740;
	R3428[3] = (char *(*)()) F777_4849;
	R3428[4] = (char *(*)()) F778_4902;
}

char *(*R3429[5])();
void R3429_init () {
	R3429[0] = (char *(*)()) F774_4690;
	R3429[1] = (char *(*)()) F775_4784;
	R3429[3] = (char *(*)()) F777_4853;
	R3429[4] = (char *(*)()) F778_4946;
}

char *(*R3433[5])();
void R3433_init () {
	R3433[0] = (char *(*)()) F774_4694;
	R3433[1] = (char *(*)()) F775_4787;
	R3433[3] = (char *(*)()) F777_4857;
	R3433[4] = (char *(*)()) F778_4950;
}

char *(*R3444[4])();
void R3444_init () {
	R3444[0] = (char *(*)()) F775_4786;
	R3444[3] = (char *(*)()) F778_4948;
}

char *(*R3447[4])();
void R3447_init () {
	R3447[0] = (char *(*)()) F775_4726;
	R3447[3] = (char *(*)()) F778_4888;
}

char *(*R3469[4])();
void R3469_init () {
	R3469[0] = (char *(*)()) F775_4722;
	R3469[3] = (char *(*)()) F778_4884;
}

char *(*R3470[4])();
void R3470_init () {
	R3470[0] = (char *(*)()) F775_4723;
	R3470[3] = (char *(*)()) F778_4885;
}

char *(*R3477[4])();
void R3477_init () {
	R3477[0] = (char *(*)()) F775_4769;
	R3477[3] = (char *(*)()) F778_4931;
}

char *(*R3503[2])();
void R3503_init () {
	R3503[0] = (char *(*)()) F774_4696;
	R3503[1] = (char *(*)()) F773_4674;
}

char *(*R3581[2])();
void R3581_init () {
	R3581[0] = (char *(*)()) F777_4859;
	R3581[1] = (char *(*)()) F776_4839;
}
char *(*R2[788])();
void R2_init () {}
char *(*R6[788])();
void R6_init () {}

char *(*R3[788])();
void R3_init () {
	R3[108] = (char *(*)()) F109_1196;
	R3[163] = (char *(*)()) F164_1913;
	{long i; for (i = 470; i < 472; i++) R3[i] = (char *(*)()) F112_1265;}
	R3[778] = (char *(*)()) F779_4958;
}

char *(*R4[788])();
void R4_init () {
	R4[0] = (char *(*)()) F1_15;
	{long i; for (i = 2; i < 24; i++) R4[i] = (char *(*)()) F1_15;}
	R4[25] = (char *(*)()) F1_15;
	R4[27] = (char *(*)()) F1_15;
	{long i; for (i = 29; i < 46; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 47; i < 49; i++) R4[i] = (char *(*)()) F1_15;}
	R4[52] = (char *(*)()) F1_15;
	R4[55] = (char *(*)()) F1_15;
	{long i; for (i = 58; i < 62; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 63; i < 70; i++) R4[i] = (char *(*)()) F1_15;}
	R4[72] = (char *(*)()) F1_15;
	{long i; for (i = 74; i < 77; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 78; i < 80; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 82; i < 84; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 85; i < 88; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 89; i < 93; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 94; i < 96; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 97; i < 100; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 101; i < 107; i++) R4[i] = (char *(*)()) F1_15;}
	R4[108] = (char *(*)()) F109_1115;
	{long i; for (i = 109; i < 111; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 112; i < 117; i++) R4[i] = (char *(*)()) F1_15;}
	R4[118] = (char *(*)()) F1_15;
	{long i; for (i = 120; i < 123; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 125; i < 129; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 130; i < 132; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 133; i < 148; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 148; i < 150; i++) R4[i] = (char *(*)()) F149_1880;}
	{long i; for (i = 162; i < 164; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 180; i < 182; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 210; i < 228; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 240; i < 280; i++) R4[i] = (char *(*)()) F1_15;}
	R4[444] = (char *(*)()) F1_15;
	{long i; for (i = 470; i < 472; i++) R4[i] = (char *(*)()) F1_15;}
	R4[496] = (char *(*)()) F497_2564;
	R4[497] = (char *(*)()) F498_2629;
	R4[498] = (char *(*)()) F499_2629;
	R4[499] = (char *(*)()) F500_2629;
	R4[500] = (char *(*)()) F501_2629;
	R4[501] = (char *(*)()) F502_2629;
	R4[502] = (char *(*)()) F503_2629;
	R4[503] = (char *(*)()) F504_2629;
	R4[504] = (char *(*)()) F505_2629;
	R4[505] = (char *(*)()) F506_2629;
	R4[506] = (char *(*)()) F507_2629;
	R4[507] = (char *(*)()) F508_2629;
	R4[508] = (char *(*)()) F509_2629;
	R4[557] = (char *(*)()) F558_2731;
	R4[558] = (char *(*)()) F559_2731;
	R4[559] = (char *(*)()) F1_15;
	R4[560] = (char *(*)()) F561_2759;
	R4[561] = (char *(*)()) F562_2825;
	R4[562] = (char *(*)()) F563_2825;
	R4[563] = (char *(*)()) F564_2825;
	R4[564] = (char *(*)()) F565_2825;
	R4[565] = (char *(*)()) F566_2825;
	R4[566] = (char *(*)()) F567_2825;
	R4[567] = (char *(*)()) F568_2825;
	R4[568] = (char *(*)()) F569_2825;
	R4[569] = (char *(*)()) F570_2825;
	R4[570] = (char *(*)()) F571_2825;
	R4[571] = (char *(*)()) F572_2825;
	R4[572] = (char *(*)()) F573_2825;
	R4[573] = (char *(*)()) F1_15;
	R4[574] = (char *(*)()) F575_2916;
	R4[575] = (char *(*)()) F576_2916;
	R4[576] = (char *(*)()) F577_2916;
	R4[577] = (char *(*)()) F578_2916;
	R4[578] = (char *(*)()) F575_2916;
	R4[579] = (char *(*)()) F576_2916;
	R4[580] = (char *(*)()) F575_2916;
	{long i; for (i = 582; i < 584; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 585; i < 597; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 598; i < 643; i++) R4[i] = (char *(*)()) F1_15;}
	R4[645] = (char *(*)()) F646_3248;
	{long i; for (i = 646; i < 764; i++) R4[i] = (char *(*)()) F1_15;}
	R4[765] = (char *(*)()) F765_4457;
	R4[766] = (char *(*)()) F767_4489;
	{long i; for (i = 767; i < 769; i++) R4[i] = (char *(*)()) F768_4489;}
	R4[773] = (char *(*)()) F774_4681;
	R4[774] = (char *(*)()) F773_4663;
	R4[776] = (char *(*)()) F777_4843;
	R4[777] = (char *(*)()) F776_4828;
	{long i; for (i = 778; i < 786; i++) R4[i] = (char *(*)()) F1_15;}
	R4[786] = (char *(*)()) F787_5148;
	R4[787] = (char *(*)()) F1_15;
}

char *(*R5[788])();
void R5_init () {
	R5[0] = (char *(*)()) F1_8;
	{long i; for (i = 2; i < 24; i++) R5[i] = (char *(*)()) F1_8;}
	R5[25] = (char *(*)()) F1_8;
	R5[27] = (char *(*)()) F1_8;
	{long i; for (i = 29; i < 46; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 47; i < 49; i++) R5[i] = (char *(*)()) F1_8;}
	R5[52] = (char *(*)()) F1_8;
	R5[55] = (char *(*)()) F1_8;
	{long i; for (i = 58; i < 62; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 63; i < 70; i++) R5[i] = (char *(*)()) F1_8;}
	R5[72] = (char *(*)()) F1_8;
	{long i; for (i = 74; i < 77; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 78; i < 80; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 82; i < 84; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 85; i < 88; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 89; i < 93; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 94; i < 96; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 97; i < 100; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 101; i < 107; i++) R5[i] = (char *(*)()) F1_8;}
	R5[108] = (char *(*)()) F109_1114;
	{long i; for (i = 109; i < 111; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 112; i < 117; i++) R5[i] = (char *(*)()) F1_8;}
	R5[118] = (char *(*)()) F119_1335;
	R5[120] = (char *(*)()) F121_1386;
	R5[121] = (char *(*)()) F122_1408;
	R5[122] = (char *(*)()) F123_1439;
	{long i; for (i = 125; i < 127; i++) R5[i] = (char *(*)()) F1_8;}
	R5[127] = (char *(*)()) F128_1523;
	R5[128] = (char *(*)()) F1_8;
	{long i; for (i = 130; i < 132; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 133; i < 148; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 148; i < 150; i++) R5[i] = (char *(*)()) F149_1879;}
	{long i; for (i = 162; i < 164; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 180; i < 182; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 210; i < 228; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 240; i < 280; i++) R5[i] = (char *(*)()) F1_8;}
	R5[444] = (char *(*)()) F1_8;
	{long i; for (i = 470; i < 472; i++) R5[i] = (char *(*)()) F1_8;}
	R5[496] = (char *(*)()) F497_2550;
	R5[497] = (char *(*)()) F498_2591;
	R5[498] = (char *(*)()) F499_2591;
	R5[499] = (char *(*)()) F500_2591;
	R5[500] = (char *(*)()) F501_2591;
	R5[501] = (char *(*)()) F502_2591;
	R5[502] = (char *(*)()) F503_2591;
	R5[503] = (char *(*)()) F504_2591;
	R5[504] = (char *(*)()) F505_2591;
	R5[505] = (char *(*)()) F506_2591;
	R5[506] = (char *(*)()) F507_2591;
	R5[507] = (char *(*)()) F508_2591;
	R5[508] = (char *(*)()) F509_2591;
	R5[557] = (char *(*)()) F534_2680;
	R5[558] = (char *(*)()) F535_2680;
	R5[559] = (char *(*)()) F1_8;
	R5[560] = (char *(*)()) F561_2746;
	R5[561] = (char *(*)()) F562_2798;
	R5[562] = (char *(*)()) F563_2798;
	R5[563] = (char *(*)()) F564_2798;
	R5[564] = (char *(*)()) F565_2798;
	R5[565] = (char *(*)()) F566_2798;
	R5[566] = (char *(*)()) F567_2798;
	R5[567] = (char *(*)()) F568_2798;
	R5[568] = (char *(*)()) F569_2798;
	R5[569] = (char *(*)()) F570_2798;
	R5[570] = (char *(*)()) F571_2798;
	R5[571] = (char *(*)()) F572_2798;
	R5[572] = (char *(*)()) F573_2798;
	R5[573] = (char *(*)()) F1_8;
	R5[574] = (char *(*)()) F575_2881;
	R5[575] = (char *(*)()) F576_2881;
	R5[576] = (char *(*)()) F577_2881;
	R5[577] = (char *(*)()) F578_2881;
	R5[578] = (char *(*)()) F579_2976;
	R5[579] = (char *(*)()) F580_2976;
	R5[580] = (char *(*)()) F575_2881;
	{long i; for (i = 582; i < 584; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 585; i < 597; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 598; i < 643; i++) R5[i] = (char *(*)()) F1_8;}
	R5[645] = (char *(*)()) F646_3245;
	R5[646] = (char *(*)()) F647_3282;
	R5[647] = (char *(*)()) F648_3282;
	R5[648] = (char *(*)()) F649_3282;
	R5[649] = (char *(*)()) F650_3282;
	R5[650] = (char *(*)()) F651_3282;
	R5[651] = (char *(*)()) F652_3282;
	R5[652] = (char *(*)()) F653_3282;
	R5[653] = (char *(*)()) F654_3282;
	R5[654] = (char *(*)()) F655_3282;
	R5[655] = (char *(*)()) F656_3282;
	R5[656] = (char *(*)()) F657_3282;
	R5[657] = (char *(*)()) F658_3282;
	R5[658] = (char *(*)()) F659_3282;
	R5[659] = (char *(*)()) F660_3282;
	R5[660] = (char *(*)()) F661_3282;
	R5[661] = (char *(*)()) F662_3282;
	R5[662] = (char *(*)()) F663_3282;
	R5[663] = (char *(*)()) F664_3282;
	R5[664] = (char *(*)()) F665_3282;
	R5[665] = (char *(*)()) F666_3282;
	R5[666] = (char *(*)()) F667_3282;
	R5[667] = (char *(*)()) F668_3282;
	R5[668] = (char *(*)()) F669_3282;
	R5[669] = (char *(*)()) F670_3282;
	R5[670] = (char *(*)()) F671_3282;
	R5[671] = (char *(*)()) F672_3282;
	R5[672] = (char *(*)()) F673_3282;
	R5[673] = (char *(*)()) F674_3282;
	R5[674] = (char *(*)()) F675_3282;
	R5[675] = (char *(*)()) F676_3282;
	R5[676] = (char *(*)()) F677_3282;
	R5[677] = (char *(*)()) F678_3282;
	R5[678] = (char *(*)()) F679_3282;
	R5[679] = (char *(*)()) F680_3282;
	R5[680] = (char *(*)()) F681_3282;
	R5[681] = (char *(*)()) F682_3282;
	R5[682] = (char *(*)()) F683_3282;
	R5[683] = (char *(*)()) F684_3282;
	R5[684] = (char *(*)()) F685_3282;
	R5[685] = (char *(*)()) F686_3282;
	R5[686] = (char *(*)()) F687_3282;
	R5[687] = (char *(*)()) F688_3282;
	R5[688] = (char *(*)()) F689_3282;
	R5[689] = (char *(*)()) F690_3282;
	R5[690] = (char *(*)()) F691_3282;
	R5[691] = (char *(*)()) F692_3325;
	{long i; for (i = 692; i < 695; i++) R5[i] = (char *(*)()) F693_3439;}
	{long i; for (i = 695; i < 698; i++) R5[i] = (char *(*)()) F696_3533;}
	{long i; for (i = 698; i < 701; i++) R5[i] = (char *(*)()) F699_3628;}
	{long i; for (i = 701; i < 704; i++) R5[i] = (char *(*)()) F702_3723;}
	{long i; for (i = 704; i < 707; i++) R5[i] = (char *(*)()) F705_3818;}
	{long i; for (i = 707; i < 710; i++) R5[i] = (char *(*)()) F708_3908;}
	{long i; for (i = 710; i < 713; i++) R5[i] = (char *(*)()) F711_3998;}
	{long i; for (i = 713; i < 716; i++) R5[i] = (char *(*)()) F714_4089;}
	{long i; for (i = 716; i < 719; i++) R5[i] = (char *(*)()) F717_4184;}
	{long i; for (i = 719; i < 722; i++) R5[i] = (char *(*)()) F720_4250;}
	{long i; for (i = 722; i < 725; i++) R5[i] = (char *(*)()) F723_4311;}
	{long i; for (i = 725; i < 728; i++) R5[i] = (char *(*)()) F726_4350;}
	{long i; for (i = 728; i < 731; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 731; i < 764; i++) R5[i] = (char *(*)()) F732_4413;}
	R5[765] = (char *(*)()) F765_4450;
	R5[766] = (char *(*)()) F767_4488;
	{long i; for (i = 767; i < 769; i++) R5[i] = (char *(*)()) F768_4488;}
	{long i; for (i = 773; i < 775; i++) R5[i] = (char *(*)()) F773_4648;}
	{long i; for (i = 776; i < 778; i++) R5[i] = (char *(*)()) F776_4813;}
	{long i; for (i = 778; i < 782; i++) R5[i] = (char *(*)()) F1_8;}
	R5[782] = (char *(*)()) F124_1461;
	R5[783] = (char *(*)()) F1_8;
	R5[784] = (char *(*)()) F124_1461;
	R5[785] = (char *(*)()) F1_8;
	R5[786] = (char *(*)()) F787_5144;
	R5[787] = (char *(*)()) F1_8;
}


#ifdef __cplusplus
}
#endif
