/*
 * Code for class NATURAL_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na209.h"
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

/* {NATURAL_8_REF}.hash_code */
EIF_INTEGER_32 F834_5874 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_INTEGER_32) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.is_less */
EIF_BOOLEAN F834_5881 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tu1_2 = *(EIF_NATURAL_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 < tu1_2);
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.is_equal */
EIF_BOOLEAN F834_5882 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	tu1_2 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.set_item */
void F834_5883 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_) = (EIF_NATURAL_8) arg1;
}

/* {NATURAL_8_REF}.plus */
EIF_REFERENCE F834_5890 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
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
	tu1_1 = *(EIF_NATURAL_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	F834_5883(RTCW(Result), (EIF_NATURAL_8) (*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_) + tu1_1));
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.integer_quotient */
EIF_REFERENCE F834_5896 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
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
	tu1_1 = *(EIF_NATURAL_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	F834_5883(RTCW(Result), (EIF_NATURAL_8) (*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_) / tu1_1));
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.integer_remainder */
EIF_REFERENCE F834_5897 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
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
	tu1_1 = *(EIF_NATURAL_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	F834_5883(RTCW(Result), (EIF_NATURAL_8) (*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_) % tu1_1));
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.as_natural_16 */
EIF_NATURAL_16 F834_5904 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_NATURAL_16) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.as_natural_32 */
EIF_NATURAL_32 F834_5905 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_NATURAL_32) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.as_natural_64 */
EIF_NATURAL_64 F834_5906 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_NATURAL_64) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.as_integer_32 */
EIF_INTEGER_32 F834_5909 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_INTEGER_32) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.to_natural_16 */
EIF_NATURAL_16 F834_5912 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) (FUNCTION_CAST(EIF_NATURAL_16, (EIF_REFERENCE)) R4293[Dtype(Current)-833])(Current);
}

/* {NATURAL_8_REF}.to_natural_32 */
EIF_NATURAL_32 F834_5913 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4294[Dtype(Current)-833])(Current);
}

/* {NATURAL_8_REF}.to_natural_64 */
EIF_NATURAL_64 F834_5914 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R4295[Dtype(Current)-833])(Current);
}

/* {NATURAL_8_REF}.to_integer_32 */
EIF_INTEGER_32 F834_5917 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4298[Dtype(Current)-833])(Current);
}

/* {NATURAL_8_REF}.to_hex_string */
EIF_REFERENCE F834_5921 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) / ((EIF_INTEGER_32) 4L));
	Result = RTLNS(eif_new_type(892, 0x01).id, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F891_6606(RTCW(Result), (EIF_CHARACTER_8) '0', loc1);
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	loc2 = (EIF_INTEGER_32) tu1_1;
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 15L));
		tr1 = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tc1 = F843_6196(RTCW(tr1));
		F893_6718(RTCW(Result), tc1, loc1);
		ti4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 4L));
		loc2 = (EIF_INTEGER_32) ti4_1;
		loc1--;
	}
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.to_character_8 */
EIF_CHARACTER_8 F834_5924 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_8) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.to_character_32 */
EIF_CHARACTER_32 F834_5925 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_32) tu1_1;
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.bit_and */
EIF_REFERENCE F834_5926 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
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
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tu1_2 = *(EIF_NATURAL_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	F834_5883(RTCW(Result), tu1_1);
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.bit_or */
EIF_REFERENCE F834_5927 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
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
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tu1_2 = *(EIF_NATURAL_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	tu1_1 = eif_bit_or(tu1_1,tu1_2);
	F834_5883(RTCW(Result), tu1_1);
	RTLE;
	return Result;
}

/* {NATURAL_8_REF}.out */
EIF_REFERENCE F834_5936 (EIF_REFERENCE Current)
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
	F891_6605(RTCW(Result), ((EIF_INTEGER_32) 3L));
	F893_6739(RTCW(Result), *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit209 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
