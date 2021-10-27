/*
 * Code for class READABLE_INDEXABLE_ITERATION_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re253.h"

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
void F674_5120 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
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
	loc1 = RTRV(eif_new_type(23, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(loc1);
		*(EIF_NATURAL_32 *)(Current + O3785[dtype-673]) = (EIF_NATURAL_32) tu4_1;
	} else {
		*(EIF_NATURAL_32 *)(Current + O3785[dtype-673]) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	}
	*(EIF_INTEGER_32 *)(Current + O3790[dtype-673]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_BOOLEAN *)(Current + O3789[dtype-673]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.target_index */
EIF_INTEGER_32 F674_5122 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3793[Dtype(Current)-673]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.first_index */
EIF_INTEGER_32 F674_5123 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3792[Dtype(Current)-673]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.last_index */
EIF_INTEGER_32 F674_5124 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3791[Dtype(Current)-673]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.step */
EIF_INTEGER_32 F674_5125 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3790[Dtype(Current)-673]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F674_5132 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3778[dtype-673])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2560[Dtype(RTCW(tr1))-442])(tr1, *(EIF_INTEGER_32 *)(Current + O3793[dtype-673]));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.is_reversed */
EIF_BOOLEAN F674_5133 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3789[Dtype(Current)-673]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.is_valid */
EIF_BOOLEAN F674_5134 (EIF_REFERENCE Current)
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
	loc1 = RTRV(eif_new_type(23, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(loc1);
		Result = (EIF_BOOLEAN)(tu4_1 == *(EIF_NATURAL_32 *)(Current + O3785[Dtype(Current)-673]));
	}
	RTLE;
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.start */
void F674_5139 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	if (*(EIF_BOOLEAN *)(Current + O3789[dtype-673])) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2558[Dtype(RTCW(loc1))-442])(loc1);
		*(EIF_INTEGER_32 *)(Current + O3792[dtype-673]) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2557[Dtype(RTCW(loc1))-442])(loc1);
		*(EIF_INTEGER_32 *)(Current + O3791[dtype-673]) = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2558[Dtype(RTCW(loc1))-442])(loc1);
		*(EIF_INTEGER_32 *)(Current + O3791[dtype-673]) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2557[Dtype(RTCW(loc1))-442])(loc1);
		*(EIF_INTEGER_32 *)(Current + O3792[dtype-673]) = (EIF_INTEGER_32) ti4_1;
	}
	*(EIF_INTEGER_32 *)(Current + O3793[dtype-673]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O3792[dtype-673]);
	RTLE;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.forth */
void F674_5140 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O3789[dtype-673])) {
		(*(EIF_INTEGER_32 *)(Current + O3793[dtype-673])) -= *(EIF_INTEGER_32 *)(Current + O3790[dtype-673]);
	} else {
		(*(EIF_INTEGER_32 *)(Current + O3793[dtype-673])) += *(EIF_INTEGER_32 *)(Current + O3790[dtype-673]);
	}
	RTLE;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F674_5141 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit253 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
