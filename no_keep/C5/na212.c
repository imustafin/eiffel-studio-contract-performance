/*
 * Code for class NATURAL_32_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na212.h"
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

/* {NATURAL_32_REF}.hash_code */
EIF_INTEGER_32 F837_5965 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 2147483647L));
	Result = (EIF_INTEGER_32) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.is_less */
EIF_BOOLEAN F837_5972 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.is_equal */
EIF_BOOLEAN F837_5973 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 == tu4_2);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.set_item */
void F837_5974 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_NATURAL_32) arg1;
}

/* {NATURAL_32_REF}.is_valid_character_8_code */
EIF_BOOLEAN F837_5979 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 <= tu4_2);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.plus */
EIF_REFERENCE F837_5981 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
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
	tu4_1 = *(EIF_NATURAL_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	F837_5974(RTCW(Result), (EIF_NATURAL_32) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_) + tu4_1));
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.minus */
EIF_REFERENCE F837_5982 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
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
	tu4_1 = *(EIF_NATURAL_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	F837_5974(RTCW(Result), (EIF_NATURAL_32) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_) - tu4_1));
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.integer_quotient */
EIF_REFERENCE F837_5987 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
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
	tu4_1 = *(EIF_NATURAL_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	F837_5974(RTCW(Result), (EIF_NATURAL_32) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_) / tu4_1));
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.integer_remainder */
EIF_REFERENCE F837_5988 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
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
	tu4_1 = *(EIF_NATURAL_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	F837_5974(RTCW(Result), (EIF_NATURAL_32) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_) % tu4_1));
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.as_natural_8 */
EIF_NATURAL_8 F837_5993 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_NATURAL_8) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.as_natural_16 */
EIF_NATURAL_16 F837_5994 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_NATURAL_16) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.as_natural_64 */
EIF_NATURAL_64 F837_5996 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_NATURAL_64) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.as_integer_32 */
EIF_INTEGER_32 F837_5999 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_INTEGER_32) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.as_integer_64 */
EIF_INTEGER_64 F837_6000 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_INTEGER_64) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.to_natural_8 */
EIF_NATURAL_8 F837_6001 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R4340[Dtype(Current)-836])(Current);
}

/* {NATURAL_32_REF}.to_natural_16 */
EIF_NATURAL_16 F837_6002 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) (FUNCTION_CAST(EIF_NATURAL_16, (EIF_REFERENCE)) R4341[Dtype(Current)-836])(Current);
}

/* {NATURAL_32_REF}.to_natural_64 */
EIF_NATURAL_64 F837_6004 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R4343[Dtype(Current)-836])(Current);
}

/* {NATURAL_32_REF}.to_integer_32 */
EIF_INTEGER_32 F837_6007 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[Dtype(Current)-836])(Current);
}

/* {NATURAL_32_REF}.to_integer_64 */
EIF_INTEGER_64 F837_6008 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_64) (FUNCTION_CAST(EIF_INTEGER_64, (EIF_REFERENCE)) R4347[Dtype(Current)-836])(Current);
}

/* {NATURAL_32_REF}.to_hex_string */
EIF_REFERENCE F837_6011 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
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
	Result = RTLNS(eif_new_type(892, 0x01).id, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F891_6606(RTCW(Result), (EIF_CHARACTER_8) '0', loc1);
	loc2 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 15L));
		tr1 = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)tr1 = tu4_1;
		tc1 = F837_6012(RTCW(tr1));
		F893_6718(RTCW(Result), tc1, loc1);
		tu4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 4L));
		loc2 = (EIF_NATURAL_32) tu4_1;
		loc1--;
	}
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.to_hex_character */
EIF_CHARACTER_8 F837_6012 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	loc1 = (EIF_INTEGER_32) tu4_1;
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

/* {NATURAL_32_REF}.to_character_8 */
EIF_CHARACTER_8 F837_6014 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_CHARACTER_8) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.to_character_32 */
EIF_CHARACTER_32 F837_6015 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_CHARACTER_32) tu4_1;
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.bit_and */
EIF_REFERENCE F837_6016 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
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
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	tu4_1 = eif_bit_and(tu4_1,tu4_2);
	F837_5974(RTCW(Result), tu4_1);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.bit_or */
EIF_REFERENCE F837_6017 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
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
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_2 = *(EIF_NATURAL_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	tu4_1 = eif_bit_or(tu4_1,tu4_2);
	F837_5974(RTCW(Result), tu4_1);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.bit_shift_left */
EIF_REFERENCE F837_6021 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = eif_bit_shift_left(tu4_1,arg1);
	F837_5974(RTCW(Result), tu4_1);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.bit_shift_right */
EIF_REFERENCE F837_6022 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = eif_bit_shift_right(tu4_1,arg1);
	F837_5974(RTCW(Result), tu4_1);
	RTLE;
	return Result;
}

/* {NATURAL_32_REF}.out */
EIF_REFERENCE F837_6026 (EIF_REFERENCE Current)
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
	F891_6605(RTCW(Result), ((EIF_INTEGER_32) 20L));
	F893_6741(RTCW(Result), *(EIF_NATURAL_32 *)(Current+ _LNGOFF_0_0_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit212 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
