/*
 * Code for class FUNCTION [G#1, BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fu266.h"

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
EIF_BOOLEAN F888_6499 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_);
}


/* {FUNCTION}.is_equal */
EIF_BOOLEAN F888_6503 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	if (F885_6465(Current, arg1)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_2_);
		Result = (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) == tb1);
	}
	RTLE;
	return Result;
}

/* {FUNCTION}.copy */
void F888_6504 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		F885_6472(Current, arg1);
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_2_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) tb1;
	}
	RTLE;
}

void EIF_Minit266 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
