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
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("correct_mismatch", 559, Current, 2, 0, 5097);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = RTMS_EX_H("Mismatch: ",10,1538098208);
	(nstcall = -1, F776_4791(RTCW(loc1), tr1));
	RTHOOK(2);
	loc2 = RTLNS(eif_new_type(67, 0x01).id, 67, _OBJSIZ_0_0_0_0_0_0_0_0_);
	RTHOOK(3);
	tr1 = (nstcall = 1, F647_3273(RTCV((nstcall = 0, F1_5(Current)))));
	(nstcall = 1, F778_4900(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F68_976(RTCW(loc2), loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {MISMATCH_CORRECTOR}.mismatch_information */
static EIF_REFERENCE F560_2741_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("mismatch_information", 559, Current, 0, 0, 5098);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (2741);
#define Result RTOSR(2741)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(580, 0x01).id, 580, _OBJSIZ_9_3_0_7_0_0_0_0_);
	(nstcall = -1, F581_2978(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (2741);
	RTHOOK(2);
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
