/*
 * Code for class reference UTF_CONVERTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ut7.h"
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

/* {UTF_CONVERTER}.utf_8_bytes_count */
EIF_INTEGER_32 F6_201 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		loc2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
		if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			Result++;
		} else {
			if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
				Result += ((EIF_INTEGER_32) 2L);
			} else {
				if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
					Result += ((EIF_INTEGER_32) 3L);
				} else {
					Result += ((EIF_INTEGER_32) 4L);
				}
			}
		}
		loc1++;
	}
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16_bytes_count */
EIF_INTEGER_32 F6_203 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		loc2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
		if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
			Result += ((EIF_INTEGER_32) 2L);
		} else {
			Result += ((EIF_INTEGER_32) 4L);
		}
		loc1++;
	}
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_32_string_to_utf_8_string_8 */
EIF_REFERENCE F6_207 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1);
	F776_4789(RTCW(Result), ti4_1);
	F6_208(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_32_string_into_utf_8_string_8 */
void F6_208 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLIU(2);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	F778_4932(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + loc2));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		loc1++;
		loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
		if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			tc1 = (EIF_CHARACTER_8) loc3;
			F778_4915(RTCW(arg2), tc1);
		} else {
			if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
				tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
				tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
				tc1 = (EIF_CHARACTER_8) tu4_1;
				F778_4915(RTCW(arg2), tc1);
				tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
				tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
				tc1 = (EIF_CHARACTER_8) tu4_1;
				F778_4915(RTCW(arg2), tc1);
			} else {
				if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 12L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 224L));
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F778_4915(RTCW(arg2), tc1);
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
					tu4_1 = eif_bit_and((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F778_4915(RTCW(arg2), tc1);
					tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F778_4915(RTCW(arg2), tc1);
				} else {
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 18L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 240L));
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F778_4915(RTCW(arg2), tc1);
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 12L));
					tu4_1 = eif_bit_and((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F778_4915(RTCW(arg2), tc1);
					tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 6L));
					tu4_1 = eif_bit_and((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F778_4915(RTCW(arg2), tc1);
					tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tc1 = (EIF_CHARACTER_8) tu4_1;
					F778_4915(RTCW(arg2), tc1);
				}
			}
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.escaped_utf_32_substring_into_utf_8_0_pointer */
void F6_209 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4, EIF_INTEGER_32 arg5, EIF_REFERENCE arg6)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg4);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc6);
	RTLR(4,arg6);
	RTLIU(5);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	loc4 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - arg5) < (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)))) {
		loc4 = F6_201(Current, arg1, arg2, arg3);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 + loc4) + ((EIF_INTEGER_32) 1L));
		F109_1195(RTCW(arg4), loc4);
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	loc3 = (EIF_INTEGER_32) arg5;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= arg3)) break;
		loc1++;
		loc5 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
		if ((EIF_BOOLEAN)(loc5 == tu4_1)) {
			tb1 = '\0';
			if ((EIF_BOOLEAN) (loc1 < loc2)) {
				tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3352[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				tb1 = (EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 65533U);
			}
			if (tb1) {
				loc1++;
			} else {
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc2)) {
					loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3429[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
					if (F6_263(Current, loc6)) {
						loc5 = F6_264(Current, loc6);
						if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
							loc5 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
						} else {
							loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc1 += ((EIF_INTEGER_32) 2L);
						}
					}
				}
			}
		}
		if ((EIF_BOOLEAN) !loc7) {
			if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
				tu1_1 = (EIF_NATURAL_8) loc5;
				F109_1136(RTCW(arg4), tu1_1, loc3);
				loc3++;
			} else {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc8 && ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 5L)) + (EIF_INTEGER_32) (arg3 - loc1)) > loc4)))) {
					loc4 = F6_201(Current, arg1, loc1, arg3);
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + ((EIF_INTEGER_32) 1L));
					F109_1195(RTCW(arg4), loc4);
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F109_1136(RTCW(arg4), tu1_1, loc3);
					tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F109_1136(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
					loc3 += ((EIF_INTEGER_32) 2L);
				} else {
					if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
						tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 224L));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F109_1136(RTCW(arg4), tu1_1, loc3);
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
						tu4_1 = eif_bit_and((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F109_1136(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F109_1136(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)));
						loc3 += ((EIF_INTEGER_32) 3L);
					} else {
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 18L));
						tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 240L));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F109_1136(RTCW(arg4), tu1_1, loc3);
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
						tu4_1 = eif_bit_and((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F109_1136(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
						tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
						tu4_1 = eif_bit_and((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F109_1136(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)));
						tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
						tu1_1 = (EIF_NATURAL_8) tu4_1;
						F109_1136(RTCW(arg4), tu1_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 3L)));
						loc3 += ((EIF_INTEGER_32) 4L);
					}
				}
			}
		} else {
			loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tu1_1 = (EIF_NATURAL_8) loc5;
			F109_1136(RTCW(arg4), tu1_1, loc3);
			loc3++;
		}
	}
	if (loc8) {
		F109_1195(RTCW(arg4), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
	}
	F109_1136(RTCW(arg4), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), loc3);
	if ((EIF_BOOLEAN)(arg6 != NULL)) {
		F39_620(RTCW(arg6), loc3);
	}
	RTLE;
}

/* {UTF_CONVERTER}.utf_32_string_into_utf_8_0_pointer */
void F6_213 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,arg4);
	RTLIU(4);
	
	RTGC;
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1);
	loc4 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - arg3) < (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)))) {
		loc4 = F6_201(Current, arg1, ((EIF_INTEGER_32) 1L), loc3);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 + loc4) + ((EIF_INTEGER_32) 1L));
		F109_1195(RTCW(arg2), loc4);
		loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc1 = (EIF_INTEGER_32) arg3;
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
		loc2++;
		loc5 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc2);
		if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			tu1_1 = (EIF_NATURAL_8) loc5;
			F109_1136(RTCW(arg2), tu1_1, loc1);
			loc1++;
		} else {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc6 && ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 5L)) + (EIF_INTEGER_32) (loc3 - loc2)) > loc4)))) {
				loc4 = F6_201(Current, arg1, loc2, loc3);
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) + ((EIF_INTEGER_32) 1L));
				F109_1195(RTCW(arg2), loc4);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
				tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
				tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				F109_1136(RTCW(arg2), tu1_1, loc1);
				tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
				tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				F109_1136(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				loc1 += ((EIF_INTEGER_32) 2L);
			} else {
				if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 224L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F109_1136(RTCW(arg2), tu1_1, loc1);
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
					tu4_1 = eif_bit_and((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F109_1136(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F109_1136(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
					loc1 += ((EIF_INTEGER_32) 3L);
				} else {
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 18L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 240L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F109_1136(RTCW(arg2), tu1_1, loc1);
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 12L));
					tu4_1 = eif_bit_and((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F109_1136(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 6L));
					tu4_1 = eif_bit_and((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F109_1136(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
					tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),(EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F109_1136(RTCW(arg2), tu1_1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L)));
					loc1 += ((EIF_INTEGER_32) 4L);
				}
			}
		}
	}
	if (loc6) {
		F109_1195(RTCW(arg2), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
	}
	F109_1136(RTCW(arg2), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), loc1);
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		F39_620(RTCW(arg4), loc1);
	}
	RTLE;
}

/* {UTF_CONVERTER}.utf_8_string_8_to_string_32 */
EIF_REFERENCE F6_220 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(774, 0x01).id, 774, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	F773_4625(RTCW(Result), ti4_1);
	F6_221(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_string_8_into_string_32 */
void F6_221 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLIU(2);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	F775_4770(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + loc2));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		loc1++;
		loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
		if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			tw1 = (EIF_CHARACTER_32) loc3;
			F775_4753(RTCW(arg2), tw1);
		} else {
			if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 223L))) {
				loc1++;
				if ((EIF_BOOLEAN) (loc1 <= loc2)) {
					tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 31L));
					tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 6L));
					tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
					tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
					tu4_1 = eif_bit_or((tu4_1),tu4_2);
					tw1 = (EIF_CHARACTER_32) tu4_1;
					F775_4753(RTCW(arg2), tw1);
				}
			} else {
				if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 239L))) {
					loc1 += ((EIF_INTEGER_32) 2L);
					if ((EIF_BOOLEAN) (loc1 <= loc2)) {
						tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 15L));
						tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 12L));
						tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
						tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
						tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or(tu4_1,tu4_2);
						tw1 = (EIF_CHARACTER_32) tu4_1;
						F775_4753(RTCW(arg2), tw1);
					}
				} else {
					if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 247L))) {
						loc1 += ((EIF_INTEGER_32) 3L);
						if ((EIF_BOOLEAN) (loc1 <= loc2)) {
							tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 7L));
							tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 18L));
							tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L)));
							tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 12L));
							tu4_1 = eif_bit_or((tu4_1),tu4_2);
							tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
							tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
							tu4_1 = eif_bit_or(tu4_1,tu4_2);
							tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
							tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_1 = eif_bit_or(tu4_1,tu4_2);
							tw1 = (EIF_CHARACTER_32) tu4_1;
							F775_4753(RTCW(arg2), tw1);
						}
					}
				}
			}
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.utf_8_string_8_to_escaped_string_32 */
EIF_REFERENCE F6_222 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(774, 0x01).id, 774, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	F773_4625(RTCW(Result), ti4_1);
	F6_223(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_8_string_8_into_escaped_string_32 */
void F6_223 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc4 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc6 = (EIF_NATURAL_8) 0;
	EIF_CHARACTER_32 loc7 = (EIF_CHARACTER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	F775_4770(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + loc2));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		loc1++;
		tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
		loc3 = (EIF_NATURAL_8) tu4_1;
		if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L))) {
			tw1 = (EIF_CHARACTER_32) loc3;
			F775_4753(RTCW(arg2), tw1);
		} else {
			tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 224L));
			if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L))) {
				if ((EIF_BOOLEAN) (loc1 < loc2)) {
					tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					loc4 = (EIF_NATURAL_8) tu4_1;
					tu1_1 = eif_bit_and(loc4,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
					if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
						tu4_1 = (EIF_NATURAL_32) loc3;
						tu4_1 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 31L));
						tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 6L));
						tu4_2 = (EIF_NATURAL_32) loc4;
						tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or((tu4_1),tu4_2);
						tw1 = (EIF_CHARACTER_32) tu4_1;
						F775_4753(RTCW(arg2), tw1);
						loc1++;
					} else {
						tu2_1 = (EIF_NATURAL_16) loc3;
						F6_262(Current, arg2, tu2_1);
					}
				} else {
					tu2_1 = (EIF_NATURAL_16) loc3;
					F6_262(Current, arg2, tu2_1);
				}
			} else {
				tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 240L));
				if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L))) {
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc2)) {
						tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
						loc4 = (EIF_NATURAL_8) tu4_1;
						tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
						loc5 = (EIF_NATURAL_8) tu4_1;
						tb1 = '\0';
						tu1_1 = eif_bit_and(loc4,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
						if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
							tu1_1 = eif_bit_and(loc5,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
							tb1 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
						}
						if (tb1) {
							tu4_1 = (EIF_NATURAL_32) loc3;
							tu4_1 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 15L));
							tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 12L));
							tu4_2 = (EIF_NATURAL_32) loc4;
							tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
							tu4_1 = eif_bit_or((tu4_1),tu4_2);
							tu4_2 = (EIF_NATURAL_32) loc5;
							tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_1 = eif_bit_or(tu4_1,tu4_2);
							loc7 = (EIF_CHARACTER_32) tu4_1;
							F775_4753(RTCW(arg2), loc7);
							loc1 += ((EIF_INTEGER_32) 2L);
						} else {
							tu2_1 = (EIF_NATURAL_16) loc3;
							F6_262(Current, arg2, tu2_1);
						}
					} else {
						tu2_1 = (EIF_NATURAL_16) loc3;
						F6_262(Current, arg2, tu2_1);
					}
				} else {
					tu1_1 = eif_bit_and(loc3,(EIF_NATURAL_8) ((EIF_INTEGER_32) 248L));
					if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L))) {
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) < loc2)) {
							tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
							loc4 = (EIF_NATURAL_8) tu4_1;
							tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
							loc5 = (EIF_NATURAL_8) tu4_1;
							tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L)));
							loc6 = (EIF_NATURAL_8) tu4_1;
							tb1 = '\0';
							tb2 = '\0';
							tu1_1 = eif_bit_and(loc4,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
							if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
								tu1_1 = eif_bit_and(loc5,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
								tb2 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
							}
							if (tb2) {
								tu1_1 = eif_bit_and(loc6,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
								tb1 = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
							}
							if (tb1) {
								tu4_1 = (EIF_NATURAL_32) loc3;
								tu4_1 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 7L));
								tu4_1 = eif_bit_shift_left((tu4_1),((EIF_INTEGER_32) 18L));
								tu4_2 = (EIF_NATURAL_32) loc4;
								tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
								tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 12L));
								tu4_1 = eif_bit_or((tu4_1),tu4_2);
								tu4_2 = (EIF_NATURAL_32) loc5;
								tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
								tu4_2 = eif_bit_shift_left((tu4_2),((EIF_INTEGER_32) 6L));
								tu4_1 = eif_bit_or(tu4_1,tu4_2);
								tu4_2 = (EIF_NATURAL_32) loc6;
								tu4_2 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
								tu4_1 = eif_bit_or(tu4_1,tu4_2);
								tw1 = (EIF_CHARACTER_32) tu4_1;
								F775_4753(RTCW(arg2), tw1);
								loc1 += ((EIF_INTEGER_32) 3L);
							} else {
								tu2_1 = (EIF_NATURAL_16) loc3;
								F6_262(Current, arg2, tu2_1);
							}
						} else {
							tu2_1 = (EIF_NATURAL_16) loc3;
							F6_262(Current, arg2, tu2_1);
						}
					} else {
						tu2_1 = (EIF_NATURAL_16) loc3;
						F6_262(Current, arg2, tu2_1);
					}
				}
			}
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.escaped_utf_32_substring_into_utf_16_0_pointer */
void F6_234 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4, EIF_INTEGER_32 arg5, EIF_REFERENCE arg6)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_NATURAL_16 tu2_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg4);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc6);
	RTLR(4,arg6);
	RTLIU(5);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	loc4 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - arg5) < (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L)))) {
		loc4 = F6_203(Current, arg1, arg2, arg3);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 + loc4) + ((EIF_INTEGER_32) 2L));
		F109_1195(RTCW(arg4), loc4);
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	loc3 = (EIF_INTEGER_32) arg5;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= arg3)) break;
		loc1++;
		loc5 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
		if ((EIF_BOOLEAN)(loc5 == tu4_1)) {
			if ((EIF_BOOLEAN) (loc1 < loc2)) {
				tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3352[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(tw1 == (EIF_CHARACTER_32) 65533U)) {
					loc1++;
				} else {
					tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3352[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'u';
					if ((EIF_BOOLEAN)(tw1 == tw2)) {
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 4L)) < loc2)) {
							loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3429[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 5L)));
							if (F6_263(Current, loc6)) {
								loc5 = F6_264(Current, loc6);
								if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc5 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc5 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L)))) {
									loc5 = (EIF_NATURAL_32) (EIF_CHARACTER_32) 65533U;
								} else {
									loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									loc1 += ((EIF_INTEGER_32) 5L);
								}
							}
						}
					}
				}
			}
		}
		if ((EIF_BOOLEAN) !loc7) {
			if ((EIF_BOOLEAN) (loc5 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
				tu2_1 = (EIF_NATURAL_16) loc5;
				F109_1137(RTCW(arg4), tu2_1, loc3);
				loc3 += ((EIF_INTEGER_32) 2L);
			} else {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc8 && ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 6L)) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - loc1) * ((EIF_INTEGER_32) 2L))) > loc4)))) {
					loc4 = F6_203(Current, arg1, loc1, arg3);
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + ((EIF_INTEGER_32) 2L));
					F109_1195(RTCW(arg4), loc4);
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				tu4_1 = eif_bit_shift_right(loc5,((EIF_INTEGER_32) 10L));
				tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 55232L) + tu4_1));
				F109_1137(RTCW(arg4), tu2_1, loc3);
				tu4_1 = eif_bit_and(loc5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L));
				tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L) + tu4_1));
				F109_1137(RTCW(arg4), tu2_1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)));
				loc3 += ((EIF_INTEGER_32) 4L);
			}
		} else {
			loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tu2_1 = (EIF_NATURAL_16) loc5;
			F109_1137(RTCW(arg4), tu2_1, loc3);
			loc3 += ((EIF_INTEGER_32) 2L);
		}
	}
	if (loc8) {
		F109_1195(RTCW(arg4), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L)));
	}
	F109_1137(RTCW(arg4), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L), loc3);
	if ((EIF_BOOLEAN)(arg6 != NULL)) {
		F39_620(RTCW(arg6), loc3);
	}
	RTLE;
}

/* {UTF_CONVERTER}.utf_16le_string_8_to_escaped_string_32 */
EIF_REFERENCE F6_249 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(774, 0x01).id, 774, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	ti4_1 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 1L));
	F773_4625(RTCW(Result), ti4_1);
	F6_250(Current, arg1, Result);
	RTLE;
	return Result;
}

/* {UTF_CONVERTER}.utf_16le_string_8_into_escaped_string_32 */
void F6_250 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	ti4_2 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 1L));
	F775_4770(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ti4_2));
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) >= loc2)) break;
		loc1 += ((EIF_INTEGER_32) 2L);
		tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
		tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, loc1);
		tu4_2 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
		loc3 = eif_bit_or(tu4_1,tu4_2);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc3 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L)))) {
			tw1 = (EIF_CHARACTER_32) loc3;
			F775_4753(RTCW(arg2), tw1);
		} else {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 56319L)) && (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) <= loc2))) {
				tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3351[Dtype(RTCW(arg1))-773])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
				tu4_2 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
				loc4 = eif_bit_or(tu4_1,tu4_2);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L)) && (EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57343L)))) {
					tu4_1 = eif_bit_shift_left(loc3,((EIF_INTEGER_32) 10L));
					tw1 = (EIF_CHARACTER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + loc4) - (EIF_NATURAL_32) ((EIF_INTEGER_32) 56613888L)));
					F775_4753(RTCW(arg2), tw1);
					loc1 += ((EIF_INTEGER_32) 2L);
				} else {
					tu2_1 = (EIF_NATURAL_16) loc3;
					F6_262(Current, arg2, tu2_1);
				}
			} else {
				tu2_1 = (EIF_NATURAL_16) loc3;
				F6_262(Current, arg2, tu2_1);
			}
		}
	}
	RTLE;
}

/* {UTF_CONVERTER}.escape_code_into */
void F6_262 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_NATURAL_16 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F775_4752(RTCW(arg1), (EIF_CHARACTER_32) 65533U);
	tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_8) 255U);
	if ((EIF_BOOLEAN) (arg2 <= tu2_1)) {
		tu1_1 = (EIF_NATURAL_8) arg2;
		tr1 = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)tr1 = tu1_1;
		tr1 = F714_4128(RTCW(tr1));
		F775_4737(RTCW(arg1), tr1);
	} else {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'u';
		F775_4752(RTCW(arg1), tw1);
		tr1 = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)tr1 = arg2;
		tr1 = F711_4037(RTCW(tr1));
		F775_4737(RTCW(arg1), tr1);
	}
	RTLE;
}

/* {UTF_CONVERTER}.is_hexa_decimal */
EIF_BOOLEAN F6_263 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = RTOSCF(265,F6_265, (Current));
	F64_887(RTCW(loc1), ((EIF_INTEGER_32) 13L));
	F64_888(RTCW(loc1), arg1, ((EIF_INTEGER_32) 13L));
	tb1 = F64_892(RTCW(loc1));
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

/* {UTF_CONVERTER}.to_natural_32 */
EIF_NATURAL_32 F6_264 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = RTOSCF(265,F6_265, (Current));
	F64_888(RTCW(loc1), arg1, ((EIF_INTEGER_32) 0L));
	tu4_1 = F64_900(RTCW(loc1));
	RTLE;
	return (EIF_NATURAL_32) tu4_1;
}

/* {UTF_CONVERTER}.ctoi_convertor */
static EIF_REFERENCE F6_265_body (EIF_REFERENCE Current)
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
	RTOSP (265);
#define Result RTOSR(265)
	RTOC_NEW(Result);
	tr1 = RTLNS(eif_new_type(63, 0x01).id, 63, _OBJSIZ_2_4_0_3_0_0_2_0_);
	F64_882(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	F63_875(RTCW(Result), (EIF_BOOLEAN) 0);
	F63_874(RTCW(Result), (EIF_BOOLEAN) 0);
	RTOSE (265);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F6_265 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(265,F6_265_body,(Current));
}

void EIF_Minit7 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
