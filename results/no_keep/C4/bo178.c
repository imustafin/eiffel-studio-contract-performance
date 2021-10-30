/*
 * Code for class BOOLEAN_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bo178.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BOOLEAN_REF}.hash_code */
EIF_INTEGER_32 F729_4390 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {BOOLEAN_REF}.make_from_reference */
void F729_4391 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
	F729_4394(Current, tb1);
	RTLE;
}

/* {BOOLEAN_REF}.set_item */
void F729_4394 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) arg1;
}

/* {BOOLEAN_REF}.conjuncted */
EIF_BOOLEAN F729_4395 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	Result = '\0';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {BOOLEAN_REF}.conjuncted_semistrict */
EIF_BOOLEAN F729_4396 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	Result = '\0';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {BOOLEAN_REF}.implication */
EIF_BOOLEAN F729_4397 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	Result = '\01';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {BOOLEAN_REF}.negated */
EIF_BOOLEAN F729_4398 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
}

/* {BOOLEAN_REF}.disjuncted */
EIF_BOOLEAN F729_4399 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	Result = '\01';
	if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {BOOLEAN_REF}.disjuncted_semistrict */
EIF_BOOLEAN F729_4400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	Result = '\01';
	if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {BOOLEAN_REF}.out */
EIF_REFERENCE F729_4402 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = RTMS_EX_H("False",5,1635034981);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		Result = RTMS_EX_H("True",4,1416787301);
	}
	RTLE;
	return Result;
}

void EIF_Minit178 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
