/*
 * Code for class RESUMPTION_FAILURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re81.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RESUMPTION_FAILURE}.code */
EIF_INTEGER_32 F99_1085 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("code", 98, Current, 0, 0, 1138);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RESUMPTION_FAILURE}.tag */
static EIF_REFERENCE F99_1086_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("tag", 98, Current, 0, 0, 1139);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1086);
#define Result RTOSR(1086)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Resumption attempt failed.",26,952477998);
	(nstcall = -1, F774_4677(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1086);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F99_1086 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1086,F99_1086_body,(Current));
}

void EIF_Minit81 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
