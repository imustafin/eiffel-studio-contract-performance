/*
 * Code for class STRING_TABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st788.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_TABLE}.make_caseless */
void F579_2971 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O2329[dtype-578]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2236[dtype-574])(Current, arg1);
	RTLE;
}

/* {STRING_TABLE}.hash_code_of */
EIF_INTEGER_32 F579_2973 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O2329[Dtype(Current)-578])) {
		ti4_1 = F770_4505(RTCW(arg1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F770_4504(RTCW(arg1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}/* NOTREACHED */
	
}

/* {STRING_TABLE}.same_keys */
EIF_BOOLEAN F579_2975 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O2329[Dtype(Current)-578])) {
		tb1 = F770_4537(RTCW(arg1), arg2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		tb1 = F770_4540(RTCW(arg1), arg2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}/* NOTREACHED */
	
}

/* {STRING_TABLE}.is_equal */
EIF_BOOLEAN F579_2976 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O2329[Dtype(arg1)-578]);
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2329[Dtype(Current)-578]) == tb1)) {
		RTLE;
		return (EIF_BOOLEAN) F575_2881(Current, arg1);
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {STRING_TABLE}.empty_duplicate */
EIF_REFERENCE F579_2977 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O2329[dtype-578])) {
		Result = RTLNSMART(dftype);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2327[Dtype(RTCW(Result))-578])(Result, arg1);
	} else {
		Result = RTLNSMART(dftype);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2236[Dtype(RTCW(Result))-574])(Result, arg1);
	}
	if (*(EIF_BOOLEAN *)(Current + O1839[dtype-280])) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R1841[Dtype(RTCW(Result))-444])(Result);
	}
	RTLE;
	return Result;
}

void EIF_Minit788 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
