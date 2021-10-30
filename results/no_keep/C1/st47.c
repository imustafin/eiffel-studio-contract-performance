/*
 * Code for class STRING_TO_INTEGER_CONVERTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st47.h"
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_TO_INTEGER_CONVERTOR}.make */
void F65_908 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	F65_909(Current, ((EIF_INTEGER_32) 0L));
	tr1 = RTLNSMART(eif_new_type(777, 1).id);
	tr2 = RTMS_EX_H(" ",1,32);
	F776_4791(RTCW(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(777, 1).id);
	tr2 = RTMS_EX_H(" ",1,32);
	F776_4791(RTCW(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STRING_TO_INTEGER_CONVERTOR}.reset */
void F65_909 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {STRING_TO_INTEGER_CONVERTOR}.overflowed */
EIF_BOOLEAN F65_911 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) && (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) == ((EIF_INTEGER_32) 0L)));
}

/* {STRING_TO_INTEGER_CONVERTOR}.is_integral_integer */
EIF_BOOLEAN F65_916 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 3L)))) && (EIF_BOOLEAN) !Result);
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parse_string_with_type */
void F65_917 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc7);
	RTLR(3,loc3);
	RTLR(4,loc8);
	RTLR(5,loc4);
	RTLR(6,tr1);
	RTLIU(7);
	
	RTGC;
	F65_909(Current, arg2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1);
	loc7 = arg1;
	loc7 = RTRV(eif_new_type(775, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		loc3 = *(EIF_REFERENCE *)(loc7);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc3) + (loc1));
			/* END INLINED CODE */
			tc1 = tc2;
			F65_918(Current, tc1);
			loc1++;
		}
	} else {
		loc8 = arg1;
		loc8 = RTRV(eif_new_type(772, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			loc4 = *(EIF_REFERENCE *)(loc8);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
				/* INLINED CODE (SPECIAL.item) */
				tw2 = *((EIF_CHARACTER_32 *)RTCW(loc4) + (loc1));
				/* END INLINED CODE */
				loc5 = tw2;
				tb1 = (loc5 <= 0xFF);
				if (tb1) {
					tc1 = (EIF_CHARACTER_8) loc5;
					F65_918(Current, tc1);
				} else {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				loc1++;
			}
		} else {
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
				loc6 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
				tr1 = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_NATURAL_32 *)tr1 = loc6;
				tb1 = F708_3914(RTCW(tr1));
				if (tb1) {
					tc1 = (EIF_CHARACTER_8) loc6;
					F65_918(Current, tc1);
				} else {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				loc1++;
			}
		}
	}
	RTLE;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parse_character */
void F65_918 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_);
	if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 4L))) {
		switch (loc3) {
			case 0L:
				tb1 = EIF_TEST(isdigit(arg1));
				if (tb1) {
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					ti4_1 = (EIF_INTEGER_32) (arg1);
					tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
				} else {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-') || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+'))) {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					} else {
						tb1 = '\0';
						if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
							tr1 = *(EIF_REFERENCE *)(Current);
							tb2 = F776_4823(RTCW(tr1), arg1);
							tb1 = tb2;
						}
						if (tb1) {
						} else {
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						}
					}
				}
				break;
			case 1L:
				tb1 = EIF_TEST(isdigit(arg1));
				if (tb1) {
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					ti4_1 = (EIF_INTEGER_32) (arg1);
					tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
					tb1 = '\0';
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) != ((EIF_INTEGER_32) 0L))) {
						tr1 = RTOSCF(929,F65_929, (Current));
						tb2 = F62_858(RTCW(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_));
						tb1 = tb2;
					}
					if (tb1) {
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) loc1;
						*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) loc2;
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
					}
				} else {
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				break;
			case 2L:
				tb1 = EIF_TEST(isdigit(arg1));
				if (tb1) {
					loc1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_);
					loc2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_));
					ti4_1 = (EIF_INTEGER_32) (arg1);
					tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) != ((EIF_INTEGER_32) 0L))) {
						tr1 = RTOSCF(929,F65_929, (Current));
						tb1 = F62_858(RTCW(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_));
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) tb1;
						if (F65_911(Current)) {
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_) = (EIF_NATURAL_64) loc1;
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_) = (EIF_NATURAL_64) loc2;
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
						}
					}
				} else {
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tb2 = F776_4823(RTCW(tr1), arg1);
						tb1 = tb2;
					}
					if (tb1) {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					} else {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					}
				}
				break;
			case 3L:
				tb1 = '\0';
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tb2 = F776_4823(RTCW(tr1), arg1);
					tb1 = tb2;
				}
				if (tb1) {
				} else {
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_1_) = (EIF_INTEGER_32) loc3;
	RTLE;
}

/* {STRING_TO_INTEGER_CONVERTOR}.parsed_integer */
EIF_INTEGER_32 F65_922 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_2_) == ((EIF_INTEGER_32) 1L))) {
		tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_);
		tu8_2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_);
		Result = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + tu8_2));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -Result;
	} else {
		tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_0_);
		tu8_2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_3_0_3_0_0_1_);
		Result = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + tu8_2));
	}
	RTLE;
	return Result;
}

/* {STRING_TO_INTEGER_CONVERTOR}.overflow_checker */
static EIF_REFERENCE F65_929_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOSP (929);
#define Result RTOSR(929)
	RTOC_NEW(Result);
	tr1 = RTLNS(eif_new_type(61, 0x01).id, 61, _OBJSIZ_4_0_0_0_0_0_0_0_);
	F62_857(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (929);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F65_929 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(929,F65_929_body,(Current));
}

void EIF_Minit47 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
