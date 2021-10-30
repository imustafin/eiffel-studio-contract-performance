/*
 * Code for class READABLE_INDEXABLE_ITERATION_CURSOR [NATURAL_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re394.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.make */
void F216_1975 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(loc1);
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_NATURAL_32) tu4_1;
	} else {
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.target_index */
EIF_INTEGER_32 F216_1977 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.first_index */
EIF_INTEGER_32 F216_1978 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.last_index */
EIF_INTEGER_32 F216_1979 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.step */
EIF_INTEGER_32 F216_1980 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F216_1987 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) !F216_1989(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2103[Dtype(RTCW(tr1))-496])(tr1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.is_reversed */
EIF_BOOLEAN F216_1988 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.is_valid */
EIF_BOOLEAN F216_1989 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(loc1);
		Result = (EIF_BOOLEAN)(tu4_1 == *(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_1_0_0_));
	}
	RTLE;
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.start */
void F216_1994 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2101[Dtype(RTCW(loc1))-496])(loc1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2100[Dtype(RTCW(loc1))-496])(loc1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2101[Dtype(RTCW(loc1))-496])(loc1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2100[Dtype(RTCW(loc1))-496])(loc1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ti4_1;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTLE;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.forth */
void F216_1995 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_)) -= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	} else {
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_)) += *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	}
	RTLE;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F216_1996 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit394 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
