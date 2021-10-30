/*
 * Code for class INTEGER_32_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in145.h"
#include <math.h>
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

/* {INTEGER_32_REF}.hash_code */
EIF_INTEGER_32 F696_3525 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = eif_bit_and(ti4_1,((EIF_INTEGER_32) 2147483647L));
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.is_less */
EIF_BOOLEAN F696_3532 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 < ti4_2);
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.is_equal */
EIF_BOOLEAN F696_3533 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.set_item */
void F696_3534 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) arg1;
}

/* {INTEGER_32_REF}.abs */
EIF_INTEGER_32 F696_3541 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(RTCV(F696_3590(Current))+ _LNGOFF_0_0_0_0_);
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.plus */
EIF_REFERENCE F696_3542 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	F696_3534(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) + ti4_1));
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.minus */
EIF_REFERENCE F696_3543 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	F696_3534(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) - ti4_1));
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.product */
EIF_REFERENCE F696_3544 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	F696_3534(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) * ti4_1));
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.quotient */
EIF_REAL_64 F696_3545 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (ti4_2));
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.opposite */
EIF_REFERENCE F696_3547 (EIF_REFERENCE Current)
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
	F696_3534(RTCW(Result), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_));
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.integer_quotient */
EIF_REFERENCE F696_3548 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	F696_3534(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) / ti4_1));
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.integer_remainder */
EIF_REFERENCE F696_3549 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	F696_3534(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) % ti4_1));
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.power */
EIF_REAL_64 F696_3550 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	return (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_)), (EIF_REAL_64) (arg1));
}

/* {INTEGER_32_REF}.as_natural_32 */
EIF_NATURAL_32 F696_3557 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.as_natural_64 */
EIF_NATURAL_64 F696_3558 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_NATURAL_64) ti4_1;
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.as_integer_64 */
EIF_INTEGER_64 F696_3562 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_INTEGER_64) ti4_1;
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.to_natural_32 */
EIF_NATURAL_32 F696_3565 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R2797[Dtype(Current)-695])(Current);
}

/* {INTEGER_32_REF}.to_natural_64 */
EIF_NATURAL_64 F696_3566 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R2798[Dtype(Current)-695])(Current);
}

/* {INTEGER_32_REF}.to_integer_64 */
EIF_INTEGER_64 F696_3571 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_64) (FUNCTION_CAST(EIF_INTEGER_64, (EIF_REFERENCE)) R2802[Dtype(Current)-695])(Current);
}

/* {INTEGER_32_REF}.to_double */
EIF_REAL_64 F696_3573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_REAL_64) (ti4_1);
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.to_hex_string */
EIF_REFERENCE F696_3574 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 32L) / ((EIF_INTEGER_32) 4L));
	Result = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F776_4790(RTCW(Result), (EIF_CHARACTER_8) '0', loc1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 15L));
		tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tc1 = F696_3575(RTCW(tr1));
		F778_4887(RTCW(Result), tc1, loc1);
		ti4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 4L));
		loc2 = (EIF_INTEGER_32) ti4_1;
		loc1--;
	}
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.to_hex_character */
EIF_CHARACTER_8 F696_3575 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 9L))) {
		tc1 = (EIF_CHARACTER_8) '0';
	} else {
		tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) 'A') - ((EIF_INTEGER_32) 10L));
		tc1 = tc2;
	}
	Result = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) + loc1);
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.to_character_8 */
EIF_CHARACTER_8 F696_3577 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_CHARACTER_8) ti4_1;
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.bit_and */
EIF_REFERENCE F696_3579 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	F696_3534(RTCW(Result), ti4_1);
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.bit_or */
EIF_REFERENCE F696_3580 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	F696_3534(RTCW(Result), ti4_1);
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.bit_xor */
EIF_REFERENCE F696_3581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	ti4_1 = eif_bit_xor(ti4_1,ti4_2);
	F696_3534(RTCW(Result), ti4_1);
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.bit_not */
EIF_REFERENCE F696_3582 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_1 = eif_bit_not(ti4_1);
	F696_3534(RTCW(Result), ti4_1);
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.bit_shift_left */
EIF_REFERENCE F696_3584 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_1 = eif_bit_shift_left(ti4_1,arg1);
	F696_3534(RTCW(Result), ti4_1);
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.bit_shift_right */
EIF_REFERENCE F696_3585 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_1 = eif_bit_shift_right(ti4_1,arg1);
	F696_3534(RTCW(Result), ti4_1);
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.out */
EIF_REFERENCE F696_3589 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F776_4789(RTCW(Result), ((EIF_INTEGER_32) 11L));
	F778_4904(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_));
	RTLE;
	return Result;
}

/* {INTEGER_32_REF}.abs_ref */
EIF_REFERENCE F696_3590 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) >= ((EIF_INTEGER_32) 0L))) {
		RTLE;
		return (EIF_REFERENCE) Current;
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2522[Dtype(Current)-692])(Current);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

void EIF_Minit145 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
