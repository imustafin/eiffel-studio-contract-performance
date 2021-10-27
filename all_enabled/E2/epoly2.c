#include "epoly2.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

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

char *(*R2209[457])();
void R2209_init () {
	R2209[0] = (char *(*)()) F443_3145_2209_2;
	R2209[1] = (char *(*)()) F444_3194;
	R2209[2] = (char *(*)()) F445_3194_2209_2;
	R2209[3] = (char *(*)()) F446_3194_2209_2;
	R2209[4] = (char *(*)()) F447_3194_2209_2;
	R2209[5] = (char *(*)()) F448_3194_2209_2;
	R2209[6] = (char *(*)()) F449_3194_2209_2;
	R2209[7] = (char *(*)()) F450_3194_2209_2;
	R2209[8] = (char *(*)()) F451_3194_2209_2;
	R2209[9] = (char *(*)()) F452_3194_2209_2;
	R2209[10] = (char *(*)()) F453_3194_2209_2;
	R2209[11] = (char *(*)()) F454_3194_2209_2;
	R2209[12] = (char *(*)()) F455_3194_2209_2;
	R2209[13] = (char *(*)()) F456_3194_2209_2;
	R2209[14] = (char *(*)()) F457_3194_2209_2;
	R2209[15] = (char *(*)()) F458_3194_2209_2;
	R2209[76] = (char *(*)()) F459_3257;
	R2209[77] = (char *(*)()) F463_3257_2209_2;
	R2209[78] = (char *(*)()) F472_3257_2209_2;
	R2209[151] = (char *(*)()) F594_3892;
	R2209[153] = (char *(*)()) F596_3933;
	R2209[154] = (char *(*)()) F597_3933;
	R2209[155] = (char *(*)()) F598_3933_2209_2;
	R2209[156] = (char *(*)()) F599_3933_2209_2;
	R2209[157] = (char *(*)()) F600_3933_2209_2;
	R2209[158] = (char *(*)()) F596_3933;
	R2209[159] = (char *(*)()) F599_3933_2209_2;
	R2209[160] = (char *(*)()) F596_3933;
	R2209[161] = (char *(*)()) F604_4085;
	R2209[162] = (char *(*)()) F605_4085_2209_2;
	R2209[163] = (char *(*)()) F606_4085_2209_2;
	R2209[164] = (char *(*)()) F607_4085_2209_2;
	R2209[165] = (char *(*)()) F608_4085_2209_2;
	R2209[166] = (char *(*)()) F609_4085_2209_2;
	R2209[167] = (char *(*)()) F610_4085_2209_2;
	R2209[168] = (char *(*)()) F611_4085_2209_2;
	R2209[169] = (char *(*)()) F612_4085_2209_2;
	R2209[170] = (char *(*)()) F613_4085_2209_2;
	R2209[171] = (char *(*)()) F614_4085_2209_2;
	R2209[172] = (char *(*)()) F615_4085_2209_2;
	R2209[173] = (char *(*)()) F616_4085_2209_2;
	R2209[174] = (char *(*)()) F617_4085_2209_2;
	R2209[175] = (char *(*)()) F618_4085_2209_2;
	{long i; for (i = 180; i < 182; i++) R2209[i] = (char *(*)()) F368_2602_2209_2;}
	R2209[199] = (char *(*)()) F642_5067_2209_2;
	R2209[450] = (char *(*)()) F891_6639_2209_2;
	R2209[452] = (char *(*)()) F894_6880_2209_2;
	R2209[456] = (char *(*)()) F368_2602_2209_2;
}
static EIF_BOOLEAN F443_3145_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F443_3145(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F445_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F445_3194(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F446_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F446_3194(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F447_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F447_3194(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F448_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F448_3194(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F449_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F449_3194(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F450_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F450_3194(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F451_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F451_3194(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F452_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F452_3194(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F453_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F453_3194(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F454_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F454_3194(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F455_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F455_3194(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F456_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F456_3194(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F457_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F457_3194(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F458_3194_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F458_3194(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F463_3257_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F463_3257(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F472_3257_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F472_3257(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F598_3933_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F598_3933(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F599_3933_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F599_3933(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F600_3933_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F600_3933(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F605_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F605_4085(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F606_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F606_4085(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F607_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F607_4085(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F608_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F608_4085(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F609_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F609_4085(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F610_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F610_4085(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F611_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F611_4085(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F612_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F612_4085(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F613_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F613_4085(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F614_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F614_4085(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F615_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F615_4085(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F616_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F616_4085(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F617_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F617_4085(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F618_4085_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F618_4085(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F368_2602_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F368_2602(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F642_5067_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F642_5067(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F891_6639_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F891_6639(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F894_6880_2209_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F894_6880(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2210[457])();
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
	R2210[151] = (char *(*)()) F594_3899;
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
	R2210[199] = (char *(*)()) F286_2533;
	R2210[450] = (char *(*)()) F289_2537;
	R2210[452] = (char *(*)()) F293_2537;
	R2210[456] = (char *(*)()) F899_7068;
}

char *(*R2213[457])();
void R2213_init () {
	R2213[0] = (char *(*)()) F207_2482;
	R2213[1] = (char *(*)()) F177_2464;
	R2213[2] = (char *(*)()) F179_2464;
	R2213[3] = (char *(*)()) F180_2464;
	R2213[4] = (char *(*)()) F183_2464;
	R2213[5] = (char *(*)()) F184_2464;
	R2213[6] = (char *(*)()) F181_2464;
	R2213[7] = (char *(*)()) F178_2464;
	R2213[8] = (char *(*)()) F185_2464;
	R2213[9] = (char *(*)()) F186_2464;
	R2213[10] = (char *(*)()) F187_2464;
	R2213[11] = (char *(*)()) F188_2464;
	R2213[12] = (char *(*)()) F189_2464;
	R2213[13] = (char *(*)()) F190_2464;
	R2213[14] = (char *(*)()) F191_2464;
	R2213[15] = (char *(*)()) F182_2464;
	R2213[76] = (char *(*)()) F177_2464;
	R2213[77] = (char *(*)()) F181_2464;
	R2213[78] = (char *(*)()) F191_2464;
	R2213[151] = (char *(*)()) F177_2464;
	{long i; for (i = 153; i < 155; i++) R2213[i] = (char *(*)()) F177_2464;}
	R2213[155] = (char *(*)()) F184_2464;
	{long i; for (i = 156; i < 158; i++) R2213[i] = (char *(*)()) F181_2464;}
	R2213[158] = (char *(*)()) F177_2464;
	R2213[159] = (char *(*)()) F181_2464;
	{long i; for (i = 160; i < 162; i++) R2213[i] = (char *(*)()) F177_2464;}
	R2213[162] = (char *(*)()) F179_2464;
	R2213[163] = (char *(*)()) F180_2464;
	R2213[164] = (char *(*)()) F183_2464;
	R2213[165] = (char *(*)()) F184_2464;
	R2213[166] = (char *(*)()) F181_2464;
	R2213[167] = (char *(*)()) F178_2464;
	R2213[168] = (char *(*)()) F185_2464;
	R2213[169] = (char *(*)()) F186_2464;
	R2213[170] = (char *(*)()) F187_2464;
	R2213[171] = (char *(*)()) F188_2464;
	R2213[172] = (char *(*)()) F189_2464;
	R2213[173] = (char *(*)()) F190_2464;
	R2213[174] = (char *(*)()) F191_2464;
	R2213[175] = (char *(*)()) F182_2464;
	{long i; for (i = 180; i < 182; i++) R2213[i] = (char *(*)()) F178_2464;}
	R2213[199] = (char *(*)()) F181_2464;
	R2213[450] = (char *(*)()) F893_6704;
	R2213[452] = (char *(*)()) F895_6911;
	R2213[456] = (char *(*)()) F178_2464;
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

char *(*R2216[457])();
void R2216_init () {
	R2216[0] = (char *(*)()) F443_3164;
	R2216[1] = (char *(*)()) F444_3238;
	R2216[2] = (char *(*)()) F445_3238;
	R2216[3] = (char *(*)()) F446_3238;
	R2216[4] = (char *(*)()) F447_3238;
	R2216[5] = (char *(*)()) F448_3238;
	R2216[6] = (char *(*)()) F449_3238;
	R2216[7] = (char *(*)()) F450_3238;
	R2216[8] = (char *(*)()) F451_3238;
	R2216[9] = (char *(*)()) F452_3238;
	R2216[10] = (char *(*)()) F453_3238;
	R2216[11] = (char *(*)()) F454_3238;
	R2216[12] = (char *(*)()) F455_3238;
	R2216[13] = (char *(*)()) F456_3238;
	R2216[14] = (char *(*)()) F457_3238;
	R2216[15] = (char *(*)()) F458_3238;
	R2216[76] = (char *(*)()) F367_2617;
	R2216[77] = (char *(*)()) F371_2617;
	R2216[78] = (char *(*)()) F381_2617;
	R2216[151] = (char *(*)()) F594_3913;
	R2216[153] = (char *(*)()) F596_3980;
	R2216[154] = (char *(*)()) F597_3980;
	R2216[155] = (char *(*)()) F598_3980;
	R2216[156] = (char *(*)()) F599_3980;
	R2216[157] = (char *(*)()) F600_3980;
	R2216[158] = (char *(*)()) F596_3980;
	R2216[159] = (char *(*)()) F599_3980;
	R2216[160] = (char *(*)()) F596_3980;
	R2216[161] = (char *(*)()) F367_2617;
	R2216[162] = (char *(*)()) F369_2617;
	R2216[163] = (char *(*)()) F370_2617;
	R2216[164] = (char *(*)()) F373_2617;
	R2216[165] = (char *(*)()) F374_2617;
	R2216[166] = (char *(*)()) F371_2617;
	R2216[167] = (char *(*)()) F368_2617;
	R2216[168] = (char *(*)()) F375_2617;
	R2216[169] = (char *(*)()) F376_2617;
	R2216[170] = (char *(*)()) F377_2617;
	R2216[171] = (char *(*)()) F378_2617;
	R2216[172] = (char *(*)()) F379_2617;
	R2216[173] = (char *(*)()) F380_2617;
	R2216[174] = (char *(*)()) F381_2617;
	R2216[175] = (char *(*)()) F372_2617;
	{long i; for (i = 180; i < 182; i++) R2216[i] = (char *(*)()) F368_2617;}
	R2216[199] = (char *(*)()) F412_2768;
	R2216[450] = (char *(*)()) F893_6773;
	R2216[452] = (char *(*)()) F895_6980;
	R2216[456] = (char *(*)()) F368_2617;
}

char *(*R2217[457])();
void R2217_init () {
	R2217[0] = (char *(*)()) F181_2468;
	R2217[1] = (char *(*)()) F177_2468;
	R2217[2] = (char *(*)()) F179_2468;
	R2217[3] = (char *(*)()) F180_2468;
	R2217[4] = (char *(*)()) F183_2468;
	R2217[5] = (char *(*)()) F184_2468;
	R2217[6] = (char *(*)()) F181_2468;
	R2217[7] = (char *(*)()) F178_2468;
	R2217[8] = (char *(*)()) F185_2468;
	R2217[9] = (char *(*)()) F186_2468;
	R2217[10] = (char *(*)()) F187_2468;
	R2217[11] = (char *(*)()) F188_2468;
	R2217[12] = (char *(*)()) F189_2468;
	R2217[13] = (char *(*)()) F190_2468;
	R2217[14] = (char *(*)()) F191_2468;
	R2217[15] = (char *(*)()) F182_2468;
	R2217[76] = (char *(*)()) F177_2468;
	R2217[77] = (char *(*)()) F181_2468;
	R2217[78] = (char *(*)()) F191_2468;
	R2217[151] = (char *(*)()) F177_2468;
	{long i; for (i = 153; i < 155; i++) R2217[i] = (char *(*)()) F177_2468;}
	R2217[155] = (char *(*)()) F184_2468;
	{long i; for (i = 156; i < 158; i++) R2217[i] = (char *(*)()) F181_2468;}
	R2217[158] = (char *(*)()) F177_2468;
	R2217[159] = (char *(*)()) F181_2468;
	{long i; for (i = 160; i < 162; i++) R2217[i] = (char *(*)()) F177_2468;}
	R2217[162] = (char *(*)()) F179_2468;
	R2217[163] = (char *(*)()) F180_2468;
	R2217[164] = (char *(*)()) F183_2468;
	R2217[165] = (char *(*)()) F184_2468;
	R2217[166] = (char *(*)()) F181_2468;
	R2217[167] = (char *(*)()) F178_2468;
	R2217[168] = (char *(*)()) F185_2468;
	R2217[169] = (char *(*)()) F186_2468;
	R2217[170] = (char *(*)()) F187_2468;
	R2217[171] = (char *(*)()) F188_2468;
	R2217[172] = (char *(*)()) F189_2468;
	R2217[173] = (char *(*)()) F190_2468;
	R2217[174] = (char *(*)()) F191_2468;
	R2217[175] = (char *(*)()) F182_2468;
	{long i; for (i = 180; i < 182; i++) R2217[i] = (char *(*)()) F178_2468;}
	R2217[199] = (char *(*)()) F181_2468;
	R2217[450] = (char *(*)()) F178_2468;
	R2217[452] = (char *(*)()) F182_2468;
	R2217[456] = (char *(*)()) F178_2468;
}

char *(*R2218[457])();
void R2218_init () {
	R2218[0] = (char *(*)()) F443_3153;
	R2218[1] = (char *(*)()) F444_3207;
	R2218[2] = (char *(*)()) F445_3207;
	R2218[3] = (char *(*)()) F446_3207;
	R2218[4] = (char *(*)()) F447_3207;
	R2218[5] = (char *(*)()) F448_3207;
	R2218[6] = (char *(*)()) F449_3207;
	R2218[7] = (char *(*)()) F450_3207;
	R2218[8] = (char *(*)()) F451_3207;
	R2218[9] = (char *(*)()) F452_3207;
	R2218[10] = (char *(*)()) F453_3207;
	R2218[11] = (char *(*)()) F454_3207;
	R2218[12] = (char *(*)()) F455_3207;
	R2218[13] = (char *(*)()) F456_3207;
	R2218[14] = (char *(*)()) F457_3207;
	R2218[15] = (char *(*)()) F458_3207;
	R2218[76] = (char *(*)()) F474_3316;
	R2218[77] = (char *(*)()) F478_3316;
	R2218[78] = (char *(*)()) F487_3316;
	R2218[151] = (char *(*)()) F594_3901;
	R2218[153] = (char *(*)()) F596_3950;
	R2218[154] = (char *(*)()) F597_3950;
	R2218[155] = (char *(*)()) F598_3950;
	R2218[156] = (char *(*)()) F599_3950;
	R2218[157] = (char *(*)()) F600_3950;
	R2218[158] = (char *(*)()) F596_3950;
	R2218[159] = (char *(*)()) F599_3950;
	R2218[160] = (char *(*)()) F596_3950;
	R2218[161] = (char *(*)()) F474_3316;
	R2218[162] = (char *(*)()) F475_3316;
	R2218[163] = (char *(*)()) F476_3316;
	R2218[164] = (char *(*)()) F477_3316;
	R2218[165] = (char *(*)()) F479_3316;
	R2218[166] = (char *(*)()) F478_3316;
	R2218[167] = (char *(*)()) F480_3316;
	R2218[168] = (char *(*)()) F481_3316;
	R2218[169] = (char *(*)()) F482_3316;
	R2218[170] = (char *(*)()) F483_3316;
	R2218[171] = (char *(*)()) F484_3316;
	R2218[172] = (char *(*)()) F485_3316;
	R2218[173] = (char *(*)()) F486_3316;
	R2218[174] = (char *(*)()) F487_3316;
	R2218[175] = (char *(*)()) F488_3316;
	{long i; for (i = 180; i < 182; i++) R2218[i] = (char *(*)()) F622_4756;}
	R2218[199] = (char *(*)()) F412_2759;
	R2218[450] = (char *(*)()) F893_6702;
	R2218[452] = (char *(*)()) F895_6909;
	R2218[456] = (char *(*)()) F622_4756;
}

char *(*R2219[457])();
void R2219_init () {
	R2219[0] = (char *(*)()) F443_3154;
	R2219[1] = (char *(*)()) F444_3208;
	R2219[2] = (char *(*)()) F445_3208;
	R2219[3] = (char *(*)()) F446_3208;
	R2219[4] = (char *(*)()) F447_3208;
	R2219[5] = (char *(*)()) F448_3208;
	R2219[6] = (char *(*)()) F449_3208;
	R2219[7] = (char *(*)()) F450_3208;
	R2219[8] = (char *(*)()) F451_3208;
	R2219[9] = (char *(*)()) F452_3208;
	R2219[10] = (char *(*)()) F453_3208;
	R2219[11] = (char *(*)()) F454_3208;
	R2219[12] = (char *(*)()) F455_3208;
	R2219[13] = (char *(*)()) F456_3208;
	R2219[14] = (char *(*)()) F457_3208;
	R2219[15] = (char *(*)()) F458_3208;
	R2219[76] = (char *(*)()) F474_3317;
	R2219[77] = (char *(*)()) F478_3317;
	R2219[78] = (char *(*)()) F487_3317;
	R2219[151] = (char *(*)()) F594_3902;
	R2219[153] = (char *(*)()) F596_3951;
	R2219[154] = (char *(*)()) F597_3951;
	R2219[155] = (char *(*)()) F598_3951;
	R2219[156] = (char *(*)()) F599_3951;
	R2219[157] = (char *(*)()) F600_3951;
	R2219[158] = (char *(*)()) F596_3951;
	R2219[159] = (char *(*)()) F599_3951;
	R2219[160] = (char *(*)()) F596_3951;
	R2219[161] = (char *(*)()) F604_4098;
	R2219[162] = (char *(*)()) F605_4098;
	R2219[163] = (char *(*)()) F606_4098;
	R2219[164] = (char *(*)()) F607_4098;
	R2219[165] = (char *(*)()) F608_4098;
	R2219[166] = (char *(*)()) F609_4098;
	R2219[167] = (char *(*)()) F610_4098;
	R2219[168] = (char *(*)()) F611_4098;
	R2219[169] = (char *(*)()) F612_4098;
	R2219[170] = (char *(*)()) F613_4098;
	R2219[171] = (char *(*)()) F614_4098;
	R2219[172] = (char *(*)()) F615_4098;
	R2219[173] = (char *(*)()) F616_4098;
	R2219[174] = (char *(*)()) F617_4098;
	R2219[175] = (char *(*)()) F618_4098;
	{long i; for (i = 180; i < 182; i++) R2219[i] = (char *(*)()) F622_4760;}
	R2219[199] = (char *(*)()) F412_2760;
	R2219[450] = (char *(*)()) F893_6703;
	R2219[452] = (char *(*)()) F895_6910;
	R2219[456] = (char *(*)()) F622_4760;
}

char *(*R2220[457])();
void R2220_init () {
	R2220[0] = (char *(*)()) F196_2471_2220_2;
	R2220[1] = (char *(*)()) F192_2471;
	R2220[2] = (char *(*)()) F194_2471_2220_2;
	R2220[3] = (char *(*)()) F195_2471_2220_2;
	R2220[4] = (char *(*)()) F198_2471_2220_2;
	R2220[5] = (char *(*)()) F199_2471_2220_2;
	R2220[6] = (char *(*)()) F196_2471_2220_2;
	R2220[7] = (char *(*)()) F193_2471_2220_2;
	R2220[8] = (char *(*)()) F200_2471_2220_2;
	R2220[9] = (char *(*)()) F201_2471_2220_2;
	R2220[10] = (char *(*)()) F202_2471_2220_2;
	R2220[11] = (char *(*)()) F203_2471_2220_2;
	R2220[12] = (char *(*)()) F204_2471_2220_2;
	R2220[13] = (char *(*)()) F205_2471_2220_2;
	R2220[14] = (char *(*)()) F206_2471_2220_2;
	R2220[15] = (char *(*)()) F197_2471_2220_2;
	R2220[76] = (char *(*)()) F519_3533;
	R2220[77] = (char *(*)()) F520_3533_2220_2;
	R2220[78] = (char *(*)()) F521_3533_2220_2;
	R2220[151] = (char *(*)()) F192_2471;
	{long i; for (i = 153; i < 155; i++) R2220[i] = (char *(*)()) F192_2471;}
	R2220[155] = (char *(*)()) F199_2471_2220_2;
	{long i; for (i = 156; i < 158; i++) R2220[i] = (char *(*)()) F196_2471_2220_2;}
	R2220[158] = (char *(*)()) F192_2471;
	R2220[159] = (char *(*)()) F196_2471_2220_2;
	R2220[160] = (char *(*)()) F192_2471;
	R2220[161] = (char *(*)()) F604_4101;
	R2220[162] = (char *(*)()) F605_4101_2220_2;
	R2220[163] = (char *(*)()) F606_4101_2220_2;
	R2220[164] = (char *(*)()) F607_4101_2220_2;
	R2220[165] = (char *(*)()) F608_4101_2220_2;
	R2220[166] = (char *(*)()) F609_4101_2220_2;
	R2220[167] = (char *(*)()) F610_4101_2220_2;
	R2220[168] = (char *(*)()) F611_4101_2220_2;
	R2220[169] = (char *(*)()) F612_4101_2220_2;
	R2220[170] = (char *(*)()) F613_4101_2220_2;
	R2220[171] = (char *(*)()) F614_4101_2220_2;
	R2220[172] = (char *(*)()) F615_4101_2220_2;
	R2220[173] = (char *(*)()) F616_4101_2220_2;
	R2220[174] = (char *(*)()) F617_4101_2220_2;
	R2220[175] = (char *(*)()) F618_4101_2220_2;
	{long i; for (i = 180; i < 182; i++) R2220[i] = (char *(*)()) F193_2471_2220_2;}
	R2220[199] = (char *(*)()) F196_2471_2220_2;
	R2220[450] = (char *(*)()) F193_2471_2220_2;
	R2220[452] = (char *(*)()) F197_2471_2220_2;
	R2220[456] = (char *(*)()) F193_2471_2220_2;
}
static EIF_BOOLEAN F196_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F196_2471(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F194_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F194_2471(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F195_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F195_2471(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F198_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F198_2471(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F199_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F199_2471(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F193_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F193_2471(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F200_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F200_2471(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F201_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F201_2471(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F202_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F202_2471(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F203_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F203_2471(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F204_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F204_2471(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F205_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F205_2471(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F206_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F206_2471(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F197_2471_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F197_2471(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F520_3533_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F520_3533(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F521_3533_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F521_3533(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F605_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F605_4101(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F606_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F606_4101(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F607_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F607_4101(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F608_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F608_4101(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F609_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F609_4101(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F610_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F610_4101(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F611_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F611_4101(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F612_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F612_4101(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F613_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F613_4101(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F614_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F614_4101(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F615_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F615_4101(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F616_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F616_4101(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F617_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F617_4101(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F618_4101_2220_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F618_4101(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2222[457])();
void R2222_init () {
	R2222[0] = (char *(*)()) F443_3155_2222_4;
	R2222[1] = (char *(*)()) F444_3242;
	R2222[2] = (char *(*)()) F445_3242_2222_4;
	R2222[3] = (char *(*)()) F446_3242_2222_4;
	R2222[4] = (char *(*)()) F447_3242_2222_4;
	R2222[5] = (char *(*)()) F448_3242_2222_4;
	R2222[6] = (char *(*)()) F449_3242_2222_4;
	R2222[7] = (char *(*)()) F450_3242_2222_4;
	R2222[8] = (char *(*)()) F451_3242_2222_4;
	R2222[9] = (char *(*)()) F452_3242_2222_4;
	R2222[10] = (char *(*)()) F453_3242_2222_4;
	R2222[11] = (char *(*)()) F454_3242_2222_4;
	R2222[12] = (char *(*)()) F455_3242_2222_4;
	R2222[13] = (char *(*)()) F456_3242_2222_4;
	R2222[14] = (char *(*)()) F457_3242_2222_4;
	R2222[15] = (char *(*)()) F458_3242_2222_4;
	R2222[76] = (char *(*)()) F519_3542;
	R2222[77] = (char *(*)()) F520_3542_2222_4;
	R2222[78] = (char *(*)()) F521_3542_2222_4;
	R2222[151] = (char *(*)()) F594_3903;
	R2222[153] = (char *(*)()) F596_4035;
	R2222[154] = (char *(*)()) F597_4035;
	R2222[155] = (char *(*)()) F598_4035_2222_4;
	R2222[156] = (char *(*)()) F599_4035_2222_4;
	R2222[157] = (char *(*)()) F600_4035_2222_4;
	R2222[158] = (char *(*)()) F596_4035;
	R2222[159] = (char *(*)()) F599_4035_2222_4;
	R2222[160] = (char *(*)()) F596_4035;
	R2222[161] = (char *(*)()) F604_4114;
	R2222[162] = (char *(*)()) F605_4114_2222_4;
	R2222[163] = (char *(*)()) F606_4114_2222_4;
	R2222[164] = (char *(*)()) F607_4114_2222_4;
	R2222[165] = (char *(*)()) F608_4114_2222_4;
	R2222[166] = (char *(*)()) F609_4114_2222_4;
	R2222[167] = (char *(*)()) F610_4114_2222_4;
	R2222[168] = (char *(*)()) F611_4114_2222_4;
	R2222[169] = (char *(*)()) F612_4114_2222_4;
	R2222[170] = (char *(*)()) F613_4114_2222_4;
	R2222[171] = (char *(*)()) F614_4114_2222_4;
	R2222[172] = (char *(*)()) F615_4114_2222_4;
	R2222[173] = (char *(*)()) F616_4114_2222_4;
	R2222[174] = (char *(*)()) F617_4114_2222_4;
	R2222[175] = (char *(*)()) F618_4114_2222_4;
	{long i; for (i = 180; i < 182; i++) R2222[i] = (char *(*)()) F622_4789_2222_4;}
	R2222[199] = (char *(*)()) F412_2766_2222_4;
	R2222[450] = (char *(*)()) F893_6746_2222_4;
	R2222[452] = (char *(*)()) F895_6953_2222_4;
	R2222[456] = (char *(*)()) F622_4789_2222_4;
}
static void F443_3155_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F443_3155(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F445_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F445_3242(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F446_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F446_3242(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F447_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F447_3242(Current, *(EIF_POINTER *)arg1);
}
static void F448_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F448_3242(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F449_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F449_3242(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F450_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F450_3242(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F451_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F451_3242(Current, *(EIF_REAL_64 *)arg1);
}
static void F452_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F452_3242(Current, *(EIF_REAL_32 *)arg1);
}
static void F453_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F453_3242(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F454_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F454_3242(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F455_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F455_3242(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F456_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F456_3242(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F457_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F457_3242(Current, *(EIF_BOOLEAN *)arg1);
}
static void F458_3242_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F458_3242(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F520_3542_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F520_3542(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F521_3542_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F521_3542(Current, *(EIF_BOOLEAN *)arg1);
}
static void F598_4035_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F598_4035(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F599_4035_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F599_4035(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F600_4035_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F600_4035(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F605_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F605_4114(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F606_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F606_4114(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F607_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F607_4114(Current, *(EIF_POINTER *)arg1);
}
static void F608_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F608_4114(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F609_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F609_4114(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F610_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_4114(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F611_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F611_4114(Current, *(EIF_REAL_64 *)arg1);
}
static void F612_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F612_4114(Current, *(EIF_REAL_32 *)arg1);
}
static void F613_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F613_4114(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F614_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F614_4114(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F615_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F615_4114(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F616_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F616_4114(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F617_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F617_4114(Current, *(EIF_BOOLEAN *)arg1);
}
static void F618_4114_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F618_4114(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F622_4789_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F622_4789(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F412_2766_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F412_2766(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F893_6746_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F893_6746(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F895_6953_2222_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F895_6953(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2224[457])();
void R2224_init () {
	R2224[0] = (char *(*)()) F443_3172_2224_4;
	R2224[1] = (char *(*)()) F444_3241;
	R2224[2] = (char *(*)()) F445_3241_2224_4;
	R2224[3] = (char *(*)()) F446_3241_2224_4;
	R2224[4] = (char *(*)()) F447_3241_2224_4;
	R2224[5] = (char *(*)()) F448_3241_2224_4;
	R2224[6] = (char *(*)()) F449_3241_2224_4;
	R2224[7] = (char *(*)()) F450_3241_2224_4;
	R2224[8] = (char *(*)()) F451_3241_2224_4;
	R2224[9] = (char *(*)()) F452_3241_2224_4;
	R2224[10] = (char *(*)()) F453_3241_2224_4;
	R2224[11] = (char *(*)()) F454_3241_2224_4;
	R2224[12] = (char *(*)()) F455_3241_2224_4;
	R2224[13] = (char *(*)()) F456_3241_2224_4;
	R2224[14] = (char *(*)()) F457_3241_2224_4;
	R2224[15] = (char *(*)()) F458_3241_2224_4;
	R2224[76] = (char *(*)()) F474_3323;
	R2224[77] = (char *(*)()) F478_3323_2224_4;
	R2224[78] = (char *(*)()) F487_3323_2224_4;
	R2224[151] = (char *(*)()) F594_3909;
	R2224[153] = (char *(*)()) F596_3977;
	R2224[154] = (char *(*)()) F597_3977;
	R2224[155] = (char *(*)()) F598_3977_2224_4;
	R2224[156] = (char *(*)()) F599_3977_2224_4;
	R2224[157] = (char *(*)()) F600_3977_2224_4;
	R2224[158] = (char *(*)()) F596_3977;
	R2224[159] = (char *(*)()) F599_3977_2224_4;
	R2224[160] = (char *(*)()) F596_3977;
	R2224[161] = (char *(*)()) F604_4126;
	R2224[162] = (char *(*)()) F605_4126_2224_4;
	R2224[163] = (char *(*)()) F606_4126_2224_4;
	R2224[164] = (char *(*)()) F607_4126_2224_4;
	R2224[165] = (char *(*)()) F608_4126_2224_4;
	R2224[166] = (char *(*)()) F609_4126_2224_4;
	R2224[167] = (char *(*)()) F610_4126_2224_4;
	R2224[168] = (char *(*)()) F611_4126_2224_4;
	R2224[169] = (char *(*)()) F612_4126_2224_4;
	R2224[170] = (char *(*)()) F613_4126_2224_4;
	R2224[171] = (char *(*)()) F614_4126_2224_4;
	R2224[172] = (char *(*)()) F615_4126_2224_4;
	R2224[173] = (char *(*)()) F616_4126_2224_4;
	R2224[174] = (char *(*)()) F617_4126_2224_4;
	R2224[175] = (char *(*)()) F618_4126_2224_4;
	{long i; for (i = 180; i < 182; i++) R2224[i] = (char *(*)()) F622_4908_2224_4;}
	R2224[199] = (char *(*)()) F412_2769_2224_4;
	R2224[450] = (char *(*)()) F893_6755_2224_4;
	R2224[452] = (char *(*)()) F895_6962_2224_4;
	R2224[456] = (char *(*)()) F622_4908_2224_4;
}
static void F443_3172_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F443_3172(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F445_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F445_3241(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F446_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F446_3241(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F447_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F447_3241(Current, *(EIF_POINTER *)arg1);
}
static void F448_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F448_3241(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F449_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F449_3241(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F450_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F450_3241(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F451_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F451_3241(Current, *(EIF_REAL_64 *)arg1);
}
static void F452_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F452_3241(Current, *(EIF_REAL_32 *)arg1);
}
static void F453_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F453_3241(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F454_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F454_3241(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F455_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F455_3241(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F456_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F456_3241(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F457_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F457_3241(Current, *(EIF_BOOLEAN *)arg1);
}
static void F458_3241_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F458_3241(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F478_3323_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F478_3323(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F487_3323_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F487_3323(Current, *(EIF_BOOLEAN *)arg1);
}
static void F598_3977_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F598_3977(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F599_3977_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F599_3977(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F600_3977_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F600_3977(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F605_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F605_4126(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F606_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F606_4126(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F607_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F607_4126(Current, *(EIF_POINTER *)arg1);
}
static void F608_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F608_4126(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F609_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F609_4126(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F610_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F610_4126(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F611_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F611_4126(Current, *(EIF_REAL_64 *)arg1);
}
static void F612_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F612_4126(Current, *(EIF_REAL_32 *)arg1);
}
static void F613_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F613_4126(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F614_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F614_4126(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F615_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F615_4126(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F616_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F616_4126(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F617_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F617_4126(Current, *(EIF_BOOLEAN *)arg1);
}
static void F618_4126_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F618_4126(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F622_4908_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F622_4908(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F412_2769_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F412_2769(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F893_6755_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F893_6755(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F895_6962_2224_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F895_6962(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2226[457])();
void R2226_init () {
	R2226[0] = (char *(*)()) F443_3161;
	R2226[1] = (char *(*)()) F444_3222;
	R2226[2] = (char *(*)()) F445_3222;
	R2226[3] = (char *(*)()) F446_3222;
	R2226[4] = (char *(*)()) F447_3222;
	R2226[5] = (char *(*)()) F448_3222;
	R2226[6] = (char *(*)()) F449_3222;
	R2226[7] = (char *(*)()) F450_3222;
	R2226[8] = (char *(*)()) F451_3222;
	R2226[9] = (char *(*)()) F452_3222;
	R2226[10] = (char *(*)()) F453_3222;
	R2226[11] = (char *(*)()) F454_3222;
	R2226[12] = (char *(*)()) F455_3222;
	R2226[13] = (char *(*)()) F456_3222;
	R2226[14] = (char *(*)()) F457_3222;
	R2226[15] = (char *(*)()) F458_3222;
	R2226[76] = (char *(*)()) F519_3551;
	R2226[77] = (char *(*)()) F520_3551;
	R2226[78] = (char *(*)()) F521_3551;
	R2226[151] = (char *(*)()) F594_3911;
	R2226[153] = (char *(*)()) F596_3978;
	R2226[154] = (char *(*)()) F597_3978;
	R2226[155] = (char *(*)()) F598_3978;
	R2226[156] = (char *(*)()) F599_3978;
	R2226[157] = (char *(*)()) F600_3978;
	R2226[158] = (char *(*)()) F596_3978;
	R2226[159] = (char *(*)()) F599_3978;
	R2226[160] = (char *(*)()) F596_3978;
	R2226[161] = (char *(*)()) F604_4131;
	R2226[162] = (char *(*)()) F605_4131;
	R2226[163] = (char *(*)()) F606_4131;
	R2226[164] = (char *(*)()) F607_4131;
	R2226[165] = (char *(*)()) F608_4131;
	R2226[166] = (char *(*)()) F609_4131;
	R2226[167] = (char *(*)()) F610_4131;
	R2226[168] = (char *(*)()) F611_4131;
	R2226[169] = (char *(*)()) F612_4131;
	R2226[170] = (char *(*)()) F613_4131;
	R2226[171] = (char *(*)()) F614_4131;
	R2226[172] = (char *(*)()) F615_4131;
	R2226[173] = (char *(*)()) F616_4131;
	R2226[174] = (char *(*)()) F617_4131;
	R2226[175] = (char *(*)()) F618_4131;
	{long i; for (i = 180; i < 182; i++) R2226[i] = (char *(*)()) F622_4824;}
	R2226[199] = (char *(*)()) F412_2773;
	R2226[450] = (char *(*)()) F893_6759;
	R2226[452] = (char *(*)()) F895_6966;
	R2226[456] = (char *(*)()) F622_4824;
}

char *(*R2252[453])();
void R2252_init () {
	R2252[0] = (char *(*)()) F443_3143_2252_5;
	R2252[1] = (char *(*)()) F444_3191_2252_5;
	R2252[2] = (char *(*)()) F445_3191_2252_5;
	R2252[3] = (char *(*)()) F446_3191_2252_5;
	R2252[4] = (char *(*)()) F447_3191_2252_5;
	R2252[5] = (char *(*)()) F448_3191_2252_5;
	R2252[6] = (char *(*)()) F449_3191_2252_5;
	R2252[7] = (char *(*)()) F450_3191_2252_5;
	R2252[8] = (char *(*)()) F451_3191_2252_5;
	R2252[9] = (char *(*)()) F452_3191_2252_5;
	R2252[10] = (char *(*)()) F453_3191_2252_5;
	R2252[11] = (char *(*)()) F454_3191_2252_5;
	R2252[12] = (char *(*)()) F455_3191_2252_5;
	R2252[13] = (char *(*)()) F456_3191_2252_5;
	R2252[14] = (char *(*)()) F457_3191_2252_5;
	R2252[15] = (char *(*)()) F458_3191_2252_5;
	R2252[76] = (char *(*)()) F459_3259_2252_5;
	R2252[77] = (char *(*)()) F463_3259_2252_5;
	R2252[78] = (char *(*)()) F472_3259_2252_5;
	R2252[153] = (char *(*)()) F596_3928;
	R2252[154] = (char *(*)()) F597_3928_2252_5;
	R2252[155] = (char *(*)()) F598_3928_2252_5;
	R2252[156] = (char *(*)()) F599_3928_2252_5;
	R2252[157] = (char *(*)()) F600_3928_2252_5;
	R2252[158] = (char *(*)()) F596_3928;
	R2252[159] = (char *(*)()) F599_3928_2252_5;
	R2252[160] = (char *(*)()) F596_3928;
	R2252[161] = (char *(*)()) F604_4079_2252_5;
	R2252[162] = (char *(*)()) F605_4079_2252_5;
	R2252[163] = (char *(*)()) F606_4079_2252_5;
	R2252[164] = (char *(*)()) F607_4079_2252_5;
	R2252[165] = (char *(*)()) F608_4079_2252_5;
	R2252[166] = (char *(*)()) F609_4079_2252_5;
	R2252[167] = (char *(*)()) F610_4079_2252_5;
	R2252[168] = (char *(*)()) F611_4079_2252_5;
	R2252[169] = (char *(*)()) F612_4079_2252_5;
	R2252[170] = (char *(*)()) F613_4079_2252_5;
	R2252[171] = (char *(*)()) F614_4079_2252_5;
	R2252[172] = (char *(*)()) F615_4079_2252_5;
	R2252[173] = (char *(*)()) F616_4079_2252_5;
	R2252[174] = (char *(*)()) F617_4079_2252_5;
	R2252[175] = (char *(*)()) F618_4079_2252_5;
	R2252[450] = (char *(*)()) F893_6696_2252_5;
	R2252[452] = (char *(*)()) F895_6904_2252_5;
}
static EIF_REFERENCE F443_3143_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F443_3143(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F459_3259_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F459_3259(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F463_3259_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F463_3259(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F472_3259_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F472_3259(Current, *(EIF_INTEGER_32 *)arg1);
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
static EIF_REFERENCE F597_3928_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F597_3928(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F598_3928_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F598_3928(Current, *(EIF_POINTER *)arg1);
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
static EIF_REFERENCE F599_3928_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F599_3928(Current, arg1);
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
static EIF_REFERENCE F600_3928_2252_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F600_3928(Current, *(EIF_INTEGER_32 *)arg1);
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

char *(*R2254[453])();
void R2254_init () {
	R2254[0] = (char *(*)()) F443_3146_2254_2;
	R2254[1] = (char *(*)()) F444_3206_2254_2;
	R2254[2] = (char *(*)()) F445_3206_2254_2;
	R2254[3] = (char *(*)()) F446_3206_2254_2;
	R2254[4] = (char *(*)()) F447_3206_2254_2;
	R2254[5] = (char *(*)()) F448_3206_2254_2;
	R2254[6] = (char *(*)()) F449_3206_2254_2;
	R2254[7] = (char *(*)()) F450_3206_2254_2;
	R2254[8] = (char *(*)()) F451_3206_2254_2;
	R2254[9] = (char *(*)()) F452_3206_2254_2;
	R2254[10] = (char *(*)()) F453_3206_2254_2;
	R2254[11] = (char *(*)()) F454_3206_2254_2;
	R2254[12] = (char *(*)()) F455_3206_2254_2;
	R2254[13] = (char *(*)()) F456_3206_2254_2;
	R2254[14] = (char *(*)()) F457_3206_2254_2;
	R2254[15] = (char *(*)()) F458_3206_2254_2;
	R2254[76] = (char *(*)()) F459_3267_2254_2;
	R2254[77] = (char *(*)()) F463_3267_2254_2;
	R2254[78] = (char *(*)()) F472_3267_2254_2;
	R2254[153] = (char *(*)()) F596_3931;
	R2254[154] = (char *(*)()) F597_3931_2254_2;
	R2254[155] = (char *(*)()) F598_3931_2254_2;
	R2254[156] = (char *(*)()) F599_3931;
	R2254[157] = (char *(*)()) F600_3931_2254_2;
	R2254[158] = (char *(*)()) F596_3931;
	R2254[159] = (char *(*)()) F599_3931;
	R2254[160] = (char *(*)()) F596_3931;
	R2254[161] = (char *(*)()) F604_4100_2254_2;
	R2254[162] = (char *(*)()) F605_4100_2254_2;
	R2254[163] = (char *(*)()) F606_4100_2254_2;
	R2254[164] = (char *(*)()) F607_4100_2254_2;
	R2254[165] = (char *(*)()) F608_4100_2254_2;
	R2254[166] = (char *(*)()) F609_4100_2254_2;
	R2254[167] = (char *(*)()) F610_4100_2254_2;
	R2254[168] = (char *(*)()) F611_4100_2254_2;
	R2254[169] = (char *(*)()) F612_4100_2254_2;
	R2254[170] = (char *(*)()) F613_4100_2254_2;
	R2254[171] = (char *(*)()) F614_4100_2254_2;
	R2254[172] = (char *(*)()) F615_4100_2254_2;
	R2254[173] = (char *(*)()) F616_4100_2254_2;
	R2254[174] = (char *(*)()) F617_4100_2254_2;
	R2254[175] = (char *(*)()) F618_4100_2254_2;
	R2254[450] = (char *(*)()) F890_6522_2254_2;
	R2254[452] = (char *(*)()) F890_6522_2254_2;
}
static EIF_BOOLEAN F443_3146_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F443_3146(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F444_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F444_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F445_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F445_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F446_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F446_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F447_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F447_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F448_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F448_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F449_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F449_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F450_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F450_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F451_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F451_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F452_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F452_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F453_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F453_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F454_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F454_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F455_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F455_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F456_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F456_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F457_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F457_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F458_3206_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F458_3206(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F459_3267_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F459_3267(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F463_3267_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F463_3267(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F472_3267_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F472_3267(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F597_3931_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F597_3931(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F598_3931_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F598_3931(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F600_3931_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F600_3931(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F604_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F604_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F605_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F605_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F606_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F606_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F607_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F607_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F608_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F608_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F609_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F609_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F610_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F610_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F611_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F611_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F612_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F612_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F613_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F613_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F614_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F614_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F615_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F615_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F616_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F616_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F617_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F617_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F618_4100_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F618_4100(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F890_6522_2254_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F890_6522(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2255[453])();
void R2255_init () {
	R2255[0] = (char *(*)()) F443_3173_2255_8;
	R2255[1] = (char *(*)()) F444_3210_2255_8;
	R2255[2] = (char *(*)()) F445_3210_2255_8;
	R2255[3] = (char *(*)()) F446_3210_2255_8;
	R2255[4] = (char *(*)()) F447_3210_2255_8;
	R2255[5] = (char *(*)()) F448_3210_2255_8;
	R2255[6] = (char *(*)()) F449_3210_2255_8;
	R2255[7] = (char *(*)()) F450_3210_2255_8;
	R2255[8] = (char *(*)()) F451_3210_2255_8;
	R2255[9] = (char *(*)()) F452_3210_2255_8;
	R2255[10] = (char *(*)()) F453_3210_2255_8;
	R2255[11] = (char *(*)()) F454_3210_2255_8;
	R2255[12] = (char *(*)()) F455_3210_2255_8;
	R2255[13] = (char *(*)()) F456_3210_2255_8;
	R2255[14] = (char *(*)()) F457_3210_2255_8;
	R2255[15] = (char *(*)()) F458_3210_2255_8;
	R2255[76] = (char *(*)()) F459_3273_2255_8;
	R2255[77] = (char *(*)()) F463_3273_2255_8;
	R2255[78] = (char *(*)()) F472_3273_2255_8;
	R2255[153] = (char *(*)()) F596_3970;
	R2255[154] = (char *(*)()) F597_3970_2255_8;
	R2255[155] = (char *(*)()) F598_3970_2255_8;
	R2255[156] = (char *(*)()) F599_3970_2255_8;
	R2255[157] = (char *(*)()) F600_3970_2255_8;
	R2255[158] = (char *(*)()) F596_3970;
	R2255[159] = (char *(*)()) F599_3970_2255_8;
	R2255[160] = (char *(*)()) F596_3970;
	R2255[161] = (char *(*)()) F604_4112_2255_8;
	R2255[162] = (char *(*)()) F605_4112_2255_8;
	R2255[163] = (char *(*)()) F606_4112_2255_8;
	R2255[164] = (char *(*)()) F607_4112_2255_8;
	R2255[165] = (char *(*)()) F608_4112_2255_8;
	R2255[166] = (char *(*)()) F609_4112_2255_8;
	R2255[167] = (char *(*)()) F610_4112_2255_8;
	R2255[168] = (char *(*)()) F611_4112_2255_8;
	R2255[169] = (char *(*)()) F612_4112_2255_8;
	R2255[170] = (char *(*)()) F613_4112_2255_8;
	R2255[171] = (char *(*)()) F614_4112_2255_8;
	R2255[172] = (char *(*)()) F615_4112_2255_8;
	R2255[173] = (char *(*)()) F616_4112_2255_8;
	R2255[174] = (char *(*)()) F617_4112_2255_8;
	R2255[175] = (char *(*)()) F618_4112_2255_8;
	R2255[450] = (char *(*)()) F893_6718_2255_8;
	R2255[452] = (char *(*)()) F895_6925_2255_8;
}
static void F443_3173_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F443_3173(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
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
static void F459_3273_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F459_3273(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F463_3273_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F463_3273(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F472_3273_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F472_3273(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
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
static void F604_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F604_4112(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F605_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F605_4112(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F606_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F606_4112(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F607_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F607_4112(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F608_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F608_4112(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F609_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F609_4112(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F610_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F610_4112(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F611_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F611_4112(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F612_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F612_4112(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F613_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F613_4112(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F614_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F614_4112(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F615_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F615_4112(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F616_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F616_4112(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F617_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F617_4112(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F618_4112_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F618_4112(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F893_6718_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F893_6718(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F895_6925_2255_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F895_6925(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

char *(*R2256[453])();
void R2256_init () {
	R2256[0] = (char *(*)()) F443_3173_2256_8;
	R2256[1] = (char *(*)()) F444_3210_2256_8;
	R2256[2] = (char *(*)()) F445_3210_2256_8;
	R2256[3] = (char *(*)()) F446_3210_2256_8;
	R2256[4] = (char *(*)()) F447_3210_2256_8;
	R2256[5] = (char *(*)()) F448_3210_2256_8;
	R2256[6] = (char *(*)()) F449_3210_2256_8;
	R2256[7] = (char *(*)()) F450_3210_2256_8;
	R2256[8] = (char *(*)()) F451_3210_2256_8;
	R2256[9] = (char *(*)()) F452_3210_2256_8;
	R2256[10] = (char *(*)()) F453_3210_2256_8;
	R2256[11] = (char *(*)()) F454_3210_2256_8;
	R2256[12] = (char *(*)()) F455_3210_2256_8;
	R2256[13] = (char *(*)()) F456_3210_2256_8;
	R2256[14] = (char *(*)()) F457_3210_2256_8;
	R2256[15] = (char *(*)()) F458_3210_2256_8;
	R2256[76] = (char *(*)()) F459_3273_2256_8;
	R2256[77] = (char *(*)()) F463_3273_2256_8;
	R2256[78] = (char *(*)()) F472_3273_2256_8;
	R2256[153] = (char *(*)()) F596_3971;
	R2256[154] = (char *(*)()) F597_3971_2256_8;
	R2256[155] = (char *(*)()) F598_3971_2256_8;
	R2256[156] = (char *(*)()) F599_3971_2256_8;
	R2256[157] = (char *(*)()) F600_3971_2256_8;
	R2256[158] = (char *(*)()) F596_3971;
	R2256[159] = (char *(*)()) F599_3971_2256_8;
	R2256[160] = (char *(*)()) F596_3971;
	R2256[161] = (char *(*)()) F604_4112_2256_8;
	R2256[162] = (char *(*)()) F605_4112_2256_8;
	R2256[163] = (char *(*)()) F606_4112_2256_8;
	R2256[164] = (char *(*)()) F607_4112_2256_8;
	R2256[165] = (char *(*)()) F608_4112_2256_8;
	R2256[166] = (char *(*)()) F609_4112_2256_8;
	R2256[167] = (char *(*)()) F610_4112_2256_8;
	R2256[168] = (char *(*)()) F611_4112_2256_8;
	R2256[169] = (char *(*)()) F612_4112_2256_8;
	R2256[170] = (char *(*)()) F613_4112_2256_8;
	R2256[171] = (char *(*)()) F614_4112_2256_8;
	R2256[172] = (char *(*)()) F615_4112_2256_8;
	R2256[173] = (char *(*)()) F616_4112_2256_8;
	R2256[174] = (char *(*)()) F617_4112_2256_8;
	R2256[175] = (char *(*)()) F618_4112_2256_8;
	R2256[450] = (char *(*)()) F893_6718_2256_8;
	R2256[452] = (char *(*)()) F895_6925_2256_8;
}
static void F443_3173_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F443_3173(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F444_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F444_3210(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F445_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F445_3210(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F446_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F446_3210(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F447_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F447_3210(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F448_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F448_3210(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F449_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F449_3210(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F450_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F450_3210(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F451_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F451_3210(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F452_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F452_3210(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F453_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F453_3210(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F454_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F454_3210(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F455_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F455_3210(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F456_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F456_3210(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F457_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F457_3210(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F458_3210_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F458_3210(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F459_3273_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F459_3273(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F463_3273_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F463_3273(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F472_3273_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F472_3273(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F597_3971_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F597_3971(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F598_3971_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F598_3971(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_POINTER *)arg2);
}
static void F599_3971_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F599_3971(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F600_3971_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F600_3971(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F604_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F604_4112(Current, arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F605_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F605_4112(Current, *(EIF_NATURAL_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F606_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F606_4112(Current, *(EIF_NATURAL_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F607_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F607_4112(Current, *(EIF_POINTER *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F608_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F608_4112(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F609_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F609_4112(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F610_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F610_4112(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F611_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F611_4112(Current, *(EIF_REAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F612_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F612_4112(Current, *(EIF_REAL_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F613_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F613_4112(Current, *(EIF_INTEGER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F614_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F614_4112(Current, *(EIF_INTEGER_16 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F615_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F615_4112(Current, *(EIF_NATURAL_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F616_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F616_4112(Current, *(EIF_INTEGER_64 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F617_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F617_4112(Current, *(EIF_BOOLEAN *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F618_4112_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F618_4112(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F893_6718_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F893_6718(Current, *(EIF_CHARACTER_8 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static void F895_6925_2256_8 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	F895_6925(Current, *(EIF_CHARACTER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
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

char *(*R2258[381])();
void R2258_init () {
	R2258[0] = (char *(*)()) F519_3517;
	R2258[1] = (char *(*)()) F520_3517_2258_1;
	R2258[2] = (char *(*)()) F521_3517_2258_1;
	R2258[75] = (char *(*)()) F594_3891;
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
	{long i; for (i = 104; i < 106; i++) R2258[i] = (char *(*)()) F622_4704_2258_1;}
	R2258[123] = (char *(*)()) F412_2757_2258_1;
	R2258[380] = (char *(*)()) F622_4704_2258_1;
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
static EIF_REFERENCE F622_4704_2258_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F412_2757_2258_1 (EIF_REFERENCE Current)
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

char *(*R2259[381])();
void R2259_init () {
	R2259[0] = (char *(*)()) F519_3525;
	R2259[1] = (char *(*)()) F520_3525;
	R2259[2] = (char *(*)()) F521_3525;
	R2259[75] = (char *(*)()) F303_2538;
	R2259[85] = (char *(*)()) F397_2749;
	R2259[86] = (char *(*)()) F398_2749;
	R2259[87] = (char *(*)()) F399_2749;
	R2259[88] = (char *(*)()) F400_2749;
	R2259[89] = (char *(*)()) F402_2749;
	R2259[90] = (char *(*)()) F401_2749;
	R2259[91] = (char *(*)()) F403_2749;
	R2259[92] = (char *(*)()) F404_2749;
	R2259[93] = (char *(*)()) F405_2749;
	R2259[94] = (char *(*)()) F406_2749;
	R2259[95] = (char *(*)()) F407_2749;
	R2259[96] = (char *(*)()) F408_2749;
	R2259[97] = (char *(*)()) F409_2749;
	R2259[98] = (char *(*)()) F410_2749;
	R2259[99] = (char *(*)()) F411_2749;
	{long i; for (i = 104; i < 106; i++) R2259[i] = (char *(*)()) F403_2749;}
	R2259[123] = (char *(*)()) F412_2761;
	R2259[380] = (char *(*)()) F403_2749;
}


#ifdef __cplusplus
}
#endif
