/*
 * Code for class FUNCTION [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fu778.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FUNCTION}.last_result */
EIF_REFERENCE F767_4484 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3342[Dtype(Current)-766]);
}


/* {FUNCTION}.is_equal */
EIF_BOOLEAN F767_4488 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	Result = '\0';
	if (F765_4450(Current, arg1)) {
		tr1 = *(EIF_REFERENCE *)(Current + O3342[Dtype(Current)-766]);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3342[Dtype(RTCW(arg1))-766])(arg1);
		Result = RTEQ(tr1, tr2);
	}
	RTLE;
	return Result;
}

/* {FUNCTION}.copy */
void F767_4489 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		F765_4457(Current, arg1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3342[Dtype(RTCW(arg1))-766])(arg1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3342[Dtype(Current)-766]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

void EIF_Minit778 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
