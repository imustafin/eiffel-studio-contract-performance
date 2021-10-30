#include "epoly5.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R1875[335])();
void R1875_init () {
	R1875[0] = (char *(*)()) F444_2172;
	{long i; for (i = 26; i < 28; i++) R1875[i] = (char *(*)()) F470_2276;}
	R1875[52] = (char *(*)()) F497_2553;
	R1875[53] = (char *(*)()) F498_2598;
	R1875[54] = (char *(*)()) F499_2598;
	R1875[55] = (char *(*)()) F500_2598;
	R1875[56] = (char *(*)()) F501_2598;
	R1875[57] = (char *(*)()) F502_2598;
	R1875[58] = (char *(*)()) F503_2598;
	R1875[59] = (char *(*)()) F504_2598;
	R1875[60] = (char *(*)()) F505_2598;
	R1875[61] = (char *(*)()) F506_2598;
	R1875[62] = (char *(*)()) F507_2598;
	R1875[63] = (char *(*)()) F508_2598;
	R1875[64] = (char *(*)()) F509_2598;
	R1875[113] = (char *(*)()) F522_2667;
	R1875[114] = (char *(*)()) F523_2667;
	R1875[116] = (char *(*)()) F561_2754;
	R1875[117] = (char *(*)()) F562_2799;
	R1875[118] = (char *(*)()) F563_2799;
	R1875[119] = (char *(*)()) F564_2799;
	R1875[120] = (char *(*)()) F565_2799;
	R1875[121] = (char *(*)()) F566_2799;
	R1875[122] = (char *(*)()) F567_2799;
	R1875[123] = (char *(*)()) F568_2799;
	R1875[124] = (char *(*)()) F569_2799;
	R1875[125] = (char *(*)()) F570_2799;
	R1875[126] = (char *(*)()) F571_2799;
	R1875[127] = (char *(*)()) F572_2799;
	R1875[128] = (char *(*)()) F573_2799;
	R1875[130] = (char *(*)()) F575_2886;
	R1875[131] = (char *(*)()) F576_2886;
	R1875[132] = (char *(*)()) F577_2886;
	R1875[133] = (char *(*)()) F578_2886;
	R1875[134] = (char *(*)()) F575_2886;
	R1875[135] = (char *(*)()) F576_2886;
	R1875[136] = (char *(*)()) F575_2886;
	R1875[330] = (char *(*)()) F775_4710;
	R1875[333] = (char *(*)()) F778_4872;
	R1875[334] = (char *(*)()) F470_2276;
}

char *(*R1876[335])();
void R1876_init () {
	R1876[0] = (char *(*)()) F392_2135_1876_2;
	{long i; for (i = 26; i < 28; i++) R1876[i] = (char *(*)()) F394_2135_1876_2;}
	R1876[52] = (char *(*)()) F392_2135_1876_2;
	R1876[53] = (char *(*)()) F391_2135;
	R1876[54] = (char *(*)()) F392_2135_1876_2;
	R1876[55] = (char *(*)()) F395_2135_1876_2;
	R1876[56] = (char *(*)()) F396_2135_1876_2;
	R1876[57] = (char *(*)()) F397_2135_1876_2;
	R1876[58] = (char *(*)()) F398_2135_1876_2;
	R1876[59] = (char *(*)()) F399_2135_1876_2;
	R1876[60] = (char *(*)()) F394_2135_1876_2;
	R1876[61] = (char *(*)()) F400_2135_1876_2;
	R1876[62] = (char *(*)()) F401_2135_1876_2;
	R1876[63] = (char *(*)()) F393_2135_1876_2;
	R1876[64] = (char *(*)()) F402_2135_1876_2;
	R1876[113] = (char *(*)()) F558_2712;
	R1876[114] = (char *(*)()) F559_2712_1876_2;
	R1876[116] = (char *(*)()) F391_2135;
	R1876[117] = (char *(*)()) F562_2802;
	R1876[118] = (char *(*)()) F563_2802_1876_2;
	R1876[119] = (char *(*)()) F564_2802_1876_2;
	R1876[120] = (char *(*)()) F565_2802_1876_2;
	R1876[121] = (char *(*)()) F566_2802_1876_2;
	R1876[122] = (char *(*)()) F567_2802_1876_2;
	R1876[123] = (char *(*)()) F568_2802_1876_2;
	R1876[124] = (char *(*)()) F569_2802_1876_2;
	R1876[125] = (char *(*)()) F570_2802_1876_2;
	R1876[126] = (char *(*)()) F571_2802_1876_2;
	R1876[127] = (char *(*)()) F572_2802_1876_2;
	R1876[128] = (char *(*)()) F573_2802_1876_2;
	R1876[130] = (char *(*)()) F391_2135;
	R1876[131] = (char *(*)()) F392_2135_1876_2;
	R1876[132] = (char *(*)()) F391_2135;
	R1876[133] = (char *(*)()) F392_2135_1876_2;
	R1876[134] = (char *(*)()) F391_2135;
	R1876[135] = (char *(*)()) F392_2135_1876_2;
	R1876[136] = (char *(*)()) F391_2135;
	R1876[330] = (char *(*)()) F393_2135_1876_2;
	{long i; for (i = 333; i < 335; i++) R1876[i] = (char *(*)()) F394_2135_1876_2;}
}
static EIF_BOOLEAN F392_2135_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F392_2135(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F394_2135_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F394_2135(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F395_2135_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F395_2135(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F396_2135_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F396_2135(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F397_2135_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F397_2135(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F398_2135_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F398_2135(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F399_2135_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F399_2135(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F400_2135_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F400_2135(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F401_2135_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F401_2135(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F393_2135_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F393_2135(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F402_2135_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F402_2135(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F559_2712_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F559_2712(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F563_2802_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F563_2802(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F564_2802_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F564_2802(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F565_2802_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F565_2802(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F566_2802_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F566_2802(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F567_2802_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F567_2802(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F568_2802_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F568_2802(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F569_2802_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F569_2802(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F570_2802_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F570_2802(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F571_2802_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F571_2802(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F572_2802_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F572_2802(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F573_2802_1876_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F573_2802(Current, *(EIF_POINTER *)arg1);
}

char *(*R1878[335])();
void R1878_init () {
	R1878[0] = (char *(*)()) F444_2178_1878_4;
	{long i; for (i = 26; i < 28; i++) R1878[i] = (char *(*)()) F470_2305_1878_4;}
	R1878[52] = (char *(*)()) F497_2554_1878_4;
	R1878[53] = (char *(*)()) F498_2632;
	R1878[54] = (char *(*)()) F499_2632_1878_4;
	R1878[55] = (char *(*)()) F500_2632_1878_4;
	R1878[56] = (char *(*)()) F501_2632_1878_4;
	R1878[57] = (char *(*)()) F502_2632_1878_4;
	R1878[58] = (char *(*)()) F503_2632_1878_4;
	R1878[59] = (char *(*)()) F504_2632_1878_4;
	R1878[60] = (char *(*)()) F505_2632_1878_4;
	R1878[61] = (char *(*)()) F506_2632_1878_4;
	R1878[62] = (char *(*)()) F507_2632_1878_4;
	R1878[63] = (char *(*)()) F508_2632_1878_4;
	R1878[64] = (char *(*)()) F509_2632_1878_4;
	R1878[113] = (char *(*)()) F558_2721;
	R1878[114] = (char *(*)()) F559_2721_1878_4;
	R1878[116] = (char *(*)()) F561_2755;
	R1878[117] = (char *(*)()) F562_2815;
	R1878[118] = (char *(*)()) F563_2815_1878_4;
	R1878[119] = (char *(*)()) F564_2815_1878_4;
	R1878[120] = (char *(*)()) F565_2815_1878_4;
	R1878[121] = (char *(*)()) F566_2815_1878_4;
	R1878[122] = (char *(*)()) F567_2815_1878_4;
	R1878[123] = (char *(*)()) F568_2815_1878_4;
	R1878[124] = (char *(*)()) F569_2815_1878_4;
	R1878[125] = (char *(*)()) F570_2815_1878_4;
	R1878[126] = (char *(*)()) F571_2815_1878_4;
	R1878[127] = (char *(*)()) F572_2815_1878_4;
	R1878[128] = (char *(*)()) F573_2815_1878_4;
	R1878[130] = (char *(*)()) F575_2970;
	R1878[131] = (char *(*)()) F576_2970_1878_4;
	R1878[132] = (char *(*)()) F577_2970;
	R1878[133] = (char *(*)()) F578_2970_1878_4;
	R1878[134] = (char *(*)()) F575_2970;
	R1878[135] = (char *(*)()) F576_2970_1878_4;
	R1878[136] = (char *(*)()) F575_2970;
	R1878[330] = (char *(*)()) F775_4753_1878_4;
	R1878[333] = (char *(*)()) F778_4915_1878_4;
	R1878[334] = (char *(*)()) F470_2305_1878_4;
}
static void F444_2178_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F444_2178(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F470_2305_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F470_2305(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F497_2554_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F497_2554(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F499_2632_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F499_2632(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F500_2632_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F500_2632(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F501_2632_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F501_2632(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F502_2632_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F502_2632(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F503_2632_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F503_2632(Current, *(EIF_REAL_32 *)arg1);
}
static void F504_2632_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F504_2632(Current, *(EIF_REAL_64 *)arg1);
}
static void F505_2632_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F505_2632(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F506_2632_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F506_2632(Current, *(EIF_BOOLEAN *)arg1);
}
static void F507_2632_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F507_2632(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F508_2632_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F508_2632(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F509_2632_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F509_2632(Current, *(EIF_POINTER *)arg1);
}
static void F559_2721_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F559_2721(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F563_2815_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F563_2815(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F564_2815_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F564_2815(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F565_2815_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F565_2815(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F566_2815_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F566_2815(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F567_2815_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F567_2815(Current, *(EIF_REAL_32 *)arg1);
}
static void F568_2815_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F568_2815(Current, *(EIF_REAL_64 *)arg1);
}
static void F569_2815_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F569_2815(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F570_2815_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F570_2815(Current, *(EIF_BOOLEAN *)arg1);
}
static void F571_2815_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F571_2815(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F572_2815_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F572_2815(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F573_2815_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F573_2815(Current, *(EIF_POINTER *)arg1);
}
static void F576_2970_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F576_2970(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F578_2970_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F578_2970(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F775_4753_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F775_4753(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F778_4915_1878_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F778_4915(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R1880[335])();
void R1880_init () {
	R1880[0] = (char *(*)()) F444_2181_1880_4;
	{long i; for (i = 26; i < 28; i++) R1880[i] = (char *(*)()) F470_2424_1880_4;}
	R1880[52] = (char *(*)()) F497_2571_1880_4;
	R1880[53] = (char *(*)()) F498_2631;
	R1880[54] = (char *(*)()) F499_2631_1880_4;
	R1880[55] = (char *(*)()) F500_2631_1880_4;
	R1880[56] = (char *(*)()) F501_2631_1880_4;
	R1880[57] = (char *(*)()) F502_2631_1880_4;
	R1880[58] = (char *(*)()) F503_2631_1880_4;
	R1880[59] = (char *(*)()) F504_2631_1880_4;
	R1880[60] = (char *(*)()) F505_2631_1880_4;
	R1880[61] = (char *(*)()) F506_2631_1880_4;
	R1880[62] = (char *(*)()) F507_2631_1880_4;
	R1880[63] = (char *(*)()) F508_2631_1880_4;
	R1880[64] = (char *(*)()) F509_2631_1880_4;
	R1880[113] = (char *(*)()) F522_2673;
	R1880[114] = (char *(*)()) F523_2673_1880_4;
	R1880[116] = (char *(*)()) F561_2761;
	R1880[117] = (char *(*)()) F562_2827;
	R1880[118] = (char *(*)()) F563_2827_1880_4;
	R1880[119] = (char *(*)()) F564_2827_1880_4;
	R1880[120] = (char *(*)()) F565_2827_1880_4;
	R1880[121] = (char *(*)()) F566_2827_1880_4;
	R1880[122] = (char *(*)()) F567_2827_1880_4;
	R1880[123] = (char *(*)()) F568_2827_1880_4;
	R1880[124] = (char *(*)()) F569_2827_1880_4;
	R1880[125] = (char *(*)()) F570_2827_1880_4;
	R1880[126] = (char *(*)()) F571_2827_1880_4;
	R1880[127] = (char *(*)()) F572_2827_1880_4;
	R1880[128] = (char *(*)()) F573_2827_1880_4;
	R1880[130] = (char *(*)()) F575_2912;
	R1880[131] = (char *(*)()) F576_2912_1880_4;
	R1880[132] = (char *(*)()) F577_2912;
	R1880[133] = (char *(*)()) F578_2912_1880_4;
	R1880[134] = (char *(*)()) F575_2912;
	R1880[135] = (char *(*)()) F576_2912_1880_4;
	R1880[136] = (char *(*)()) F575_2912;
	R1880[330] = (char *(*)()) F775_4762_1880_4;
	R1880[333] = (char *(*)()) F778_4924_1880_4;
	R1880[334] = (char *(*)()) F470_2424_1880_4;
}
static void F444_2181_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F444_2181(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F470_2424_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F470_2424(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F497_2571_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F497_2571(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F499_2631_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F499_2631(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F500_2631_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F500_2631(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F501_2631_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F501_2631(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F502_2631_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F502_2631(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F503_2631_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F503_2631(Current, *(EIF_REAL_32 *)arg1);
}
static void F504_2631_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F504_2631(Current, *(EIF_REAL_64 *)arg1);
}
static void F505_2631_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F505_2631(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F506_2631_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F506_2631(Current, *(EIF_BOOLEAN *)arg1);
}
static void F507_2631_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F507_2631(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F508_2631_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F508_2631(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F509_2631_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F509_2631(Current, *(EIF_POINTER *)arg1);
}
static void F523_2673_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F523_2673(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F563_2827_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F563_2827(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F564_2827_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F564_2827(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F565_2827_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F565_2827(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F566_2827_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F566_2827(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F567_2827_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F567_2827(Current, *(EIF_REAL_32 *)arg1);
}
static void F568_2827_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F568_2827(Current, *(EIF_REAL_64 *)arg1);
}
static void F569_2827_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F569_2827(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F570_2827_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F570_2827(Current, *(EIF_BOOLEAN *)arg1);
}
static void F571_2827_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F571_2827(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F572_2827_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F572_2827(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F573_2827_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F573_2827(Current, *(EIF_POINTER *)arg1);
}
static void F576_2912_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F576_2912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F578_2912_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F578_2912(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F775_4762_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F775_4762(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F778_4924_1880_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F778_4924(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R1882[335])();
void R1882_init () {
	R1882[0] = (char *(*)()) F444_2185;
	{long i; for (i = 26; i < 28; i++) R1882[i] = (char *(*)()) F470_2340;}
	R1882[52] = (char *(*)()) F497_2560;
	R1882[53] = (char *(*)()) F498_2612;
	R1882[54] = (char *(*)()) F499_2612;
	R1882[55] = (char *(*)()) F500_2612;
	R1882[56] = (char *(*)()) F501_2612;
	R1882[57] = (char *(*)()) F502_2612;
	R1882[58] = (char *(*)()) F503_2612;
	R1882[59] = (char *(*)()) F504_2612;
	R1882[60] = (char *(*)()) F505_2612;
	R1882[61] = (char *(*)()) F506_2612;
	R1882[62] = (char *(*)()) F507_2612;
	R1882[63] = (char *(*)()) F508_2612;
	R1882[64] = (char *(*)()) F509_2612;
	R1882[113] = (char *(*)()) F558_2730;
	R1882[114] = (char *(*)()) F559_2730;
	R1882[116] = (char *(*)()) F561_2763;
	R1882[117] = (char *(*)()) F562_2832;
	R1882[118] = (char *(*)()) F563_2832;
	R1882[119] = (char *(*)()) F564_2832;
	R1882[120] = (char *(*)()) F565_2832;
	R1882[121] = (char *(*)()) F566_2832;
	R1882[122] = (char *(*)()) F567_2832;
	R1882[123] = (char *(*)()) F568_2832;
	R1882[124] = (char *(*)()) F569_2832;
	R1882[125] = (char *(*)()) F570_2832;
	R1882[126] = (char *(*)()) F571_2832;
	R1882[127] = (char *(*)()) F572_2832;
	R1882[128] = (char *(*)()) F573_2832;
	R1882[130] = (char *(*)()) F575_2913;
	R1882[131] = (char *(*)()) F576_2913;
	R1882[132] = (char *(*)()) F577_2913;
	R1882[133] = (char *(*)()) F578_2913;
	R1882[134] = (char *(*)()) F575_2913;
	R1882[135] = (char *(*)()) F576_2913;
	R1882[136] = (char *(*)()) F575_2913;
	R1882[330] = (char *(*)()) F775_4766;
	R1882[333] = (char *(*)()) F778_4928;
	R1882[334] = (char *(*)()) F470_2340;
}

char *(*R1885[282])();
void R1885_init () {
	R1885[0] = (char *(*)()) F497_2542_1885_5;
	R1885[1] = (char *(*)()) F498_2581_1885_5;
	R1885[2] = (char *(*)()) F499_2581_1885_5;
	R1885[3] = (char *(*)()) F500_2581_1885_5;
	R1885[4] = (char *(*)()) F501_2581_1885_5;
	R1885[5] = (char *(*)()) F502_2581_1885_5;
	R1885[6] = (char *(*)()) F503_2581_1885_5;
	R1885[7] = (char *(*)()) F504_2581_1885_5;
	R1885[8] = (char *(*)()) F505_2581_1885_5;
	R1885[9] = (char *(*)()) F506_2581_1885_5;
	R1885[10] = (char *(*)()) F507_2581_1885_5;
	R1885[11] = (char *(*)()) F508_2581_1885_5;
	R1885[12] = (char *(*)()) F509_2581_1885_5;
	R1885[61] = (char *(*)()) F510_2638_1885_5;
	R1885[62] = (char *(*)()) F511_2638_1885_5;
	R1885[65] = (char *(*)()) F562_2780_1885_5;
	R1885[66] = (char *(*)()) F563_2780_1885_5;
	R1885[67] = (char *(*)()) F564_2780_1885_5;
	R1885[68] = (char *(*)()) F565_2780_1885_5;
	R1885[69] = (char *(*)()) F566_2780_1885_5;
	R1885[70] = (char *(*)()) F567_2780_1885_5;
	R1885[71] = (char *(*)()) F568_2780_1885_5;
	R1885[72] = (char *(*)()) F569_2780_1885_5;
	R1885[73] = (char *(*)()) F570_2780_1885_5;
	R1885[74] = (char *(*)()) F571_2780_1885_5;
	R1885[75] = (char *(*)()) F572_2780_1885_5;
	R1885[76] = (char *(*)()) F573_2780_1885_5;
	R1885[78] = (char *(*)()) F575_2863;
	R1885[79] = (char *(*)()) F576_2863_1885_5;
	R1885[80] = (char *(*)()) F577_2863_1885_5;
	R1885[81] = (char *(*)()) F578_2863_1885_5;
	R1885[82] = (char *(*)()) F575_2863;
	R1885[83] = (char *(*)()) F576_2863_1885_5;
	R1885[84] = (char *(*)()) F575_2863;
	R1885[278] = (char *(*)()) F775_4704_1885_5;
	R1885[281] = (char *(*)()) F778_4865_1885_5;
}
static EIF_REFERENCE F497_2542_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F497_2542(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F498_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F498_2581(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F499_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F499_2581(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F500_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F500_2581(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F501_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F501_2581(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F502_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F502_2581(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F503_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F503_2581(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F504_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F504_2581(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F505_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F505_2581(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F506_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F506_2581(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F507_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F507_2581(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F508_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F508_2581(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F509_2581_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F509_2581(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F510_2638_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F510_2638(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F511_2638_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F511_2638(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F562_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F562_2780(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F563_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F563_2780(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F564_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F564_2780(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F565_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F565_2780(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F566_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F566_2780(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F567_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F567_2780(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F568_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F568_2780(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F569_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F569_2780(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F570_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F570_2780(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F571_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F571_2780(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F572_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F572_2780(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F573_2780_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F573_2780(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F576_2863_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F576_2863(Current, arg1);
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
static EIF_REFERENCE F577_2863_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F577_2863(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F578_2863_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F578_2863(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F775_4704_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F775_4704(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F778_4865_1885_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F778_4865(Current, *(EIF_INTEGER_32 *)arg1);
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

char *(*R1887[282])();
void R1887_init () {
	R1887[0] = (char *(*)()) F497_2545_1887_2;
	R1887[1] = (char *(*)()) F498_2596_1887_2;
	R1887[2] = (char *(*)()) F499_2596_1887_2;
	R1887[3] = (char *(*)()) F500_2596_1887_2;
	R1887[4] = (char *(*)()) F501_2596_1887_2;
	R1887[5] = (char *(*)()) F502_2596_1887_2;
	R1887[6] = (char *(*)()) F503_2596_1887_2;
	R1887[7] = (char *(*)()) F504_2596_1887_2;
	R1887[8] = (char *(*)()) F505_2596_1887_2;
	R1887[9] = (char *(*)()) F506_2596_1887_2;
	R1887[10] = (char *(*)()) F507_2596_1887_2;
	R1887[11] = (char *(*)()) F508_2596_1887_2;
	R1887[12] = (char *(*)()) F509_2596_1887_2;
	R1887[61] = (char *(*)()) F510_2646_1887_2;
	R1887[62] = (char *(*)()) F511_2646_1887_2;
	R1887[65] = (char *(*)()) F562_2801_1887_2;
	R1887[66] = (char *(*)()) F563_2801_1887_2;
	R1887[67] = (char *(*)()) F564_2801_1887_2;
	R1887[68] = (char *(*)()) F565_2801_1887_2;
	R1887[69] = (char *(*)()) F566_2801_1887_2;
	R1887[70] = (char *(*)()) F567_2801_1887_2;
	R1887[71] = (char *(*)()) F568_2801_1887_2;
	R1887[72] = (char *(*)()) F569_2801_1887_2;
	R1887[73] = (char *(*)()) F570_2801_1887_2;
	R1887[74] = (char *(*)()) F571_2801_1887_2;
	R1887[75] = (char *(*)()) F572_2801_1887_2;
	R1887[76] = (char *(*)()) F573_2801_1887_2;
	R1887[78] = (char *(*)()) F575_2866;
	R1887[79] = (char *(*)()) F576_2866;
	R1887[80] = (char *(*)()) F577_2866_1887_2;
	R1887[81] = (char *(*)()) F578_2866_1887_2;
	R1887[82] = (char *(*)()) F575_2866;
	R1887[83] = (char *(*)()) F576_2866;
	R1887[84] = (char *(*)()) F575_2866;
	R1887[278] = (char *(*)()) F770_4507_1887_2;
	R1887[281] = (char *(*)()) F770_4507_1887_2;
}
static EIF_BOOLEAN F497_2545_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F497_2545(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F498_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F498_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F499_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F499_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F500_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F500_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F501_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F501_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F502_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F502_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F503_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F503_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F504_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F504_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F505_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F505_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F506_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F506_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F507_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F507_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F508_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F508_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F509_2596_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F509_2596(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F510_2646_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F510_2646(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F511_2646_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F511_2646(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F562_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F562_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F563_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F563_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F564_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F564_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F565_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F565_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F566_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F566_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F567_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F567_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F568_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F568_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F569_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F569_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F570_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F570_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F571_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F571_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F572_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F572_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F573_2801_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F573_2801(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F577_2866_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F577_2866(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F578_2866_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F578_2866(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F770_4507_1887_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F770_4507(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R1888[282])();
void R1888_init () {
	R1888[0] = (char *(*)()) F497_2572_1888_10;
	R1888[1] = (char *(*)()) F498_2600_1888_10;
	R1888[2] = (char *(*)()) F499_2600_1888_10;
	R1888[3] = (char *(*)()) F500_2600_1888_10;
	R1888[4] = (char *(*)()) F501_2600_1888_10;
	R1888[5] = (char *(*)()) F502_2600_1888_10;
	R1888[6] = (char *(*)()) F503_2600_1888_10;
	R1888[7] = (char *(*)()) F504_2600_1888_10;
	R1888[8] = (char *(*)()) F505_2600_1888_10;
	R1888[9] = (char *(*)()) F506_2600_1888_10;
	R1888[10] = (char *(*)()) F507_2600_1888_10;
	R1888[11] = (char *(*)()) F508_2600_1888_10;
	R1888[12] = (char *(*)()) F509_2600_1888_10;
	R1888[61] = (char *(*)()) F510_2652_1888_10;
	R1888[62] = (char *(*)()) F511_2652_1888_10;
	R1888[65] = (char *(*)()) F562_2813_1888_10;
	R1888[66] = (char *(*)()) F563_2813_1888_10;
	R1888[67] = (char *(*)()) F564_2813_1888_10;
	R1888[68] = (char *(*)()) F565_2813_1888_10;
	R1888[69] = (char *(*)()) F566_2813_1888_10;
	R1888[70] = (char *(*)()) F567_2813_1888_10;
	R1888[71] = (char *(*)()) F568_2813_1888_10;
	R1888[72] = (char *(*)()) F569_2813_1888_10;
	R1888[73] = (char *(*)()) F570_2813_1888_10;
	R1888[74] = (char *(*)()) F571_2813_1888_10;
	R1888[75] = (char *(*)()) F572_2813_1888_10;
	R1888[76] = (char *(*)()) F573_2813_1888_10;
	R1888[78] = (char *(*)()) F575_2905;
	R1888[79] = (char *(*)()) F576_2905_1888_10;
	R1888[80] = (char *(*)()) F577_2905_1888_10;
	R1888[81] = (char *(*)()) F578_2905_1888_10;
	R1888[82] = (char *(*)()) F575_2905;
	R1888[83] = (char *(*)()) F576_2905_1888_10;
	R1888[84] = (char *(*)()) F575_2905;
	R1888[278] = (char *(*)()) F775_4725_1888_10;
	R1888[281] = (char *(*)()) F778_4887_1888_10;
}
static void F497_2572_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F497_2572(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F498_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F498_2600(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F499_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F499_2600(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F500_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F500_2600(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F501_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F501_2600(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F502_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F502_2600(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F503_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F503_2600(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F504_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F504_2600(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F505_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F505_2600(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F506_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F506_2600(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F507_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F507_2600(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F508_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F508_2600(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F509_2600_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F509_2600(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F510_2652_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F510_2652(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F511_2652_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F511_2652(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F562_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F562_2813(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F563_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F563_2813(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F564_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F564_2813(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F565_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F565_2813(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F566_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F566_2813(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F567_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F567_2813(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F568_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F568_2813(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F569_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F569_2813(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F570_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F570_2813(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F571_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F571_2813(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F572_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F572_2813(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F573_2813_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F573_2813(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F576_2905_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F576_2905(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F577_2905_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F577_2905(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F578_2905_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F578_2905(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F775_4725_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F775_4725(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F778_4887_1888_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F778_4887(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

char *(*R1889[282])();
void R1889_init () {
	R1889[0] = (char *(*)()) F497_2572_1889_10;
	R1889[1] = (char *(*)()) F498_2600_1889_10;
	R1889[2] = (char *(*)()) F499_2600_1889_10;
	R1889[3] = (char *(*)()) F500_2600_1889_10;
	R1889[4] = (char *(*)()) F501_2600_1889_10;
	R1889[5] = (char *(*)()) F502_2600_1889_10;
	R1889[6] = (char *(*)()) F503_2600_1889_10;
	R1889[7] = (char *(*)()) F504_2600_1889_10;
	R1889[8] = (char *(*)()) F505_2600_1889_10;
	R1889[9] = (char *(*)()) F506_2600_1889_10;
	R1889[10] = (char *(*)()) F507_2600_1889_10;
	R1889[11] = (char *(*)()) F508_2600_1889_10;
	R1889[12] = (char *(*)()) F509_2600_1889_10;
	R1889[61] = (char *(*)()) F510_2652_1889_10;
	R1889[62] = (char *(*)()) F511_2652_1889_10;
	R1889[65] = (char *(*)()) F562_2813_1889_10;
	R1889[66] = (char *(*)()) F563_2813_1889_10;
	R1889[67] = (char *(*)()) F564_2813_1889_10;
	R1889[68] = (char *(*)()) F565_2813_1889_10;
	R1889[69] = (char *(*)()) F566_2813_1889_10;
	R1889[70] = (char *(*)()) F567_2813_1889_10;
	R1889[71] = (char *(*)()) F568_2813_1889_10;
	R1889[72] = (char *(*)()) F569_2813_1889_10;
	R1889[73] = (char *(*)()) F570_2813_1889_10;
	R1889[74] = (char *(*)()) F571_2813_1889_10;
	R1889[75] = (char *(*)()) F572_2813_1889_10;
	R1889[76] = (char *(*)()) F573_2813_1889_10;
	R1889[78] = (char *(*)()) F575_2906;
	R1889[79] = (char *(*)()) F576_2906_1889_10;
	R1889[80] = (char *(*)()) F577_2906_1889_10;
	R1889[81] = (char *(*)()) F578_2906_1889_10;
	R1889[82] = (char *(*)()) F575_2906;
	R1889[83] = (char *(*)()) F576_2906_1889_10;
	R1889[84] = (char *(*)()) F575_2906;
	R1889[278] = (char *(*)()) F775_4725_1889_10;
	R1889[281] = (char *(*)()) F778_4887_1889_10;
}
static void F497_2572_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F497_2572(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F498_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F498_2600(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F499_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F499_2600(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F500_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F500_2600(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F501_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F501_2600(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F502_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F502_2600(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F503_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F503_2600(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F504_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F504_2600(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F505_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F505_2600(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F506_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F506_2600(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F507_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F507_2600(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F508_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F508_2600(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F509_2600_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F509_2600(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F510_2652_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F510_2652(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F511_2652_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F511_2652(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F562_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F562_2813(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F563_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F563_2813(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F564_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F564_2813(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F565_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F565_2813(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F566_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F566_2813(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F567_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F567_2813(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F568_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F568_2813(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F569_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F569_2813(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F570_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F570_2813(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F571_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F571_2813(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F572_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F572_2813(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F573_2813_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F573_2813(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F576_2906_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F576_2906(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F577_2906_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F577_2906(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F578_2906_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F578_2906(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F775_4725_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F775_4725(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F778_4887_1889_10 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F778_4887(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

static EIF_TYPE_INDEX Y1890_pgtype0[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype1[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype2[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype3[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype4[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype5[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype6[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype7[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype8[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype9[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype10[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype11[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype12[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype13[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype14[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype15[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype16[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype17[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype18[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype19[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype20[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype21[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype22[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype23[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype24[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype25[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype26[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype27[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype28[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype29[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype30[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype31[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype32[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype33[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype34[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype35[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype36[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype37[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype38[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype39[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype40[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype41[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype42[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype43[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype44[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype45[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype46[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype47[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype48[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype49[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype50[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype51[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype52[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype53[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype54[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype55[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype56[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype57[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype58[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype59[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype60[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype61[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype62[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype63[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype64[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype65[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype66[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype67[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype68[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype69[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype70[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype71[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype72[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype73[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype74[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype75[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype76[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype77[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype78[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype79[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype80[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype81[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype82[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype83[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype84[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype85[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype86[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype87[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype88[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype89[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype90[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype91[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype92[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype93[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype94[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype95[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype96[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype97[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype98[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype99[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype100[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype101[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype102[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype103[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype104[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype105[] = {0xFF01,769,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype106[] = {0xFF01,769,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype107[] = {0xFF01,777,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype108[] = {697,0xFFFF};
static EIF_TYPE_INDEX Y1890_pgtype109[] = {697,0xFFFF};
EIF_TYPE_INDEX *Y1890_gen_type [363];
EIF_TYPE_INDEX Y1890 [363];
void Y1890_init (void)
{
	egc_routines_types [1890] = Y1890;
	egc_routines_gen_types [1890] = Y1890_gen_type;
	egc_routines_offset [1890] = 415;
	Y1890_gen_type [0] = Y1890_pgtype0;
	Y1890_gen_type [1] = Y1890_pgtype1;
	Y1890_gen_type [2] = Y1890_pgtype2;
	Y1890_gen_type [3] = Y1890_pgtype3;
	Y1890_gen_type [4] = Y1890_pgtype4;
	Y1890_gen_type [5] = Y1890_pgtype5;
	Y1890_gen_type [6] = Y1890_pgtype6;
	Y1890_gen_type [7] = Y1890_pgtype7;
	Y1890_gen_type [8] = Y1890_pgtype8;
	Y1890_gen_type [9] = Y1890_pgtype9;
	Y1890_gen_type [10] = Y1890_pgtype10;
	Y1890_gen_type [11] = Y1890_pgtype11;
	Y1890_gen_type [12] = Y1890_pgtype12;
	Y1890_gen_type [13] = Y1890_pgtype13;
	Y1890_gen_type [69] = Y1890_pgtype14;
	Y1890_gen_type [70] = Y1890_pgtype15;
	Y1890_gen_type [71] = Y1890_pgtype16;
	Y1890_gen_type [72] = Y1890_pgtype17;
	Y1890_gen_type [73] = Y1890_pgtype18;
	Y1890_gen_type [74] = Y1890_pgtype19;
	Y1890_gen_type [75] = Y1890_pgtype20;
	Y1890_gen_type [76] = Y1890_pgtype21;
	Y1890_gen_type [77] = Y1890_pgtype22;
	Y1890_gen_type [78] = Y1890_pgtype23;
	Y1890_gen_type [79] = Y1890_pgtype24;
	Y1890_gen_type [80] = Y1890_pgtype25;
	Y1890_gen_type [81] = Y1890_pgtype26;
	Y1890_gen_type [82] = Y1890_pgtype27;
	Y1890_gen_type [83] = Y1890_pgtype28;
	Y1890_gen_type [84] = Y1890_pgtype29;
	Y1890_gen_type [85] = Y1890_pgtype30;
	Y1890_gen_type [86] = Y1890_pgtype31;
	Y1890_gen_type [87] = Y1890_pgtype32;
	Y1890_gen_type [88] = Y1890_pgtype33;
	Y1890_gen_type [89] = Y1890_pgtype34;
	Y1890_gen_type [90] = Y1890_pgtype35;
	Y1890_gen_type [91] = Y1890_pgtype36;
	Y1890_gen_type [92] = Y1890_pgtype37;
	Y1890_gen_type [93] = Y1890_pgtype38;
	Y1890_gen_type [94] = Y1890_pgtype39;
	Y1890_gen_type [95] = Y1890_pgtype40;
	Y1890_gen_type [96] = Y1890_pgtype41;
	Y1890_gen_type [97] = Y1890_pgtype42;
	Y1890_gen_type [98] = Y1890_pgtype43;
	Y1890_gen_type [99] = Y1890_pgtype44;
	Y1890_gen_type [100] = Y1890_pgtype45;
	Y1890_gen_type [101] = Y1890_pgtype46;
	Y1890_gen_type [102] = Y1890_pgtype47;
	Y1890_gen_type [103] = Y1890_pgtype48;
	Y1890_gen_type [104] = Y1890_pgtype49;
	Y1890_gen_type [105] = Y1890_pgtype50;
	Y1890_gen_type [106] = Y1890_pgtype51;
	Y1890_gen_type [107] = Y1890_pgtype52;
	Y1890_gen_type [108] = Y1890_pgtype53;
	Y1890_gen_type [109] = Y1890_pgtype54;
	Y1890_gen_type [110] = Y1890_pgtype55;
	Y1890_gen_type [111] = Y1890_pgtype56;
	Y1890_gen_type [112] = Y1890_pgtype57;
	Y1890_gen_type [113] = Y1890_pgtype58;
	Y1890_gen_type [114] = Y1890_pgtype59;
	Y1890_gen_type [115] = Y1890_pgtype60;
	Y1890_gen_type [116] = Y1890_pgtype61;
	Y1890_gen_type [117] = Y1890_pgtype62;
	Y1890_gen_type [118] = Y1890_pgtype63;
	Y1890_gen_type [119] = Y1890_pgtype64;
	Y1890_gen_type [120] = Y1890_pgtype65;
	Y1890_gen_type [121] = Y1890_pgtype66;
	Y1890_gen_type [122] = Y1890_pgtype67;
	Y1890_gen_type [123] = Y1890_pgtype68;
	Y1890_gen_type [124] = Y1890_pgtype69;
	Y1890_gen_type [125] = Y1890_pgtype70;
	Y1890_gen_type [126] = Y1890_pgtype71;
	Y1890_gen_type [127] = Y1890_pgtype72;
	Y1890_gen_type [128] = Y1890_pgtype73;
	Y1890_gen_type [129] = Y1890_pgtype74;
	Y1890_gen_type [130] = Y1890_pgtype75;
	Y1890_gen_type [131] = Y1890_pgtype76;
	Y1890_gen_type [132] = Y1890_pgtype77;
	Y1890_gen_type [133] = Y1890_pgtype78;
	Y1890_gen_type [134] = Y1890_pgtype79;
	Y1890_gen_type [135] = Y1890_pgtype80;
	Y1890_gen_type [136] = Y1890_pgtype81;
	Y1890_gen_type [137] = Y1890_pgtype82;
	Y1890_gen_type [138] = Y1890_pgtype83;
	Y1890_gen_type [139] = Y1890_pgtype84;
	Y1890_gen_type [140] = Y1890_pgtype85;
	Y1890_gen_type [141] = Y1890_pgtype86;
	Y1890_gen_type [142] = Y1890_pgtype87;
	Y1890_gen_type [143] = Y1890_pgtype88;
	Y1890_gen_type [146] = Y1890_pgtype89;
	Y1890_gen_type [147] = Y1890_pgtype90;
	Y1890_gen_type [148] = Y1890_pgtype91;
	Y1890_gen_type [149] = Y1890_pgtype92;
	Y1890_gen_type [150] = Y1890_pgtype93;
	Y1890_gen_type [151] = Y1890_pgtype94;
	Y1890_gen_type [152] = Y1890_pgtype95;
	Y1890_gen_type [153] = Y1890_pgtype96;
	Y1890_gen_type [154] = Y1890_pgtype97;
	Y1890_gen_type [155] = Y1890_pgtype98;
	Y1890_gen_type [156] = Y1890_pgtype99;
	Y1890_gen_type [157] = Y1890_pgtype100;
	Y1890_gen_type [159] = Y1890_pgtype101;
	Y1890_gen_type [160] = Y1890_pgtype102;
	Y1890_gen_type [161] = Y1890_pgtype103;
	Y1890_gen_type [162] = Y1890_pgtype104;
	Y1890_gen_type [163] = Y1890_pgtype105;
	Y1890_gen_type [164] = Y1890_pgtype106;
	Y1890_gen_type [165] = Y1890_pgtype107;
	Y1890_gen_type [359] = Y1890_pgtype108;
	Y1890_gen_type [362] = Y1890_pgtype109;
	{long i; for (i = 69; i < 144; i++) Y1890[i] = 697;};
	{long i; for (i = 146; i < 158; i++) Y1890[i] = 697;};
	{long i; for (i = 163; i < 165; i++) Y1890[i] = 769;};
	Y1890[165] = 777;
	Y1890[359] = 697;
	Y1890[362] = 697;
}

char *(*R1891[335])();
void R1891_init () {
	R1891[0] = (char *(*)()) F444_2169_1891_1;
	{long i; for (i = 26; i < 28; i++) R1891[i] = (char *(*)()) F470_2220_1891_1;}
	R1891[113] = (char *(*)()) F558_2696;
	R1891[114] = (char *(*)()) F559_2696_1891_1;
	R1891[116] = (char *(*)()) F561_2743;
	R1891[117] = (char *(*)()) F562_2779;
	R1891[118] = (char *(*)()) F563_2779_1891_1;
	R1891[119] = (char *(*)()) F564_2779_1891_1;
	R1891[120] = (char *(*)()) F565_2779_1891_1;
	R1891[121] = (char *(*)()) F566_2779_1891_1;
	R1891[122] = (char *(*)()) F567_2779_1891_1;
	R1891[123] = (char *(*)()) F568_2779_1891_1;
	R1891[124] = (char *(*)()) F569_2779_1891_1;
	R1891[125] = (char *(*)()) F570_2779_1891_1;
	R1891[126] = (char *(*)()) F571_2779_1891_1;
	R1891[127] = (char *(*)()) F572_2779_1891_1;
	R1891[128] = (char *(*)()) F573_2779_1891_1;
	R1891[334] = (char *(*)()) F470_2220_1891_1;
}
static EIF_REFERENCE F444_2169_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F444_2169(Current);
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
static EIF_REFERENCE F470_2220_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F470_2220(Current);
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
static EIF_REFERENCE F559_2696_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F559_2696(Current);
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
static EIF_REFERENCE F563_2779_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F563_2779(Current);
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
static EIF_REFERENCE F564_2779_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F564_2779(Current);
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
static EIF_REFERENCE F565_2779_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F565_2779(Current);
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
static EIF_REFERENCE F566_2779_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F566_2779(Current);
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
static EIF_REFERENCE F567_2779_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F567_2779(Current);
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
static EIF_REFERENCE F568_2779_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F568_2779(Current);
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
static EIF_REFERENCE F569_2779_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F569_2779(Current);
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
static EIF_REFERENCE F570_2779_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F570_2779(Current);
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
static EIF_REFERENCE F571_2779_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F571_2779(Current);
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
static EIF_REFERENCE F572_2779_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F572_2779(Current);
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
static EIF_REFERENCE F573_2779_1891_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F573_2779(Current);
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

static EIF_TYPE_INDEX Y1891_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1891_pgtype101[] = {0xFFF8,1,0xFFFF};
EIF_TYPE_INDEX *Y1891_gen_type [350];
EIF_TYPE_INDEX Y1891 [350];
void Y1891_init (void)
{
	egc_routines_types [1891] = Y1891;
	egc_routines_gen_types [1891] = Y1891_gen_type;
	egc_routines_offset [1891] = 429;
	Y1891_gen_type [0] = Y1891_pgtype0;
	Y1891_gen_type [1] = Y1891_pgtype1;
	Y1891_gen_type [2] = Y1891_pgtype2;
	Y1891_gen_type [3] = Y1891_pgtype3;
	Y1891_gen_type [4] = Y1891_pgtype4;
	Y1891_gen_type [5] = Y1891_pgtype5;
	Y1891_gen_type [6] = Y1891_pgtype6;
	Y1891_gen_type [7] = Y1891_pgtype7;
	Y1891_gen_type [8] = Y1891_pgtype8;
	Y1891_gen_type [9] = Y1891_pgtype9;
	Y1891_gen_type [10] = Y1891_pgtype10;
	Y1891_gen_type [11] = Y1891_pgtype11;
	Y1891_gen_type [12] = Y1891_pgtype12;
	Y1891_gen_type [13] = Y1891_pgtype13;
	Y1891_gen_type [14] = Y1891_pgtype14;
	Y1891_gen_type [16] = Y1891_pgtype15;
	Y1891_gen_type [17] = Y1891_pgtype16;
	Y1891_gen_type [18] = Y1891_pgtype17;
	Y1891_gen_type [19] = Y1891_pgtype18;
	Y1891_gen_type [20] = Y1891_pgtype19;
	Y1891_gen_type [21] = Y1891_pgtype20;
	Y1891_gen_type [22] = Y1891_pgtype21;
	Y1891_gen_type [23] = Y1891_pgtype22;
	Y1891_gen_type [24] = Y1891_pgtype23;
	Y1891_gen_type [25] = Y1891_pgtype24;
	Y1891_gen_type [26] = Y1891_pgtype25;
	Y1891_gen_type [27] = Y1891_pgtype26;
	Y1891_gen_type [28] = Y1891_pgtype27;
	Y1891_gen_type [29] = Y1891_pgtype28;
	Y1891_gen_type [30] = Y1891_pgtype29;
	Y1891_gen_type [31] = Y1891_pgtype30;
	Y1891_gen_type [32] = Y1891_pgtype31;
	Y1891_gen_type [33] = Y1891_pgtype32;
	Y1891_gen_type [34] = Y1891_pgtype33;
	Y1891_gen_type [35] = Y1891_pgtype34;
	Y1891_gen_type [36] = Y1891_pgtype35;
	Y1891_gen_type [37] = Y1891_pgtype36;
	Y1891_gen_type [38] = Y1891_pgtype37;
	Y1891_gen_type [39] = Y1891_pgtype38;
	Y1891_gen_type [80] = Y1891_pgtype39;
	Y1891_gen_type [81] = Y1891_pgtype40;
	Y1891_gen_type [82] = Y1891_pgtype41;
	Y1891_gen_type [83] = Y1891_pgtype42;
	Y1891_gen_type [84] = Y1891_pgtype43;
	Y1891_gen_type [85] = Y1891_pgtype44;
	Y1891_gen_type [86] = Y1891_pgtype45;
	Y1891_gen_type [87] = Y1891_pgtype46;
	Y1891_gen_type [88] = Y1891_pgtype47;
	Y1891_gen_type [89] = Y1891_pgtype48;
	Y1891_gen_type [90] = Y1891_pgtype49;
	Y1891_gen_type [91] = Y1891_pgtype50;
	Y1891_gen_type [92] = Y1891_pgtype51;
	Y1891_gen_type [93] = Y1891_pgtype52;
	Y1891_gen_type [94] = Y1891_pgtype53;
	Y1891_gen_type [95] = Y1891_pgtype54;
	Y1891_gen_type [96] = Y1891_pgtype55;
	Y1891_gen_type [97] = Y1891_pgtype56;
	Y1891_gen_type [98] = Y1891_pgtype57;
	Y1891_gen_type [99] = Y1891_pgtype58;
	Y1891_gen_type [100] = Y1891_pgtype59;
	Y1891_gen_type [101] = Y1891_pgtype60;
	Y1891_gen_type [102] = Y1891_pgtype61;
	Y1891_gen_type [103] = Y1891_pgtype62;
	Y1891_gen_type [104] = Y1891_pgtype63;
	Y1891_gen_type [105] = Y1891_pgtype64;
	Y1891_gen_type [106] = Y1891_pgtype65;
	Y1891_gen_type [107] = Y1891_pgtype66;
	Y1891_gen_type [108] = Y1891_pgtype67;
	Y1891_gen_type [109] = Y1891_pgtype68;
	Y1891_gen_type [110] = Y1891_pgtype69;
	Y1891_gen_type [111] = Y1891_pgtype70;
	Y1891_gen_type [112] = Y1891_pgtype71;
	Y1891_gen_type [113] = Y1891_pgtype72;
	Y1891_gen_type [114] = Y1891_pgtype73;
	Y1891_gen_type [115] = Y1891_pgtype74;
	Y1891_gen_type [116] = Y1891_pgtype75;
	Y1891_gen_type [117] = Y1891_pgtype76;
	Y1891_gen_type [118] = Y1891_pgtype77;
	Y1891_gen_type [119] = Y1891_pgtype78;
	Y1891_gen_type [120] = Y1891_pgtype79;
	Y1891_gen_type [121] = Y1891_pgtype80;
	Y1891_gen_type [122] = Y1891_pgtype81;
	Y1891_gen_type [123] = Y1891_pgtype82;
	Y1891_gen_type [124] = Y1891_pgtype83;
	Y1891_gen_type [125] = Y1891_pgtype84;
	Y1891_gen_type [126] = Y1891_pgtype85;
	Y1891_gen_type [127] = Y1891_pgtype86;
	Y1891_gen_type [128] = Y1891_pgtype87;
	Y1891_gen_type [129] = Y1891_pgtype88;
	Y1891_gen_type [131] = Y1891_pgtype89;
	Y1891_gen_type [132] = Y1891_pgtype90;
	Y1891_gen_type [133] = Y1891_pgtype91;
	Y1891_gen_type [134] = Y1891_pgtype92;
	Y1891_gen_type [135] = Y1891_pgtype93;
	Y1891_gen_type [136] = Y1891_pgtype94;
	Y1891_gen_type [137] = Y1891_pgtype95;
	Y1891_gen_type [138] = Y1891_pgtype96;
	Y1891_gen_type [139] = Y1891_pgtype97;
	Y1891_gen_type [140] = Y1891_pgtype98;
	Y1891_gen_type [141] = Y1891_pgtype99;
	Y1891_gen_type [142] = Y1891_pgtype100;
	Y1891_gen_type [143] = Y1891_pgtype101;
	Y1891[15] = 697;
	{long i; for (i = 40; i < 43; i++) Y1891[i] = 727;};
	Y1891[349] = 727;
}

char *(*R1892[335])();
void R1892_init () {
	R1892[0] = (char *(*)()) F444_2173;
	{long i; for (i = 26; i < 28; i++) R1892[i] = (char *(*)()) F465_2200;}
	R1892[113] = (char *(*)()) F558_2704;
	R1892[114] = (char *(*)()) F559_2704;
	R1892[116] = (char *(*)()) F442_2161;
	R1892[117] = (char *(*)()) F458_2200;
	R1892[118] = (char *(*)()) F459_2200;
	R1892[119] = (char *(*)()) F460_2200;
	R1892[120] = (char *(*)()) F461_2200;
	R1892[121] = (char *(*)()) F462_2200;
	R1892[122] = (char *(*)()) F463_2200;
	R1892[123] = (char *(*)()) F464_2200;
	R1892[124] = (char *(*)()) F465_2200;
	R1892[125] = (char *(*)()) F466_2200;
	R1892[126] = (char *(*)()) F467_2200;
	R1892[127] = (char *(*)()) F468_2200;
	R1892[128] = (char *(*)()) F469_2200;
	R1892[334] = (char *(*)()) F465_2200;
}

char *(*R1893[335])();
void R1893_init () {
	R1893[0] = (char *(*)()) F444_2174;
	{long i; for (i = 26; i < 28; i++) R1893[i] = (char *(*)()) F465_2201;}
	R1893[113] = (char *(*)()) F458_2201;
	R1893[114] = (char *(*)()) F459_2201;
	R1893[116] = (char *(*)()) F442_2162;
	R1893[117] = (char *(*)()) F458_2201;
	R1893[118] = (char *(*)()) F459_2201;
	R1893[119] = (char *(*)()) F460_2201;
	R1893[120] = (char *(*)()) F461_2201;
	R1893[121] = (char *(*)()) F462_2201;
	R1893[122] = (char *(*)()) F463_2201;
	R1893[123] = (char *(*)()) F464_2201;
	R1893[124] = (char *(*)()) F465_2201;
	R1893[125] = (char *(*)()) F466_2201;
	R1893[126] = (char *(*)()) F467_2201;
	R1893[127] = (char *(*)()) F468_2201;
	R1893[128] = (char *(*)()) F469_2201;
	R1893[334] = (char *(*)()) F465_2201;
}

char *(*R1894[335])();
void R1894_init () {
	R1894[0] = (char *(*)()) F444_2175;
	{long i; for (i = 26; i < 28; i++) R1894[i] = (char *(*)()) F470_2273;}
	R1894[113] = (char *(*)()) F430_2158;
	R1894[114] = (char *(*)()) F431_2158;
	{long i; for (i = 116; i < 118; i++) R1894[i] = (char *(*)()) F430_2158;}
	R1894[118] = (char *(*)()) F431_2158;
	R1894[119] = (char *(*)()) F434_2158;
	R1894[120] = (char *(*)()) F435_2158;
	R1894[121] = (char *(*)()) F436_2158;
	R1894[122] = (char *(*)()) F437_2158;
	R1894[123] = (char *(*)()) F438_2158;
	R1894[124] = (char *(*)()) F433_2158;
	R1894[125] = (char *(*)()) F439_2158;
	R1894[126] = (char *(*)()) F440_2158;
	R1894[127] = (char *(*)()) F432_2158;
	R1894[128] = (char *(*)()) F441_2158;
	R1894[334] = (char *(*)()) F470_2273;
}

char *(*R1895[335])();
void R1895_init () {
	R1895[0] = (char *(*)()) F444_2184_1895_4;
	{long i; for (i = 26; i < 28; i++) R1895[i] = (char *(*)()) F470_2422_1895_4;}
	R1895[113] = (char *(*)()) F558_2724;
	R1895[114] = (char *(*)()) F559_2724_1895_4;
	R1895[116] = (char *(*)()) F561_2758;
	R1895[117] = (char *(*)()) F562_2818;
	R1895[118] = (char *(*)()) F563_2818_1895_4;
	R1895[119] = (char *(*)()) F564_2818_1895_4;
	R1895[120] = (char *(*)()) F565_2818_1895_4;
	R1895[121] = (char *(*)()) F566_2818_1895_4;
	R1895[122] = (char *(*)()) F567_2818_1895_4;
	R1895[123] = (char *(*)()) F568_2818_1895_4;
	R1895[124] = (char *(*)()) F569_2818_1895_4;
	R1895[125] = (char *(*)()) F570_2818_1895_4;
	R1895[126] = (char *(*)()) F571_2818_1895_4;
	R1895[127] = (char *(*)()) F572_2818_1895_4;
	R1895[128] = (char *(*)()) F573_2818_1895_4;
	R1895[334] = (char *(*)()) F470_2422_1895_4;
}
static void F444_2184_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F444_2184(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F470_2422_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F470_2422(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F559_2724_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F559_2724(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F563_2818_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F563_2818(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F564_2818_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F564_2818(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F565_2818_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F565_2818(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F566_2818_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F566_2818(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F567_2818_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F567_2818(Current, *(EIF_REAL_32 *)arg1);
}
static void F568_2818_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F568_2818(Current, *(EIF_REAL_64 *)arg1);
}
static void F569_2818_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F569_2818(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F570_2818_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F570_2818(Current, *(EIF_BOOLEAN *)arg1);
}
static void F571_2818_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F571_2818(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F572_2818_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F572_2818(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F573_2818_1895_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F573_2818(Current, *(EIF_POINTER *)arg1);
}

char *(*R1896[335])();
void R1896_init () {
	R1896[0] = (char *(*)()) F444_2183;
	{long i; for (i = 26; i < 28; i++) R1896[i] = (char *(*)()) F470_2423;}
	R1896[113] = (char *(*)()) F558_2727;
	R1896[114] = (char *(*)()) F559_2727;
	R1896[116] = (char *(*)()) F561_2760;
	R1896[117] = (char *(*)()) F562_2828;
	R1896[118] = (char *(*)()) F563_2828;
	R1896[119] = (char *(*)()) F564_2828;
	R1896[120] = (char *(*)()) F565_2828;
	R1896[121] = (char *(*)()) F566_2828;
	R1896[122] = (char *(*)()) F567_2828;
	R1896[123] = (char *(*)()) F568_2828;
	R1896[124] = (char *(*)()) F569_2828;
	R1896[125] = (char *(*)()) F570_2828;
	R1896[126] = (char *(*)()) F571_2828;
	R1896[127] = (char *(*)()) F572_2828;
	R1896[128] = (char *(*)()) F573_2828;
	R1896[334] = (char *(*)()) F470_2423;
}

char *(*R1908[16])();
void R1908_init () {
	R1908[0] = (char *(*)()) F558_2700;
	R1908[1] = (char *(*)()) F559_2700;
	R1908[4] = (char *(*)()) F562_2785;
	R1908[5] = (char *(*)()) F563_2785;
	R1908[6] = (char *(*)()) F564_2785;
	R1908[7] = (char *(*)()) F565_2785;
	R1908[8] = (char *(*)()) F566_2785;
	R1908[9] = (char *(*)()) F567_2785;
	R1908[10] = (char *(*)()) F568_2785;
	R1908[11] = (char *(*)()) F569_2785;
	R1908[12] = (char *(*)()) F570_2785;
	R1908[13] = (char *(*)()) F571_2785;
	R1908[14] = (char *(*)()) F572_2785;
	R1908[15] = (char *(*)()) F573_2785;
}

static EIF_TYPE_INDEX Y1908_pgtype0[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype1[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype2[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype3[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype4[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype5[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype6[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype7[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype8[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype9[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype10[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype11[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype12[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype13[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype14[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype15[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype16[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype17[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype18[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype19[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype20[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype21[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype22[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype23[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype24[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype25[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype26[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype27[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype28[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype29[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype30[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype31[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype32[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype33[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype34[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype35[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype36[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype37[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype38[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype39[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype40[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype41[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype42[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype43[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype44[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype45[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype46[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype47[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype48[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype49[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype50[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype51[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype52[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype53[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype54[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype55[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype56[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype57[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype58[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype59[] = {0xFF01,112,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype60[] = {0xFF01,113,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype61[] = {0xFF01,114,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype62[] = {0xFF01,116,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype63[] = {0xFF01,116,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype64[] = {0xFF01,116,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype65[] = {0xFF01,116,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype66[] = {0xFF01,116,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype67[] = {0xFF01,116,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype68[] = {0xFF01,116,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype69[] = {0xFF01,116,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype70[] = {0xFF01,116,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype71[] = {0xFF01,116,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype72[] = {0xFF01,116,0xFFFF};
static EIF_TYPE_INDEX Y1908_pgtype73[] = {0xFF01,116,0xFFFF};
EIF_TYPE_INDEX *Y1908_gen_type [128];
EIF_TYPE_INDEX Y1908 [128];
void Y1908_init (void)
{
	egc_routines_types [1908] = Y1908;
	egc_routines_gen_types [1908] = Y1908_gen_type;
	egc_routines_offset [1908] = 445;
	Y1908_gen_type [0] = Y1908_pgtype0;
	Y1908_gen_type [1] = Y1908_pgtype1;
	Y1908_gen_type [2] = Y1908_pgtype2;
	Y1908_gen_type [3] = Y1908_pgtype3;
	Y1908_gen_type [4] = Y1908_pgtype4;
	Y1908_gen_type [5] = Y1908_pgtype5;
	Y1908_gen_type [6] = Y1908_pgtype6;
	Y1908_gen_type [7] = Y1908_pgtype7;
	Y1908_gen_type [8] = Y1908_pgtype8;
	Y1908_gen_type [9] = Y1908_pgtype9;
	Y1908_gen_type [10] = Y1908_pgtype10;
	Y1908_gen_type [11] = Y1908_pgtype11;
	Y1908_gen_type [64] = Y1908_pgtype12;
	Y1908_gen_type [65] = Y1908_pgtype13;
	Y1908_gen_type [66] = Y1908_pgtype14;
	Y1908_gen_type [67] = Y1908_pgtype15;
	Y1908_gen_type [68] = Y1908_pgtype16;
	Y1908_gen_type [69] = Y1908_pgtype17;
	Y1908_gen_type [70] = Y1908_pgtype18;
	Y1908_gen_type [71] = Y1908_pgtype19;
	Y1908_gen_type [72] = Y1908_pgtype20;
	Y1908_gen_type [73] = Y1908_pgtype21;
	Y1908_gen_type [74] = Y1908_pgtype22;
	Y1908_gen_type [75] = Y1908_pgtype23;
	Y1908_gen_type [76] = Y1908_pgtype24;
	Y1908_gen_type [77] = Y1908_pgtype25;
	Y1908_gen_type [78] = Y1908_pgtype26;
	Y1908_gen_type [79] = Y1908_pgtype27;
	Y1908_gen_type [80] = Y1908_pgtype28;
	Y1908_gen_type [81] = Y1908_pgtype29;
	Y1908_gen_type [82] = Y1908_pgtype30;
	Y1908_gen_type [83] = Y1908_pgtype31;
	Y1908_gen_type [84] = Y1908_pgtype32;
	Y1908_gen_type [85] = Y1908_pgtype33;
	Y1908_gen_type [86] = Y1908_pgtype34;
	Y1908_gen_type [87] = Y1908_pgtype35;
	Y1908_gen_type [88] = Y1908_pgtype36;
	Y1908_gen_type [89] = Y1908_pgtype37;
	Y1908_gen_type [90] = Y1908_pgtype38;
	Y1908_gen_type [91] = Y1908_pgtype39;
	Y1908_gen_type [92] = Y1908_pgtype40;
	Y1908_gen_type [93] = Y1908_pgtype41;
	Y1908_gen_type [94] = Y1908_pgtype42;
	Y1908_gen_type [95] = Y1908_pgtype43;
	Y1908_gen_type [96] = Y1908_pgtype44;
	Y1908_gen_type [97] = Y1908_pgtype45;
	Y1908_gen_type [98] = Y1908_pgtype46;
	Y1908_gen_type [99] = Y1908_pgtype47;
	Y1908_gen_type [100] = Y1908_pgtype48;
	Y1908_gen_type [101] = Y1908_pgtype49;
	Y1908_gen_type [102] = Y1908_pgtype50;
	Y1908_gen_type [103] = Y1908_pgtype51;
	Y1908_gen_type [104] = Y1908_pgtype52;
	Y1908_gen_type [105] = Y1908_pgtype53;
	Y1908_gen_type [106] = Y1908_pgtype54;
	Y1908_gen_type [107] = Y1908_pgtype55;
	Y1908_gen_type [108] = Y1908_pgtype56;
	Y1908_gen_type [109] = Y1908_pgtype57;
	Y1908_gen_type [110] = Y1908_pgtype58;
	Y1908_gen_type [111] = Y1908_pgtype59;
	Y1908_gen_type [112] = Y1908_pgtype60;
	Y1908_gen_type [113] = Y1908_pgtype61;
	Y1908_gen_type [116] = Y1908_pgtype62;
	Y1908_gen_type [117] = Y1908_pgtype63;
	Y1908_gen_type [118] = Y1908_pgtype64;
	Y1908_gen_type [119] = Y1908_pgtype65;
	Y1908_gen_type [120] = Y1908_pgtype66;
	Y1908_gen_type [121] = Y1908_pgtype67;
	Y1908_gen_type [122] = Y1908_pgtype68;
	Y1908_gen_type [123] = Y1908_pgtype69;
	Y1908_gen_type [124] = Y1908_pgtype70;
	Y1908_gen_type [125] = Y1908_pgtype71;
	Y1908_gen_type [126] = Y1908_pgtype72;
	Y1908_gen_type [127] = Y1908_pgtype73;
	{long i; for (i = 0; i < 12; i++) Y1908[i] = 112;};
	{long i; for (i = 64; i < 112; i++) Y1908[i] = 112;};
	Y1908[112] = 113;
	Y1908[113] = 114;
	{long i; for (i = 116; i < 128; i++) Y1908[i] = 116;};
}

char *(*R1909[16])();
void R1909_init () {
	R1909[0] = (char *(*)()) F558_2710;
	R1909[1] = (char *(*)()) F559_2710;
	R1909[4] = (char *(*)()) F562_2800;
	R1909[5] = (char *(*)()) F563_2800;
	R1909[6] = (char *(*)()) F564_2800;
	R1909[7] = (char *(*)()) F565_2800;
	R1909[8] = (char *(*)()) F566_2800;
	R1909[9] = (char *(*)()) F567_2800;
	R1909[10] = (char *(*)()) F568_2800;
	R1909[11] = (char *(*)()) F569_2800;
	R1909[12] = (char *(*)()) F570_2800;
	R1909[13] = (char *(*)()) F571_2800;
	R1909[14] = (char *(*)()) F572_2800;
	R1909[15] = (char *(*)()) F573_2800;
}

char *(*R1910[16])();
void R1910_init () {
	R1910[0] = (char *(*)()) F558_2719;
	R1910[1] = (char *(*)()) F559_2719;
	R1910[4] = (char *(*)()) F562_2810;
	R1910[5] = (char *(*)()) F563_2810;
	R1910[6] = (char *(*)()) F564_2810;
	R1910[7] = (char *(*)()) F565_2810;
	R1910[8] = (char *(*)()) F566_2810;
	R1910[9] = (char *(*)()) F567_2810;
	R1910[10] = (char *(*)()) F568_2810;
	R1910[11] = (char *(*)()) F569_2810;
	R1910[12] = (char *(*)()) F570_2810;
	R1910[13] = (char *(*)()) F571_2810;
	R1910[14] = (char *(*)()) F572_2810;
	R1910[15] = (char *(*)()) F573_2810;
}

char *(*R1911[309])();
void R1911_init () {
	{long i; for (i = 0; i < 2; i++) R1911[i] = (char *(*)()) F465_2202_1911_4;}
	R1911[87] = (char *(*)()) F458_2202;
	R1911[88] = (char *(*)()) F459_2202_1911_4;
	R1911[91] = (char *(*)()) F562_2814;
	R1911[92] = (char *(*)()) F563_2814_1911_4;
	R1911[93] = (char *(*)()) F564_2814_1911_4;
	R1911[94] = (char *(*)()) F565_2814_1911_4;
	R1911[95] = (char *(*)()) F566_2814_1911_4;
	R1911[96] = (char *(*)()) F567_2814_1911_4;
	R1911[97] = (char *(*)()) F568_2814_1911_4;
	R1911[98] = (char *(*)()) F569_2814_1911_4;
	R1911[99] = (char *(*)()) F570_2814_1911_4;
	R1911[100] = (char *(*)()) F571_2814_1911_4;
	R1911[101] = (char *(*)()) F572_2814_1911_4;
	R1911[102] = (char *(*)()) F573_2814_1911_4;
	R1911[308] = (char *(*)()) F465_2202_1911_4;
}
static void F465_2202_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F465_2202(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F459_2202_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F459_2202(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F563_2814_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F563_2814(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F564_2814_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F564_2814(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F565_2814_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F565_2814(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F566_2814_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F566_2814(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F567_2814_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F567_2814(Current, *(EIF_REAL_32 *)arg1);
}
static void F568_2814_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F568_2814(Current, *(EIF_REAL_64 *)arg1);
}
static void F569_2814_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F569_2814(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F570_2814_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F570_2814(Current, *(EIF_BOOLEAN *)arg1);
}
static void F571_2814_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F571_2814(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F572_2814_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F572_2814(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F573_2814_1911_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F573_2814(Current, *(EIF_POINTER *)arg1);
}

char *(*R1939[309])();
void R1939_init () {
	{long i; for (i = 0; i < 2; i++) R1939[i] = (char *(*)()) F470_2242;}
	R1939[308] = (char *(*)()) F779_4955;
}

char *(*R1984[309])();
void R1984_init () {
	{long i; for (i = 0; i < 2; i++) R1984[i] = (char *(*)()) F470_2303;}
	R1984[308] = (char *(*)()) F779_4976;
}

char *(*R2004[309])();
void R2004_init () {
	{long i; for (i = 0; i < 2; i++) R2004[i] = (char *(*)()) F470_2360;}
	R2004[308] = (char *(*)()) F779_4971;
}

char *(*R2008[309])();
void R2008_init () {
	R2008[0] = (char *(*)()) F471_2477;
	R2008[1] = (char *(*)()) F470_2364;
	R2008[308] = (char *(*)()) F470_2364;
}

char *(*R2009[309])();
void R2009_init () {
	{long i; for (i = 0; i < 2; i++) R2009[i] = (char *(*)()) F470_2365;}
	R2009[308] = (char *(*)()) F779_5011;
}

char *(*R2024[309])();
void R2024_init () {
	R2024[0] = (char *(*)()) F471_2478;
	R2024[1] = (char *(*)()) F470_2380;
	R2024[308] = (char *(*)()) F470_2380;
}

char *(*R2025[309])();
void R2025_init () {
	R2025[0] = (char *(*)()) F471_2479;
	R2025[1] = (char *(*)()) F470_2381;
	R2025[308] = (char *(*)()) F470_2381;
}

char *(*R2087[308])();
void R2087_init () {
	R2087[0] = (char *(*)()) F472_2518;
	R2087[307] = (char *(*)()) F779_4991;
}

char *(*R2091[308])();
void R2091_init () {
	R2091[0] = (char *(*)()) F472_2522;
	R2091[307] = (char *(*)()) F779_4992;
}

char *(*R2099[282])();
void R2099_init () {
	R2099[0] = (char *(*)()) F497_2542_2099_33;
	R2099[1] = (char *(*)()) F498_2581;
	R2099[2] = (char *(*)()) F499_2581_2099_33;
	R2099[3] = (char *(*)()) F500_2581_2099_33;
	R2099[4] = (char *(*)()) F501_2581_2099_33;
	R2099[5] = (char *(*)()) F502_2581_2099_33;
	R2099[6] = (char *(*)()) F503_2581_2099_33;
	R2099[7] = (char *(*)()) F504_2581_2099_33;
	R2099[8] = (char *(*)()) F505_2581_2099_33;
	R2099[9] = (char *(*)()) F506_2581_2099_33;
	R2099[10] = (char *(*)()) F507_2581_2099_33;
	R2099[11] = (char *(*)()) F508_2581_2099_33;
	R2099[12] = (char *(*)()) F509_2581_2099_33;
	R2099[61] = (char *(*)()) F510_2638;
	R2099[62] = (char *(*)()) F511_2638_2099_33;
	R2099[65] = (char *(*)()) F562_2780;
	R2099[66] = (char *(*)()) F563_2780_2099_33;
	R2099[67] = (char *(*)()) F564_2780_2099_33;
	R2099[68] = (char *(*)()) F565_2780_2099_33;
	R2099[69] = (char *(*)()) F566_2780_2099_33;
	R2099[70] = (char *(*)()) F567_2780_2099_33;
	R2099[71] = (char *(*)()) F568_2780_2099_33;
	R2099[72] = (char *(*)()) F569_2780_2099_33;
	R2099[73] = (char *(*)()) F570_2780_2099_33;
	R2099[74] = (char *(*)()) F571_2780_2099_33;
	R2099[75] = (char *(*)()) F572_2780_2099_33;
	R2099[76] = (char *(*)()) F573_2780_2099_33;
	R2099[78] = (char *(*)()) F575_2874;
	R2099[79] = (char *(*)()) F576_2874_2099_33;
	R2099[80] = (char *(*)()) F577_2874;
	R2099[81] = (char *(*)()) F578_2874_2099_33;
	R2099[82] = (char *(*)()) F575_2874;
	R2099[83] = (char *(*)()) F576_2874_2099_33;
	R2099[84] = (char *(*)()) F575_2874;
	R2099[89] = (char *(*)()) F586_3091;
	R2099[90] = (char *(*)()) F587_3091_2099_33;
	R2099[91] = (char *(*)()) F588_3091_2099_33;
	R2099[92] = (char *(*)()) F589_3091_2099_33;
	R2099[93] = (char *(*)()) F590_3091_2099_33;
	R2099[94] = (char *(*)()) F591_3091_2099_33;
	R2099[95] = (char *(*)()) F592_3091_2099_33;
	R2099[96] = (char *(*)()) F593_3091_2099_33;
	R2099[97] = (char *(*)()) F594_3091_2099_33;
	R2099[98] = (char *(*)()) F595_3091_2099_33;
	R2099[99] = (char *(*)()) F596_3091_2099_33;
	R2099[100] = (char *(*)()) F597_3091_2099_33;
	R2099[195] = (char *(*)()) F692_3302;
	R2099[277] = (char *(*)()) F774_4682_2099_33;
	R2099[278] = (char *(*)()) F775_4704_2099_33;
	R2099[280] = (char *(*)()) F777_4844_2099_33;
	R2099[281] = (char *(*)()) F778_4865_2099_33;
}
static EIF_REFERENCE F497_2542_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F497_2542(Current, arg1);
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
static EIF_REFERENCE F499_2581_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F499_2581(Current, arg1);
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
static EIF_REFERENCE F500_2581_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F500_2581(Current, arg1);
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
static EIF_REFERENCE F501_2581_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F501_2581(Current, arg1);
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
static EIF_REFERENCE F502_2581_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F502_2581(Current, arg1);
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
static EIF_REFERENCE F503_2581_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F503_2581(Current, arg1);
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
static EIF_REFERENCE F504_2581_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F504_2581(Current, arg1);
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
static EIF_REFERENCE F505_2581_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F505_2581(Current, arg1);
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
static EIF_REFERENCE F506_2581_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F506_2581(Current, arg1);
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
static EIF_REFERENCE F507_2581_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F507_2581(Current, arg1);
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
static EIF_REFERENCE F508_2581_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F508_2581(Current, arg1);
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
static EIF_REFERENCE F509_2581_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F509_2581(Current, arg1);
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
static EIF_REFERENCE F511_2638_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F511_2638(Current, arg1);
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
static EIF_REFERENCE F563_2780_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F563_2780(Current, arg1);
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
static EIF_REFERENCE F564_2780_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F564_2780(Current, arg1);
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
static EIF_REFERENCE F565_2780_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F565_2780(Current, arg1);
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
static EIF_REFERENCE F566_2780_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F566_2780(Current, arg1);
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
static EIF_REFERENCE F567_2780_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F567_2780(Current, arg1);
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
static EIF_REFERENCE F568_2780_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F568_2780(Current, arg1);
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
static EIF_REFERENCE F569_2780_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F569_2780(Current, arg1);
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
static EIF_REFERENCE F570_2780_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F570_2780(Current, arg1);
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
static EIF_REFERENCE F571_2780_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F571_2780(Current, arg1);
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
static EIF_REFERENCE F572_2780_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F572_2780(Current, arg1);
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
static EIF_REFERENCE F573_2780_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F573_2780(Current, arg1);
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
static EIF_REFERENCE F576_2874_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F576_2874(Current, arg1);
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
static EIF_REFERENCE F578_2874_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F578_2874(Current, arg1);
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
static EIF_REFERENCE F587_3091_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F587_3091(Current, arg1);
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
static EIF_REFERENCE F588_3091_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F588_3091(Current, arg1);
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
static EIF_REFERENCE F589_3091_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F589_3091(Current, arg1);
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
static EIF_REFERENCE F590_3091_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F590_3091(Current, arg1);
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
static EIF_REFERENCE F591_3091_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F591_3091(Current, arg1);
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
static EIF_REFERENCE F592_3091_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F592_3091(Current, arg1);
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
static EIF_REFERENCE F593_3091_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F593_3091(Current, arg1);
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
static EIF_REFERENCE F594_3091_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F594_3091(Current, arg1);
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
static EIF_REFERENCE F595_3091_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F595_3091(Current, arg1);
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
static EIF_REFERENCE F596_3091_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F596_3091(Current, arg1);
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
static EIF_REFERENCE F597_3091_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F597_3091(Current, arg1);
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
static EIF_REFERENCE F774_4682_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F774_4682(Current, arg1);
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
static EIF_REFERENCE F775_4704_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F775_4704(Current, arg1);
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
static EIF_REFERENCE F777_4844_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F777_4844(Current, arg1);
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
static EIF_REFERENCE F778_4865_2099_33 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F778_4865(Current, arg1);
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

char *(*R2100[282])();
void R2100_init () {
	R2100[0] = (char *(*)()) F497_2539;
	R2100[1] = (char *(*)()) F498_2586;
	R2100[2] = (char *(*)()) F499_2586;
	R2100[3] = (char *(*)()) F500_2586;
	R2100[4] = (char *(*)()) F501_2586;
	R2100[5] = (char *(*)()) F502_2586;
	R2100[6] = (char *(*)()) F503_2586;
	R2100[7] = (char *(*)()) F504_2586;
	R2100[8] = (char *(*)()) F505_2586;
	R2100[9] = (char *(*)()) F506_2586;
	R2100[10] = (char *(*)()) F507_2586;
	R2100[11] = (char *(*)()) F508_2586;
	R2100[12] = (char *(*)()) F509_2586;
	R2100[61] = (char *(*)()) F510_2641;
	R2100[62] = (char *(*)()) F511_2641;
	R2100[65] = (char *(*)()) F510_2641;
	R2100[66] = (char *(*)()) F511_2641;
	R2100[67] = (char *(*)()) F512_2641;
	R2100[68] = (char *(*)()) F513_2641;
	R2100[69] = (char *(*)()) F514_2641;
	R2100[70] = (char *(*)()) F515_2641;
	R2100[71] = (char *(*)()) F516_2641;
	R2100[72] = (char *(*)()) F517_2641;
	R2100[73] = (char *(*)()) F518_2641;
	R2100[74] = (char *(*)()) F519_2641;
	R2100[75] = (char *(*)()) F520_2641;
	R2100[76] = (char *(*)()) F521_2641;
	R2100[78] = (char *(*)()) F575_2879;
	R2100[79] = (char *(*)()) F576_2879;
	R2100[80] = (char *(*)()) F577_2879;
	R2100[81] = (char *(*)()) F578_2879;
	R2100[82] = (char *(*)()) F575_2879;
	R2100[83] = (char *(*)()) F576_2879;
	R2100[84] = (char *(*)()) F575_2879;
	R2100[89] = (char *(*)()) F586_3099;
	R2100[90] = (char *(*)()) F587_3099;
	R2100[91] = (char *(*)()) F588_3099;
	R2100[92] = (char *(*)()) F589_3099;
	R2100[93] = (char *(*)()) F590_3099;
	R2100[94] = (char *(*)()) F591_3099;
	R2100[95] = (char *(*)()) F592_3099;
	R2100[96] = (char *(*)()) F593_3099;
	R2100[97] = (char *(*)()) F594_3099;
	R2100[98] = (char *(*)()) F595_3099;
	R2100[99] = (char *(*)()) F596_3099;
	R2100[100] = (char *(*)()) F597_3099;
	R2100[195] = (char *(*)()) F692_3332;
	{long i; for (i = 277; i < 279; i++) R2100[i] = (char *(*)()) F773_4647;}
	{long i; for (i = 280; i < 282; i++) R2100[i] = (char *(*)()) F776_4812;}
}

EIF_TYPE_INDEX *Y2100_gen_type [306];
EIF_TYPE_INDEX Y2100 [306];
void Y2100_init (void)
{
	egc_routines_types [2100] = Y2100;
	egc_routines_gen_types [2100] = Y2100_gen_type;
	egc_routines_offset [2100] = 472;
	{long i; for (i = 0; i < 87; i++) Y2100[i] = 697;};
	{long i; for (i = 89; i < 101; i++) Y2100[i] = 697;};
	{long i; for (i = 102; i < 109; i++) Y2100[i] = 697;};
	{long i; for (i = 113; i < 125; i++) Y2100[i] = 697;};
	Y2100[219] = 697;
	{long i; for (i = 300; i < 306; i++) Y2100[i] = 697;};
}

char *(*R2101[282])();
void R2101_init () {
	R2101[0] = (char *(*)()) F497_2541;
	R2101[1] = (char *(*)()) F498_2587;
	R2101[2] = (char *(*)()) F499_2587;
	R2101[3] = (char *(*)()) F500_2587;
	R2101[4] = (char *(*)()) F501_2587;
	R2101[5] = (char *(*)()) F502_2587;
	R2101[6] = (char *(*)()) F503_2587;
	R2101[7] = (char *(*)()) F504_2587;
	R2101[8] = (char *(*)()) F505_2587;
	R2101[9] = (char *(*)()) F506_2587;
	R2101[10] = (char *(*)()) F507_2587;
	R2101[11] = (char *(*)()) F508_2587;
	R2101[12] = (char *(*)()) F509_2587;
	R2101[61] = (char *(*)()) F558_2703;
	R2101[62] = (char *(*)()) F559_2703;
	R2101[65] = (char *(*)()) F562_2795;
	R2101[66] = (char *(*)()) F563_2795;
	R2101[67] = (char *(*)()) F564_2795;
	R2101[68] = (char *(*)()) F565_2795;
	R2101[69] = (char *(*)()) F566_2795;
	R2101[70] = (char *(*)()) F567_2795;
	R2101[71] = (char *(*)()) F568_2795;
	R2101[72] = (char *(*)()) F569_2795;
	R2101[73] = (char *(*)()) F570_2795;
	R2101[74] = (char *(*)()) F571_2795;
	R2101[75] = (char *(*)()) F572_2795;
	R2101[76] = (char *(*)()) F573_2795;
	R2101[78] = (char *(*)()) F575_2880;
	R2101[79] = (char *(*)()) F576_2880;
	R2101[80] = (char *(*)()) F577_2880;
	R2101[81] = (char *(*)()) F578_2880;
	R2101[82] = (char *(*)()) F575_2880;
	R2101[83] = (char *(*)()) F576_2880;
	R2101[84] = (char *(*)()) F575_2880;
	R2101[89] = (char *(*)()) F586_3100;
	R2101[90] = (char *(*)()) F587_3100;
	R2101[91] = (char *(*)()) F588_3100;
	R2101[92] = (char *(*)()) F589_3100;
	R2101[93] = (char *(*)()) F590_3100;
	R2101[94] = (char *(*)()) F591_3100;
	R2101[95] = (char *(*)()) F592_3100;
	R2101[96] = (char *(*)()) F593_3100;
	R2101[97] = (char *(*)()) F594_3100;
	R2101[98] = (char *(*)()) F595_3100;
	R2101[99] = (char *(*)()) F596_3100;
	R2101[100] = (char *(*)()) F597_3100;
	R2101[195] = (char *(*)()) F692_3331;
	{long i; for (i = 277; i < 279; i++) R2101[i] = (char *(*)()) F773_4645;}
	{long i; for (i = 280; i < 282; i++) R2101[i] = (char *(*)()) F776_4810;}
}

char *(*R2103[282])();
void R2103_init () {
	R2103[0] = (char *(*)()) F497_2545;
	R2103[1] = (char *(*)()) F498_2596;
	R2103[2] = (char *(*)()) F499_2596;
	R2103[3] = (char *(*)()) F500_2596;
	R2103[4] = (char *(*)()) F501_2596;
	R2103[5] = (char *(*)()) F502_2596;
	R2103[6] = (char *(*)()) F503_2596;
	R2103[7] = (char *(*)()) F504_2596;
	R2103[8] = (char *(*)()) F505_2596;
	R2103[9] = (char *(*)()) F506_2596;
	R2103[10] = (char *(*)()) F507_2596;
	R2103[11] = (char *(*)()) F508_2596;
	R2103[12] = (char *(*)()) F509_2596;
	R2103[61] = (char *(*)()) F510_2646;
	R2103[62] = (char *(*)()) F511_2646;
	R2103[65] = (char *(*)()) F562_2801;
	R2103[66] = (char *(*)()) F563_2801;
	R2103[67] = (char *(*)()) F564_2801;
	R2103[68] = (char *(*)()) F565_2801;
	R2103[69] = (char *(*)()) F566_2801;
	R2103[70] = (char *(*)()) F567_2801;
	R2103[71] = (char *(*)()) F568_2801;
	R2103[72] = (char *(*)()) F569_2801;
	R2103[73] = (char *(*)()) F570_2801;
	R2103[74] = (char *(*)()) F571_2801;
	R2103[75] = (char *(*)()) F572_2801;
	R2103[76] = (char *(*)()) F573_2801;
	R2103[78] = (char *(*)()) F575_2897;
	R2103[79] = (char *(*)()) F576_2897;
	R2103[80] = (char *(*)()) F577_2897;
	R2103[81] = (char *(*)()) F578_2897;
	R2103[82] = (char *(*)()) F575_2897;
	R2103[83] = (char *(*)()) F576_2897;
	R2103[84] = (char *(*)()) F575_2897;
	R2103[89] = (char *(*)()) F586_3105;
	R2103[90] = (char *(*)()) F587_3105;
	R2103[91] = (char *(*)()) F588_3105;
	R2103[92] = (char *(*)()) F589_3105;
	R2103[93] = (char *(*)()) F590_3105;
	R2103[94] = (char *(*)()) F591_3105;
	R2103[95] = (char *(*)()) F592_3105;
	R2103[96] = (char *(*)()) F593_3105;
	R2103[97] = (char *(*)()) F594_3105;
	R2103[98] = (char *(*)()) F595_3105;
	R2103[99] = (char *(*)()) F596_3105;
	R2103[100] = (char *(*)()) F597_3105;
	R2103[195] = (char *(*)()) F692_3329;
	{long i; for (i = 277; i < 279; i++) R2103[i] = (char *(*)()) F770_4507;}
	{long i; for (i = 280; i < 282; i++) R2103[i] = (char *(*)()) F770_4507;}
}


#ifdef __cplusplus
}
#endif
