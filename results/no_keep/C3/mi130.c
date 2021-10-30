/*
 * Code for class MISMATCH_CORRECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mi130.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MISMATCH_CORRECTOR}.correct_mismatch */
void F560_2740 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = RTMS_EX_H("Mismatch: ",10,1538098208);
	F776_4791(RTCW(loc1), tr1);
	loc2 = RTLNS(eif_new_type(67, 0x01).id, 67, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = F647_3273(RTCV(F1_5(Current)));
	F778_4900(RTCW(loc1), tr1);
	F68_976(RTCW(loc2), loc1);
	RTLE;
}

/* {MISMATCH_CORRECTOR}.mismatch_information */
static EIF_REFERENCE F560_2741_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOSP (2741);
#define Result RTOSR(2741)
	RTOC_NEW(Result);
	tr1 = RTLNS(eif_new_type(580, 0x01).id, 580, _OBJSIZ_9_3_0_7_0_0_0_0_);
	F581_2978(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (2741);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F560_2741 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2741,F560_2741_body,(Current));
}

void EIF_Minit130 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
