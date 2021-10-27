#include "epoly1.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R11[908])();
void R11_init () {
	{long i; for (i = 0; i < 19; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 21; i < 23; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 24; i < 29; i++) R11[i] = (char *(*)()) F1_8;}
	R11[30] = (char *(*)()) F1_8;
	{long i; for (i = 32; i < 38; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 39; i < 41; i++) R11[i] = (char *(*)()) F1_8;}
	R11[46] = (char *(*)()) F1_8;
	{long i; for (i = 49; i < 55; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 56; i < 63; i++) R11[i] = (char *(*)()) F1_8;}
	R11[65] = (char *(*)()) F1_8;
	{long i; for (i = 67; i < 70; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 71; i < 74; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 75; i < 77; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 79; i < 81; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 82; i < 85; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 86; i < 90; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 91; i < 93; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 94; i < 100; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 101; i < 108; i++) R11[i] = (char *(*)()) F1_8;}
	R11[109] = (char *(*)()) F110_7359;
	R11[111] = (char *(*)()) F112_7410;
	R11[112] = (char *(*)()) F113_7432;
	R11[113] = (char *(*)()) F114_7463;
	{long i; for (i = 116; i < 127; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 129; i < 153; i++) R11[i] = (char *(*)()) F1_8;}
	R11[168] = (char *(*)()) F1_8;
	{long i; for (i = 174; i < 176; i++) R11[i] = (char *(*)()) F1_8;}
	R11[442] = (char *(*)()) F443_3151;
	R11[443] = (char *(*)()) F444_3201;
	R11[444] = (char *(*)()) F445_3201;
	R11[445] = (char *(*)()) F446_3201;
	R11[446] = (char *(*)()) F447_3201;
	R11[447] = (char *(*)()) F448_3201;
	R11[448] = (char *(*)()) F449_3201;
	R11[449] = (char *(*)()) F450_3201;
	R11[450] = (char *(*)()) F451_3201;
	R11[451] = (char *(*)()) F452_3201;
	R11[452] = (char *(*)()) F453_3201;
	R11[453] = (char *(*)()) F454_3201;
	R11[454] = (char *(*)()) F455_3201;
	R11[455] = (char *(*)()) F456_3201;
	R11[456] = (char *(*)()) F457_3201;
	R11[457] = (char *(*)()) F458_3201;
	R11[518] = (char *(*)()) F489_3331;
	R11[519] = (char *(*)()) F493_3331;
	R11[520] = (char *(*)()) F502_3331;
	R11[521] = (char *(*)()) F1_8;
	R11[522] = (char *(*)()) F523_3752;
	R11[523] = (char *(*)()) F1_8;
	{long i; for (i = 524; i < 526; i++) R11[i] = (char *(*)()) F525_3839;}
	{long i; for (i = 527; i < 529; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 530; i < 545; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 546; i < 591; i++) R11[i] = (char *(*)()) F1_8;}
	R11[592] = (char *(*)()) F1_8;
	R11[593] = (char *(*)()) F594_3894;
	R11[594] = (char *(*)()) F1_8;
	R11[595] = (char *(*)()) F596_3946;
	R11[596] = (char *(*)()) F597_3946;
	R11[597] = (char *(*)()) F598_3946;
	R11[598] = (char *(*)()) F599_3946;
	R11[599] = (char *(*)()) F600_3946;
	R11[600] = (char *(*)()) F601_4041;
	R11[601] = (char *(*)()) F602_4041;
	R11[602] = (char *(*)()) F596_3946;
	R11[603] = (char *(*)()) F604_4097;
	R11[604] = (char *(*)()) F605_4097;
	R11[605] = (char *(*)()) F606_4097;
	R11[606] = (char *(*)()) F607_4097;
	R11[607] = (char *(*)()) F608_4097;
	R11[608] = (char *(*)()) F609_4097;
	R11[609] = (char *(*)()) F610_4097;
	R11[610] = (char *(*)()) F611_4097;
	R11[611] = (char *(*)()) F612_4097;
	R11[612] = (char *(*)()) F613_4097;
	R11[613] = (char *(*)()) F614_4097;
	R11[614] = (char *(*)()) F615_4097;
	R11[615] = (char *(*)()) F616_4097;
	R11[616] = (char *(*)()) F617_4097;
	R11[617] = (char *(*)()) F618_4097;
	R11[619] = (char *(*)()) F620_4268;
	{long i; for (i = 622; i < 624; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 639; i < 643; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 673; i < 691; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 706; i < 753; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 758; i < 763; i++) R11[i] = (char *(*)()) F1_8;}
	R11[764] = (char *(*)()) F765_5260;
	R11[765] = (char *(*)()) F766_5297;
	R11[766] = (char *(*)()) F767_5297;
	R11[767] = (char *(*)()) F768_5297;
	R11[768] = (char *(*)()) F769_5297;
	R11[769] = (char *(*)()) F770_5297;
	R11[770] = (char *(*)()) F771_5297;
	R11[771] = (char *(*)()) F772_5297;
	R11[772] = (char *(*)()) F773_5297;
	R11[773] = (char *(*)()) F774_5297;
	R11[774] = (char *(*)()) F775_5297;
	R11[775] = (char *(*)()) F776_5297;
	R11[776] = (char *(*)()) F777_5297;
	R11[777] = (char *(*)()) F778_5297;
	R11[778] = (char *(*)()) F779_5297;
	R11[779] = (char *(*)()) F780_5297;
	R11[780] = (char *(*)()) F781_5297;
	R11[781] = (char *(*)()) F782_5297;
	R11[782] = (char *(*)()) F783_5297;
	R11[783] = (char *(*)()) F784_5297;
	R11[784] = (char *(*)()) F785_5297;
	R11[785] = (char *(*)()) F786_5297;
	R11[786] = (char *(*)()) F787_5297;
	R11[787] = (char *(*)()) F788_5297;
	R11[788] = (char *(*)()) F789_5297;
	R11[789] = (char *(*)()) F790_5297;
	R11[790] = (char *(*)()) F791_5297;
	R11[791] = (char *(*)()) F792_5297;
	R11[792] = (char *(*)()) F793_5297;
	R11[793] = (char *(*)()) F794_5297;
	R11[794] = (char *(*)()) F795_5297;
	R11[795] = (char *(*)()) F796_5297;
	R11[796] = (char *(*)()) F797_5297;
	R11[797] = (char *(*)()) F798_5297;
	R11[798] = (char *(*)()) F799_5297;
	R11[800] = (char *(*)()) F801_5297;
	R11[801] = (char *(*)()) F802_5297;
	R11[802] = (char *(*)()) F803_5297;
	R11[803] = (char *(*)()) F804_5297;
	R11[804] = (char *(*)()) F805_5297;
	R11[805] = (char *(*)()) F806_5297;
	R11[806] = (char *(*)()) F807_5297;
	R11[807] = (char *(*)()) F808_5297;
	R11[808] = (char *(*)()) F809_5297;
	R11[809] = (char *(*)()) F810_5297;
	R11[810] = (char *(*)()) F811_5297;
	R11[811] = (char *(*)()) F812_5340;
	{long i; for (i = 812; i < 815; i++) R11[i] = (char *(*)()) F813_5454;}
	{long i; for (i = 815; i < 818; i++) R11[i] = (char *(*)()) F816_5553;}
	{long i; for (i = 818; i < 821; i++) R11[i] = (char *(*)()) F819_5614;}
	{long i; for (i = 821; i < 824; i++) R11[i] = (char *(*)()) F822_5653;}
	{long i; for (i = 824; i < 827; i++) R11[i] = (char *(*)()) F825_5701;}
	{long i; for (i = 827; i < 830; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 830; i < 833; i++) R11[i] = (char *(*)()) F831_5820;}
	{long i; for (i = 833; i < 836; i++) R11[i] = (char *(*)()) F834_5882;}
	{long i; for (i = 836; i < 839; i++) R11[i] = (char *(*)()) F837_5973;}
	{long i; for (i = 839; i < 842; i++) R11[i] = (char *(*)()) F840_6063;}
	{long i; for (i = 842; i < 845; i++) R11[i] = (char *(*)()) F843_6154;}
	{long i; for (i = 845; i < 848; i++) R11[i] = (char *(*)()) F846_6249;}
	{long i; for (i = 848; i < 851; i++) R11[i] = (char *(*)()) F849_6344;}
	{long i; for (i = 851; i < 884; i++) R11[i] = (char *(*)()) F852_6428;}
	R11[885] = (char *(*)()) F885_6465;
	R11[886] = (char *(*)()) F887_6503;
	{long i; for (i = 887; i < 889; i++) R11[i] = (char *(*)()) F888_6503;}
	R11[892] = (char *(*)()) F891_6629;
	R11[894] = (char *(*)()) F894_6870;
	R11[896] = (char *(*)()) F891_6629;
	R11[897] = (char *(*)()) F894_6870;
	{long i; for (i = 898; i < 902; i++) R11[i] = (char *(*)()) F1_8;}
	R11[902] = (char *(*)()) F115_1565;
	R11[903] = (char *(*)()) F1_8;
	R11[904] = (char *(*)()) F115_1565;
	R11[905] = (char *(*)()) F1_8;
	R11[906] = (char *(*)()) F907_7678;
	R11[907] = (char *(*)()) F1_8;
}

char *(*R28[908])();
void R28_init () {
	{long i; for (i = 0; i < 19; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 21; i < 23; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 24; i < 29; i++) R28[i] = (char *(*)()) F1_25;}
	R28[30] = (char *(*)()) F1_25;
	{long i; for (i = 32; i < 38; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 39; i < 41; i++) R28[i] = (char *(*)()) F1_25;}
	R28[46] = (char *(*)()) F1_25;
	{long i; for (i = 49; i < 55; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 56; i < 61; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 61; i < 63; i++) R28[i] = (char *(*)()) F62_1437;}
	R28[65] = (char *(*)()) F62_1437;
	{long i; for (i = 67; i < 70; i++) R28[i] = (char *(*)()) F62_1437;}
	{long i; for (i = 71; i < 74; i++) R28[i] = (char *(*)()) F62_1437;}
	{long i; for (i = 75; i < 77; i++) R28[i] = (char *(*)()) F62_1437;}
	{long i; for (i = 79; i < 81; i++) R28[i] = (char *(*)()) F62_1437;}
	{long i; for (i = 82; i < 85; i++) R28[i] = (char *(*)()) F62_1437;}
	{long i; for (i = 86; i < 90; i++) R28[i] = (char *(*)()) F62_1437;}
	{long i; for (i = 91; i < 93; i++) R28[i] = (char *(*)()) F62_1437;}
	{long i; for (i = 94; i < 100; i++) R28[i] = (char *(*)()) F62_1437;}
	{long i; for (i = 101; i < 108; i++) R28[i] = (char *(*)()) F1_25;}
	R28[109] = (char *(*)()) F110_7384;
	{long i; for (i = 111; i < 114; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 116; i < 127; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 129; i < 153; i++) R28[i] = (char *(*)()) F1_25;}
	R28[168] = (char *(*)()) F1_25;
	{long i; for (i = 174; i < 176; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 442; i < 458; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 518; i < 526; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 527; i < 529; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 530; i < 545; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 546; i < 591; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 592; i < 602; i++) R28[i] = (char *(*)()) F1_25;}
	R28[602] = (char *(*)()) F603_4063;
	{long i; for (i = 603; i < 618; i++) R28[i] = (char *(*)()) F1_25;}
	R28[619] = (char *(*)()) F1_25;
	{long i; for (i = 622; i < 624; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 639; i < 643; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 673; i < 691; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 706; i < 753; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 758; i < 763; i++) R28[i] = (char *(*)()) F1_25;}
	R28[764] = (char *(*)()) F765_5264;
	R28[765] = (char *(*)()) F766_5305;
	R28[766] = (char *(*)()) F767_5305;
	R28[767] = (char *(*)()) F768_5305;
	R28[768] = (char *(*)()) F769_5305;
	R28[769] = (char *(*)()) F770_5305;
	R28[770] = (char *(*)()) F771_5305;
	R28[771] = (char *(*)()) F772_5305;
	R28[772] = (char *(*)()) F773_5305;
	R28[773] = (char *(*)()) F774_5305;
	R28[774] = (char *(*)()) F775_5305;
	R28[775] = (char *(*)()) F776_5305;
	R28[776] = (char *(*)()) F777_5305;
	R28[777] = (char *(*)()) F778_5305;
	R28[778] = (char *(*)()) F779_5305;
	R28[779] = (char *(*)()) F780_5305;
	R28[780] = (char *(*)()) F781_5305;
	R28[781] = (char *(*)()) F782_5305;
	R28[782] = (char *(*)()) F783_5305;
	R28[783] = (char *(*)()) F784_5305;
	R28[784] = (char *(*)()) F785_5305;
	R28[785] = (char *(*)()) F786_5305;
	R28[786] = (char *(*)()) F787_5305;
	R28[787] = (char *(*)()) F788_5305;
	R28[788] = (char *(*)()) F789_5305;
	R28[789] = (char *(*)()) F790_5305;
	R28[790] = (char *(*)()) F791_5305;
	R28[791] = (char *(*)()) F792_5305;
	R28[792] = (char *(*)()) F793_5305;
	R28[793] = (char *(*)()) F794_5305;
	R28[794] = (char *(*)()) F795_5305;
	R28[795] = (char *(*)()) F796_5305;
	R28[796] = (char *(*)()) F797_5305;
	R28[797] = (char *(*)()) F798_5305;
	R28[798] = (char *(*)()) F799_5305;
	R28[800] = (char *(*)()) F801_5305;
	R28[801] = (char *(*)()) F802_5305;
	R28[802] = (char *(*)()) F803_5305;
	R28[803] = (char *(*)()) F804_5305;
	R28[804] = (char *(*)()) F805_5305;
	R28[805] = (char *(*)()) F806_5305;
	R28[806] = (char *(*)()) F807_5305;
	R28[807] = (char *(*)()) F808_5305;
	R28[808] = (char *(*)()) F809_5305;
	R28[809] = (char *(*)()) F810_5305;
	R28[810] = (char *(*)()) F811_5305;
	R28[811] = (char *(*)()) F1_25;
	{long i; for (i = 812; i < 815; i++) R28[i] = (char *(*)()) F813_5510;}
	R28[815] = (char *(*)()) F816_5580;
	R28[816] = (char *(*)()) F817_5605;
	R28[817] = (char *(*)()) F818_5605;
	{long i; for (i = 818; i < 821; i++) R28[i] = (char *(*)()) F819_5621;}
	{long i; for (i = 821; i < 824; i++) R28[i] = (char *(*)()) F822_5660;}
	{long i; for (i = 824; i < 827; i++) R28[i] = (char *(*)()) F825_5756;}
	{long i; for (i = 827; i < 830; i++) R28[i] = (char *(*)()) F828_5799;}
	R28[830] = (char *(*)()) F831_5847;
	R28[831] = (char *(*)()) F832_5872;
	R28[832] = (char *(*)()) F833_5872;
	{long i; for (i = 833; i < 836; i++) R28[i] = (char *(*)()) F834_5936;}
	{long i; for (i = 836; i < 839; i++) R28[i] = (char *(*)()) F837_6026;}
	{long i; for (i = 839; i < 842; i++) R28[i] = (char *(*)()) F840_6117;}
	{long i; for (i = 842; i < 845; i++) R28[i] = (char *(*)()) F843_6210;}
	{long i; for (i = 845; i < 848; i++) R28[i] = (char *(*)()) F846_6305;}
	{long i; for (i = 848; i < 851; i++) R28[i] = (char *(*)()) F849_6397;}
	{long i; for (i = 851; i < 882; i++) R28[i] = (char *(*)()) F852_6443;}
	R28[882] = (char *(*)()) F883_6456;
	R28[883] = (char *(*)()) F884_6456;
	{long i; for (i = 885; i < 889; i++) R28[i] = (char *(*)()) F1_25;}
	R28[892] = (char *(*)()) F891_6648;
	R28[894] = (char *(*)()) F894_6889;
	R28[896] = (char *(*)()) F891_6648;
	R28[897] = (char *(*)()) F894_6889;
	{long i; for (i = 898; i < 902; i++) R28[i] = (char *(*)()) F1_25;}
	R28[902] = (char *(*)()) F903_7621;
	R28[903] = (char *(*)()) F1_25;
	R28[904] = (char *(*)()) F905_7654;
	R28[905] = (char *(*)()) F1_25;
	R28[906] = (char *(*)()) F907_7693;
	R28[907] = (char *(*)()) F1_25;
}

char *(*R1135[2])();
void R1135_init () {
	R1135[0] = (char *(*)()) F51_1210;
	R1135[1] = (char *(*)()) F52_1221;
}

char *(*R1141[2])();
void R1141_init () {
	R1141[0] = (char *(*)()) F51_1216;
	R1141[1] = (char *(*)()) F52_1227;
}

char *(*R1144[2])();
void R1144_init () {
	R1144[0] = (char *(*)()) F51_1219;
	R1144[1] = (char *(*)()) F52_1230;
}

char *(*R1314[39])();
void R1314_init () {
	R1314[0] = (char *(*)()) F62_1424;
	R1314[1] = (char *(*)()) F63_1448;
	R1314[4] = (char *(*)()) F66_1450;
	R1314[6] = (char *(*)()) F68_1454;
	R1314[7] = (char *(*)()) F69_1471;
	R1314[8] = (char *(*)()) F70_1475;
	R1314[10] = (char *(*)()) F72_1479;
	R1314[11] = (char *(*)()) F73_1481;
	R1314[12] = (char *(*)()) F74_1483;
	R1314[14] = (char *(*)()) F76_1485;
	R1314[15] = (char *(*)()) F77_1489;
	R1314[18] = (char *(*)()) F80_1491;
	R1314[19] = (char *(*)()) F81_1493;
	R1314[21] = (char *(*)()) F83_1497;
	R1314[22] = (char *(*)()) F84_1499;
	R1314[23] = (char *(*)()) F85_1501;
	R1314[25] = (char *(*)()) F87_1507;
	R1314[26] = (char *(*)()) F88_1509;
	R1314[27] = (char *(*)()) F89_1513;
	R1314[28] = (char *(*)()) F90_1517;
	R1314[30] = (char *(*)()) F92_1519;
	R1314[31] = (char *(*)()) F93_1521;
	R1314[33] = (char *(*)()) F95_1523;
	R1314[34] = (char *(*)()) F96_1525;
	R1314[35] = (char *(*)()) F97_1527;
	R1314[36] = (char *(*)()) F98_1529;
	R1314[37] = (char *(*)()) F99_1531;
	R1314[38] = (char *(*)()) F100_1533;
}

char *(*R1384[143])();
void R1384_init () {
	R1384[0] = (char *(*)()) F765_5259;
	R1384[48] = (char *(*)()) F813_5453;
	R1384[49] = (char *(*)()) F814_5512_1384_2;
	R1384[50] = (char *(*)()) F815_5512_1384_2;
	R1384[51] = (char *(*)()) F816_5552;
	R1384[52] = (char *(*)()) F817_5582_1384_2;
	R1384[53] = (char *(*)()) F818_5582_1384_2;
	{long i; for (i = 54; i < 57; i++) R1384[i] = (char *(*)()) F819_5613;}
	{long i; for (i = 57; i < 60; i++) R1384[i] = (char *(*)()) F822_5652;}
	R1384[60] = (char *(*)()) F825_5700;
	R1384[61] = (char *(*)()) F826_5758_1384_2;
	R1384[62] = (char *(*)()) F827_5758_1384_2;
	R1384[66] = (char *(*)()) F831_5819;
	R1384[67] = (char *(*)()) F832_5849_1384_2;
	R1384[68] = (char *(*)()) F833_5849_1384_2;
	R1384[69] = (char *(*)()) F834_5881;
	R1384[70] = (char *(*)()) F835_5937_1384_2;
	R1384[71] = (char *(*)()) F836_5937_1384_2;
	R1384[72] = (char *(*)()) F837_5972;
	R1384[73] = (char *(*)()) F838_6027_1384_2;
	R1384[74] = (char *(*)()) F839_6027_1384_2;
	R1384[75] = (char *(*)()) F840_6062;
	R1384[76] = (char *(*)()) F841_6118_1384_2;
	R1384[77] = (char *(*)()) F842_6118_1384_2;
	R1384[78] = (char *(*)()) F843_6153;
	R1384[79] = (char *(*)()) F844_6212_1384_2;
	R1384[80] = (char *(*)()) F845_6212_1384_2;
	R1384[81] = (char *(*)()) F846_6248;
	R1384[82] = (char *(*)()) F847_6307_1384_2;
	R1384[83] = (char *(*)()) F848_6307_1384_2;
	R1384[84] = (char *(*)()) F849_6343;
	R1384[85] = (char *(*)()) F850_6398_1384_2;
	R1384[86] = (char *(*)()) F851_6398_1384_2;
	R1384[128] = (char *(*)()) F891_6634;
	R1384[130] = (char *(*)()) F894_6875;
	R1384[132] = (char *(*)()) F891_6634;
	R1384[133] = (char *(*)()) F894_6875;
	R1384[138] = (char *(*)()) F903_7595;
	R1384[140] = (char *(*)()) F905_7637;
	R1384[142] = (char *(*)()) F907_7677;
}
static EIF_BOOLEAN F814_5512_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F814_5512(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F815_5512_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F815_5512(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F817_5582_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F817_5582(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F818_5582_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F818_5582(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F826_5758_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F826_5758(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F827_5758_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F827_5758(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F832_5849_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F832_5849(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F833_5849_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F833_5849(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F835_5937_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F835_5937(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F836_5937_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F836_5937(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F838_6027_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F838_6027(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F839_6027_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F839_6027(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F841_6118_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F841_6118(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F842_6118_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F842_6118(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F844_6212_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F844_6212(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F845_6212_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F845_6212(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F847_6307_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F847_6307(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F848_6307_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F848_6307(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F850_6398_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F850_6398(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F851_6398_1384_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F851_6398(Current, *(EIF_NATURAL_64 *)arg1);
}

char *(*R1718[8])();
void R1718_init () {
	R1718[0] = (char *(*)()) F117_1933;
	R1718[1] = (char *(*)()) F118_1933_1718_1;
	R1718[2] = (char *(*)()) F119_1933_1718_1;
	R1718[3] = (char *(*)()) F120_1933_1718_1;
	R1718[4] = (char *(*)()) F121_1933_1718_1;
	R1718[5] = (char *(*)()) F117_1933;
	R1718[6] = (char *(*)()) F118_1933_1718_1;
	R1718[7] = (char *(*)()) F119_1933_1718_1;
}
static EIF_REFERENCE F118_1933_1718_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F118_1933(Current);
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
static EIF_REFERENCE F119_1933_1718_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F119_1933(Current);
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
static EIF_REFERENCE F120_1933_1718_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F120_1933(Current);
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
static EIF_REFERENCE F121_1933_1718_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F121_1933(Current);
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

char *(*R1719[8])();
void R1719_init () {
	R1719[0] = (char *(*)()) F117_1934;
	R1719[1] = (char *(*)()) F118_1934_1719_4;
	R1719[2] = (char *(*)()) F119_1934_1719_4;
	R1719[3] = (char *(*)()) F120_1934_1719_4;
	R1719[4] = (char *(*)()) F121_1934_1719_4;
	R1719[5] = (char *(*)()) F117_1934;
	R1719[6] = (char *(*)()) F118_1934_1719_4;
	R1719[7] = (char *(*)()) F119_1934_1719_4;
}
static void F118_1934_1719_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F118_1934(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F119_1934_1719_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F119_1934(Current, *(EIF_BOOLEAN *)arg1);
}
static void F120_1934_1719_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F120_1934(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F121_1934_1719_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F121_1934(Current, *(EIF_NATURAL_64 *)arg1);
}

char *(*R1723[3])();
void R1723_init () {
	R1723[0] = (char *(*)()) F122_1937;
	R1723[1] = (char *(*)()) F123_1937;
	R1723[2] = (char *(*)()) F124_1937;
}

char *(*R2079[15])();
void R2079_init () {
	R2079[0] = (char *(*)()) F531_3095;
	R2079[1] = (char *(*)()) F532_3095;
	R2079[2] = (char *(*)()) F533_3095;
	R2079[3] = (char *(*)()) F534_3095;
	R2079[4] = (char *(*)()) F535_3095;
	R2079[5] = (char *(*)()) F536_3095;
	R2079[6] = (char *(*)()) F537_3095;
	R2079[7] = (char *(*)()) F538_3095;
	R2079[8] = (char *(*)()) F539_3095;
	R2079[9] = (char *(*)()) F540_3095;
	R2079[10] = (char *(*)()) F541_3095;
	R2079[11] = (char *(*)()) F542_3095;
	R2079[12] = (char *(*)()) F543_3095;
	R2079[13] = (char *(*)()) F544_3095;
	R2079[14] = (char *(*)()) F545_3095;
}

char *(*R2080[15])();
void R2080_init () {
	R2080[0] = (char *(*)()) F531_3096;
	R2080[1] = (char *(*)()) F532_3096;
	R2080[2] = (char *(*)()) F533_3096;
	R2080[3] = (char *(*)()) F534_3096;
	R2080[4] = (char *(*)()) F535_3096;
	R2080[5] = (char *(*)()) F536_3096;
	R2080[6] = (char *(*)()) F537_3096;
	R2080[7] = (char *(*)()) F538_3096;
	R2080[8] = (char *(*)()) F539_3096;
	R2080[9] = (char *(*)()) F540_3096;
	R2080[10] = (char *(*)()) F541_3096;
	R2080[11] = (char *(*)()) F542_3096;
	R2080[12] = (char *(*)()) F543_3096;
	R2080[13] = (char *(*)()) F544_3096;
	R2080[14] = (char *(*)()) F545_3096;
}

char *(*R2128[36])();
void R2128_init () {
	R2128[0] = (char *(*)()) F813_5468;
	R2128[1] = (char *(*)()) F814_5518_2128_1;
	R2128[2] = (char *(*)()) F815_5518_2128_1;
	R2128[12] = (char *(*)()) F825_5715;
	R2128[13] = (char *(*)()) F826_5764_2128_1;
	R2128[14] = (char *(*)()) F827_5764_2128_1;
	R2128[18] = (char *(*)()) F831_5846;
	R2128[19] = (char *(*)()) F832_5864_2128_1;
	R2128[20] = (char *(*)()) F833_5864_2128_1;
	R2128[30] = (char *(*)()) F843_6168;
	R2128[31] = (char *(*)()) F844_6218_2128_1;
	R2128[32] = (char *(*)()) F845_6218_2128_1;
	R2128[33] = (char *(*)()) F846_6263;
	R2128[34] = (char *(*)()) F847_6313_2128_1;
	R2128[35] = (char *(*)()) F848_6313_2128_1;
}
static EIF_REFERENCE F814_5518_2128_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F814_5518(Current);
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
static EIF_REFERENCE F815_5518_2128_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F815_5518(Current);
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
static EIF_REFERENCE F826_5764_2128_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F826_5764(Current);
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
static EIF_REFERENCE F827_5764_2128_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F827_5764(Current);
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
static EIF_REFERENCE F832_5864_2128_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F832_5864(Current);
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
static EIF_REFERENCE F833_5864_2128_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F833_5864(Current);
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
static EIF_REFERENCE F844_6218_2128_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F844_6218(Current);
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
static EIF_REFERENCE F845_6218_2128_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F845_6218(Current);
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
static EIF_REFERENCE F847_6313_2128_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F847_6313(Current);
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
static EIF_REFERENCE F848_6313_2128_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F848_6313(Current);
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

char *(*R2149[3])();
void R2149_init () {
	R2149[0] = (char *(*)()) F136_2398;
	R2149[1] = (char *(*)()) F137_2398;
	R2149[2] = (char *(*)()) F138_2398;
}

char *(*R2154[757])();
void R2154_init () {
	R2154[0] = (char *(*)()) F139_2405;
	R2154[1] = (char *(*)()) F140_2405;
	R2154[2] = (char *(*)()) F141_2405;
	R2154[3] = (char *(*)()) F142_2405;
	R2154[4] = (char *(*)()) F143_2405;
	R2154[5] = (char *(*)()) F144_2405;
	R2154[6] = (char *(*)()) F145_2405;
	R2154[7] = (char *(*)()) F146_2405;
	R2154[8] = (char *(*)()) F147_2405;
	R2154[9] = (char *(*)()) F148_2405;
	R2154[10] = (char *(*)()) F149_2405;
	R2154[11] = (char *(*)()) F150_2405;
	R2154[12] = (char *(*)()) F151_2405;
	R2154[13] = (char *(*)()) F152_2405;
	R2154[14] = (char *(*)()) F153_2405;
	R2154[305] = (char *(*)()) F139_2405;
	R2154[306] = (char *(*)()) F140_2405;
	R2154[307] = (char *(*)()) F141_2405;
	R2154[308] = (char *(*)()) F142_2405;
	R2154[309] = (char *(*)()) F143_2405;
	R2154[310] = (char *(*)()) F144_2405;
	R2154[311] = (char *(*)()) F145_2405;
	R2154[312] = (char *(*)()) F146_2405;
	R2154[313] = (char *(*)()) F147_2405;
	R2154[314] = (char *(*)()) F148_2405;
	R2154[315] = (char *(*)()) F149_2405;
	R2154[316] = (char *(*)()) F150_2405;
	R2154[317] = (char *(*)()) F151_2405;
	R2154[318] = (char *(*)()) F152_2405;
	R2154[319] = (char *(*)()) F153_2405;
	{long i; for (i = 386; i < 388; i++) R2154[i] = (char *(*)()) F141_2405;}
	R2154[465] = (char *(*)()) F139_2405;
	R2154[466] = (char *(*)()) F140_2405;
	R2154[467] = (char *(*)()) F141_2405;
	R2154[468] = (char *(*)()) F142_2405;
	R2154[469] = (char *(*)()) F143_2405;
	R2154[470] = (char *(*)()) F144_2405;
	R2154[471] = (char *(*)()) F145_2405;
	R2154[472] = (char *(*)()) F146_2405;
	R2154[473] = (char *(*)()) F147_2405;
	R2154[474] = (char *(*)()) F148_2405;
	R2154[475] = (char *(*)()) F149_2405;
	R2154[476] = (char *(*)()) F150_2405;
	R2154[477] = (char *(*)()) F151_2405;
	R2154[478] = (char *(*)()) F152_2405;
	R2154[479] = (char *(*)()) F153_2405;
	R2154[754] = (char *(*)()) F145_2405;
	R2154[756] = (char *(*)()) F153_2405;
}

char *(*R2155[757])();
void R2155_init () {
	R2155[0] = (char *(*)()) F139_2406;
	R2155[1] = (char *(*)()) F140_2406_2155_122;
	R2155[2] = (char *(*)()) F141_2406_2155_122;
	R2155[3] = (char *(*)()) F142_2406_2155_122;
	R2155[4] = (char *(*)()) F143_2406_2155_122;
	R2155[5] = (char *(*)()) F144_2406_2155_122;
	R2155[6] = (char *(*)()) F145_2406_2155_122;
	R2155[7] = (char *(*)()) F146_2406_2155_122;
	R2155[8] = (char *(*)()) F147_2406_2155_122;
	R2155[9] = (char *(*)()) F148_2406_2155_122;
	R2155[10] = (char *(*)()) F149_2406_2155_122;
	R2155[11] = (char *(*)()) F150_2406_2155_122;
	R2155[12] = (char *(*)()) F151_2406_2155_122;
	R2155[13] = (char *(*)()) F152_2406_2155_122;
	R2155[14] = (char *(*)()) F153_2406_2155_122;
	R2155[305] = (char *(*)()) F139_2406;
	R2155[306] = (char *(*)()) F140_2406_2155_122;
	R2155[307] = (char *(*)()) F141_2406_2155_122;
	R2155[308] = (char *(*)()) F142_2406_2155_122;
	R2155[309] = (char *(*)()) F143_2406_2155_122;
	R2155[310] = (char *(*)()) F144_2406_2155_122;
	R2155[311] = (char *(*)()) F145_2406_2155_122;
	R2155[312] = (char *(*)()) F146_2406_2155_122;
	R2155[313] = (char *(*)()) F147_2406_2155_122;
	R2155[314] = (char *(*)()) F148_2406_2155_122;
	R2155[315] = (char *(*)()) F149_2406_2155_122;
	R2155[316] = (char *(*)()) F150_2406_2155_122;
	R2155[317] = (char *(*)()) F151_2406_2155_122;
	R2155[318] = (char *(*)()) F152_2406_2155_122;
	R2155[319] = (char *(*)()) F153_2406_2155_122;
	{long i; for (i = 386; i < 388; i++) R2155[i] = (char *(*)()) F141_2406_2155_122;}
	R2155[465] = (char *(*)()) F139_2406;
	R2155[466] = (char *(*)()) F140_2406_2155_122;
	R2155[467] = (char *(*)()) F141_2406_2155_122;
	R2155[468] = (char *(*)()) F142_2406_2155_122;
	R2155[469] = (char *(*)()) F143_2406_2155_122;
	R2155[470] = (char *(*)()) F144_2406_2155_122;
	R2155[471] = (char *(*)()) F145_2406_2155_122;
	R2155[472] = (char *(*)()) F146_2406_2155_122;
	R2155[473] = (char *(*)()) F147_2406_2155_122;
	R2155[474] = (char *(*)()) F148_2406_2155_122;
	R2155[475] = (char *(*)()) F149_2406_2155_122;
	R2155[476] = (char *(*)()) F150_2406_2155_122;
	R2155[477] = (char *(*)()) F151_2406_2155_122;
	R2155[478] = (char *(*)()) F152_2406_2155_122;
	R2155[479] = (char *(*)()) F153_2406_2155_122;
	R2155[754] = (char *(*)()) F145_2406_2155_122;
	R2155[756] = (char *(*)()) F153_2406_2155_122;
}
static void F140_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F140_2406(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F141_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F141_2406(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F142_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F142_2406(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F143_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F143_2406(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F144_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F144_2406(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F145_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F145_2406(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F146_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F146_2406(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F147_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F147_2406(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F148_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F148_2406(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F149_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F149_2406(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F150_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F150_2406(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F151_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F151_2406(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F152_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F152_2406(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F153_2406_2155_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F153_2406(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R2161[757])();
void R2161_init () {
	R2161[0] = (char *(*)()) F139_2412;
	R2161[1] = (char *(*)()) F140_2412;
	R2161[2] = (char *(*)()) F141_2412;
	R2161[3] = (char *(*)()) F142_2412;
	R2161[4] = (char *(*)()) F143_2412;
	R2161[5] = (char *(*)()) F144_2412;
	R2161[6] = (char *(*)()) F145_2412;
	R2161[7] = (char *(*)()) F146_2412;
	R2161[8] = (char *(*)()) F147_2412;
	R2161[9] = (char *(*)()) F148_2412;
	R2161[10] = (char *(*)()) F149_2412;
	R2161[11] = (char *(*)()) F150_2412;
	R2161[12] = (char *(*)()) F151_2412;
	R2161[13] = (char *(*)()) F152_2412;
	R2161[14] = (char *(*)()) F153_2412;
	R2161[305] = (char *(*)()) F139_2412;
	R2161[306] = (char *(*)()) F140_2412;
	R2161[307] = (char *(*)()) F141_2412;
	R2161[308] = (char *(*)()) F142_2412;
	R2161[309] = (char *(*)()) F143_2412;
	R2161[310] = (char *(*)()) F144_2412;
	R2161[311] = (char *(*)()) F145_2412;
	R2161[312] = (char *(*)()) F146_2412;
	R2161[313] = (char *(*)()) F147_2412;
	R2161[314] = (char *(*)()) F148_2412;
	R2161[315] = (char *(*)()) F149_2412;
	R2161[316] = (char *(*)()) F150_2412;
	R2161[317] = (char *(*)()) F151_2412;
	R2161[318] = (char *(*)()) F152_2412;
	R2161[319] = (char *(*)()) F153_2412;
	{long i; for (i = 386; i < 388; i++) R2161[i] = (char *(*)()) F141_2412;}
	R2161[465] = (char *(*)()) F139_2412;
	R2161[466] = (char *(*)()) F140_2412;
	R2161[467] = (char *(*)()) F141_2412;
	R2161[468] = (char *(*)()) F142_2412;
	R2161[469] = (char *(*)()) F143_2412;
	R2161[470] = (char *(*)()) F144_2412;
	R2161[471] = (char *(*)()) F145_2412;
	R2161[472] = (char *(*)()) F146_2412;
	R2161[473] = (char *(*)()) F147_2412;
	R2161[474] = (char *(*)()) F148_2412;
	R2161[475] = (char *(*)()) F149_2412;
	R2161[476] = (char *(*)()) F150_2412;
	R2161[477] = (char *(*)()) F151_2412;
	R2161[478] = (char *(*)()) F152_2412;
	R2161[479] = (char *(*)()) F153_2412;
	R2161[754] = (char *(*)()) F145_2412;
	R2161[756] = (char *(*)()) F153_2412;
}

static EIF_TYPE_INDEX Y2162_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype30[] = {835,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype31[] = {835,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype47[] = {823,0xFFFF};
static EIF_TYPE_INDEX Y2162_pgtype48[] = {820,0xFFFF};
EIF_TYPE_INDEX *Y2162_gen_type [757];
EIF_TYPE_INDEX Y2162 [757];
void Y2162_init (void)
{
	egc_routines_types [2162] = Y2162;
	egc_routines_gen_types [2162] = Y2162_gen_type;
	egc_routines_offset [2162] = 138;
	Y2162_gen_type [0] = Y2162_pgtype0;
	Y2162_gen_type [1] = Y2162_pgtype1;
	Y2162_gen_type [2] = Y2162_pgtype2;
	Y2162_gen_type [3] = Y2162_pgtype3;
	Y2162_gen_type [4] = Y2162_pgtype4;
	Y2162_gen_type [5] = Y2162_pgtype5;
	Y2162_gen_type [6] = Y2162_pgtype6;
	Y2162_gen_type [7] = Y2162_pgtype7;
	Y2162_gen_type [8] = Y2162_pgtype8;
	Y2162_gen_type [9] = Y2162_pgtype9;
	Y2162_gen_type [10] = Y2162_pgtype10;
	Y2162_gen_type [11] = Y2162_pgtype11;
	Y2162_gen_type [12] = Y2162_pgtype12;
	Y2162_gen_type [13] = Y2162_pgtype13;
	Y2162_gen_type [14] = Y2162_pgtype14;
	Y2162_gen_type [305] = Y2162_pgtype15;
	Y2162_gen_type [306] = Y2162_pgtype16;
	Y2162_gen_type [307] = Y2162_pgtype17;
	Y2162_gen_type [308] = Y2162_pgtype18;
	Y2162_gen_type [309] = Y2162_pgtype19;
	Y2162_gen_type [310] = Y2162_pgtype20;
	Y2162_gen_type [311] = Y2162_pgtype21;
	Y2162_gen_type [312] = Y2162_pgtype22;
	Y2162_gen_type [313] = Y2162_pgtype23;
	Y2162_gen_type [314] = Y2162_pgtype24;
	Y2162_gen_type [315] = Y2162_pgtype25;
	Y2162_gen_type [316] = Y2162_pgtype26;
	Y2162_gen_type [317] = Y2162_pgtype27;
	Y2162_gen_type [318] = Y2162_pgtype28;
	Y2162_gen_type [319] = Y2162_pgtype29;
	Y2162_gen_type [386] = Y2162_pgtype30;
	Y2162_gen_type [387] = Y2162_pgtype31;
	Y2162_gen_type [465] = Y2162_pgtype32;
	Y2162_gen_type [466] = Y2162_pgtype33;
	Y2162_gen_type [467] = Y2162_pgtype34;
	Y2162_gen_type [468] = Y2162_pgtype35;
	Y2162_gen_type [469] = Y2162_pgtype36;
	Y2162_gen_type [470] = Y2162_pgtype37;
	Y2162_gen_type [471] = Y2162_pgtype38;
	Y2162_gen_type [472] = Y2162_pgtype39;
	Y2162_gen_type [473] = Y2162_pgtype40;
	Y2162_gen_type [474] = Y2162_pgtype41;
	Y2162_gen_type [475] = Y2162_pgtype42;
	Y2162_gen_type [476] = Y2162_pgtype43;
	Y2162_gen_type [477] = Y2162_pgtype44;
	Y2162_gen_type [478] = Y2162_pgtype45;
	Y2162_gen_type [479] = Y2162_pgtype46;
	Y2162_gen_type [754] = Y2162_pgtype47;
	Y2162_gen_type [756] = Y2162_pgtype48;
	{long i; for (i = 386; i < 388; i++) Y2162[i] = 835;};
	Y2162[754] = 823;
	Y2162[756] = 820;
}

char *(*R2163[8])();
void R2163_init () {
	R2163[0] = (char *(*)()) F596_3938;
	R2163[1] = (char *(*)()) F597_3938;
	R2163[2] = (char *(*)()) F598_3938;
	R2163[3] = (char *(*)()) F599_3938;
	R2163[4] = (char *(*)()) F600_3938;
	R2163[5] = (char *(*)()) F596_3938;
	R2163[6] = (char *(*)()) F599_3938;
	R2163[7] = (char *(*)()) F596_3938;
}

static EIF_TYPE_INDEX Y2164_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype15[] = {0xFF01,892,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype21[] = {0xFF01,897,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype22[] = {0xFF01,897,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype128[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype129[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype130[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype131[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype132[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype133[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype134[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype135[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype136[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype137[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype138[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype139[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype140[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype141[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype142[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype143[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype144[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype145[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype146[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype147[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype148[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype149[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype150[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype151[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype152[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype153[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype154[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype155[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype156[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype157[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype158[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype159[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype160[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype161[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype162[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype163[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype164[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype165[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype166[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype167[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype168[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype169[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype170[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype171[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype172[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype173[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype174[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype175[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype176[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype177[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype178[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype179[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype180[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype181[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype182[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype183[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype184[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype185[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype186[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype187[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype188[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype189[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype190[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype191[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype192[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype193[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype194[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype195[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype196[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype197[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype198[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype199[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype200[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype201[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype202[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype203[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype204[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype205[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype206[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype207[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype208[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype209[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype210[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype211[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype212[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype213[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype214[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype215[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype216[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype217[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype218[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype219[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype220[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype221[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype222[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype223[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype224[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype225[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype226[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype227[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype228[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype229[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype230[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype231[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype232[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype233[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype234[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype235[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype236[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype237[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype238[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype239[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype240[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype241[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype242[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype243[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype244[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype245[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype246[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype247[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype248[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype249[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype250[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype251[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype252[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype253[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype254[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype255[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype256[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype257[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype258[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype259[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype260[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype261[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype262[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype263[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype264[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype265[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype266[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype267[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype268[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype269[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype270[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype271[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype272[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype273[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype274[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype275[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype276[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype277[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype278[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype279[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype280[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype281[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype282[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype283[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype284[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype285[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype286[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype287[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype288[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype289[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype290[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype291[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype292[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype293[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype294[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype295[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype296[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype297[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype298[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype299[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype300[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype301[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype302[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype303[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype304[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype305[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype306[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype307[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype308[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype309[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype310[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype311[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype312[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype313[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype314[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype315[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype316[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype317[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype318[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype319[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype320[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype321[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype322[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype323[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype324[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype325[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype326[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype327[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype328[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype329[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype330[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype331[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype332[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype333[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype334[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype335[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype336[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype337[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype338[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype339[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype340[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype341[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype342[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype343[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype344[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype345[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype346[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype347[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype348[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype349[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype350[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype351[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype352[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype353[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype354[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype355[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype356[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype357[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype358[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype359[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype360[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype361[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype362[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype363[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype364[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype365[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype366[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype367[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype368[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype369[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype370[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype371[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype372[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype373[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype374[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype375[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype376[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype377[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype378[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype379[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype380[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype381[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype382[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype383[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype384[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype385[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype386[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype387[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype388[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype389[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype390[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype391[] = {0,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype392[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype393[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype394[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype395[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype396[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype397[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype398[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype399[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype400[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype401[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype402[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype403[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype404[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype405[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype406[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype407[] = {823,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype408[] = {823,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype409[] = {823,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype410[] = {820,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype411[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype412[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype413[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype414[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype415[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype416[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype417[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype418[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype419[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype420[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype421[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype422[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype423[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype424[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype425[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype426[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype427[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype428[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype429[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype430[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype431[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype432[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype433[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype434[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype435[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype436[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype437[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype438[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype439[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype440[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype441[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype442[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype443[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype444[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype445[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype446[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype447[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype448[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype449[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype450[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype451[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype452[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype453[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype454[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype455[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype456[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype457[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype458[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype459[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype460[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype461[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype462[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype463[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype464[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype465[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype466[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype467[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype468[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype469[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype470[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype471[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype472[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype473[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype474[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype475[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype476[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype477[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype478[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype479[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype480[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype481[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype482[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype483[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype484[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype485[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype486[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype487[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype488[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype489[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype490[] = {820,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype491[] = {823,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype492[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype493[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype494[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype495[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype496[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype497[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype498[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype499[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype500[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype501[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype502[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype503[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype504[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype505[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype506[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype507[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype508[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype509[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype510[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype511[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype512[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype513[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype514[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype515[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype516[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype517[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype518[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype519[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype520[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype521[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype522[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype523[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype524[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype525[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype526[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype527[] = {0xFF04,0,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype528[] = {823,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype529[] = {823,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype530[] = {820,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype531[] = {820,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype532[] = {823,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype533[] = {820,0xFFFF};
static EIF_TYPE_INDEX Y2164_pgtype534[] = {823,0xFFFF};
EIF_TYPE_INDEX *Y2164_gen_type [746];
EIF_TYPE_INDEX Y2164 [746];
void Y2164_init (void)
{
	egc_routines_types [2164] = Y2164;
	egc_routines_gen_types [2164] = Y2164_gen_type;
	egc_routines_offset [2164] = 153;
	Y2164_gen_type [0] = Y2164_pgtype0;
	Y2164_gen_type [1] = Y2164_pgtype1;
	Y2164_gen_type [2] = Y2164_pgtype2;
	Y2164_gen_type [3] = Y2164_pgtype3;
	Y2164_gen_type [4] = Y2164_pgtype4;
	Y2164_gen_type [5] = Y2164_pgtype5;
	Y2164_gen_type [6] = Y2164_pgtype6;
	Y2164_gen_type [7] = Y2164_pgtype7;
	Y2164_gen_type [8] = Y2164_pgtype8;
	Y2164_gen_type [9] = Y2164_pgtype9;
	Y2164_gen_type [10] = Y2164_pgtype10;
	Y2164_gen_type [11] = Y2164_pgtype11;
	Y2164_gen_type [12] = Y2164_pgtype12;
	Y2164_gen_type [13] = Y2164_pgtype13;
	Y2164_gen_type [14] = Y2164_pgtype14;
	Y2164_gen_type [15] = Y2164_pgtype15;
	Y2164_gen_type [16] = Y2164_pgtype16;
	Y2164_gen_type [17] = Y2164_pgtype17;
	Y2164_gen_type [18] = Y2164_pgtype18;
	Y2164_gen_type [19] = Y2164_pgtype19;
	Y2164_gen_type [20] = Y2164_pgtype20;
	Y2164_gen_type [21] = Y2164_pgtype21;
	Y2164_gen_type [22] = Y2164_pgtype22;
	Y2164_gen_type [23] = Y2164_pgtype23;
	Y2164_gen_type [24] = Y2164_pgtype24;
	Y2164_gen_type [25] = Y2164_pgtype25;
	Y2164_gen_type [26] = Y2164_pgtype26;
	Y2164_gen_type [27] = Y2164_pgtype27;
	Y2164_gen_type [28] = Y2164_pgtype28;
	Y2164_gen_type [29] = Y2164_pgtype29;
	Y2164_gen_type [30] = Y2164_pgtype30;
	Y2164_gen_type [31] = Y2164_pgtype31;
	Y2164_gen_type [32] = Y2164_pgtype32;
	Y2164_gen_type [33] = Y2164_pgtype33;
	Y2164_gen_type [34] = Y2164_pgtype34;
	Y2164_gen_type [35] = Y2164_pgtype35;
	Y2164_gen_type [36] = Y2164_pgtype36;
	Y2164_gen_type [37] = Y2164_pgtype37;
	Y2164_gen_type [38] = Y2164_pgtype38;
	Y2164_gen_type [39] = Y2164_pgtype39;
	Y2164_gen_type [40] = Y2164_pgtype40;
	Y2164_gen_type [41] = Y2164_pgtype41;
	Y2164_gen_type [42] = Y2164_pgtype42;
	Y2164_gen_type [43] = Y2164_pgtype43;
	Y2164_gen_type [44] = Y2164_pgtype44;
	Y2164_gen_type [45] = Y2164_pgtype45;
	Y2164_gen_type [46] = Y2164_pgtype46;
	Y2164_gen_type [47] = Y2164_pgtype47;
	Y2164_gen_type [48] = Y2164_pgtype48;
	Y2164_gen_type [49] = Y2164_pgtype49;
	Y2164_gen_type [50] = Y2164_pgtype50;
	Y2164_gen_type [51] = Y2164_pgtype51;
	Y2164_gen_type [52] = Y2164_pgtype52;
	Y2164_gen_type [53] = Y2164_pgtype53;
	Y2164_gen_type [54] = Y2164_pgtype54;
	Y2164_gen_type [55] = Y2164_pgtype55;
	Y2164_gen_type [56] = Y2164_pgtype56;
	Y2164_gen_type [57] = Y2164_pgtype57;
	Y2164_gen_type [58] = Y2164_pgtype58;
	Y2164_gen_type [59] = Y2164_pgtype59;
	Y2164_gen_type [60] = Y2164_pgtype60;
	Y2164_gen_type [61] = Y2164_pgtype61;
	Y2164_gen_type [62] = Y2164_pgtype62;
	Y2164_gen_type [63] = Y2164_pgtype63;
	Y2164_gen_type [64] = Y2164_pgtype64;
	Y2164_gen_type [65] = Y2164_pgtype65;
	Y2164_gen_type [66] = Y2164_pgtype66;
	Y2164_gen_type [67] = Y2164_pgtype67;
	Y2164_gen_type [68] = Y2164_pgtype68;
	Y2164_gen_type [69] = Y2164_pgtype69;
	Y2164_gen_type [70] = Y2164_pgtype70;
	Y2164_gen_type [71] = Y2164_pgtype71;
	Y2164_gen_type [72] = Y2164_pgtype72;
	Y2164_gen_type [73] = Y2164_pgtype73;
	Y2164_gen_type [74] = Y2164_pgtype74;
	Y2164_gen_type [75] = Y2164_pgtype75;
	Y2164_gen_type [76] = Y2164_pgtype76;
	Y2164_gen_type [77] = Y2164_pgtype77;
	Y2164_gen_type [78] = Y2164_pgtype78;
	Y2164_gen_type [79] = Y2164_pgtype79;
	Y2164_gen_type [80] = Y2164_pgtype80;
	Y2164_gen_type [81] = Y2164_pgtype81;
	Y2164_gen_type [82] = Y2164_pgtype82;
	Y2164_gen_type [83] = Y2164_pgtype83;
	Y2164_gen_type [84] = Y2164_pgtype84;
	Y2164_gen_type [85] = Y2164_pgtype85;
	Y2164_gen_type [86] = Y2164_pgtype86;
	Y2164_gen_type [87] = Y2164_pgtype87;
	Y2164_gen_type [88] = Y2164_pgtype88;
	Y2164_gen_type [89] = Y2164_pgtype89;
	Y2164_gen_type [90] = Y2164_pgtype90;
	Y2164_gen_type [91] = Y2164_pgtype91;
	Y2164_gen_type [92] = Y2164_pgtype92;
	Y2164_gen_type [93] = Y2164_pgtype93;
	Y2164_gen_type [94] = Y2164_pgtype94;
	Y2164_gen_type [95] = Y2164_pgtype95;
	Y2164_gen_type [96] = Y2164_pgtype96;
	Y2164_gen_type [97] = Y2164_pgtype97;
	Y2164_gen_type [98] = Y2164_pgtype98;
	Y2164_gen_type [99] = Y2164_pgtype99;
	Y2164_gen_type [100] = Y2164_pgtype100;
	Y2164_gen_type [101] = Y2164_pgtype101;
	Y2164_gen_type [102] = Y2164_pgtype102;
	Y2164_gen_type [103] = Y2164_pgtype103;
	Y2164_gen_type [104] = Y2164_pgtype104;
	Y2164_gen_type [105] = Y2164_pgtype105;
	Y2164_gen_type [106] = Y2164_pgtype106;
	Y2164_gen_type [107] = Y2164_pgtype107;
	Y2164_gen_type [108] = Y2164_pgtype108;
	Y2164_gen_type [109] = Y2164_pgtype109;
	Y2164_gen_type [110] = Y2164_pgtype110;
	Y2164_gen_type [111] = Y2164_pgtype111;
	Y2164_gen_type [112] = Y2164_pgtype112;
	Y2164_gen_type [113] = Y2164_pgtype113;
	Y2164_gen_type [114] = Y2164_pgtype114;
	Y2164_gen_type [115] = Y2164_pgtype115;
	Y2164_gen_type [116] = Y2164_pgtype116;
	Y2164_gen_type [117] = Y2164_pgtype117;
	Y2164_gen_type [118] = Y2164_pgtype118;
	Y2164_gen_type [119] = Y2164_pgtype119;
	Y2164_gen_type [120] = Y2164_pgtype120;
	Y2164_gen_type [121] = Y2164_pgtype121;
	Y2164_gen_type [122] = Y2164_pgtype122;
	Y2164_gen_type [123] = Y2164_pgtype123;
	Y2164_gen_type [124] = Y2164_pgtype124;
	Y2164_gen_type [125] = Y2164_pgtype125;
	Y2164_gen_type [126] = Y2164_pgtype126;
	Y2164_gen_type [127] = Y2164_pgtype127;
	Y2164_gen_type [128] = Y2164_pgtype128;
	Y2164_gen_type [129] = Y2164_pgtype129;
	Y2164_gen_type [130] = Y2164_pgtype130;
	Y2164_gen_type [131] = Y2164_pgtype131;
	Y2164_gen_type [132] = Y2164_pgtype132;
	Y2164_gen_type [133] = Y2164_pgtype133;
	Y2164_gen_type [134] = Y2164_pgtype134;
	Y2164_gen_type [135] = Y2164_pgtype135;
	Y2164_gen_type [136] = Y2164_pgtype136;
	Y2164_gen_type [137] = Y2164_pgtype137;
	Y2164_gen_type [138] = Y2164_pgtype138;
	Y2164_gen_type [139] = Y2164_pgtype139;
	Y2164_gen_type [140] = Y2164_pgtype140;
	Y2164_gen_type [141] = Y2164_pgtype141;
	Y2164_gen_type [142] = Y2164_pgtype142;
	Y2164_gen_type [143] = Y2164_pgtype143;
	Y2164_gen_type [144] = Y2164_pgtype144;
	Y2164_gen_type [145] = Y2164_pgtype145;
	Y2164_gen_type [146] = Y2164_pgtype146;
	Y2164_gen_type [147] = Y2164_pgtype147;
	Y2164_gen_type [148] = Y2164_pgtype148;
	Y2164_gen_type [149] = Y2164_pgtype149;
	Y2164_gen_type [150] = Y2164_pgtype150;
	Y2164_gen_type [151] = Y2164_pgtype151;
	Y2164_gen_type [152] = Y2164_pgtype152;
	Y2164_gen_type [153] = Y2164_pgtype153;
	Y2164_gen_type [154] = Y2164_pgtype154;
	Y2164_gen_type [155] = Y2164_pgtype155;
	Y2164_gen_type [156] = Y2164_pgtype156;
	Y2164_gen_type [157] = Y2164_pgtype157;
	Y2164_gen_type [158] = Y2164_pgtype158;
	Y2164_gen_type [159] = Y2164_pgtype159;
	Y2164_gen_type [160] = Y2164_pgtype160;
	Y2164_gen_type [161] = Y2164_pgtype161;
	Y2164_gen_type [162] = Y2164_pgtype162;
	Y2164_gen_type [163] = Y2164_pgtype163;
	Y2164_gen_type [164] = Y2164_pgtype164;
	Y2164_gen_type [165] = Y2164_pgtype165;
	Y2164_gen_type [166] = Y2164_pgtype166;
	Y2164_gen_type [167] = Y2164_pgtype167;
	Y2164_gen_type [168] = Y2164_pgtype168;
	Y2164_gen_type [169] = Y2164_pgtype169;
	Y2164_gen_type [170] = Y2164_pgtype170;
	Y2164_gen_type [171] = Y2164_pgtype171;
	Y2164_gen_type [172] = Y2164_pgtype172;
	Y2164_gen_type [173] = Y2164_pgtype173;
	Y2164_gen_type [174] = Y2164_pgtype174;
	Y2164_gen_type [175] = Y2164_pgtype175;
	Y2164_gen_type [176] = Y2164_pgtype176;
	Y2164_gen_type [177] = Y2164_pgtype177;
	Y2164_gen_type [178] = Y2164_pgtype178;
	Y2164_gen_type [179] = Y2164_pgtype179;
	Y2164_gen_type [180] = Y2164_pgtype180;
	Y2164_gen_type [181] = Y2164_pgtype181;
	Y2164_gen_type [182] = Y2164_pgtype182;
	Y2164_gen_type [183] = Y2164_pgtype183;
	Y2164_gen_type [184] = Y2164_pgtype184;
	Y2164_gen_type [185] = Y2164_pgtype185;
	Y2164_gen_type [186] = Y2164_pgtype186;
	Y2164_gen_type [187] = Y2164_pgtype187;
	Y2164_gen_type [188] = Y2164_pgtype188;
	Y2164_gen_type [189] = Y2164_pgtype189;
	Y2164_gen_type [190] = Y2164_pgtype190;
	Y2164_gen_type [191] = Y2164_pgtype191;
	Y2164_gen_type [192] = Y2164_pgtype192;
	Y2164_gen_type [193] = Y2164_pgtype193;
	Y2164_gen_type [194] = Y2164_pgtype194;
	Y2164_gen_type [195] = Y2164_pgtype195;
	Y2164_gen_type [196] = Y2164_pgtype196;
	Y2164_gen_type [197] = Y2164_pgtype197;
	Y2164_gen_type [198] = Y2164_pgtype198;
	Y2164_gen_type [199] = Y2164_pgtype199;
	Y2164_gen_type [200] = Y2164_pgtype200;
	Y2164_gen_type [201] = Y2164_pgtype201;
	Y2164_gen_type [202] = Y2164_pgtype202;
	Y2164_gen_type [203] = Y2164_pgtype203;
	Y2164_gen_type [204] = Y2164_pgtype204;
	Y2164_gen_type [205] = Y2164_pgtype205;
	Y2164_gen_type [206] = Y2164_pgtype206;
	Y2164_gen_type [207] = Y2164_pgtype207;
	Y2164_gen_type [208] = Y2164_pgtype208;
	Y2164_gen_type [209] = Y2164_pgtype209;
	Y2164_gen_type [210] = Y2164_pgtype210;
	Y2164_gen_type [211] = Y2164_pgtype211;
	Y2164_gen_type [212] = Y2164_pgtype212;
	Y2164_gen_type [213] = Y2164_pgtype213;
	Y2164_gen_type [214] = Y2164_pgtype214;
	Y2164_gen_type [215] = Y2164_pgtype215;
	Y2164_gen_type [216] = Y2164_pgtype216;
	Y2164_gen_type [217] = Y2164_pgtype217;
	Y2164_gen_type [218] = Y2164_pgtype218;
	Y2164_gen_type [219] = Y2164_pgtype219;
	Y2164_gen_type [220] = Y2164_pgtype220;
	Y2164_gen_type [221] = Y2164_pgtype221;
	Y2164_gen_type [222] = Y2164_pgtype222;
	Y2164_gen_type [223] = Y2164_pgtype223;
	Y2164_gen_type [224] = Y2164_pgtype224;
	Y2164_gen_type [225] = Y2164_pgtype225;
	Y2164_gen_type [226] = Y2164_pgtype226;
	Y2164_gen_type [227] = Y2164_pgtype227;
	Y2164_gen_type [228] = Y2164_pgtype228;
	Y2164_gen_type [229] = Y2164_pgtype229;
	Y2164_gen_type [230] = Y2164_pgtype230;
	Y2164_gen_type [231] = Y2164_pgtype231;
	Y2164_gen_type [232] = Y2164_pgtype232;
	Y2164_gen_type [233] = Y2164_pgtype233;
	Y2164_gen_type [234] = Y2164_pgtype234;
	Y2164_gen_type [235] = Y2164_pgtype235;
	Y2164_gen_type [236] = Y2164_pgtype236;
	Y2164_gen_type [237] = Y2164_pgtype237;
	Y2164_gen_type [238] = Y2164_pgtype238;
	Y2164_gen_type [239] = Y2164_pgtype239;
	Y2164_gen_type [240] = Y2164_pgtype240;
	Y2164_gen_type [241] = Y2164_pgtype241;
	Y2164_gen_type [242] = Y2164_pgtype242;
	Y2164_gen_type [243] = Y2164_pgtype243;
	Y2164_gen_type [244] = Y2164_pgtype244;
	Y2164_gen_type [245] = Y2164_pgtype245;
	Y2164_gen_type [246] = Y2164_pgtype246;
	Y2164_gen_type [247] = Y2164_pgtype247;
	Y2164_gen_type [248] = Y2164_pgtype248;
	Y2164_gen_type [249] = Y2164_pgtype249;
	Y2164_gen_type [250] = Y2164_pgtype250;
	Y2164_gen_type [251] = Y2164_pgtype251;
	Y2164_gen_type [252] = Y2164_pgtype252;
	Y2164_gen_type [253] = Y2164_pgtype253;
	Y2164_gen_type [254] = Y2164_pgtype254;
	Y2164_gen_type [255] = Y2164_pgtype255;
	Y2164_gen_type [256] = Y2164_pgtype256;
	Y2164_gen_type [257] = Y2164_pgtype257;
	Y2164_gen_type [258] = Y2164_pgtype258;
	Y2164_gen_type [259] = Y2164_pgtype259;
	Y2164_gen_type [260] = Y2164_pgtype260;
	Y2164_gen_type [261] = Y2164_pgtype261;
	Y2164_gen_type [262] = Y2164_pgtype262;
	Y2164_gen_type [263] = Y2164_pgtype263;
	Y2164_gen_type [264] = Y2164_pgtype264;
	Y2164_gen_type [265] = Y2164_pgtype265;
	Y2164_gen_type [266] = Y2164_pgtype266;
	Y2164_gen_type [267] = Y2164_pgtype267;
	Y2164_gen_type [268] = Y2164_pgtype268;
	Y2164_gen_type [269] = Y2164_pgtype269;
	Y2164_gen_type [270] = Y2164_pgtype270;
	Y2164_gen_type [271] = Y2164_pgtype271;
	Y2164_gen_type [272] = Y2164_pgtype272;
	Y2164_gen_type [273] = Y2164_pgtype273;
	Y2164_gen_type [274] = Y2164_pgtype274;
	Y2164_gen_type [275] = Y2164_pgtype275;
	Y2164_gen_type [276] = Y2164_pgtype276;
	Y2164_gen_type [277] = Y2164_pgtype277;
	Y2164_gen_type [278] = Y2164_pgtype278;
	Y2164_gen_type [279] = Y2164_pgtype279;
	Y2164_gen_type [280] = Y2164_pgtype280;
	Y2164_gen_type [281] = Y2164_pgtype281;
	Y2164_gen_type [282] = Y2164_pgtype282;
	Y2164_gen_type [283] = Y2164_pgtype283;
	Y2164_gen_type [284] = Y2164_pgtype284;
	Y2164_gen_type [285] = Y2164_pgtype285;
	Y2164_gen_type [286] = Y2164_pgtype286;
	Y2164_gen_type [287] = Y2164_pgtype287;
	Y2164_gen_type [288] = Y2164_pgtype288;
	Y2164_gen_type [289] = Y2164_pgtype289;
	Y2164_gen_type [290] = Y2164_pgtype290;
	Y2164_gen_type [291] = Y2164_pgtype291;
	Y2164_gen_type [292] = Y2164_pgtype292;
	Y2164_gen_type [293] = Y2164_pgtype293;
	Y2164_gen_type [294] = Y2164_pgtype294;
	Y2164_gen_type [295] = Y2164_pgtype295;
	Y2164_gen_type [296] = Y2164_pgtype296;
	Y2164_gen_type [297] = Y2164_pgtype297;
	Y2164_gen_type [298] = Y2164_pgtype298;
	Y2164_gen_type [299] = Y2164_pgtype299;
	Y2164_gen_type [300] = Y2164_pgtype300;
	Y2164_gen_type [301] = Y2164_pgtype301;
	Y2164_gen_type [302] = Y2164_pgtype302;
	Y2164_gen_type [303] = Y2164_pgtype303;
	Y2164_gen_type [304] = Y2164_pgtype304;
	Y2164_gen_type [305] = Y2164_pgtype305;
	Y2164_gen_type [306] = Y2164_pgtype306;
	Y2164_gen_type [307] = Y2164_pgtype307;
	Y2164_gen_type [308] = Y2164_pgtype308;
	Y2164_gen_type [309] = Y2164_pgtype309;
	Y2164_gen_type [310] = Y2164_pgtype310;
	Y2164_gen_type [311] = Y2164_pgtype311;
	Y2164_gen_type [312] = Y2164_pgtype312;
	Y2164_gen_type [313] = Y2164_pgtype313;
	Y2164_gen_type [314] = Y2164_pgtype314;
	Y2164_gen_type [315] = Y2164_pgtype315;
	Y2164_gen_type [316] = Y2164_pgtype316;
	Y2164_gen_type [317] = Y2164_pgtype317;
	Y2164_gen_type [318] = Y2164_pgtype318;
	Y2164_gen_type [319] = Y2164_pgtype319;
	Y2164_gen_type [320] = Y2164_pgtype320;
	Y2164_gen_type [321] = Y2164_pgtype321;
	Y2164_gen_type [322] = Y2164_pgtype322;
	Y2164_gen_type [323] = Y2164_pgtype323;
	Y2164_gen_type [324] = Y2164_pgtype324;
	Y2164_gen_type [325] = Y2164_pgtype325;
	Y2164_gen_type [326] = Y2164_pgtype326;
	Y2164_gen_type [327] = Y2164_pgtype327;
	Y2164_gen_type [328] = Y2164_pgtype328;
	Y2164_gen_type [329] = Y2164_pgtype329;
	Y2164_gen_type [330] = Y2164_pgtype330;
	Y2164_gen_type [331] = Y2164_pgtype331;
	Y2164_gen_type [332] = Y2164_pgtype332;
	Y2164_gen_type [333] = Y2164_pgtype333;
	Y2164_gen_type [334] = Y2164_pgtype334;
	Y2164_gen_type [335] = Y2164_pgtype335;
	Y2164_gen_type [336] = Y2164_pgtype336;
	Y2164_gen_type [337] = Y2164_pgtype337;
	Y2164_gen_type [338] = Y2164_pgtype338;
	Y2164_gen_type [339] = Y2164_pgtype339;
	Y2164_gen_type [340] = Y2164_pgtype340;
	Y2164_gen_type [341] = Y2164_pgtype341;
	Y2164_gen_type [342] = Y2164_pgtype342;
	Y2164_gen_type [343] = Y2164_pgtype343;
	Y2164_gen_type [344] = Y2164_pgtype344;
	Y2164_gen_type [345] = Y2164_pgtype345;
	Y2164_gen_type [346] = Y2164_pgtype346;
	Y2164_gen_type [347] = Y2164_pgtype347;
	Y2164_gen_type [348] = Y2164_pgtype348;
	Y2164_gen_type [349] = Y2164_pgtype349;
	Y2164_gen_type [350] = Y2164_pgtype350;
	Y2164_gen_type [351] = Y2164_pgtype351;
	Y2164_gen_type [352] = Y2164_pgtype352;
	Y2164_gen_type [353] = Y2164_pgtype353;
	Y2164_gen_type [354] = Y2164_pgtype354;
	Y2164_gen_type [355] = Y2164_pgtype355;
	Y2164_gen_type [356] = Y2164_pgtype356;
	Y2164_gen_type [357] = Y2164_pgtype357;
	Y2164_gen_type [358] = Y2164_pgtype358;
	Y2164_gen_type [359] = Y2164_pgtype359;
	Y2164_gen_type [360] = Y2164_pgtype360;
	Y2164_gen_type [361] = Y2164_pgtype361;
	Y2164_gen_type [362] = Y2164_pgtype362;
	Y2164_gen_type [363] = Y2164_pgtype363;
	Y2164_gen_type [364] = Y2164_pgtype364;
	Y2164_gen_type [365] = Y2164_pgtype365;
	Y2164_gen_type [366] = Y2164_pgtype366;
	Y2164_gen_type [367] = Y2164_pgtype367;
	Y2164_gen_type [377] = Y2164_pgtype368;
	Y2164_gen_type [378] = Y2164_pgtype369;
	Y2164_gen_type [379] = Y2164_pgtype370;
	Y2164_gen_type [380] = Y2164_pgtype371;
	Y2164_gen_type [381] = Y2164_pgtype372;
	Y2164_gen_type [382] = Y2164_pgtype373;
	Y2164_gen_type [383] = Y2164_pgtype374;
	Y2164_gen_type [384] = Y2164_pgtype375;
	Y2164_gen_type [385] = Y2164_pgtype376;
	Y2164_gen_type [386] = Y2164_pgtype377;
	Y2164_gen_type [387] = Y2164_pgtype378;
	Y2164_gen_type [388] = Y2164_pgtype379;
	Y2164_gen_type [389] = Y2164_pgtype380;
	Y2164_gen_type [390] = Y2164_pgtype381;
	Y2164_gen_type [391] = Y2164_pgtype382;
	Y2164_gen_type [440] = Y2164_pgtype383;
	Y2164_gen_type [442] = Y2164_pgtype384;
	Y2164_gen_type [443] = Y2164_pgtype385;
	Y2164_gen_type [444] = Y2164_pgtype386;
	Y2164_gen_type [445] = Y2164_pgtype387;
	Y2164_gen_type [446] = Y2164_pgtype388;
	Y2164_gen_type [447] = Y2164_pgtype389;
	Y2164_gen_type [448] = Y2164_pgtype390;
	Y2164_gen_type [449] = Y2164_pgtype391;
	Y2164_gen_type [450] = Y2164_pgtype392;
	Y2164_gen_type [451] = Y2164_pgtype393;
	Y2164_gen_type [452] = Y2164_pgtype394;
	Y2164_gen_type [453] = Y2164_pgtype395;
	Y2164_gen_type [454] = Y2164_pgtype396;
	Y2164_gen_type [455] = Y2164_pgtype397;
	Y2164_gen_type [456] = Y2164_pgtype398;
	Y2164_gen_type [457] = Y2164_pgtype399;
	Y2164_gen_type [458] = Y2164_pgtype400;
	Y2164_gen_type [459] = Y2164_pgtype401;
	Y2164_gen_type [460] = Y2164_pgtype402;
	Y2164_gen_type [461] = Y2164_pgtype403;
	Y2164_gen_type [462] = Y2164_pgtype404;
	Y2164_gen_type [463] = Y2164_pgtype405;
	Y2164_gen_type [464] = Y2164_pgtype406;
	Y2164_gen_type [468] = Y2164_pgtype407;
	Y2164_gen_type [469] = Y2164_pgtype408;
	Y2164_gen_type [470] = Y2164_pgtype409;
	Y2164_gen_type [487] = Y2164_pgtype410;
	Y2164_gen_type [488] = Y2164_pgtype411;
	Y2164_gen_type [490] = Y2164_pgtype412;
	Y2164_gen_type [491] = Y2164_pgtype413;
	Y2164_gen_type [492] = Y2164_pgtype414;
	Y2164_gen_type [493] = Y2164_pgtype415;
	Y2164_gen_type [494] = Y2164_pgtype416;
	Y2164_gen_type [495] = Y2164_pgtype417;
	Y2164_gen_type [496] = Y2164_pgtype418;
	Y2164_gen_type [497] = Y2164_pgtype419;
	Y2164_gen_type [498] = Y2164_pgtype420;
	Y2164_gen_type [499] = Y2164_pgtype421;
	Y2164_gen_type [500] = Y2164_pgtype422;
	Y2164_gen_type [501] = Y2164_pgtype423;
	Y2164_gen_type [502] = Y2164_pgtype424;
	Y2164_gen_type [503] = Y2164_pgtype425;
	Y2164_gen_type [504] = Y2164_pgtype426;
	Y2164_gen_type [505] = Y2164_pgtype427;
	Y2164_gen_type [506] = Y2164_pgtype428;
	Y2164_gen_type [507] = Y2164_pgtype429;
	Y2164_gen_type [508] = Y2164_pgtype430;
	Y2164_gen_type [509] = Y2164_pgtype431;
	Y2164_gen_type [510] = Y2164_pgtype432;
	Y2164_gen_type [511] = Y2164_pgtype433;
	Y2164_gen_type [512] = Y2164_pgtype434;
	Y2164_gen_type [513] = Y2164_pgtype435;
	Y2164_gen_type [514] = Y2164_pgtype436;
	Y2164_gen_type [515] = Y2164_pgtype437;
	Y2164_gen_type [516] = Y2164_pgtype438;
	Y2164_gen_type [517] = Y2164_pgtype439;
	Y2164_gen_type [518] = Y2164_pgtype440;
	Y2164_gen_type [519] = Y2164_pgtype441;
	Y2164_gen_type [520] = Y2164_pgtype442;
	Y2164_gen_type [521] = Y2164_pgtype443;
	Y2164_gen_type [522] = Y2164_pgtype444;
	Y2164_gen_type [523] = Y2164_pgtype445;
	Y2164_gen_type [524] = Y2164_pgtype446;
	Y2164_gen_type [525] = Y2164_pgtype447;
	Y2164_gen_type [526] = Y2164_pgtype448;
	Y2164_gen_type [527] = Y2164_pgtype449;
	Y2164_gen_type [528] = Y2164_pgtype450;
	Y2164_gen_type [529] = Y2164_pgtype451;
	Y2164_gen_type [530] = Y2164_pgtype452;
	Y2164_gen_type [531] = Y2164_pgtype453;
	Y2164_gen_type [532] = Y2164_pgtype454;
	Y2164_gen_type [533] = Y2164_pgtype455;
	Y2164_gen_type [534] = Y2164_pgtype456;
	Y2164_gen_type [535] = Y2164_pgtype457;
	Y2164_gen_type [536] = Y2164_pgtype458;
	Y2164_gen_type [537] = Y2164_pgtype459;
	Y2164_gen_type [538] = Y2164_pgtype460;
	Y2164_gen_type [539] = Y2164_pgtype461;
	Y2164_gen_type [540] = Y2164_pgtype462;
	Y2164_gen_type [541] = Y2164_pgtype463;
	Y2164_gen_type [542] = Y2164_pgtype464;
	Y2164_gen_type [543] = Y2164_pgtype465;
	Y2164_gen_type [544] = Y2164_pgtype466;
	Y2164_gen_type [545] = Y2164_pgtype467;
	Y2164_gen_type [546] = Y2164_pgtype468;
	Y2164_gen_type [547] = Y2164_pgtype469;
	Y2164_gen_type [548] = Y2164_pgtype470;
	Y2164_gen_type [549] = Y2164_pgtype471;
	Y2164_gen_type [550] = Y2164_pgtype472;
	Y2164_gen_type [551] = Y2164_pgtype473;
	Y2164_gen_type [552] = Y2164_pgtype474;
	Y2164_gen_type [553] = Y2164_pgtype475;
	Y2164_gen_type [554] = Y2164_pgtype476;
	Y2164_gen_type [555] = Y2164_pgtype477;
	Y2164_gen_type [556] = Y2164_pgtype478;
	Y2164_gen_type [557] = Y2164_pgtype479;
	Y2164_gen_type [558] = Y2164_pgtype480;
	Y2164_gen_type [559] = Y2164_pgtype481;
	Y2164_gen_type [560] = Y2164_pgtype482;
	Y2164_gen_type [561] = Y2164_pgtype483;
	Y2164_gen_type [562] = Y2164_pgtype484;
	Y2164_gen_type [563] = Y2164_pgtype485;
	Y2164_gen_type [564] = Y2164_pgtype486;
	Y2164_gen_type [565] = Y2164_pgtype487;
	Y2164_gen_type [566] = Y2164_pgtype488;
	Y2164_gen_type [567] = Y2164_pgtype489;
	Y2164_gen_type [568] = Y2164_pgtype490;
	Y2164_gen_type [569] = Y2164_pgtype491;
	Y2164_gen_type [570] = Y2164_pgtype492;
	Y2164_gen_type [571] = Y2164_pgtype493;
	Y2164_gen_type [572] = Y2164_pgtype494;
	Y2164_gen_type [573] = Y2164_pgtype495;
	Y2164_gen_type [574] = Y2164_pgtype496;
	Y2164_gen_type [575] = Y2164_pgtype497;
	Y2164_gen_type [576] = Y2164_pgtype498;
	Y2164_gen_type [577] = Y2164_pgtype499;
	Y2164_gen_type [578] = Y2164_pgtype500;
	Y2164_gen_type [579] = Y2164_pgtype501;
	Y2164_gen_type [580] = Y2164_pgtype502;
	Y2164_gen_type [581] = Y2164_pgtype503;
	Y2164_gen_type [582] = Y2164_pgtype504;
	Y2164_gen_type [583] = Y2164_pgtype505;
	Y2164_gen_type [584] = Y2164_pgtype506;
	Y2164_gen_type [585] = Y2164_pgtype507;
	Y2164_gen_type [586] = Y2164_pgtype508;
	Y2164_gen_type [587] = Y2164_pgtype509;
	Y2164_gen_type [588] = Y2164_pgtype510;
	Y2164_gen_type [589] = Y2164_pgtype511;
	Y2164_gen_type [590] = Y2164_pgtype512;
	Y2164_gen_type [591] = Y2164_pgtype513;
	Y2164_gen_type [592] = Y2164_pgtype514;
	Y2164_gen_type [593] = Y2164_pgtype515;
	Y2164_gen_type [594] = Y2164_pgtype516;
	Y2164_gen_type [595] = Y2164_pgtype517;
	Y2164_gen_type [596] = Y2164_pgtype518;
	Y2164_gen_type [597] = Y2164_pgtype519;
	Y2164_gen_type [598] = Y2164_pgtype520;
	Y2164_gen_type [599] = Y2164_pgtype521;
	Y2164_gen_type [605] = Y2164_pgtype522;
	Y2164_gen_type [606] = Y2164_pgtype523;
	Y2164_gen_type [607] = Y2164_pgtype524;
	Y2164_gen_type [608] = Y2164_pgtype525;
	Y2164_gen_type [609] = Y2164_pgtype526;
	Y2164_gen_type [658] = Y2164_pgtype527;
	Y2164_gen_type [737] = Y2164_pgtype528;
	Y2164_gen_type [739] = Y2164_pgtype529;
	Y2164_gen_type [740] = Y2164_pgtype530;
	Y2164_gen_type [741] = Y2164_pgtype531;
	Y2164_gen_type [743] = Y2164_pgtype532;
	Y2164_gen_type [744] = Y2164_pgtype533;
	Y2164_gen_type [745] = Y2164_pgtype534;
	Y2164[15] = 892;
	{long i; for (i = 21; i < 23; i++) Y2164[i] = 897;};
	Y2164[289] = 844;
	Y2164[449] = 0;
	{long i; for (i = 468; i < 471; i++) Y2164[i] = 823;};
	Y2164[487] = 820;
	Y2164[488] = 844;
	Y2164[568] = 820;
	Y2164[569] = 823;
	Y2164[658] = 0;
	Y2164[737] = 823;
	Y2164[739] = 823;
	{long i; for (i = 740; i < 742; i++) Y2164[i] = 820;};
	Y2164[743] = 823;
	Y2164[744] = 820;
	Y2164[745] = 823;
}

char *(*R2210[453])();
void R2210_init () {
	R2210[0] = (char *(*)()) F292_2537;
	R2210[1] = (char *(*)()) F288_2537;
	R2210[2] = (char *(*)()) F290_2537;
	R2210[3] = (char *(*)()) F291_2537;
	R2210[4] = (char *(*)()) F294_2537;
	R2210[5] = (char *(*)()) F295_2537;
	R2210[6] = (char *(*)()) F292_2537;
	R2210[7] = (char *(*)()) F289_2537;
	R2210[8] = (char *(*)()) F296_2537;
	R2210[9] = (char *(*)()) F297_2537;
	R2210[10] = (char *(*)()) F298_2537;
	R2210[11] = (char *(*)()) F299_2537;
	R2210[12] = (char *(*)()) F300_2537;
	R2210[13] = (char *(*)()) F301_2537;
	R2210[14] = (char *(*)()) F302_2537;
	R2210[15] = (char *(*)()) F293_2537;
	R2210[76] = (char *(*)()) F288_2537;
	R2210[77] = (char *(*)()) F292_2537;
	R2210[78] = (char *(*)()) F302_2537;
	{long i; for (i = 153; i < 155; i++) R2210[i] = (char *(*)()) F288_2537;}
	R2210[155] = (char *(*)()) F295_2537;
	{long i; for (i = 156; i < 158; i++) R2210[i] = (char *(*)()) F292_2537;}
	R2210[158] = (char *(*)()) F288_2537;
	R2210[159] = (char *(*)()) F292_2537;
	{long i; for (i = 160; i < 162; i++) R2210[i] = (char *(*)()) F288_2537;}
	R2210[162] = (char *(*)()) F290_2537;
	R2210[163] = (char *(*)()) F291_2537;
	R2210[164] = (char *(*)()) F294_2537;
	R2210[165] = (char *(*)()) F295_2537;
	R2210[166] = (char *(*)()) F292_2537;
	R2210[167] = (char *(*)()) F289_2537;
	R2210[168] = (char *(*)()) F296_2537;
	R2210[169] = (char *(*)()) F297_2537;
	R2210[170] = (char *(*)()) F298_2537;
	R2210[171] = (char *(*)()) F299_2537;
	R2210[172] = (char *(*)()) F300_2537;
	R2210[173] = (char *(*)()) F301_2537;
	R2210[174] = (char *(*)()) F302_2537;
	R2210[175] = (char *(*)()) F293_2537;
	{long i; for (i = 180; i < 182; i++) R2210[i] = (char *(*)()) F289_2537;}
	R2210[450] = (char *(*)()) F289_2537;
	R2210[452] = (char *(*)()) F293_2537;
}

char *(*R2214[457])();
void R2214_init () {
	R2214[0] = (char *(*)()) F181_2465;
	R2214[1] = (char *(*)()) F177_2465;
	R2214[2] = (char *(*)()) F179_2465;
	R2214[3] = (char *(*)()) F180_2465;
	R2214[4] = (char *(*)()) F183_2465;
	R2214[5] = (char *(*)()) F184_2465;
	R2214[6] = (char *(*)()) F181_2465;
	R2214[7] = (char *(*)()) F178_2465;
	R2214[8] = (char *(*)()) F185_2465;
	R2214[9] = (char *(*)()) F186_2465;
	R2214[10] = (char *(*)()) F187_2465;
	R2214[11] = (char *(*)()) F188_2465;
	R2214[12] = (char *(*)()) F189_2465;
	R2214[13] = (char *(*)()) F190_2465;
	R2214[14] = (char *(*)()) F191_2465;
	R2214[15] = (char *(*)()) F182_2465;
	R2214[76] = (char *(*)()) F177_2465;
	R2214[77] = (char *(*)()) F181_2465;
	R2214[78] = (char *(*)()) F191_2465;
	R2214[151] = (char *(*)()) F177_2465;
	{long i; for (i = 153; i < 155; i++) R2214[i] = (char *(*)()) F177_2465;}
	R2214[155] = (char *(*)()) F184_2465;
	{long i; for (i = 156; i < 158; i++) R2214[i] = (char *(*)()) F181_2465;}
	R2214[158] = (char *(*)()) F177_2465;
	R2214[159] = (char *(*)()) F181_2465;
	{long i; for (i = 160; i < 162; i++) R2214[i] = (char *(*)()) F177_2465;}
	R2214[162] = (char *(*)()) F179_2465;
	R2214[163] = (char *(*)()) F180_2465;
	R2214[164] = (char *(*)()) F183_2465;
	R2214[165] = (char *(*)()) F184_2465;
	R2214[166] = (char *(*)()) F181_2465;
	R2214[167] = (char *(*)()) F178_2465;
	R2214[168] = (char *(*)()) F185_2465;
	R2214[169] = (char *(*)()) F186_2465;
	R2214[170] = (char *(*)()) F187_2465;
	R2214[171] = (char *(*)()) F188_2465;
	R2214[172] = (char *(*)()) F189_2465;
	R2214[173] = (char *(*)()) F190_2465;
	R2214[174] = (char *(*)()) F191_2465;
	R2214[175] = (char *(*)()) F182_2465;
	{long i; for (i = 180; i < 182; i++) R2214[i] = (char *(*)()) F178_2465;}
	R2214[199] = (char *(*)()) F181_2465;
	R2214[450] = (char *(*)()) F178_2465;
	R2214[452] = (char *(*)()) F182_2465;
	R2214[456] = (char *(*)()) F178_2465;
}

char *(*R2222[377])();
void R2222_init () {
	R2222[0] = (char *(*)()) F519_3542;
	R2222[1] = (char *(*)()) F520_3542_2222_4;
	R2222[2] = (char *(*)()) F521_3542_2222_4;
	R2222[374] = (char *(*)()) F893_6746_2222_4;
	R2222[376] = (char *(*)()) F895_6953_2222_4;
}
static void F520_3542_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F520_3542(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F521_3542_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F521_3542(Current, *(EIF_BOOLEAN *)arg1);
}
static void F893_6746_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F893_6746(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F895_6953_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F895_6953(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2252[452])();
void R2252_init () {
	R2252[0] = (char *(*)()) F444_3191_2252_5;
	R2252[1] = (char *(*)()) F445_3191_2252_5;
	R2252[2] = (char *(*)()) F446_3191_2252_5;
	R2252[3] = (char *(*)()) F447_3191_2252_5;
	R2252[4] = (char *(*)()) F448_3191_2252_5;
	R2252[5] = (char *(*)()) F449_3191_2252_5;
	R2252[6] = (char *(*)()) F450_3191_2252_5;
	R2252[7] = (char *(*)()) F451_3191_2252_5;
	R2252[8] = (char *(*)()) F452_3191_2252_5;
	R2252[9] = (char *(*)()) F453_3191_2252_5;
	R2252[10] = (char *(*)()) F454_3191_2252_5;
	R2252[11] = (char *(*)()) F455_3191_2252_5;
	R2252[12] = (char *(*)()) F456_3191_2252_5;
	R2252[13] = (char *(*)()) F457_3191_2252_5;
	R2252[14] = (char *(*)()) F458_3191_2252_5;
	R2252[160] = (char *(*)()) F604_4079_2252_5;
	R2252[161] = (char *(*)()) F605_4079_2252_5;
	R2252[162] = (char *(*)()) F606_4079_2252_5;
	R2252[163] = (char *(*)()) F607_4079_2252_5;
	R2252[164] = (char *(*)()) F608_4079_2252_5;
	R2252[165] = (char *(*)()) F609_4079_2252_5;
	R2252[166] = (char *(*)()) F610_4079_2252_5;
	R2252[167] = (char *(*)()) F611_4079_2252_5;
	R2252[168] = (char *(*)()) F612_4079_2252_5;
	R2252[169] = (char *(*)()) F613_4079_2252_5;
	R2252[170] = (char *(*)()) F614_4079_2252_5;
	R2252[171] = (char *(*)()) F615_4079_2252_5;
	R2252[172] = (char *(*)()) F616_4079_2252_5;
	R2252[173] = (char *(*)()) F617_4079_2252_5;
	R2252[174] = (char *(*)()) F618_4079_2252_5;
	R2252[449] = (char *(*)()) F893_6696_2252_5;
	R2252[451] = (char *(*)()) F895_6904_2252_5;
}
static EIF_REFERENCE F444_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F444_3191(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F445_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F445_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F446_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F446_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F447_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F447_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F448_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F448_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F449_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F449_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F450_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F450_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F451_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F451_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F452_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F452_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F453_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F453_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F454_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F454_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F455_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F455_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F456_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F456_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F457_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F457_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F458_3191_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F458_3191(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F604_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F604_4079(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F605_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F605_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F606_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F606_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F607_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F607_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F608_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F608_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F609_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F609_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F610_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F610_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F611_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F611_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F612_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F612_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F613_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F613_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F614_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F614_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F615_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F615_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F616_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F616_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F617_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F617_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F618_4079_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F618_4079(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F893_6696_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F893_6696(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F895_6904_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F895_6904(Current, *(EIF_INTEGER_32 *)arg1);
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

char *(*R2255[450])();
void R2255_init () {
	R2255[0] = (char *(*)()) F444_3210_2255_8;
	R2255[1] = (char *(*)()) F445_3210_2255_8;
	R2255[2] = (char *(*)()) F446_3210_2255_8;
	R2255[3] = (char *(*)()) F447_3210_2255_8;
	R2255[4] = (char *(*)()) F448_3210_2255_8;
	R2255[5] = (char *(*)()) F449_3210_2255_8;
	R2255[6] = (char *(*)()) F450_3210_2255_8;
	R2255[7] = (char *(*)()) F451_3210_2255_8;
	R2255[8] = (char *(*)()) F452_3210_2255_8;
	R2255[9] = (char *(*)()) F453_3210_2255_8;
	R2255[10] = (char *(*)()) F454_3210_2255_8;
	R2255[11] = (char *(*)()) F455_3210_2255_8;
	R2255[12] = (char *(*)()) F456_3210_2255_8;
	R2255[13] = (char *(*)()) F457_3210_2255_8;
	R2255[14] = (char *(*)()) F458_3210_2255_8;
	R2255[152] = (char *(*)()) F596_3970;
	R2255[153] = (char *(*)()) F597_3970_2255_8;
	R2255[154] = (char *(*)()) F598_3970_2255_8;
	R2255[155] = (char *(*)()) F599_3970_2255_8;
	R2255[156] = (char *(*)()) F600_3970_2255_8;
	R2255[157] = (char *(*)()) F596_3970;
	R2255[158] = (char *(*)()) F599_3970_2255_8;
	R2255[159] = (char *(*)()) F596_3970;
	R2255[449] = (char *(*)()) F893_6718_2255_8;
}
static void F444_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F444_3210(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F445_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F445_3210(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F446_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F446_3210(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F447_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F447_3210(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F448_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F448_3210(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F449_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F449_3210(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F450_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F450_3210(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F451_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F451_3210(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F452_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F452_3210(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F453_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F453_3210(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F454_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F454_3210(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F455_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F455_3210(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F456_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F456_3210(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F457_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F457_3210(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F458_3210_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F458_3210(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F597_3970_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F597_3970(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F598_3970_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F598_3970(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_POINTER *)arg2);
}
static void F599_3970_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F599_3970(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F600_3970_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F600_3970(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F893_6718_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F893_6718(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

static EIF_TYPE_INDEX Y2257_pgtype0[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype1[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype2[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype3[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype4[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype5[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype6[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype7[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype8[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype9[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype10[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype11[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype12[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype13[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype14[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype15[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype16[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype17[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype18[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype19[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype20[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype21[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype22[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype23[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype24[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype25[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype26[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype27[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype28[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype29[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype30[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype31[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype32[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype33[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype34[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype35[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype36[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype37[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype38[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype39[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype40[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype41[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype42[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype43[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype44[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype45[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype46[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype47[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype48[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype49[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype50[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype51[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype52[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype53[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype54[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype55[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype56[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype57[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype58[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype59[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype60[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype61[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype62[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype63[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype64[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype65[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype66[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype67[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype68[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype69[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype70[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype71[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype72[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype73[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype74[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype75[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype76[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype77[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype78[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype79[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype80[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype81[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype82[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype83[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype84[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype85[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype86[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype87[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype88[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype89[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype90[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype91[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype92[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype93[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype94[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype95[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype96[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype97[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype98[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype99[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype100[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype101[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype102[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype103[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype104[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype105[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype106[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype107[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype108[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype109[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype110[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype111[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype112[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype113[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype114[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype115[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype116[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype117[] = {0xFF01,889,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype118[] = {0xFF01,889,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype119[] = {0xFF01,892,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype120[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype121[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype122[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype123[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype124[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype125[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype126[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype127[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype128[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype129[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype130[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype131[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype132[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype133[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype134[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype135[] = {844,0xFFFF};
static EIF_TYPE_INDEX Y2257_pgtype136[] = {844,0xFFFF};
EIF_TYPE_INDEX *Y2257_gen_type [673];
EIF_TYPE_INDEX Y2257 [673];
void Y2257_init (void)
{
	egc_routines_types [2257] = Y2257;
	egc_routines_gen_types [2257] = Y2257_gen_type;
	egc_routines_offset [2257] = 222;
	Y2257_gen_type [0] = Y2257_pgtype0;
	Y2257_gen_type [1] = Y2257_pgtype1;
	Y2257_gen_type [2] = Y2257_pgtype2;
	Y2257_gen_type [3] = Y2257_pgtype3;
	Y2257_gen_type [4] = Y2257_pgtype4;
	Y2257_gen_type [5] = Y2257_pgtype5;
	Y2257_gen_type [6] = Y2257_pgtype6;
	Y2257_gen_type [7] = Y2257_pgtype7;
	Y2257_gen_type [8] = Y2257_pgtype8;
	Y2257_gen_type [9] = Y2257_pgtype9;
	Y2257_gen_type [10] = Y2257_pgtype10;
	Y2257_gen_type [11] = Y2257_pgtype11;
	Y2257_gen_type [12] = Y2257_pgtype12;
	Y2257_gen_type [13] = Y2257_pgtype13;
	Y2257_gen_type [14] = Y2257_pgtype14;
	Y2257_gen_type [15] = Y2257_pgtype15;
	Y2257_gen_type [16] = Y2257_pgtype16;
	Y2257_gen_type [17] = Y2257_pgtype17;
	Y2257_gen_type [205] = Y2257_pgtype18;
	Y2257_gen_type [206] = Y2257_pgtype19;
	Y2257_gen_type [207] = Y2257_pgtype20;
	Y2257_gen_type [208] = Y2257_pgtype21;
	Y2257_gen_type [209] = Y2257_pgtype22;
	Y2257_gen_type [210] = Y2257_pgtype23;
	Y2257_gen_type [211] = Y2257_pgtype24;
	Y2257_gen_type [212] = Y2257_pgtype25;
	Y2257_gen_type [213] = Y2257_pgtype26;
	Y2257_gen_type [214] = Y2257_pgtype27;
	Y2257_gen_type [215] = Y2257_pgtype28;
	Y2257_gen_type [216] = Y2257_pgtype29;
	Y2257_gen_type [217] = Y2257_pgtype30;
	Y2257_gen_type [218] = Y2257_pgtype31;
	Y2257_gen_type [219] = Y2257_pgtype32;
	Y2257_gen_type [220] = Y2257_pgtype33;
	Y2257_gen_type [221] = Y2257_pgtype34;
	Y2257_gen_type [222] = Y2257_pgtype35;
	Y2257_gen_type [223] = Y2257_pgtype36;
	Y2257_gen_type [224] = Y2257_pgtype37;
	Y2257_gen_type [225] = Y2257_pgtype38;
	Y2257_gen_type [226] = Y2257_pgtype39;
	Y2257_gen_type [227] = Y2257_pgtype40;
	Y2257_gen_type [228] = Y2257_pgtype41;
	Y2257_gen_type [229] = Y2257_pgtype42;
	Y2257_gen_type [230] = Y2257_pgtype43;
	Y2257_gen_type [231] = Y2257_pgtype44;
	Y2257_gen_type [232] = Y2257_pgtype45;
	Y2257_gen_type [233] = Y2257_pgtype46;
	Y2257_gen_type [234] = Y2257_pgtype47;
	Y2257_gen_type [235] = Y2257_pgtype48;
	Y2257_gen_type [236] = Y2257_pgtype49;
	Y2257_gen_type [237] = Y2257_pgtype50;
	Y2257_gen_type [238] = Y2257_pgtype51;
	Y2257_gen_type [239] = Y2257_pgtype52;
	Y2257_gen_type [240] = Y2257_pgtype53;
	Y2257_gen_type [241] = Y2257_pgtype54;
	Y2257_gen_type [242] = Y2257_pgtype55;
	Y2257_gen_type [243] = Y2257_pgtype56;
	Y2257_gen_type [244] = Y2257_pgtype57;
	Y2257_gen_type [245] = Y2257_pgtype58;
	Y2257_gen_type [246] = Y2257_pgtype59;
	Y2257_gen_type [247] = Y2257_pgtype60;
	Y2257_gen_type [248] = Y2257_pgtype61;
	Y2257_gen_type [249] = Y2257_pgtype62;
	Y2257_gen_type [250] = Y2257_pgtype63;
	Y2257_gen_type [251] = Y2257_pgtype64;
	Y2257_gen_type [252] = Y2257_pgtype65;
	Y2257_gen_type [253] = Y2257_pgtype66;
	Y2257_gen_type [254] = Y2257_pgtype67;
	Y2257_gen_type [255] = Y2257_pgtype68;
	Y2257_gen_type [256] = Y2257_pgtype69;
	Y2257_gen_type [257] = Y2257_pgtype70;
	Y2257_gen_type [258] = Y2257_pgtype71;
	Y2257_gen_type [259] = Y2257_pgtype72;
	Y2257_gen_type [260] = Y2257_pgtype73;
	Y2257_gen_type [261] = Y2257_pgtype74;
	Y2257_gen_type [262] = Y2257_pgtype75;
	Y2257_gen_type [263] = Y2257_pgtype76;
	Y2257_gen_type [264] = Y2257_pgtype77;
	Y2257_gen_type [265] = Y2257_pgtype78;
	Y2257_gen_type [266] = Y2257_pgtype79;
	Y2257_gen_type [267] = Y2257_pgtype80;
	Y2257_gen_type [268] = Y2257_pgtype81;
	Y2257_gen_type [269] = Y2257_pgtype82;
	Y2257_gen_type [270] = Y2257_pgtype83;
	Y2257_gen_type [271] = Y2257_pgtype84;
	Y2257_gen_type [272] = Y2257_pgtype85;
	Y2257_gen_type [273] = Y2257_pgtype86;
	Y2257_gen_type [274] = Y2257_pgtype87;
	Y2257_gen_type [275] = Y2257_pgtype88;
	Y2257_gen_type [276] = Y2257_pgtype89;
	Y2257_gen_type [277] = Y2257_pgtype90;
	Y2257_gen_type [278] = Y2257_pgtype91;
	Y2257_gen_type [279] = Y2257_pgtype92;
	Y2257_gen_type [280] = Y2257_pgtype93;
	Y2257_gen_type [281] = Y2257_pgtype94;
	Y2257_gen_type [282] = Y2257_pgtype95;
	Y2257_gen_type [283] = Y2257_pgtype96;
	Y2257_gen_type [284] = Y2257_pgtype97;
	Y2257_gen_type [285] = Y2257_pgtype98;
	Y2257_gen_type [286] = Y2257_pgtype99;
	Y2257_gen_type [287] = Y2257_pgtype100;
	Y2257_gen_type [288] = Y2257_pgtype101;
	Y2257_gen_type [289] = Y2257_pgtype102;
	Y2257_gen_type [290] = Y2257_pgtype103;
	Y2257_gen_type [291] = Y2257_pgtype104;
	Y2257_gen_type [292] = Y2257_pgtype105;
	Y2257_gen_type [293] = Y2257_pgtype106;
	Y2257_gen_type [294] = Y2257_pgtype107;
	Y2257_gen_type [295] = Y2257_pgtype108;
	Y2257_gen_type [296] = Y2257_pgtype109;
	Y2257_gen_type [297] = Y2257_pgtype110;
	Y2257_gen_type [298] = Y2257_pgtype111;
	Y2257_gen_type [373] = Y2257_pgtype112;
	Y2257_gen_type [374] = Y2257_pgtype113;
	Y2257_gen_type [375] = Y2257_pgtype114;
	Y2257_gen_type [376] = Y2257_pgtype115;
	Y2257_gen_type [377] = Y2257_pgtype116;
	Y2257_gen_type [378] = Y2257_pgtype117;
	Y2257_gen_type [379] = Y2257_pgtype118;
	Y2257_gen_type [380] = Y2257_pgtype119;
	Y2257_gen_type [381] = Y2257_pgtype120;
	Y2257_gen_type [382] = Y2257_pgtype121;
	Y2257_gen_type [383] = Y2257_pgtype122;
	Y2257_gen_type [384] = Y2257_pgtype123;
	Y2257_gen_type [385] = Y2257_pgtype124;
	Y2257_gen_type [386] = Y2257_pgtype125;
	Y2257_gen_type [387] = Y2257_pgtype126;
	Y2257_gen_type [388] = Y2257_pgtype127;
	Y2257_gen_type [389] = Y2257_pgtype128;
	Y2257_gen_type [390] = Y2257_pgtype129;
	Y2257_gen_type [391] = Y2257_pgtype130;
	Y2257_gen_type [392] = Y2257_pgtype131;
	Y2257_gen_type [393] = Y2257_pgtype132;
	Y2257_gen_type [394] = Y2257_pgtype133;
	Y2257_gen_type [395] = Y2257_pgtype134;
	Y2257_gen_type [670] = Y2257_pgtype135;
	Y2257_gen_type [672] = Y2257_pgtype136;
	{long i; for (i = 205; i < 299; i++) Y2257[i] = 844;};
	{long i; for (i = 378; i < 380; i++) Y2257[i] = 889;};
	Y2257[380] = 892;
	{long i; for (i = 381; i < 396; i++) Y2257[i] = 844;};
	Y2257[670] = 844;
	Y2257[672] = 844;
}

char *(*R2258[100])();
void R2258_init () {
	R2258[0] = (char *(*)()) F519_3517;
	R2258[1] = (char *(*)()) F520_3517_2258_1;
	R2258[2] = (char *(*)()) F521_3517_2258_1;
	R2258[85] = (char *(*)()) F604_4078;
	R2258[86] = (char *(*)()) F605_4078_2258_1;
	R2258[87] = (char *(*)()) F606_4078_2258_1;
	R2258[88] = (char *(*)()) F607_4078_2258_1;
	R2258[89] = (char *(*)()) F608_4078_2258_1;
	R2258[90] = (char *(*)()) F609_4078_2258_1;
	R2258[91] = (char *(*)()) F610_4078_2258_1;
	R2258[92] = (char *(*)()) F611_4078_2258_1;
	R2258[93] = (char *(*)()) F612_4078_2258_1;
	R2258[94] = (char *(*)()) F613_4078_2258_1;
	R2258[95] = (char *(*)()) F614_4078_2258_1;
	R2258[96] = (char *(*)()) F615_4078_2258_1;
	R2258[97] = (char *(*)()) F616_4078_2258_1;
	R2258[98] = (char *(*)()) F617_4078_2258_1;
	R2258[99] = (char *(*)()) F618_4078_2258_1;
}
static EIF_REFERENCE F520_3517_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F521_3517_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F605_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F606_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F607_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F608_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F609_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F610_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F611_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F612_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F613_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F614_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F615_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F616_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F617_4078_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F618_4078_2258_1 (EIF_REFERENCE Current)
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

static EIF_TYPE_INDEX Y2258_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype128[] = {0xFFF8,1,0xFFFF};
EIF_TYPE_INDEX *Y2258_gen_type [659];
EIF_TYPE_INDEX Y2258 [659];
void Y2258_init (void)
{
	egc_routines_types [2258] = Y2258;
	egc_routines_gen_types [2258] = Y2258_gen_type;
	egc_routines_offset [2258] = 240;
	Y2258_gen_type [0] = Y2258_pgtype0;
	Y2258_gen_type [1] = Y2258_pgtype1;
	Y2258_gen_type [2] = Y2258_pgtype2;
	Y2258_gen_type [3] = Y2258_pgtype3;
	Y2258_gen_type [4] = Y2258_pgtype4;
	Y2258_gen_type [5] = Y2258_pgtype5;
	Y2258_gen_type [6] = Y2258_pgtype6;
	Y2258_gen_type [7] = Y2258_pgtype7;
	Y2258_gen_type [8] = Y2258_pgtype8;
	Y2258_gen_type [9] = Y2258_pgtype9;
	Y2258_gen_type [10] = Y2258_pgtype10;
	Y2258_gen_type [11] = Y2258_pgtype11;
	Y2258_gen_type [12] = Y2258_pgtype12;
	Y2258_gen_type [13] = Y2258_pgtype13;
	Y2258_gen_type [14] = Y2258_pgtype14;
	Y2258_gen_type [15] = Y2258_pgtype15;
	Y2258_gen_type [16] = Y2258_pgtype16;
	Y2258_gen_type [17] = Y2258_pgtype17;
	Y2258_gen_type [18] = Y2258_pgtype18;
	Y2258_gen_type [19] = Y2258_pgtype19;
	Y2258_gen_type [20] = Y2258_pgtype20;
	Y2258_gen_type [21] = Y2258_pgtype21;
	Y2258_gen_type [22] = Y2258_pgtype22;
	Y2258_gen_type [23] = Y2258_pgtype23;
	Y2258_gen_type [24] = Y2258_pgtype24;
	Y2258_gen_type [25] = Y2258_pgtype25;
	Y2258_gen_type [26] = Y2258_pgtype26;
	Y2258_gen_type [27] = Y2258_pgtype27;
	Y2258_gen_type [28] = Y2258_pgtype28;
	Y2258_gen_type [29] = Y2258_pgtype29;
	Y2258_gen_type [62] = Y2258_pgtype30;
	Y2258_gen_type [63] = Y2258_pgtype31;
	Y2258_gen_type [64] = Y2258_pgtype32;
	Y2258_gen_type [65] = Y2258_pgtype33;
	Y2258_gen_type [156] = Y2258_pgtype34;
	Y2258_gen_type [157] = Y2258_pgtype35;
	Y2258_gen_type [158] = Y2258_pgtype36;
	Y2258_gen_type [159] = Y2258_pgtype37;
	Y2258_gen_type [160] = Y2258_pgtype38;
	Y2258_gen_type [161] = Y2258_pgtype39;
	Y2258_gen_type [162] = Y2258_pgtype40;
	Y2258_gen_type [163] = Y2258_pgtype41;
	Y2258_gen_type [164] = Y2258_pgtype42;
	Y2258_gen_type [165] = Y2258_pgtype43;
	Y2258_gen_type [166] = Y2258_pgtype44;
	Y2258_gen_type [167] = Y2258_pgtype45;
	Y2258_gen_type [168] = Y2258_pgtype46;
	Y2258_gen_type [169] = Y2258_pgtype47;
	Y2258_gen_type [170] = Y2258_pgtype48;
	Y2258_gen_type [171] = Y2258_pgtype49;
	Y2258_gen_type [218] = Y2258_pgtype50;
	Y2258_gen_type [219] = Y2258_pgtype51;
	Y2258_gen_type [220] = Y2258_pgtype52;
	Y2258_gen_type [221] = Y2258_pgtype53;
	Y2258_gen_type [222] = Y2258_pgtype54;
	Y2258_gen_type [223] = Y2258_pgtype55;
	Y2258_gen_type [224] = Y2258_pgtype56;
	Y2258_gen_type [225] = Y2258_pgtype57;
	Y2258_gen_type [226] = Y2258_pgtype58;
	Y2258_gen_type [227] = Y2258_pgtype59;
	Y2258_gen_type [228] = Y2258_pgtype60;
	Y2258_gen_type [229] = Y2258_pgtype61;
	Y2258_gen_type [230] = Y2258_pgtype62;
	Y2258_gen_type [231] = Y2258_pgtype63;
	Y2258_gen_type [232] = Y2258_pgtype64;
	Y2258_gen_type [233] = Y2258_pgtype65;
	Y2258_gen_type [234] = Y2258_pgtype66;
	Y2258_gen_type [235] = Y2258_pgtype67;
	Y2258_gen_type [236] = Y2258_pgtype68;
	Y2258_gen_type [237] = Y2258_pgtype69;
	Y2258_gen_type [238] = Y2258_pgtype70;
	Y2258_gen_type [239] = Y2258_pgtype71;
	Y2258_gen_type [240] = Y2258_pgtype72;
	Y2258_gen_type [241] = Y2258_pgtype73;
	Y2258_gen_type [242] = Y2258_pgtype74;
	Y2258_gen_type [243] = Y2258_pgtype75;
	Y2258_gen_type [244] = Y2258_pgtype76;
	Y2258_gen_type [245] = Y2258_pgtype77;
	Y2258_gen_type [246] = Y2258_pgtype78;
	Y2258_gen_type [247] = Y2258_pgtype79;
	Y2258_gen_type [248] = Y2258_pgtype80;
	Y2258_gen_type [249] = Y2258_pgtype81;
	Y2258_gen_type [250] = Y2258_pgtype82;
	Y2258_gen_type [251] = Y2258_pgtype83;
	Y2258_gen_type [252] = Y2258_pgtype84;
	Y2258_gen_type [253] = Y2258_pgtype85;
	Y2258_gen_type [254] = Y2258_pgtype86;
	Y2258_gen_type [255] = Y2258_pgtype87;
	Y2258_gen_type [256] = Y2258_pgtype88;
	Y2258_gen_type [257] = Y2258_pgtype89;
	Y2258_gen_type [258] = Y2258_pgtype90;
	Y2258_gen_type [259] = Y2258_pgtype91;
	Y2258_gen_type [260] = Y2258_pgtype92;
	Y2258_gen_type [261] = Y2258_pgtype93;
	Y2258_gen_type [262] = Y2258_pgtype94;
	Y2258_gen_type [263] = Y2258_pgtype95;
	Y2258_gen_type [264] = Y2258_pgtype96;
	Y2258_gen_type [265] = Y2258_pgtype97;
	Y2258_gen_type [266] = Y2258_pgtype98;
	Y2258_gen_type [267] = Y2258_pgtype99;
	Y2258_gen_type [268] = Y2258_pgtype100;
	Y2258_gen_type [269] = Y2258_pgtype101;
	Y2258_gen_type [270] = Y2258_pgtype102;
	Y2258_gen_type [271] = Y2258_pgtype103;
	Y2258_gen_type [272] = Y2258_pgtype104;
	Y2258_gen_type [273] = Y2258_pgtype105;
	Y2258_gen_type [274] = Y2258_pgtype106;
	Y2258_gen_type [275] = Y2258_pgtype107;
	Y2258_gen_type [276] = Y2258_pgtype108;
	Y2258_gen_type [277] = Y2258_pgtype109;
	Y2258_gen_type [278] = Y2258_pgtype110;
	Y2258_gen_type [279] = Y2258_pgtype111;
	Y2258_gen_type [280] = Y2258_pgtype112;
	Y2258_gen_type [353] = Y2258_pgtype113;
	Y2258_gen_type [363] = Y2258_pgtype114;
	Y2258_gen_type [364] = Y2258_pgtype115;
	Y2258_gen_type [365] = Y2258_pgtype116;
	Y2258_gen_type [366] = Y2258_pgtype117;
	Y2258_gen_type [367] = Y2258_pgtype118;
	Y2258_gen_type [368] = Y2258_pgtype119;
	Y2258_gen_type [369] = Y2258_pgtype120;
	Y2258_gen_type [370] = Y2258_pgtype121;
	Y2258_gen_type [371] = Y2258_pgtype122;
	Y2258_gen_type [372] = Y2258_pgtype123;
	Y2258_gen_type [373] = Y2258_pgtype124;
	Y2258_gen_type [374] = Y2258_pgtype125;
	Y2258_gen_type [375] = Y2258_pgtype126;
	Y2258_gen_type [376] = Y2258_pgtype127;
	Y2258_gen_type [377] = Y2258_pgtype128;
	{long i; for (i = 381; i < 384; i++) Y2258[i] = 823;};
	Y2258[401] = 844;
	Y2258[658] = 823;
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


#ifdef __cplusplus
}
#endif
