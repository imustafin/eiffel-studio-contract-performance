/*
 * Code for class NATURAL_64_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na154.h"
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

/* {NATURAL_64_REF}.hash_code */
EIF_INTEGER_32 F705_3810 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_1 = eif_bit_and(tu8_1,(EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L));
	Result = (EIF_INTEGER_32) tu8_1;
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.is_less */
EIF_BOOLEAN F705_3817 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu8_1 < tu8_2);
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.is_equal */
EIF_BOOLEAN F705_3818 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu8_1 == tu8_2);
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.set_item */
void F705_3819 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) = (EIF_NATURAL_64) arg1;
}

/* {NATURAL_64_REF}.plus */
EIF_REFERENCE F705_3826 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
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
	tu8_1 = *(EIF_NATURAL_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	F705_3819(RTCW(Result), (EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) + tu8_1));
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.product */
EIF_REFERENCE F705_3828 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
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
	tu8_1 = *(EIF_NATURAL_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	F705_3819(RTCW(Result), (EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) * tu8_1));
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.integer_quotient */
EIF_REFERENCE F705_3832 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
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
	tu8_1 = *(EIF_NATURAL_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	F705_3819(RTCW(Result), (EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) / tu8_1));
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.integer_remainder */
EIF_REFERENCE F705_3833 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
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
	tu8_1 = *(EIF_NATURAL_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	F705_3819(RTCW(Result), (EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) % tu8_1));
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.as_natural_32 */
EIF_NATURAL_32 F705_3840 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_NATURAL_32) tu8_1;
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.as_integer_32 */
EIF_INTEGER_32 F705_3844 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_INTEGER_32) tu8_1;
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.to_natural_64 */
EIF_NATURAL_64 F705_3849 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
}

/* {NATURAL_64_REF}.to_integer_32 */
EIF_INTEGER_32 F705_3852 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2955[Dtype(Current)-704])(Current);
}

/* {NATURAL_64_REF}.to_character_8 */
EIF_CHARACTER_8 F705_3859 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_CHARACTER_8) tu8_1;
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.bit_and */
EIF_REFERENCE F705_3861 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
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
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_1 = eif_bit_and(tu8_1,tu8_2);
	F705_3819(RTCW(Result), tu8_1);
	RTLE;
	return Result;
}

/* {NATURAL_64_REF}.out */
EIF_REFERENCE F705_3871 (EIF_REFERENCE Current)
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
	F776_4789(RTCW(Result), ((EIF_INTEGER_32) 20L));
	F778_4911(RTCW(Result), *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit154 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
