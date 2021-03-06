/*
 * Code for class TIME_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti30.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TIME_VALUE}.hour */
EIF_INTEGER_32 F48_695 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O680[Dtype(Current)-47]);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 16711680L));
	Result = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 16L));
	RTLE;
	return Result;
}

/* {TIME_VALUE}.minute */
EIF_INTEGER_32 F48_696 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O680[Dtype(Current)-47]);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 65280L));
	Result = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 8L));
	RTLE;
	return Result;
}

/* {TIME_VALUE}.second */
EIF_INTEGER_32 F48_697 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O680[Dtype(Current)-47]);
	Result = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
	RTLE;
	return Result;
}

/* {TIME_VALUE}.fine_second */
EIF_REAL_64 F48_700 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R672[dtype-47])(Current);
	Result = (EIF_REAL_64) (ti4_1);
	tr8_1 = *(EIF_REAL_64 *)(Current + O679[dtype-47]);
	Result = (EIF_REAL_64) (EIF_REAL_64) (Result + tr8_1);
	RTLE;
	return Result;
}

/* {TIME_VALUE}.set_hour */
void F48_704 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O680[dtype-47]);
	ti4_2 = eif_bit_not(((EIF_INTEGER_32) 16711680L));
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O680[dtype-47]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O680[dtype-47]);
	ti4_2 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 16L));
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O680[dtype-47]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {TIME_VALUE}.set_minute */
void F48_705 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O680[dtype-47]);
	ti4_2 = eif_bit_not(((EIF_INTEGER_32) 65280L));
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O680[dtype-47]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O680[dtype-47]);
	ti4_2 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O680[dtype-47]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {TIME_VALUE}.set_second */
void F48_706 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O680[dtype-47]);
	ti4_2 = eif_bit_not(((EIF_INTEGER_32) 255L));
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current + O680[dtype-47]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O680[dtype-47]);
	ti4_1 = eif_bit_or(ti4_1,arg1);
	*(EIF_INTEGER_32 *)(Current + O680[dtype-47]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

void EIF_Minit30 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
