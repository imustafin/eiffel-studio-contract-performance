#include "epoly3.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R2260[381])();
void R2260_init () {
	R2260[0] = (char *(*)()) F397_2750;
	R2260[1] = (char *(*)()) F401_2750;
	R2260[2] = (char *(*)()) F410_2750;
	R2260[75] = (char *(*)()) F303_2539;
	R2260[85] = (char *(*)()) F397_2750;
	R2260[86] = (char *(*)()) F398_2750;
	R2260[87] = (char *(*)()) F399_2750;
	R2260[88] = (char *(*)()) F400_2750;
	R2260[89] = (char *(*)()) F402_2750;
	R2260[90] = (char *(*)()) F401_2750;
	R2260[91] = (char *(*)()) F403_2750;
	R2260[92] = (char *(*)()) F404_2750;
	R2260[93] = (char *(*)()) F405_2750;
	R2260[94] = (char *(*)()) F406_2750;
	R2260[95] = (char *(*)()) F407_2750;
	R2260[96] = (char *(*)()) F408_2750;
	R2260[97] = (char *(*)()) F409_2750;
	R2260[98] = (char *(*)()) F410_2750;
	R2260[99] = (char *(*)()) F411_2750;
	{long i; for (i = 104; i < 106; i++) R2260[i] = (char *(*)()) F403_2750;}
	R2260[123] = (char *(*)()) F412_2762;
	R2260[380] = (char *(*)()) F403_2750;
}

char *(*R2261[381])();
void R2261_init () {
	R2261[0] = (char *(*)()) F241_2526;
	R2261[1] = (char *(*)()) F245_2526;
	R2261[2] = (char *(*)()) F255_2526;
	R2261[75] = (char *(*)()) F241_2526;
	R2261[85] = (char *(*)()) F241_2526;
	R2261[86] = (char *(*)()) F243_2526;
	R2261[87] = (char *(*)()) F244_2526;
	R2261[88] = (char *(*)()) F247_2526;
	R2261[89] = (char *(*)()) F248_2526;
	R2261[90] = (char *(*)()) F245_2526;
	R2261[91] = (char *(*)()) F242_2526;
	R2261[92] = (char *(*)()) F249_2526;
	R2261[93] = (char *(*)()) F250_2526;
	R2261[94] = (char *(*)()) F251_2526;
	R2261[95] = (char *(*)()) F252_2526;
	R2261[96] = (char *(*)()) F253_2526;
	R2261[97] = (char *(*)()) F254_2526;
	R2261[98] = (char *(*)()) F255_2526;
	R2261[99] = (char *(*)()) F246_2526;
	{long i; for (i = 104; i < 106; i++) R2261[i] = (char *(*)()) F622_4757;}
	R2261[123] = (char *(*)()) F412_2763;
	R2261[380] = (char *(*)()) F622_4757;
}

char *(*R2262[381])();
void R2262_init () {
	R2262[0] = (char *(*)()) F519_3545;
	R2262[1] = (char *(*)()) F520_3545_2262_4;
	R2262[2] = (char *(*)()) F521_3545_2262_4;
	R2262[75] = (char *(*)()) F594_3906;
	R2262[85] = (char *(*)()) F604_4117;
	R2262[86] = (char *(*)()) F605_4117_2262_4;
	R2262[87] = (char *(*)()) F606_4117_2262_4;
	R2262[88] = (char *(*)()) F607_4117_2262_4;
	R2262[89] = (char *(*)()) F608_4117_2262_4;
	R2262[90] = (char *(*)()) F609_4117_2262_4;
	R2262[91] = (char *(*)()) F610_4117_2262_4;
	R2262[92] = (char *(*)()) F611_4117_2262_4;
	R2262[93] = (char *(*)()) F612_4117_2262_4;
	R2262[94] = (char *(*)()) F613_4117_2262_4;
	R2262[95] = (char *(*)()) F614_4117_2262_4;
	R2262[96] = (char *(*)()) F615_4117_2262_4;
	R2262[97] = (char *(*)()) F616_4117_2262_4;
	R2262[98] = (char *(*)()) F617_4117_2262_4;
	R2262[99] = (char *(*)()) F618_4117_2262_4;
	{long i; for (i = 104; i < 106; i++) R2262[i] = (char *(*)()) F622_4906_2262_4;}
	R2262[123] = (char *(*)()) F412_2772_2262_4;
	R2262[380] = (char *(*)()) F622_4906_2262_4;
}
static void F520_3545_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F520_3545(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F521_3545_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F521_3545(Current, *(EIF_BOOLEAN *)arg1);
}
static void F605_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F605_4117(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F606_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F606_4117(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F607_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F607_4117(Current, *(EIF_POINTER *)arg1);
}
static void F608_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F608_4117(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F609_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F609_4117(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F610_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_4117(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F611_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F611_4117(Current, *(EIF_REAL_64 *)arg1);
}
static void F612_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F612_4117(Current, *(EIF_REAL_32 *)arg1);
}
static void F613_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F613_4117(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F614_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F614_4117(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F615_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F615_4117(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F616_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F616_4117(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F617_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F617_4117(Current, *(EIF_BOOLEAN *)arg1);
}
static void F618_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F618_4117(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F622_4906_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F622_4906(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F412_2772_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F412_2772(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2263[381])();
void R2263_init () {
	R2263[0] = (char *(*)()) F519_3548;
	R2263[1] = (char *(*)()) F520_3548;
	R2263[2] = (char *(*)()) F521_3548;
	R2263[75] = (char *(*)()) F594_3908;
	R2263[85] = (char *(*)()) F604_4127;
	R2263[86] = (char *(*)()) F605_4127;
	R2263[87] = (char *(*)()) F606_4127;
	R2263[88] = (char *(*)()) F607_4127;
	R2263[89] = (char *(*)()) F608_4127;
	R2263[90] = (char *(*)()) F609_4127;
	R2263[91] = (char *(*)()) F610_4127;
	R2263[92] = (char *(*)()) F611_4127;
	R2263[93] = (char *(*)()) F612_4127;
	R2263[94] = (char *(*)()) F613_4127;
	R2263[95] = (char *(*)()) F614_4127;
	R2263[96] = (char *(*)()) F615_4127;
	R2263[97] = (char *(*)()) F616_4127;
	R2263[98] = (char *(*)()) F617_4127;
	R2263[99] = (char *(*)()) F618_4127;
	{long i; for (i = 104; i < 106; i++) R2263[i] = (char *(*)()) F622_4907;}
	R2263[123] = (char *(*)()) F412_2771;
	R2263[380] = (char *(*)()) F622_4907;
}

char *(*R2264[100])();
void R2264_init () {
	R2264[0] = (char *(*)()) F519_3521;
	R2264[1] = (char *(*)()) F520_3521;
	R2264[2] = (char *(*)()) F521_3521;
	R2264[85] = (char *(*)()) F604_4084;
	R2264[86] = (char *(*)()) F605_4084;
	R2264[87] = (char *(*)()) F606_4084;
	R2264[88] = (char *(*)()) F607_4084;
	R2264[89] = (char *(*)()) F608_4084;
	R2264[90] = (char *(*)()) F609_4084;
	R2264[91] = (char *(*)()) F610_4084;
	R2264[92] = (char *(*)()) F611_4084;
	R2264[93] = (char *(*)()) F612_4084;
	R2264[94] = (char *(*)()) F613_4084;
	R2264[95] = (char *(*)()) F614_4084;
	R2264[96] = (char *(*)()) F615_4084;
	R2264[97] = (char *(*)()) F616_4084;
	R2264[98] = (char *(*)()) F617_4084;
	R2264[99] = (char *(*)()) F618_4084;
}

static EIF_TYPE_INDEX Y2264_pgtype0[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype1[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype2[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype3[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype4[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype5[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype6[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype7[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype8[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype9[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype10[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype11[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype12[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype13[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype14[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype15[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype16[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype17[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype18[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype19[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype20[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype21[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype22[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype23[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype24[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype25[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype26[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype27[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype28[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype29[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype30[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype31[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype32[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype33[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype34[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype35[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype36[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype37[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype38[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype39[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype40[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype41[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype42[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype43[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype44[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype45[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype46[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype47[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype48[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype49[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype50[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype51[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype52[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype53[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype54[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype55[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype56[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype57[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype58[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype59[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype60[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype61[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype62[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype63[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype64[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype65[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype66[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype67[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype68[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype69[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype70[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype71[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype72[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype73[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype74[] = {0xFF01,132,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype75[] = {0xFF01,135,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype76[] = {0xFF01,136,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype77[] = {0xFF01,137,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype78[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype79[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype80[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype81[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype82[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype83[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype84[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype85[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype86[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype87[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype88[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype89[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype90[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype91[] = {0xFF01,134,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype92[] = {0xFF01,134,0xFFFF};
EIF_TYPE_INDEX *Y2264_gen_type [363];
EIF_TYPE_INDEX Y2264 [363];
void Y2264_init (void)
{
	egc_routines_types [2264] = Y2264;
	egc_routines_gen_types [2264] = Y2264_gen_type;
	egc_routines_offset [2264] = 255;
	Y2264_gen_type [0] = Y2264_pgtype0;
	Y2264_gen_type [1] = Y2264_pgtype1;
	Y2264_gen_type [2] = Y2264_pgtype2;
	Y2264_gen_type [3] = Y2264_pgtype3;
	Y2264_gen_type [4] = Y2264_pgtype4;
	Y2264_gen_type [5] = Y2264_pgtype5;
	Y2264_gen_type [6] = Y2264_pgtype6;
	Y2264_gen_type [7] = Y2264_pgtype7;
	Y2264_gen_type [8] = Y2264_pgtype8;
	Y2264_gen_type [9] = Y2264_pgtype9;
	Y2264_gen_type [10] = Y2264_pgtype10;
	Y2264_gen_type [11] = Y2264_pgtype11;
	Y2264_gen_type [12] = Y2264_pgtype12;
	Y2264_gen_type [13] = Y2264_pgtype13;
	Y2264_gen_type [14] = Y2264_pgtype14;
	Y2264_gen_type [203] = Y2264_pgtype15;
	Y2264_gen_type [204] = Y2264_pgtype16;
	Y2264_gen_type [205] = Y2264_pgtype17;
	Y2264_gen_type [206] = Y2264_pgtype18;
	Y2264_gen_type [207] = Y2264_pgtype19;
	Y2264_gen_type [208] = Y2264_pgtype20;
	Y2264_gen_type [209] = Y2264_pgtype21;
	Y2264_gen_type [210] = Y2264_pgtype22;
	Y2264_gen_type [211] = Y2264_pgtype23;
	Y2264_gen_type [212] = Y2264_pgtype24;
	Y2264_gen_type [213] = Y2264_pgtype25;
	Y2264_gen_type [214] = Y2264_pgtype26;
	Y2264_gen_type [215] = Y2264_pgtype27;
	Y2264_gen_type [216] = Y2264_pgtype28;
	Y2264_gen_type [217] = Y2264_pgtype29;
	Y2264_gen_type [218] = Y2264_pgtype30;
	Y2264_gen_type [219] = Y2264_pgtype31;
	Y2264_gen_type [220] = Y2264_pgtype32;
	Y2264_gen_type [221] = Y2264_pgtype33;
	Y2264_gen_type [222] = Y2264_pgtype34;
	Y2264_gen_type [223] = Y2264_pgtype35;
	Y2264_gen_type [224] = Y2264_pgtype36;
	Y2264_gen_type [225] = Y2264_pgtype37;
	Y2264_gen_type [226] = Y2264_pgtype38;
	Y2264_gen_type [227] = Y2264_pgtype39;
	Y2264_gen_type [228] = Y2264_pgtype40;
	Y2264_gen_type [229] = Y2264_pgtype41;
	Y2264_gen_type [230] = Y2264_pgtype42;
	Y2264_gen_type [231] = Y2264_pgtype43;
	Y2264_gen_type [232] = Y2264_pgtype44;
	Y2264_gen_type [233] = Y2264_pgtype45;
	Y2264_gen_type [234] = Y2264_pgtype46;
	Y2264_gen_type [235] = Y2264_pgtype47;
	Y2264_gen_type [236] = Y2264_pgtype48;
	Y2264_gen_type [237] = Y2264_pgtype49;
	Y2264_gen_type [238] = Y2264_pgtype50;
	Y2264_gen_type [239] = Y2264_pgtype51;
	Y2264_gen_type [240] = Y2264_pgtype52;
	Y2264_gen_type [241] = Y2264_pgtype53;
	Y2264_gen_type [242] = Y2264_pgtype54;
	Y2264_gen_type [243] = Y2264_pgtype55;
	Y2264_gen_type [244] = Y2264_pgtype56;
	Y2264_gen_type [245] = Y2264_pgtype57;
	Y2264_gen_type [246] = Y2264_pgtype58;
	Y2264_gen_type [247] = Y2264_pgtype59;
	Y2264_gen_type [248] = Y2264_pgtype60;
	Y2264_gen_type [249] = Y2264_pgtype61;
	Y2264_gen_type [250] = Y2264_pgtype62;
	Y2264_gen_type [251] = Y2264_pgtype63;
	Y2264_gen_type [252] = Y2264_pgtype64;
	Y2264_gen_type [253] = Y2264_pgtype65;
	Y2264_gen_type [254] = Y2264_pgtype66;
	Y2264_gen_type [255] = Y2264_pgtype67;
	Y2264_gen_type [256] = Y2264_pgtype68;
	Y2264_gen_type [257] = Y2264_pgtype69;
	Y2264_gen_type [258] = Y2264_pgtype70;
	Y2264_gen_type [259] = Y2264_pgtype71;
	Y2264_gen_type [260] = Y2264_pgtype72;
	Y2264_gen_type [261] = Y2264_pgtype73;
	Y2264_gen_type [262] = Y2264_pgtype74;
	Y2264_gen_type [263] = Y2264_pgtype75;
	Y2264_gen_type [264] = Y2264_pgtype76;
	Y2264_gen_type [265] = Y2264_pgtype77;
	Y2264_gen_type [348] = Y2264_pgtype78;
	Y2264_gen_type [349] = Y2264_pgtype79;
	Y2264_gen_type [350] = Y2264_pgtype80;
	Y2264_gen_type [351] = Y2264_pgtype81;
	Y2264_gen_type [352] = Y2264_pgtype82;
	Y2264_gen_type [353] = Y2264_pgtype83;
	Y2264_gen_type [354] = Y2264_pgtype84;
	Y2264_gen_type [355] = Y2264_pgtype85;
	Y2264_gen_type [356] = Y2264_pgtype86;
	Y2264_gen_type [357] = Y2264_pgtype87;
	Y2264_gen_type [358] = Y2264_pgtype88;
	Y2264_gen_type [359] = Y2264_pgtype89;
	Y2264_gen_type [360] = Y2264_pgtype90;
	Y2264_gen_type [361] = Y2264_pgtype91;
	Y2264_gen_type [362] = Y2264_pgtype92;
	{long i; for (i = 0; i < 15; i++) Y2264[i] = 132;};
	{long i; for (i = 203; i < 263; i++) Y2264[i] = 132;};
	Y2264[263] = 135;
	Y2264[264] = 136;
	Y2264[265] = 137;
	{long i; for (i = 348; i < 363; i++) Y2264[i] = 134;};
}

char *(*R2265[100])();
void R2265_init () {
	R2265[0] = (char *(*)()) F519_3531;
	R2265[1] = (char *(*)()) F520_3531;
	R2265[2] = (char *(*)()) F521_3531;
	R2265[85] = (char *(*)()) F604_4099;
	R2265[86] = (char *(*)()) F605_4099;
	R2265[87] = (char *(*)()) F606_4099;
	R2265[88] = (char *(*)()) F607_4099;
	R2265[89] = (char *(*)()) F608_4099;
	R2265[90] = (char *(*)()) F609_4099;
	R2265[91] = (char *(*)()) F610_4099;
	R2265[92] = (char *(*)()) F611_4099;
	R2265[93] = (char *(*)()) F612_4099;
	R2265[94] = (char *(*)()) F613_4099;
	R2265[95] = (char *(*)()) F614_4099;
	R2265[96] = (char *(*)()) F615_4099;
	R2265[97] = (char *(*)()) F616_4099;
	R2265[98] = (char *(*)()) F617_4099;
	R2265[99] = (char *(*)()) F618_4099;
}

char *(*R2266[100])();
void R2266_init () {
	R2266[0] = (char *(*)()) F519_3540;
	R2266[1] = (char *(*)()) F520_3540;
	R2266[2] = (char *(*)()) F521_3540;
	R2266[85] = (char *(*)()) F604_4109;
	R2266[86] = (char *(*)()) F605_4109;
	R2266[87] = (char *(*)()) F606_4109;
	R2266[88] = (char *(*)()) F607_4109;
	R2266[89] = (char *(*)()) F608_4109;
	R2266[90] = (char *(*)()) F609_4109;
	R2266[91] = (char *(*)()) F610_4109;
	R2266[92] = (char *(*)()) F611_4109;
	R2266[93] = (char *(*)()) F612_4109;
	R2266[94] = (char *(*)()) F613_4109;
	R2266[95] = (char *(*)()) F614_4109;
	R2266[96] = (char *(*)()) F615_4109;
	R2266[97] = (char *(*)()) F616_4109;
	R2266[98] = (char *(*)()) F617_4109;
	R2266[99] = (char *(*)()) F618_4109;
}

char *(*R2267[457])();
void R2267_init () {
	R2267[0] = (char *(*)()) F328_2551;
	R2267[1] = (char *(*)()) F444_3204;
	R2267[2] = (char *(*)()) F445_3204;
	R2267[3] = (char *(*)()) F446_3204;
	R2267[4] = (char *(*)()) F447_3204;
	R2267[5] = (char *(*)()) F448_3204;
	R2267[6] = (char *(*)()) F449_3204;
	R2267[7] = (char *(*)()) F450_3204;
	R2267[8] = (char *(*)()) F451_3204;
	R2267[9] = (char *(*)()) F452_3204;
	R2267[10] = (char *(*)()) F453_3204;
	R2267[11] = (char *(*)()) F454_3204;
	R2267[12] = (char *(*)()) F455_3204;
	R2267[13] = (char *(*)()) F456_3204;
	R2267[14] = (char *(*)()) F457_3204;
	R2267[15] = (char *(*)()) F458_3204;
	R2267[76] = (char *(*)()) F519_3532;
	R2267[77] = (char *(*)()) F520_3532;
	R2267[78] = (char *(*)()) F521_3532;
	R2267[151] = (char *(*)()) F322_2551;
	R2267[153] = (char *(*)()) F596_3949;
	R2267[154] = (char *(*)()) F597_3949;
	R2267[155] = (char *(*)()) F598_3949;
	R2267[156] = (char *(*)()) F599_3949;
	R2267[157] = (char *(*)()) F600_3949;
	R2267[158] = (char *(*)()) F596_3949;
	R2267[159] = (char *(*)()) F599_3949;
	R2267[160] = (char *(*)()) F596_3949;
	R2267[161] = (char *(*)()) F322_2551;
	R2267[162] = (char *(*)()) F323_2551;
	R2267[163] = (char *(*)()) F324_2551;
	R2267[164] = (char *(*)()) F325_2551;
	R2267[165] = (char *(*)()) F327_2551;
	R2267[166] = (char *(*)()) F328_2551;
	R2267[167] = (char *(*)()) F329_2551;
	R2267[168] = (char *(*)()) F330_2551;
	R2267[169] = (char *(*)()) F331_2551;
	R2267[170] = (char *(*)()) F332_2551;
	R2267[171] = (char *(*)()) F333_2551;
	R2267[172] = (char *(*)()) F334_2551;
	R2267[173] = (char *(*)()) F335_2551;
	R2267[174] = (char *(*)()) F336_2551;
	R2267[175] = (char *(*)()) F326_2551;
	{long i; for (i = 180; i < 182; i++) R2267[i] = (char *(*)()) F622_4759;}
	R2267[199] = (char *(*)()) F286_2534;
	R2267[450] = (char *(*)()) F329_2551;
	R2267[452] = (char *(*)()) F326_2551;
	R2267[456] = (char *(*)()) F622_4759;
}

char *(*R2269[457])();
void R2269_init () {
	R2269[0] = (char *(*)()) F443_3149;
	R2269[1] = (char *(*)()) F444_3198;
	R2269[2] = (char *(*)()) F445_3198;
	R2269[3] = (char *(*)()) F446_3198;
	R2269[4] = (char *(*)()) F447_3198;
	R2269[5] = (char *(*)()) F448_3198;
	R2269[6] = (char *(*)()) F449_3198;
	R2269[7] = (char *(*)()) F450_3198;
	R2269[8] = (char *(*)()) F451_3198;
	R2269[9] = (char *(*)()) F452_3198;
	R2269[10] = (char *(*)()) F453_3198;
	R2269[11] = (char *(*)()) F454_3198;
	R2269[12] = (char *(*)()) F455_3198;
	R2269[13] = (char *(*)()) F456_3198;
	R2269[14] = (char *(*)()) F457_3198;
	R2269[15] = (char *(*)()) F458_3198;
	R2269[76] = (char *(*)()) F519_3524;
	R2269[77] = (char *(*)()) F520_3524;
	R2269[78] = (char *(*)()) F521_3524;
	R2269[151] = (char *(*)()) F594_3895;
	R2269[153] = (char *(*)()) F596_3941;
	R2269[154] = (char *(*)()) F597_3941;
	R2269[155] = (char *(*)()) F598_3941;
	R2269[156] = (char *(*)()) F599_3941;
	R2269[157] = (char *(*)()) F600_3941;
	R2269[158] = (char *(*)()) F596_3941;
	R2269[159] = (char *(*)()) F599_3941;
	R2269[160] = (char *(*)()) F596_3941;
	R2269[161] = (char *(*)()) F604_4094;
	R2269[162] = (char *(*)()) F605_4094;
	R2269[163] = (char *(*)()) F606_4094;
	R2269[164] = (char *(*)()) F607_4094;
	R2269[165] = (char *(*)()) F608_4094;
	R2269[166] = (char *(*)()) F609_4094;
	R2269[167] = (char *(*)()) F610_4094;
	R2269[168] = (char *(*)()) F611_4094;
	R2269[169] = (char *(*)()) F612_4094;
	R2269[170] = (char *(*)()) F613_4094;
	R2269[171] = (char *(*)()) F614_4094;
	R2269[172] = (char *(*)()) F615_4094;
	R2269[173] = (char *(*)()) F616_4094;
	R2269[174] = (char *(*)()) F617_4094;
	R2269[175] = (char *(*)()) F618_4094;
	{long i; for (i = 180; i < 182; i++) R2269[i] = (char *(*)()) F622_4722;}
	R2269[450] = (char *(*)()) F891_6626;
	R2269[452] = (char *(*)()) F894_6867;
	R2269[456] = (char *(*)()) F899_7036;
}

char *(*R2272[453])();
void R2272_init () {
	R2272[0] = (char *(*)()) F443_3148;
	R2272[1] = (char *(*)()) F444_3199;
	R2272[2] = (char *(*)()) F445_3199;
	R2272[3] = (char *(*)()) F446_3199;
	R2272[4] = (char *(*)()) F447_3199;
	R2272[5] = (char *(*)()) F448_3199;
	R2272[6] = (char *(*)()) F449_3199;
	R2272[7] = (char *(*)()) F450_3199;
	R2272[8] = (char *(*)()) F451_3199;
	R2272[9] = (char *(*)()) F452_3199;
	R2272[10] = (char *(*)()) F453_3199;
	R2272[11] = (char *(*)()) F454_3199;
	R2272[12] = (char *(*)()) F455_3199;
	R2272[13] = (char *(*)()) F456_3199;
	R2272[14] = (char *(*)()) F457_3199;
	R2272[15] = (char *(*)()) F458_3199;
	R2272[151] = (char *(*)()) F594_3896;
	R2272[161] = (char *(*)()) F604_4095;
	R2272[162] = (char *(*)()) F605_4095;
	R2272[163] = (char *(*)()) F606_4095;
	R2272[164] = (char *(*)()) F607_4095;
	R2272[165] = (char *(*)()) F608_4095;
	R2272[166] = (char *(*)()) F609_4095;
	R2272[167] = (char *(*)()) F610_4095;
	R2272[168] = (char *(*)()) F611_4095;
	R2272[169] = (char *(*)()) F612_4095;
	R2272[170] = (char *(*)()) F613_4095;
	R2272[171] = (char *(*)()) F614_4095;
	R2272[172] = (char *(*)()) F615_4095;
	R2272[173] = (char *(*)()) F616_4095;
	R2272[174] = (char *(*)()) F617_4095;
	R2272[175] = (char *(*)()) F618_4095;
	R2272[450] = (char *(*)()) F891_6625;
	R2272[452] = (char *(*)()) F894_6866;
}

char *(*R2273[453])();
void R2273_init () {
	R2273[0] = (char *(*)()) F343_2557;
	R2273[1] = (char *(*)()) F444_3209;
	R2273[2] = (char *(*)()) F445_3209;
	R2273[3] = (char *(*)()) F446_3209;
	R2273[4] = (char *(*)()) F447_3209;
	R2273[5] = (char *(*)()) F448_3209;
	R2273[6] = (char *(*)()) F449_3209;
	R2273[7] = (char *(*)()) F450_3209;
	R2273[8] = (char *(*)()) F451_3209;
	R2273[9] = (char *(*)()) F452_3209;
	R2273[10] = (char *(*)()) F453_3209;
	R2273[11] = (char *(*)()) F454_3209;
	R2273[12] = (char *(*)()) F455_3209;
	R2273[13] = (char *(*)()) F456_3209;
	R2273[14] = (char *(*)()) F457_3209;
	R2273[15] = (char *(*)()) F458_3209;
	R2273[151] = (char *(*)()) F337_2557;
	R2273[161] = (char *(*)()) F337_2557;
	R2273[162] = (char *(*)()) F338_2557;
	R2273[163] = (char *(*)()) F339_2557;
	R2273[164] = (char *(*)()) F340_2557;
	R2273[165] = (char *(*)()) F342_2557;
	R2273[166] = (char *(*)()) F343_2557;
	R2273[167] = (char *(*)()) F344_2557;
	R2273[168] = (char *(*)()) F345_2557;
	R2273[169] = (char *(*)()) F346_2557;
	R2273[170] = (char *(*)()) F347_2557;
	R2273[171] = (char *(*)()) F348_2557;
	R2273[172] = (char *(*)()) F349_2557;
	R2273[173] = (char *(*)()) F350_2557;
	R2273[174] = (char *(*)()) F351_2557;
	R2273[175] = (char *(*)()) F341_2557;
	R2273[450] = (char *(*)()) F344_2557;
	R2273[452] = (char *(*)()) F341_2557;
}

char *(*R2276[453])();
void R2276_init () {
	R2276[0] = (char *(*)()) F343_2556;
	R2276[1] = (char *(*)()) F337_2556;
	R2276[2] = (char *(*)()) F338_2556;
	R2276[3] = (char *(*)()) F339_2556;
	R2276[4] = (char *(*)()) F340_2556;
	R2276[5] = (char *(*)()) F342_2556;
	R2276[6] = (char *(*)()) F343_2556;
	R2276[7] = (char *(*)()) F344_2556;
	R2276[8] = (char *(*)()) F345_2556;
	R2276[9] = (char *(*)()) F346_2556;
	R2276[10] = (char *(*)()) F347_2556;
	R2276[11] = (char *(*)()) F348_2556;
	R2276[12] = (char *(*)()) F349_2556;
	R2276[13] = (char *(*)()) F350_2556;
	R2276[14] = (char *(*)()) F351_2556;
	R2276[15] = (char *(*)()) F341_2556;
	R2276[151] = (char *(*)()) F337_2556;
	R2276[161] = (char *(*)()) F337_2556;
	R2276[162] = (char *(*)()) F338_2556;
	R2276[163] = (char *(*)()) F339_2556;
	R2276[164] = (char *(*)()) F340_2556;
	R2276[165] = (char *(*)()) F342_2556;
	R2276[166] = (char *(*)()) F343_2556;
	R2276[167] = (char *(*)()) F344_2556;
	R2276[168] = (char *(*)()) F345_2556;
	R2276[169] = (char *(*)()) F346_2556;
	R2276[170] = (char *(*)()) F347_2556;
	R2276[171] = (char *(*)()) F348_2556;
	R2276[172] = (char *(*)()) F349_2556;
	R2276[173] = (char *(*)()) F350_2556;
	R2276[174] = (char *(*)()) F351_2556;
	R2276[175] = (char *(*)()) F341_2556;
	R2276[450] = (char *(*)()) F344_2556;
	R2276[452] = (char *(*)()) F341_2556;
}

char *(*R2278[453])();
void R2278_init () {
	R2278[0] = (char *(*)()) F443_3159;
	R2278[1] = (char *(*)()) F444_3229;
	R2278[2] = (char *(*)()) F445_3229;
	R2278[3] = (char *(*)()) F446_3229;
	R2278[4] = (char *(*)()) F447_3229;
	R2278[5] = (char *(*)()) F448_3229;
	R2278[6] = (char *(*)()) F449_3229;
	R2278[7] = (char *(*)()) F450_3229;
	R2278[8] = (char *(*)()) F451_3229;
	R2278[9] = (char *(*)()) F452_3229;
	R2278[10] = (char *(*)()) F453_3229;
	R2278[11] = (char *(*)()) F454_3229;
	R2278[12] = (char *(*)()) F455_3229;
	R2278[13] = (char *(*)()) F456_3229;
	R2278[14] = (char *(*)()) F457_3229;
	R2278[15] = (char *(*)()) F458_3229;
	R2278[151] = (char *(*)()) F594_3918;
	R2278[161] = (char *(*)()) F604_4121;
	R2278[162] = (char *(*)()) F605_4121;
	R2278[163] = (char *(*)()) F606_4121;
	R2278[164] = (char *(*)()) F607_4121;
	R2278[165] = (char *(*)()) F608_4121;
	R2278[166] = (char *(*)()) F609_4121;
	R2278[167] = (char *(*)()) F610_4121;
	R2278[168] = (char *(*)()) F611_4121;
	R2278[169] = (char *(*)()) F612_4121;
	R2278[170] = (char *(*)()) F613_4121;
	R2278[171] = (char *(*)()) F614_4121;
	R2278[172] = (char *(*)()) F615_4121;
	R2278[173] = (char *(*)()) F616_4121;
	R2278[174] = (char *(*)()) F617_4121;
	R2278[175] = (char *(*)()) F618_4121;
	R2278[450] = (char *(*)()) F893_6763;
	R2278[452] = (char *(*)()) F895_6970;
}

char *(*R2290[381])();
void R2290_init () {
	R2290[0] = (char *(*)()) F519_3517;
	R2290[1] = (char *(*)()) F520_3517_2290_1;
	R2290[2] = (char *(*)()) F521_3517_2290_1;
	R2290[85] = (char *(*)()) F604_4078;
	R2290[86] = (char *(*)()) F605_4078_2290_1;
	R2290[87] = (char *(*)()) F606_4078_2290_1;
	R2290[88] = (char *(*)()) F607_4078_2290_1;
	R2290[89] = (char *(*)()) F608_4078_2290_1;
	R2290[90] = (char *(*)()) F609_4078_2290_1;
	R2290[91] = (char *(*)()) F610_4078_2290_1;
	R2290[92] = (char *(*)()) F611_4078_2290_1;
	R2290[93] = (char *(*)()) F612_4078_2290_1;
	R2290[94] = (char *(*)()) F613_4078_2290_1;
	R2290[95] = (char *(*)()) F614_4078_2290_1;
	R2290[96] = (char *(*)()) F615_4078_2290_1;
	R2290[97] = (char *(*)()) F616_4078_2290_1;
	R2290[98] = (char *(*)()) F617_4078_2290_1;
	R2290[99] = (char *(*)()) F618_4078_2290_1;
	{long i; for (i = 104; i < 106; i++) R2290[i] = (char *(*)()) F622_4704_2290_1;}
	R2290[123] = (char *(*)()) F412_2757_2290_1;
	R2290[380] = (char *(*)()) F622_4704_2290_1;
}
static EIF_REFERENCE F520_3517_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F520_3517(Current);
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
static EIF_REFERENCE F521_3517_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F521_3517(Current);
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
static EIF_REFERENCE F605_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F605_4078(Current);
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
static EIF_REFERENCE F606_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F606_4078(Current);
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
static EIF_REFERENCE F607_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F607_4078(Current);
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
static EIF_REFERENCE F608_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F608_4078(Current);
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
static EIF_REFERENCE F609_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F609_4078(Current);
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
static EIF_REFERENCE F610_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F610_4078(Current);
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
static EIF_REFERENCE F611_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F611_4078(Current);
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
static EIF_REFERENCE F612_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F612_4078(Current);
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
static EIF_REFERENCE F613_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F613_4078(Current);
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
static EIF_REFERENCE F614_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F614_4078(Current);
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
static EIF_REFERENCE F615_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F615_4078(Current);
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
static EIF_REFERENCE F616_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F616_4078(Current);
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
static EIF_REFERENCE F617_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F617_4078(Current);
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
static EIF_REFERENCE F618_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F618_4078(Current);
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
static EIF_REFERENCE F622_4704_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F622_4704(Current);
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
static EIF_REFERENCE F412_2757_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F412_2757(Current);
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

char *(*R2291[381])();
void R2291_init () {
	R2291[0] = (char *(*)()) F519_3528;
	R2291[1] = (char *(*)()) F520_3528;
	R2291[2] = (char *(*)()) F521_3528;
	R2291[85] = (char *(*)()) F459_3270;
	R2291[86] = (char *(*)()) F460_3270;
	R2291[87] = (char *(*)()) F461_3270;
	R2291[88] = (char *(*)()) F462_3270;
	R2291[89] = (char *(*)()) F464_3270;
	R2291[90] = (char *(*)()) F463_3270;
	R2291[91] = (char *(*)()) F465_3270;
	R2291[92] = (char *(*)()) F466_3270;
	R2291[93] = (char *(*)()) F467_3270;
	R2291[94] = (char *(*)()) F468_3270;
	R2291[95] = (char *(*)()) F469_3270;
	R2291[96] = (char *(*)()) F470_3270;
	R2291[97] = (char *(*)()) F471_3270;
	R2291[98] = (char *(*)()) F472_3270;
	R2291[99] = (char *(*)()) F473_3270;
	{long i; for (i = 104; i < 106; i++) R2291[i] = (char *(*)()) F622_4725;}
	R2291[123] = (char *(*)()) F371_2610;
	R2291[380] = (char *(*)()) F622_4725;
}

char *(*R2292[381])();
void R2292_init () {
	R2292[0] = (char *(*)()) F519_3534;
	R2292[1] = (char *(*)()) F520_3534;
	R2292[2] = (char *(*)()) F521_3534;
	R2292[85] = (char *(*)()) F604_4104;
	R2292[86] = (char *(*)()) F605_4104;
	R2292[87] = (char *(*)()) F606_4104;
	R2292[88] = (char *(*)()) F607_4104;
	R2292[89] = (char *(*)()) F608_4104;
	R2292[90] = (char *(*)()) F609_4104;
	R2292[91] = (char *(*)()) F610_4104;
	R2292[92] = (char *(*)()) F611_4104;
	R2292[93] = (char *(*)()) F612_4104;
	R2292[94] = (char *(*)()) F613_4104;
	R2292[95] = (char *(*)()) F614_4104;
	R2292[96] = (char *(*)()) F615_4104;
	R2292[97] = (char *(*)()) F616_4104;
	R2292[98] = (char *(*)()) F617_4104;
	R2292[99] = (char *(*)()) F618_4104;
	{long i; for (i = 104; i < 106; i++) R2292[i] = (char *(*)()) F622_4780;}
	R2292[123] = (char *(*)()) F412_2765;
	R2292[380] = (char *(*)()) F622_4780;
}

char *(*R2293[381])();
void R2293_init () {
	R2293[0] = (char *(*)()) F367_2613;
	R2293[1] = (char *(*)()) F371_2613;
	R2293[2] = (char *(*)()) F381_2613;
	R2293[85] = (char *(*)()) F604_4088;
	R2293[86] = (char *(*)()) F605_4088;
	R2293[87] = (char *(*)()) F606_4088;
	R2293[88] = (char *(*)()) F607_4088;
	R2293[89] = (char *(*)()) F608_4088;
	R2293[90] = (char *(*)()) F609_4088;
	R2293[91] = (char *(*)()) F610_4088;
	R2293[92] = (char *(*)()) F611_4088;
	R2293[93] = (char *(*)()) F612_4088;
	R2293[94] = (char *(*)()) F613_4088;
	R2293[95] = (char *(*)()) F614_4088;
	R2293[96] = (char *(*)()) F615_4088;
	R2293[97] = (char *(*)()) F616_4088;
	R2293[98] = (char *(*)()) F617_4088;
	R2293[99] = (char *(*)()) F618_4088;
	{long i; for (i = 104; i < 106; i++) R2293[i] = (char *(*)()) F368_2613;}
	R2293[123] = (char *(*)()) F371_2613;
	R2293[380] = (char *(*)()) F368_2613;
}

char *(*R2294[381])();
void R2294_init () {
	R2294[0] = (char *(*)()) F367_2614;
	R2294[1] = (char *(*)()) F371_2614;
	R2294[2] = (char *(*)()) F381_2614;
	R2294[85] = (char *(*)()) F604_4089;
	R2294[86] = (char *(*)()) F605_4089;
	R2294[87] = (char *(*)()) F606_4089;
	R2294[88] = (char *(*)()) F607_4089;
	R2294[89] = (char *(*)()) F608_4089;
	R2294[90] = (char *(*)()) F609_4089;
	R2294[91] = (char *(*)()) F610_4089;
	R2294[92] = (char *(*)()) F611_4089;
	R2294[93] = (char *(*)()) F612_4089;
	R2294[94] = (char *(*)()) F613_4089;
	R2294[95] = (char *(*)()) F614_4089;
	R2294[96] = (char *(*)()) F615_4089;
	R2294[97] = (char *(*)()) F616_4089;
	R2294[98] = (char *(*)()) F617_4089;
	R2294[99] = (char *(*)()) F618_4089;
	{long i; for (i = 104; i < 106; i++) R2294[i] = (char *(*)()) F368_2614;}
	R2294[123] = (char *(*)()) F371_2614;
	R2294[380] = (char *(*)()) F368_2614;
}

char *(*R2295[381])();
void R2295_init () {
	R2295[0] = (char *(*)()) F367_2615;
	R2295[1] = (char *(*)()) F371_2615;
	R2295[2] = (char *(*)()) F381_2615;
	R2295[85] = (char *(*)()) F604_4090;
	R2295[86] = (char *(*)()) F605_4090;
	R2295[87] = (char *(*)()) F606_4090;
	R2295[88] = (char *(*)()) F607_4090;
	R2295[89] = (char *(*)()) F608_4090;
	R2295[90] = (char *(*)()) F609_4090;
	R2295[91] = (char *(*)()) F610_4090;
	R2295[92] = (char *(*)()) F611_4090;
	R2295[93] = (char *(*)()) F612_4090;
	R2295[94] = (char *(*)()) F613_4090;
	R2295[95] = (char *(*)()) F614_4090;
	R2295[96] = (char *(*)()) F615_4090;
	R2295[97] = (char *(*)()) F616_4090;
	R2295[98] = (char *(*)()) F617_4090;
	R2295[99] = (char *(*)()) F618_4090;
	{long i; for (i = 104; i < 106; i++) R2295[i] = (char *(*)()) F368_2615;}
	R2295[123] = (char *(*)()) F371_2615;
	R2295[380] = (char *(*)()) F368_2615;
}

char *(*R2296[381])();
void R2296_init () {
	R2296[0] = (char *(*)()) F367_2616;
	R2296[1] = (char *(*)()) F371_2616;
	R2296[2] = (char *(*)()) F381_2616;
	R2296[85] = (char *(*)()) F604_4091;
	R2296[86] = (char *(*)()) F605_4091;
	R2296[87] = (char *(*)()) F606_4091;
	R2296[88] = (char *(*)()) F607_4091;
	R2296[89] = (char *(*)()) F608_4091;
	R2296[90] = (char *(*)()) F609_4091;
	R2296[91] = (char *(*)()) F610_4091;
	R2296[92] = (char *(*)()) F611_4091;
	R2296[93] = (char *(*)()) F612_4091;
	R2296[94] = (char *(*)()) F613_4091;
	R2296[95] = (char *(*)()) F614_4091;
	R2296[96] = (char *(*)()) F615_4091;
	R2296[97] = (char *(*)()) F616_4091;
	R2296[98] = (char *(*)()) F617_4091;
	R2296[99] = (char *(*)()) F618_4091;
	{long i; for (i = 104; i < 106; i++) R2296[i] = (char *(*)()) F368_2616;}
	R2296[123] = (char *(*)()) F371_2616;
	R2296[380] = (char *(*)()) F368_2616;
}

char *(*R2301[381])();
void R2301_init () {
	R2301[0] = (char *(*)()) F382_2713;
	R2301[1] = (char *(*)()) F386_2713_2301_4;
	R2301[2] = (char *(*)()) F395_2713_2301_4;
	R2301[85] = (char *(*)()) F604_4110;
	R2301[86] = (char *(*)()) F605_4110_2301_4;
	R2301[87] = (char *(*)()) F606_4110_2301_4;
	R2301[88] = (char *(*)()) F607_4110_2301_4;
	R2301[89] = (char *(*)()) F608_4110_2301_4;
	R2301[90] = (char *(*)()) F609_4110_2301_4;
	R2301[91] = (char *(*)()) F610_4110_2301_4;
	R2301[92] = (char *(*)()) F611_4110_2301_4;
	R2301[93] = (char *(*)()) F612_4110_2301_4;
	R2301[94] = (char *(*)()) F613_4110_2301_4;
	R2301[95] = (char *(*)()) F614_4110_2301_4;
	R2301[96] = (char *(*)()) F615_4110_2301_4;
	R2301[97] = (char *(*)()) F616_4110_2301_4;
	R2301[98] = (char *(*)()) F617_4110_2301_4;
	R2301[99] = (char *(*)()) F618_4110_2301_4;
	{long i; for (i = 104; i < 106; i++) R2301[i] = (char *(*)()) F388_2713_2301_4;}
	R2301[123] = (char *(*)()) F371_2604_2301_4;
	R2301[380] = (char *(*)()) F388_2713_2301_4;
}
static void F386_2713_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F386_2713(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F395_2713_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F395_2713(Current, *(EIF_BOOLEAN *)arg1);
}
static void F605_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F605_4110(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F606_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F606_4110(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F607_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F607_4110(Current, *(EIF_POINTER *)arg1);
}
static void F608_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F608_4110(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F609_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F609_4110(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F610_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_4110(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F611_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F611_4110(Current, *(EIF_REAL_64 *)arg1);
}
static void F612_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F612_4110(Current, *(EIF_REAL_32 *)arg1);
}
static void F613_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F613_4110(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F614_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F614_4110(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F615_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F615_4110(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F616_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F616_4110(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F617_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F617_4110(Current, *(EIF_BOOLEAN *)arg1);
}
static void F618_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F618_4110(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F388_2713_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F388_2713(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F371_2604_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F371_2604(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2302[381])();
void R2302_init () {
	R2302[0] = (char *(*)()) F519_3520;
	R2302[1] = (char *(*)()) F520_3520;
	R2302[2] = (char *(*)()) F521_3520;
	R2302[85] = (char *(*)()) F604_4083;
	R2302[86] = (char *(*)()) F605_4083;
	R2302[87] = (char *(*)()) F606_4083;
	R2302[88] = (char *(*)()) F607_4083;
	R2302[89] = (char *(*)()) F608_4083;
	R2302[90] = (char *(*)()) F609_4083;
	R2302[91] = (char *(*)()) F610_4083;
	R2302[92] = (char *(*)()) F611_4083;
	R2302[93] = (char *(*)()) F612_4083;
	R2302[94] = (char *(*)()) F613_4083;
	R2302[95] = (char *(*)()) F614_4083;
	R2302[96] = (char *(*)()) F615_4083;
	R2302[97] = (char *(*)()) F616_4083;
	R2302[98] = (char *(*)()) F617_4083;
	R2302[99] = (char *(*)()) F618_4083;
	{long i; for (i = 104; i < 106; i++) R2302[i] = (char *(*)()) F622_4705;}
	R2302[123] = (char *(*)()) F412_2756;
	R2302[380] = (char *(*)()) F622_4705;
}

char *(*R2304[381])();
void R2304_init () {
	R2304[0] = (char *(*)()) F367_2607;
	R2304[1] = (char *(*)()) F371_2607_2304_1;
	R2304[2] = (char *(*)()) F381_2607_2304_1;
	R2304[85] = (char *(*)()) F367_2607;
	R2304[86] = (char *(*)()) F369_2607_2304_1;
	R2304[87] = (char *(*)()) F370_2607_2304_1;
	R2304[88] = (char *(*)()) F373_2607_2304_1;
	R2304[89] = (char *(*)()) F374_2607_2304_1;
	R2304[90] = (char *(*)()) F371_2607_2304_1;
	R2304[91] = (char *(*)()) F368_2607_2304_1;
	R2304[92] = (char *(*)()) F375_2607_2304_1;
	R2304[93] = (char *(*)()) F376_2607_2304_1;
	R2304[94] = (char *(*)()) F377_2607_2304_1;
	R2304[95] = (char *(*)()) F378_2607_2304_1;
	R2304[96] = (char *(*)()) F379_2607_2304_1;
	R2304[97] = (char *(*)()) F380_2607_2304_1;
	R2304[98] = (char *(*)()) F381_2607_2304_1;
	R2304[99] = (char *(*)()) F372_2607_2304_1;
	{long i; for (i = 104; i < 106; i++) R2304[i] = (char *(*)()) F368_2607_2304_1;}
	R2304[123] = (char *(*)()) F371_2607_2304_1;
	R2304[380] = (char *(*)()) F368_2607_2304_1;
}
static EIF_REFERENCE F371_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F371_2607(Current);
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
static EIF_REFERENCE F381_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F381_2607(Current);
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
static EIF_REFERENCE F369_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F369_2607(Current);
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
static EIF_REFERENCE F370_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F370_2607(Current);
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
static EIF_REFERENCE F373_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F373_2607(Current);
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
static EIF_REFERENCE F374_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F374_2607(Current);
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
static EIF_REFERENCE F368_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F368_2607(Current);
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
static EIF_REFERENCE F375_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F375_2607(Current);
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
static EIF_REFERENCE F376_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F376_2607(Current);
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
static EIF_REFERENCE F377_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F377_2607(Current);
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
static EIF_REFERENCE F378_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F378_2607(Current);
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
static EIF_REFERENCE F379_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F379_2607(Current);
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
static EIF_REFERENCE F380_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F380_2607(Current);
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
static EIF_REFERENCE F372_2607_2304_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F372_2607(Current);
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

char *(*R2305[381])();
void R2305_init () {
	R2305[0] = (char *(*)()) F367_2608;
	R2305[1] = (char *(*)()) F371_2608;
	R2305[2] = (char *(*)()) F381_2608;
	R2305[85] = (char *(*)()) F367_2608;
	R2305[86] = (char *(*)()) F369_2608;
	R2305[87] = (char *(*)()) F370_2608;
	R2305[88] = (char *(*)()) F373_2608;
	R2305[89] = (char *(*)()) F374_2608;
	R2305[90] = (char *(*)()) F371_2608;
	R2305[91] = (char *(*)()) F368_2608;
	R2305[92] = (char *(*)()) F375_2608;
	R2305[93] = (char *(*)()) F376_2608;
	R2305[94] = (char *(*)()) F377_2608;
	R2305[95] = (char *(*)()) F378_2608;
	R2305[96] = (char *(*)()) F379_2608;
	R2305[97] = (char *(*)()) F380_2608;
	R2305[98] = (char *(*)()) F381_2608;
	R2305[99] = (char *(*)()) F372_2608;
	{long i; for (i = 104; i < 106; i++) R2305[i] = (char *(*)()) F368_2608;}
	R2305[123] = (char *(*)()) F371_2608;
	R2305[380] = (char *(*)()) F368_2608;
}

char *(*R2306[381])();
void R2306_init () {
	R2306[0] = (char *(*)()) F519_3526;
	R2306[1] = (char *(*)()) F520_3526;
	R2306[2] = (char *(*)()) F521_3526;
	R2306[85] = (char *(*)()) F489_3332;
	R2306[86] = (char *(*)()) F490_3332;
	R2306[87] = (char *(*)()) F491_3332;
	R2306[88] = (char *(*)()) F492_3332;
	R2306[89] = (char *(*)()) F494_3332;
	R2306[90] = (char *(*)()) F493_3332;
	R2306[91] = (char *(*)()) F495_3332;
	R2306[92] = (char *(*)()) F496_3332;
	R2306[93] = (char *(*)()) F497_3332;
	R2306[94] = (char *(*)()) F498_3332;
	R2306[95] = (char *(*)()) F499_3332;
	R2306[96] = (char *(*)()) F500_3332;
	R2306[97] = (char *(*)()) F501_3332;
	R2306[98] = (char *(*)()) F502_3332;
	R2306[99] = (char *(*)()) F503_3332;
	{long i; for (i = 104; i < 106; i++) R2306[i] = (char *(*)()) F622_4723;}
	R2306[123] = (char *(*)()) F412_2758;
	R2306[380] = (char *(*)()) F622_4723;
}

char *(*R2307[381])();
void R2307_init () {
	R2307[0] = (char *(*)()) F519_3535;
	R2307[1] = (char *(*)()) F520_3535;
	R2307[2] = (char *(*)()) F521_3535;
	R2307[85] = (char *(*)()) F604_4105;
	R2307[86] = (char *(*)()) F605_4105;
	R2307[87] = (char *(*)()) F606_4105;
	R2307[88] = (char *(*)()) F607_4105;
	R2307[89] = (char *(*)()) F608_4105;
	R2307[90] = (char *(*)()) F609_4105;
	R2307[91] = (char *(*)()) F610_4105;
	R2307[92] = (char *(*)()) F611_4105;
	R2307[93] = (char *(*)()) F612_4105;
	R2307[94] = (char *(*)()) F613_4105;
	R2307[95] = (char *(*)()) F614_4105;
	R2307[96] = (char *(*)()) F615_4105;
	R2307[97] = (char *(*)()) F616_4105;
	R2307[98] = (char *(*)()) F617_4105;
	R2307[99] = (char *(*)()) F618_4105;
	{long i; for (i = 104; i < 106; i++) R2307[i] = (char *(*)()) F622_4781;}
	R2307[123] = (char *(*)()) F412_2767;
	R2307[380] = (char *(*)()) F622_4781;
}

char *(*R2308[381])();
void R2308_init () {
	R2308[0] = (char *(*)()) F519_3536;
	R2308[1] = (char *(*)()) F520_3536;
	R2308[2] = (char *(*)()) F521_3536;
	R2308[85] = (char *(*)()) F604_4106;
	R2308[86] = (char *(*)()) F605_4106;
	R2308[87] = (char *(*)()) F606_4106;
	R2308[88] = (char *(*)()) F607_4106;
	R2308[89] = (char *(*)()) F608_4106;
	R2308[90] = (char *(*)()) F609_4106;
	R2308[91] = (char *(*)()) F610_4106;
	R2308[92] = (char *(*)()) F611_4106;
	R2308[93] = (char *(*)()) F612_4106;
	R2308[94] = (char *(*)()) F613_4106;
	R2308[95] = (char *(*)()) F614_4106;
	R2308[96] = (char *(*)()) F615_4106;
	R2308[97] = (char *(*)()) F616_4106;
	R2308[98] = (char *(*)()) F617_4106;
	R2308[99] = (char *(*)()) F618_4106;
	{long i; for (i = 104; i < 106; i++) R2308[i] = (char *(*)()) F622_4782;}
	R2308[123] = (char *(*)()) F412_2764;
	R2308[380] = (char *(*)()) F622_4782;
}


#ifdef __cplusplus
}
#endif
