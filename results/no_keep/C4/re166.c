/*
 * Code for class REAL_32_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re166.h"
#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_32_REF}.hash_code */
EIF_INTEGER_32 F717_4172 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3143[Dtype(Current)-716])(Current);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	RTLE;
	return Result;
}

/* {REAL_32_REF}.is_less */
EIF_BOOLEAN F717_4183 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tr4_2 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_less_real_32 (tr4_1, tr4_2);
	RTLE;
	return Result;
}

/* {REAL_32_REF}.is_equal */
EIF_BOOLEAN F717_4184 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	tr4_2 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_32 (tr4_1, tr4_2);
	RTLE;
	return Result;
}

/* {REAL_32_REF}.set_item */
void F717_4185 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	
	
	*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_) = (EIF_REAL_32) arg1;
}

/* {REAL_32_REF}.truncated_to_integer */
EIF_INTEGER_32 F717_4194 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_INTEGER_32) tr4_1;
	RTLE;
	return Result;
}

/* {REAL_32_REF}.out */
EIF_REFERENCE F717_4211 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	Result = c_outr32(tr4_1);
	RTLE;
	return Result;
}

void EIF_Minit166 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
