/*
 * Code for class ABSTRACT_SPECIAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ab136.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ABSTRACT_SPECIAL}.debug_output */
EIF_REFERENCE F585_3087 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("debug_output", 584, Current, 0, 0, 6516);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F776_4789(RTCW(Result), ((EIF_INTEGER_32) 12L)));
	RTHOOK(2);
	tr1 = RTMS_EX_H("count=",6,18187581);
	(nstcall = 1, F778_4903(RTCW(Result), tr1));
	RTHOOK(3);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[dtype-585])(Current));
	(nstcall = 1, F778_4904(RTCW(Result), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {ABSTRACT_SPECIAL}._invariant */
void F585_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 135, Current, 0, 0);
	RTIT("count_less_than_capacity", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[dtype-585])(Current)) <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2433[dtype-585])(Current)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit136 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
