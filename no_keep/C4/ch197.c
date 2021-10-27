/*
 * Code for class CHARACTER_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch197.h"
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

/* {CHARACTER_8_REF}.natural_32_code */
EIF_NATURAL_32 F822_5647 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.hash_code */
EIF_INTEGER_32 F822_5648 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (F822_5647(Current))));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_less */
EIF_BOOLEAN F822_5652 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tu4_1 = F822_5647(Current);
	tu4_2 = F822_5647(RTCW(arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_equal */
EIF_BOOLEAN F822_5653 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	tc2 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.plus */
EIF_CHARACTER_8 F822_5654 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 + arg1);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.minus */
EIF_CHARACTER_8 F822_5655 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 - arg1);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.set_item */
void F822_5659 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_) = (EIF_CHARACTER_8) arg1;
}

/* {CHARACTER_8_REF}.out */
EIF_REFERENCE F822_5660 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(892, 0x01).id, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F891_6605(RTCW(Result), ((EIF_INTEGER_32) 1L));
	F893_6745(RTCW(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.to_character_32 */
EIF_CHARACTER_32 F822_5664 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_32) tc1;
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.upper */
EIF_CHARACTER_8 F822_5666 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F822_5671(Current)) {
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
	} else {
		Result = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		RTLE;
		return (EIF_CHARACTER_8) Result;
	}
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.lower */
EIF_CHARACTER_8 F822_5668 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F822_5670(Current)) {
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
	} else {
		Result = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		RTLE;
		return (EIF_CHARACTER_8) Result;
	}
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_upper */
EIF_BOOLEAN F822_5670 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F822_5680(Current, ti4_1);
	tu1_1 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 1U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_lower */
EIF_BOOLEAN F822_5671 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F822_5680(Current, ti4_1);
	tu1_1 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 2U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_digit */
EIF_BOOLEAN F822_5672 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F822_5680(Current, ti4_1);
	tu1_1 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 4U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_hexa_digit */
EIF_BOOLEAN F822_5673 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F822_5680(Current, ti4_1);
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 64U),((EIF_NATURAL_8) 4U));
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.character_types */
EIF_NATURAL_8 F822_5680 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L))) {
		tr1 = RTOUCR(37,F822_5681, (Current));
		/* INLINED CODE (SPECIAL.item) */
		tu1_2 = *((EIF_NATURAL_8 *)RTCW(tr1) + (arg1));
		/* END INLINED CODE */
		Result = tu1_2;
	}
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.internal_character_types */
static EIF_REFERENCE F822_5681_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(37)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,532,835,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 256L),sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	Result = (EIF_REFERENCE) tr1;
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F533_3102(RTCW(Result), tu1_1);
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 8U),((EIF_NATURAL_8) 128U));
	F533_3102(RTCW(Result), tu1_1);
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 4U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 1U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F533_3102(RTCW(Result), tu1_1);
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 2U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 16U));
	F533_3102(RTCW(Result), ((EIF_NATURAL_8) 32U));
	F533_3104(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 128L), ((EIF_INTEGER_32) 255L));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F822_5681 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(37,F822_5681_body,(Current));
}

void EIF_Minit197 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
