/*
 * Code for class DATE_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da131.h"
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

/* {DATE_VALUE}.day */
EIF_INTEGER_32 F574_2839 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2225[Dtype(Current)-573]);
	Result = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
	RTLE;
	return Result;
}

/* {DATE_VALUE}.month */
EIF_INTEGER_32 F574_2840 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2225[Dtype(Current)-573]);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 65280L));
	Result = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 8L));
	RTLE;
	return Result;
}

/* {DATE_VALUE}.year */
EIF_INTEGER_32 F574_2841 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2225[Dtype(Current)-573]);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) -65536L));
	ti4_1 = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 16L));
	Result = eif_bit_and((ti4_1),((EIF_INTEGER_32) 65535L));
	RTLE;
	return Result;
}

/* {DATE_VALUE}.set_date */
void F574_2844 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) 255L));
	ti4_1 = eif_bit_and(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	ti4_1 = eif_bit_or(loc1,arg3);
	loc1 = (EIF_INTEGER_32) ti4_1;
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) 65280L));
	ti4_1 = eif_bit_and(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	ti4_1 = eif_bit_shift_left(arg2,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_or(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) -65536L));
	ti4_1 = eif_bit_and(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	ti4_1 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 16L));
	ti4_1 = eif_bit_or(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current + O2225[Dtype(Current)-573]) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {DATE_VALUE}.correct_mismatch */
void F574_2850 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = RTOSCF(2741,F560_2741, (Current));
	tr2 = RTOSCF(2857,F574_2857, (Current));
	tr1 = F575_2864(RTCW(tr1), tr2);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(695, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_0_0_0_0_);
		F574_2858(Current, ti4_1);
	} else {
		F560_2740(Current);
	}
	RTLE;
}

/* {DATE_VALUE}.compact_date_attribute_name */

EIF_REFERENCE F574_2857 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (2857,RTMS_EX_H("compact_date",12,1114629989));
}

/* {DATE_VALUE}.set_private_internal_compact_date */
void F574_2858 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = eif_bit_and(arg1,((EIF_INTEGER_32) 65535L));
	ti4_2 = eif_bit_and(arg1,((EIF_INTEGER_32) 16711680L));
	ti4_2 = eif_bit_shift_right((ti4_2),((EIF_INTEGER_32) 16L));
	ti4_3 = eif_bit_and(arg1,(EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4278190080)));
	ti4_3 = eif_bit_shift_right((ti4_3),((EIF_INTEGER_32) 24L));
	ti4_3 = eif_bit_and((ti4_3),((EIF_INTEGER_32) 255L));
	F574_2844(Current, ti4_1, ti4_2, ti4_3);
	RTLE;
}

void EIF_Minit131 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
