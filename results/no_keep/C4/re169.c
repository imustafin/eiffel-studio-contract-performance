/*
 * Code for class REAL_64_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re169.h"
#include <math.h>
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

/* {REAL_64_REF}.hash_code */
EIF_INTEGER_32 F720_4238 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3177[Dtype(Current)-719])(Current);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.sign */
EIF_INTEGER_32 F720_4239 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_), (EIF_REAL_64) 0.0)) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if ((EIF_BOOLEAN) eif_is_less_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_), (EIF_REAL_64) 0.0)) {
			RTLE;
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {REAL_64_REF}.zero */
EIF_REFERENCE F720_4241 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	F720_4251(RTCW(Result), (EIF_REAL_64) 0.0);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.is_less */
EIF_BOOLEAN F720_4249 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_less_real_64 (tr8_1, tr8_2);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.is_equal */
EIF_BOOLEAN F720_4250 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, tr8_2);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.set_item */
void F720_4251 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) = (EIF_REAL_64) arg1;
}

/* {REAL_64_REF}.truncated_to_integer */
EIF_INTEGER_32 F720_4260 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_INTEGER_32) tr8_1;
	RTLE;
	return Result;
}

/* {REAL_64_REF}.floor */
EIF_INTEGER_32 F720_4264 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr8_1 = (FUNCTION_CAST(EIF_REAL_64, (EIF_REFERENCE)) R3184[Dtype(Current)-719])(Current);
	Result = (EIF_INTEGER_32) tr8_1;
	RTLE;
	return Result;
}

/* {REAL_64_REF}.rounded */
EIF_INTEGER_32 F720_4265 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = F720_4239(Current);
	tr8_1 = F720_4269(Current);
	tr1 = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5);
	ti4_1 = F720_4264(RTCW(tr1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ti4_1);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.floor_real_64 */
EIF_REAL_64 F720_4267 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = (EIF_REAL_64) floor ((double)tr8_1);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.abs */
EIF_REAL_64 F720_4269 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = *(EIF_REAL_64 *)(RTCV(F720_4278(Current))+ _R64OFF_0_0_0_0_0_0_0_0_);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.plus */
EIF_REFERENCE F720_4270 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F720_4251(RTCW(Result), (EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) + tr8_1));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.minus */
EIF_REFERENCE F720_4271 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F720_4251(RTCW(Result), (EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) - tr8_1));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.product */
EIF_REFERENCE F720_4272 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F720_4251(RTCW(Result), (EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) * tr8_1));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.quotient */
EIF_REFERENCE F720_4273 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_0_0_0_0_0_);
	F720_4251(RTCW(Result), (EIF_REAL_64) ((EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_)) /  (EIF_REAL_64) (tr8_1)));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.opposite */
EIF_REFERENCE F720_4276 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	F720_4251(RTCW(Result), (EIF_REAL_64) -*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_));
	RTLE;
	return Result;
}

/* {REAL_64_REF}.out */
EIF_REFERENCE F720_4277 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
	Result = c_outr64(tr8_1);
	RTLE;
	return Result;
}

/* {REAL_64_REF}.abs_ref */
EIF_REFERENCE F720_4278 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_is_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_), (EIF_REAL_64) 0.0)) {
		RTLE;
		return (EIF_REFERENCE) F720_4241(Current);
	} else {
		if ((EIF_BOOLEAN) eif_is_greater_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_), (EIF_REAL_64) 0.0)) {
			RTLE;
			return (EIF_REFERENCE) Current;
		} else {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2522[Dtype(Current)-692])(Current);
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}/* NOTREACHED */
	
}

void EIF_Minit169 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
