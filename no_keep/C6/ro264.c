/*
 * Code for class ROUTINE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ro264.h"
#include "eif_built_in.h"
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

/* {ROUTINE}.operands */
EIF_REFERENCE F885_6458 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ROUTINE}.hash_code */
EIF_INTEGER_32 F885_6460 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O4616[dtype-884]);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O4620[dtype-884]);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	Result = eif_bit_xor(Result,ti4_1);
	RTLE;
	return Result;
}

/* {ROUTINE}.is_equal */
EIF_BOOLEAN F885_6465 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tb5 = '\0';
	tb6 = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	if (RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_1_), tr1)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tb6 = RTEQ(*(EIF_REFERENCE *)(Current), tr1);
	}
	if (tb6) {
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
		tb5 = RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_2_), tr1);
	}
	if (tb5) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4616[Dtype(arg1)-884]);
		tb4 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4616[dtype-884]) == tp1);
	}
	if (tb4) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4620[Dtype(arg1)-884]);
		tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4620[dtype-884]) == ti4_1);
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4622[Dtype(arg1)-884]);
		tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4622[dtype-884]) == ti4_1);
	}
	if (tb2) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4619[Dtype(arg1)-884]);
		tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4619[dtype-884]) == tp1);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4617[Dtype(arg1)-884]);
		Result = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4617[dtype-884]) == tp1);
	}
	RTLE;
	return Result;
}

/* {ROUTINE}.copy */
void F885_6472 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = F1_14(loc1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
}

/* {ROUTINE}.correct_mismatch */
void F885_6476 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {ROUTINE}.set_rout_disp_final */
void F885_6487 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_REFERENCE arg4, EIF_BOOLEAN arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg4);
	RTLIU(2);
	
	RTGC;
	*(EIF_POINTER *)(Current + O4616[dtype-884]) = (EIF_POINTER) arg1;
	*(EIF_POINTER *)(Current + O4619[dtype-884]) = (EIF_POINTER) arg2;
	*(EIF_POINTER *)(Current + O4617[dtype-884]) = (EIF_POINTER) arg3;
	RTAR(Current, arg4);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg4;
	*(EIF_BOOLEAN *)(Current + O4607[dtype-884]) = (EIF_BOOLEAN) arg5;
	*(EIF_INTEGER_32 *)(Current + O4608[dtype-884]) = (EIF_INTEGER_32) arg6;
	RTLE;
}

void EIF_Minit264 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
