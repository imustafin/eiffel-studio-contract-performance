/*
 * Code for class FUNCTION [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fu365.h"

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
EIF_REFERENCE F887_6499 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O4635[Dtype(Current)-886]);
}


/* {FUNCTION}.is_equal */
EIF_BOOLEAN F887_6503 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	if (F885_6465(Current, arg1)) {
		tr1 = *(EIF_REFERENCE *)(Current + O4635[Dtype(Current)-886]);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4635[Dtype(RTCW(arg1))-886])(arg1);
		Result = RTEQ(tr1, tr2);
	}
	RTLE;
	return Result;
}

/* {FUNCTION}.copy */
void F887_6504 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		F885_6472(Current, arg1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4635[Dtype(RTCW(arg1))-886])(arg1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O4635[Dtype(Current)-886]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

void EIF_Minit365 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
