/*
 * Code for class FUNCTION [G#1, BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fu222.h"

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
EIF_BOOLEAN F768_4484 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_);
}


/* {FUNCTION}.is_equal */
EIF_BOOLEAN F768_4488 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = '\0';
	if (F765_4450(Current, arg1)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_2_);
		Result = (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) == tb1);
	}
	RTLE;
	return Result;
}

/* {FUNCTION}.copy */
void F768_4489 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		F765_4457(Current, arg1);
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_2_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) tb1;
	}
	RTLE;
}

void EIF_Minit222 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
