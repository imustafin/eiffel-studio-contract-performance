/*
 * Code for class HEXADECIMAL_STRING_TO_INTEGER_CONVERTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "he46.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.make */
void F64_882 (EIF_REFERENCE Current)
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
	F64_887(Current, ((EIF_INTEGER_32) 0L));
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.overflowed */
EIF_BOOLEAN F64_884 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) && (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) == ((EIF_INTEGER_32) 0L)));
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.reset */
void F64_887 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parse_string_with_type */
void F64_888 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
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
	RTLR(3,loc2);
	RTLR(4,loc8);
	RTLR(5,loc3);
	RTLR(6,tr1);
	RTLIU(7);
	
	RTGC;
	F64_887(Current, arg2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1);
	loc7 = arg1;
	loc7 = RTRV(eif_new_type(775, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		loc2 = *(EIF_REFERENCE *)(loc7);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc4) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
				/* INLINED CODE (SPECIAL.item) */
				tc2 = *((EIF_CHARACTER_8 *)RTCW(loc2) + ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				/* END INLINED CODE */
				tc1 = tc2;
				*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) tc1;
			} else {
				*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
			}
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc2) + (loc1));
			/* END INLINED CODE */
			tc1 = tc2;
			F64_889(Current, tc1);
			loc1++;
		}
	} else {
		loc8 = arg1;
		loc8 = RTRV(eif_new_type(772, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			loc3 = *(EIF_REFERENCE *)(loc8);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc4) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
					/* INLINED CODE (SPECIAL.item) */
					tw2 = *((EIF_CHARACTER_32 *)RTCW(loc3) + ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					/* END INLINED CODE */
					tw1 = tw2;
					tc1 = (EIF_CHARACTER_8) tw1;
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) tc1;
				} else {
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
				}
				/* INLINED CODE (SPECIAL.item) */
				tw2 = *((EIF_CHARACTER_32 *)RTCW(loc3) + (loc1));
				/* END INLINED CODE */
				loc6 = tw2;
				tb1 = (loc6 <= 0xFF);
				if (tb1) {
					tc1 = (EIF_CHARACTER_8) loc6;
					F64_889(Current, tc1);
				} else {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				loc1++;
			}
		} else {
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc4) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
					tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					tc1 = (EIF_CHARACTER_8) tu4_1;
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) tc1;
				} else {
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
				}
				loc5 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
				tr1 = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_NATURAL_32 *)tr1 = loc5;
				tb1 = F708_3914(RTCW(tr1));
				if (tb1) {
					tc1 = (EIF_CHARACTER_8) loc5;
					F64_889(Current, tc1);
				} else {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				loc1++;
			}
		}
	}
	RTLE;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parse_character */
void F64_889 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 5L))) {
		switch (loc3) {
			case 0L:
				if ((EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) == (EIF_CHARACTER_8) 'x') || (EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) == (EIF_CHARACTER_8) 'X')))) || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '&'))) {
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-') || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+'))) {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					} else {
						tr1 = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
						*(EIF_CHARACTER_8 *)tr1 = arg1;
						tb1 = F726_4370(RTCW(tr1));
						if (tb1) {
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
								ti4_1 = (EIF_INTEGER_32) (arg1);
								tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
								*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
							} else {
								if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
									ti4_1 = (EIF_INTEGER_32) (arg1);
									tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 87L));
									*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
								} else {
									if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
										ti4_1 = (EIF_INTEGER_32) (arg1);
										tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 55L));
										*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
									}
								}
							}
						} else {
							tb1 = '\0';
							if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
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
				}
				break;
			case 1L:
				tr1 = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				tb1 = F726_4370(RTCW(tr1));
				if (tb1) {
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
						ti4_1 = (EIF_INTEGER_32) (arg1);
						tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
						*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					} else {
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
							ti4_1 = (EIF_INTEGER_32) (arg1);
							tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 87L));
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
						} else {
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
								ti4_1 = (EIF_INTEGER_32) (arg1);
								tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 55L));
								*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
							}
						}
					}
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					tb1 = '\0';
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) != ((EIF_INTEGER_32) 0L))) {
						tr1 = RTOSCF(905,F64_905, (Current));
						tb2 = F62_858(RTCW(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_));
						tb1 = tb2;
					}
					if (tb1) {
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
					}
				} else {
					if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '#')) {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					} else {
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) 'x') || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) 'X'))) {
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						}
					}
				}
				break;
			case 2L:
				tr1 = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				tb1 = F726_4370(RTCW(tr1));
				if (tb1) {
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
						ti4_1 = (EIF_INTEGER_32) (arg1);
						tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
						*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					} else {
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
							ti4_1 = (EIF_INTEGER_32) (arg1);
							tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 87L));
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
						} else {
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
								ti4_1 = (EIF_INTEGER_32) (arg1);
								tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 55L));
								*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
							}
						}
					}
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					tb1 = '\0';
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) != ((EIF_INTEGER_32) 0L))) {
						tr1 = RTOSCF(905,F64_905, (Current));
						tb2 = F62_858(RTCW(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_));
						tb1 = tb2;
					}
					if (tb1) {
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
					}
				}
				break;
			case 3L:
				tr1 = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				tb1 = F726_4370(RTCW(tr1));
				if (tb1) {
					loc1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_);
					loc2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_));
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
						ti4_1 = (EIF_INTEGER_32) (arg1);
						tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
						*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					} else {
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
							ti4_1 = (EIF_INTEGER_32) (arg1);
							tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 87L));
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
						} else {
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
								ti4_1 = (EIF_INTEGER_32) (arg1);
								tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 55L));
								*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
							}
						}
					}
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) != ((EIF_INTEGER_32) 0L))) {
						tr1 = RTOSCF(905,F64_905, (Current));
						tb1 = F62_858(RTCW(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_));
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) tb1;
						if (F64_884(Current)) {
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) = (EIF_NATURAL_64) loc1;
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) loc2;
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
						}
					}
				} else {
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tb2 = F776_4823(RTCW(tr1), arg1);
						tb1 = tb2;
					}
					if (tb1) {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					} else {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
					}
				}
				break;
			case 4L:
				tb1 = '\01';
				if (!(EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tb2 = F776_4823(RTCW(tr1), arg1);
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc3;
	RTLE;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.is_integral_integer */
EIF_BOOLEAN F64_892 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 3L))) && (EIF_BOOLEAN) !Result);
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_32 */
EIF_NATURAL_32 F64_900 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_);
	tu8_2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_);
	Result = (EIF_NATURAL_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_2));
	RTLE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.overflow_checker */
static EIF_REFERENCE F64_905_body (EIF_REFERENCE Current)
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
	RTOSP (905);
#define Result RTOSR(905)
	RTOC_NEW(Result);
	tr1 = RTLNS(eif_new_type(61, 0x01).id, 61, _OBJSIZ_4_0_0_0_0_0_0_0_);
	F62_857(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (905);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F64_905 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(905,F64_905_body,(Current));
}

void EIF_Minit46 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
