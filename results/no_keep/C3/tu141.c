/*
 * Code for class TUPLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tu141.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TUPLE}.item */
EIF_REFERENCE F692_3302 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	switch ((EIF_NATURAL_8) eif_builtin_TUPLE_item_code (Current, arg1)) {
		case 1U:
			Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (EIF_BOOLEAN) eif_builtin_TUPLE_boolean_item (Current, arg1);
			break;
		case 2U:
			Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (EIF_CHARACTER_8) eif_builtin_TUPLE_character_8_item (Current, arg1);
			break;
		case 14U:
			Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (EIF_CHARACTER_32) eif_builtin_TUPLE_character_32_item (Current, arg1);
			break;
		case 3U:
			Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (EIF_REAL_64) eif_builtin_TUPLE_real_64_item (Current, arg1);
			break;
		case 4U:
			Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (EIF_REAL_32) eif_builtin_TUPLE_real_32_item (Current, arg1);
			break;
		case 5U:
			Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (EIF_POINTER) eif_builtin_TUPLE_pointer_item (Current, arg1);
			break;
		case 10U:
			Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (EIF_NATURAL_8) eif_builtin_TUPLE_natural_8_item (Current, arg1);
			break;
		case 11U:
			Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (EIF_NATURAL_16) eif_builtin_TUPLE_natural_16_item (Current, arg1);
			break;
		case 12U:
			Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (EIF_NATURAL_32) eif_builtin_TUPLE_natural_32_item (Current, arg1);
			break;
		case 13U:
			Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (EIF_NATURAL_64) eif_builtin_TUPLE_natural_64_item (Current, arg1);
			break;
		case 6U:
			Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (EIF_INTEGER_8) eif_builtin_TUPLE_integer_8_item (Current, arg1);
			break;
		case 7U:
			Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (EIF_INTEGER_16) eif_builtin_TUPLE_integer_16_item (Current, arg1);
			break;
		case 8U:
			Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (EIF_INTEGER_32) eif_builtin_TUPLE_integer_32_item (Current, arg1);
			break;
		case 9U:
			Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (EIF_INTEGER_64) eif_builtin_TUPLE_integer_64_item (Current, arg1);
			break;
		case 0U:
			Result = (EIF_REFERENCE) eif_builtin_TUPLE_reference_item (Current, arg1);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTLE;
	return Result;
}

/* {TUPLE}.reference_item */
EIF_REFERENCE F692_3304 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	Result = (EIF_REFERENCE) eif_builtin_TUPLE_reference_item (Current, arg1);
	RTLE;
	return Result;
}

/* {TUPLE}.boolean_item */
EIF_BOOLEAN F692_3305 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) eif_builtin_TUPLE_boolean_item (Current, arg1);
	return Result;
}

/* {TUPLE}.character_8_item */
EIF_CHARACTER_8 F692_3306 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	
	Result = (EIF_CHARACTER_8) eif_builtin_TUPLE_character_8_item (Current, arg1);
	return Result;
}

/* {TUPLE}.character_32_item */
EIF_CHARACTER_32 F692_3308 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	
	
	Result = (EIF_CHARACTER_32) eif_builtin_TUPLE_character_32_item (Current, arg1);
	return Result;
}

/* {TUPLE}.real_64_item */
EIF_REAL_64 F692_3310 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	
	Result = (EIF_REAL_64) eif_builtin_TUPLE_real_64_item (Current, arg1);
	return Result;
}

/* {TUPLE}.natural_8_item */
EIF_NATURAL_8 F692_3312 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = (EIF_NATURAL_8) eif_builtin_TUPLE_natural_8_item (Current, arg1);
	return Result;
}

/* {TUPLE}.natural_16_item */
EIF_NATURAL_16 F692_3313 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	
	
	Result = (EIF_NATURAL_16) eif_builtin_TUPLE_natural_16_item (Current, arg1);
	return Result;
}

/* {TUPLE}.natural_32_item */
EIF_NATURAL_32 F692_3314 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) eif_builtin_TUPLE_natural_32_item (Current, arg1);
	return Result;
}

/* {TUPLE}.natural_64_item */
EIF_NATURAL_64 F692_3315 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	
	
	Result = (EIF_NATURAL_64) eif_builtin_TUPLE_natural_64_item (Current, arg1);
	return Result;
}

/* {TUPLE}.integer_8_item */
EIF_INTEGER_8 F692_3316 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	
	
	Result = (EIF_INTEGER_8) eif_builtin_TUPLE_integer_8_item (Current, arg1);
	return Result;
}

/* {TUPLE}.integer_16_item */
EIF_INTEGER_16 F692_3317 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	
	
	Result = (EIF_INTEGER_16) eif_builtin_TUPLE_integer_16_item (Current, arg1);
	return Result;
}

/* {TUPLE}.integer_32_item */
EIF_INTEGER_32 F692_3318 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_TUPLE_integer_32_item (Current, arg1);
	return Result;
}

/* {TUPLE}.integer_64_item */
EIF_INTEGER_64 F692_3320 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	
	
	Result = (EIF_INTEGER_64) eif_builtin_TUPLE_integer_64_item (Current, arg1);
	return Result;
}

/* {TUPLE}.pointer_item */
EIF_POINTER F692_3321 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) eif_builtin_TUPLE_pointer_item (Current, arg1);
	return Result;
}

/* {TUPLE}.real_32_item */
EIF_REAL_32 F692_3322 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	
	
	Result = (EIF_REAL_32) eif_builtin_TUPLE_real_32_item (Current, arg1);
	return Result;
}

/* {TUPLE}.object_comparison */
EIF_BOOLEAN F692_3324 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) eif_builtin_TUPLE_object_comparison (Current);
	return Result;
}

/* {TUPLE}.is_equal */
EIF_BOOLEAN F692_3325 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	loc3 = (EIF_BOOLEAN) eif_builtin_TUPLE_object_comparison (Current);
	tb1 = (EIF_BOOLEAN) eif_builtin_TUPLE_object_comparison (arg1);
	if ((EIF_BOOLEAN)(loc3 == tb1)) {
		if (loc3) {
			loc2 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
			ti4_1 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (arg1);
			if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
					tr1 = F692_3302(Current, loc1);
					tr2 = F692_3302(RTCW(arg1), loc1);
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
					loc1++;
				}
			}
		} else {
			Result = (EIF_BOOLEAN) eif_builtin_ANY_is_equal (Current, arg1);
			RTLE;
			return (EIF_BOOLEAN) Result;
		}
	}
	RTLE;
	return Result;
}

/* {TUPLE}.hash_code */
EIF_INTEGER_32 F692_3328 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc2 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		switch ((EIF_NATURAL_8) eif_builtin_TUPLE_item_code (Current, loc1)) {
			case 1U:
				tb1 = (EIF_BOOLEAN) eif_builtin_TUPLE_boolean_item (Current, loc1);
				loc3 = (tb1 ? 1L : 0L);
				break;
			case 2U:
				tc1 = (EIF_CHARACTER_8) eif_builtin_TUPLE_character_8_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (tc1);
				break;
			case 14U:
				tw1 = (EIF_CHARACTER_32) eif_builtin_TUPLE_character_32_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (tw1);
				break;
			case 3U:
				tr8_1 = (EIF_REAL_64) eif_builtin_TUPLE_real_64_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr8_1)));
				break;
			case 4U:
				tr4_1 = (EIF_REAL_32) eif_builtin_TUPLE_real_32_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr4_1)));
				break;
			case 5U:
				tp1 = (EIF_POINTER) eif_builtin_TUPLE_pointer_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
				break;
			case 10U:
				tu1_1 = (EIF_NATURAL_8) eif_builtin_TUPLE_natural_8_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu1_1)));
				break;
			case 11U:
				tu2_1 = (EIF_NATURAL_16) eif_builtin_TUPLE_natural_16_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu2_1)));
				break;
			case 12U:
				tu4_1 = (EIF_NATURAL_32) eif_builtin_TUPLE_natural_32_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
				break;
			case 13U:
				tu8_1 = (EIF_NATURAL_64) eif_builtin_TUPLE_natural_64_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu8_1)));
				break;
			case 6U:
				ti1_1 = (EIF_INTEGER_8) eif_builtin_TUPLE_integer_8_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti1_1)));
				break;
			case 7U:
				ti2_1 = (EIF_INTEGER_16) eif_builtin_TUPLE_integer_16_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti2_1)));
				break;
			case 8U:
				ti4_1 = (EIF_INTEGER_32) eif_builtin_TUPLE_integer_32_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
				break;
			case 9U:
				ti8_1 = (EIF_INTEGER_64) eif_builtin_TUPLE_integer_64_item (Current, loc1);
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti8_1)));
				break;
			case 0U:
				tr1 = (EIF_REFERENCE) eif_builtin_TUPLE_reference_item (Current, loc1);
				loc4 = RTCCL(tr1);
				loc4 = RTRV(eif_new_type(644, 0x01),loc4);
				if (EIF_TEST(loc4)) {
					loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2523[Dtype(loc4)-645])(loc4);
				} else {
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
		tr1 = RTOSCF(3428,F692_3428, (Current));
		ti4_1 = F445_2192(RTCW(tr1), loc1);
		Result += (EIF_INTEGER_32) (loc3 * ti4_1);
		loc1++;
	}
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {TUPLE}.valid_index */
EIF_BOOLEAN F692_3329 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current));
	}
	RTLE;
	return Result;
}

/* {TUPLE}.valid_type_for_index */
EIF_BOOLEAN F692_3330 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(18);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,loc8);
	RTLR(9,loc9);
	RTLR(10,loc10);
	RTLR(11,loc11);
	RTLR(12,loc12);
	RTLR(13,loc13);
	RTLR(14,loc14);
	RTLR(15,loc15);
	RTLR(16,loc16);
	RTLR(17,loc1);
	RTLIU(18);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		if ((EIF_BOOLEAN)((EIF_NATURAL_8) eif_builtin_TUPLE_item_code (Current, arg2) == ((EIF_NATURAL_8) 0U))) {
			tr1 = F1_5(Current);
			tr1 = F647_3274(tr1, arg2);
			Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2589[Dtype(RTCW(tr1))-646])(tr1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
		}
	} else {
		switch ((EIF_NATURAL_8) eif_builtin_TUPLE_item_code (Current, arg2)) {
			case 1U:
				loc3 = RTCCL(arg1);
				loc3 = RTRV(eif_new_type(728, 0x01),loc3);
				Result = (EIF_BOOLEAN) EIF_TEST(loc3);
				break;
			case 2U:
				loc4 = RTCCL(arg1);
				loc4 = RTRV(eif_new_type(725, 0x01),loc4);
				Result = (EIF_BOOLEAN) EIF_TEST(loc4);
				break;
			case 14U:
				loc5 = RTCCL(arg1);
				loc5 = RTRV(eif_new_type(722, 0x01),loc5);
				Result = (EIF_BOOLEAN) EIF_TEST(loc5);
				break;
			case 3U:
				loc6 = RTCCL(arg1);
				loc6 = RTRV(eif_new_type(719, 0x01),loc6);
				Result = (EIF_BOOLEAN) EIF_TEST(loc6);
				break;
			case 4U:
				loc7 = RTCCL(arg1);
				loc7 = RTRV(eif_new_type(716, 0x01),loc7);
				Result = (EIF_BOOLEAN) EIF_TEST(loc7);
				break;
			case 5U:
				loc8 = RTCCL(arg1);
				loc8 = RTRV(eif_new_type(731, 0x01),loc8);
				Result = (EIF_BOOLEAN) EIF_TEST(loc8);
				break;
			case 10U:
				loc9 = RTCCL(arg1);
				loc9 = RTRV(eif_new_type(713, 0x01),loc9);
				Result = (EIF_BOOLEAN) EIF_TEST(loc9);
				break;
			case 11U:
				loc10 = RTCCL(arg1);
				loc10 = RTRV(eif_new_type(710, 0x01),loc10);
				Result = (EIF_BOOLEAN) EIF_TEST(loc10);
				break;
			case 12U:
				loc11 = RTCCL(arg1);
				loc11 = RTRV(eif_new_type(707, 0x01),loc11);
				Result = (EIF_BOOLEAN) EIF_TEST(loc11);
				break;
			case 13U:
				loc12 = RTCCL(arg1);
				loc12 = RTRV(eif_new_type(704, 0x01),loc12);
				Result = (EIF_BOOLEAN) EIF_TEST(loc12);
				break;
			case 6U:
				loc13 = RTCCL(arg1);
				loc13 = RTRV(eif_new_type(701, 0x01),loc13);
				Result = (EIF_BOOLEAN) EIF_TEST(loc13);
				break;
			case 7U:
				loc14 = RTCCL(arg1);
				loc14 = RTRV(eif_new_type(698, 0x01),loc14);
				Result = (EIF_BOOLEAN) EIF_TEST(loc14);
				break;
			case 8U:
				loc15 = RTCCL(arg1);
				loc15 = RTRV(eif_new_type(695, 0x01),loc15);
				Result = (EIF_BOOLEAN) EIF_TEST(loc15);
				break;
			case 9U:
				loc16 = RTCCL(arg1);
				loc16 = RTRV(eif_new_type(692, 0x01),loc16);
				Result = (EIF_BOOLEAN) EIF_TEST(loc16);
				break;
			case 0U:
				loc1 = RTLNS(eif_new_type(130, 0x01).id, 130, _OBJSIZ_0_0_0_0_0_0_0_0_);
				tr1 = RTCCL(arg1);
				loc2 = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_dynamic_type (tr1);
				tr1 = F1_5(Current);
				tr1 = F647_3274(tr1, arg2);
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2584[Dtype(RTCW(tr1))-646])(tr1);
				Result = F131_1623(RTCW(loc1), loc2, ti4_1);
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
	return Result;
}

/* {TUPLE}.count */
EIF_INTEGER_32 F692_3331 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
	return Result;
}

/* {TUPLE}.lower */
EIF_INTEGER_32 F692_3332 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {TUPLE}.put */
void F692_3335 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(17);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,loc11);
	RTLR(13,loc12);
	RTLR(14,loc13);
	RTLR(15,loc14);
	RTLR(16,tr1);
	RTLIU(17);
	
	RTGC;
	switch ((EIF_NATURAL_8) eif_builtin_TUPLE_item_code (Current, arg2)) {
		case 1U:
			loc1 = RTCCL(arg1);
			loc1 = RTRV(eif_new_type(728, 0x01),loc1);
			if (EIF_TEST(loc1)) {
				tb1 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_0_0_);
				eif_builtin_TUPLE_put_boolean (Current, tb1, arg2);
			}
			break;
		case 2U:
			loc2 = RTCCL(arg1);
			loc2 = RTRV(eif_new_type(725, 0x01),loc2);
			if (EIF_TEST(loc2)) {
				tc1 = *(EIF_CHARACTER_8 *)(loc2+ _CHROFF_0_0_);
				eif_builtin_TUPLE_put_character_8 (Current, tc1, arg2);
			}
			break;
		case 14U:
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(722, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				tw1 = *(EIF_CHARACTER_32 *)(loc3+ _LNGOFF_0_0_0_0_);
				eif_builtin_TUPLE_put_character_32 (Current, tw1, arg2);
			}
			break;
		case 3U:
			loc4 = RTCCL(arg1);
			loc4 = RTRV(eif_new_type(719, 0x01),loc4);
			if (EIF_TEST(loc4)) {
				tr8_1 = *(EIF_REAL_64 *)(loc4+ _R64OFF_0_0_0_0_0_0_0_0_);
				eif_builtin_TUPLE_put_real_64 (Current, tr8_1, arg2);
			}
			break;
		case 4U:
			loc5 = RTCCL(arg1);
			loc5 = RTRV(eif_new_type(716, 0x01),loc5);
			if (EIF_TEST(loc5)) {
				tr4_1 = *(EIF_REAL_32 *)(loc5+ _R32OFF_0_0_0_0_0_);
				eif_builtin_TUPLE_put_real_32 (Current, tr4_1, arg2);
			}
			break;
		case 5U:
			loc6 = RTCCL(arg1);
			loc6 = RTRV(eif_new_type(731, 0x01),loc6);
			if (EIF_TEST(loc6)) {
				tp1 = *(EIF_POINTER *)(loc6+ _PTROFF_0_0_0_0_0_0_);
				eif_builtin_TUPLE_put_pointer (Current, tp1, arg2);
			}
			break;
		case 10U:
			loc7 = RTCCL(arg1);
			loc7 = RTRV(eif_new_type(713, 0x01),loc7);
			if (EIF_TEST(loc7)) {
				tu1_1 = *(EIF_NATURAL_8 *)(loc7+ _CHROFF_0_0_);
				eif_builtin_TUPLE_put_natural_8 (Current, tu1_1, arg2);
			}
			break;
		case 11U:
			loc8 = RTCCL(arg1);
			loc8 = RTRV(eif_new_type(710, 0x01),loc8);
			if (EIF_TEST(loc8)) {
				tu2_1 = *(EIF_NATURAL_16 *)(loc8+ _I16OFF_0_0_0_);
				eif_builtin_TUPLE_put_natural_16 (Current, tu2_1, arg2);
			}
			break;
		case 12U:
			loc9 = RTCCL(arg1);
			loc9 = RTRV(eif_new_type(707, 0x01),loc9);
			if (EIF_TEST(loc9)) {
				tu4_1 = *(EIF_NATURAL_32 *)(loc9+ _LNGOFF_0_0_0_0_);
				eif_builtin_TUPLE_put_natural_32 (Current, tu4_1, arg2);
			}
			break;
		case 13U:
			loc10 = RTCCL(arg1);
			loc10 = RTRV(eif_new_type(704, 0x01),loc10);
			if (EIF_TEST(loc10)) {
				tu8_1 = *(EIF_NATURAL_64 *)(loc10+ _I64OFF_0_0_0_0_0_0_0_);
				eif_builtin_TUPLE_put_natural_64 (Current, tu8_1, arg2);
			}
			break;
		case 6U:
			loc11 = RTCCL(arg1);
			loc11 = RTRV(eif_new_type(701, 0x01),loc11);
			if (EIF_TEST(loc11)) {
				ti1_1 = *(EIF_INTEGER_8 *)(loc11+ _CHROFF_0_0_);
				eif_builtin_TUPLE_put_integer_8 (Current, ti1_1, arg2);
			}
			break;
		case 7U:
			loc12 = RTCCL(arg1);
			loc12 = RTRV(eif_new_type(698, 0x01),loc12);
			if (EIF_TEST(loc12)) {
				ti2_1 = *(EIF_INTEGER_16 *)(loc12+ _I16OFF_0_0_0_);
				eif_builtin_TUPLE_put_integer_16 (Current, ti2_1, arg2);
			}
			break;
		case 8U:
			loc13 = RTCCL(arg1);
			loc13 = RTRV(eif_new_type(695, 0x01),loc13);
			if (EIF_TEST(loc13)) {
				ti4_1 = *(EIF_INTEGER_32 *)(loc13+ _LNGOFF_0_0_0_0_);
				eif_builtin_TUPLE_put_integer_32 (Current, ti4_1, arg2);
			}
			break;
		case 9U:
			loc14 = RTCCL(arg1);
			loc14 = RTRV(eif_new_type(692, 0x01),loc14);
			if (EIF_TEST(loc14)) {
				ti8_1 = *(EIF_INTEGER_64 *)(loc14+ _I64OFF_0_0_0_0_0_0_0_);
				eif_builtin_TUPLE_put_integer_64 (Current, ti8_1, arg2);
			}
			break;
		case 0U:
			tr1 = RTCCL(arg1);
			eif_builtin_TUPLE_put_reference (Current, tr1, arg2);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTLE;
}

/* {TUPLE}.put_reference */
void F692_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	eif_builtin_TUPLE_put_reference (Current, arg1, arg2);
	RTLE;
}

/* {TUPLE}.put_boolean */
void F692_3337 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_boolean (Current, arg1, arg2);
}

/* {TUPLE}.put_character_8 */
void F692_3338 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_character_8 (Current, arg1, arg2);
}

/* {TUPLE}.put_character_32 */
void F692_3340 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_character_32 (Current, arg1, arg2);
}

/* {TUPLE}.put_real_64 */
void F692_3342 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_real_64 (Current, arg1, arg2);
}

/* {TUPLE}.put_real_32 */
void F692_3344 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_real_32 (Current, arg1, arg2);
}

/* {TUPLE}.put_pointer */
void F692_3346 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_pointer (Current, arg1, arg2);
}

/* {TUPLE}.put_natural_8 */
void F692_3347 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_natural_8 (Current, arg1, arg2);
}

/* {TUPLE}.put_natural_16 */
void F692_3348 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_natural_16 (Current, arg1, arg2);
}

/* {TUPLE}.put_natural_32 */
void F692_3349 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_natural_32 (Current, arg1, arg2);
}

/* {TUPLE}.put_natural_64 */
void F692_3350 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_natural_64 (Current, arg1, arg2);
}

/* {TUPLE}.put_integer_32 */
void F692_3351 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_integer_32 (Current, arg1, arg2);
}

/* {TUPLE}.put_integer_8 */
void F692_3353 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_integer_8 (Current, arg1, arg2);
}

/* {TUPLE}.put_integer_16 */
void F692_3354 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_integer_16 (Current, arg1, arg2);
}

/* {TUPLE}.put_integer_64 */
void F692_3355 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_builtin_TUPLE_put_integer_64 (Current, arg1, arg2);
}

/* {TUPLE}.correct_mismatch */
void F692_3406 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	tr1 = RTOSCF(2741,F560_2741, (Current));
	tr2 = RTOSCF(3426,F692_3426, (Current));
	tr1 = F575_2864(RTCW(tr1), tr2);
	loc4 = RTCCL(tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,585,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc4 = RTRV(typres0,loc4);
	}
	if (EIF_TEST(loc4)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(loc4)-585])(loc4);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(loc4)-497])(loc4, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
			tr1 = RTCCL(loc3);
			if (F692_3330(Current, tr1, loc1)) {
				tr1 = RTCCL(loc3);
				F692_3335(Current, tr1, loc1);
			} else {
				F560_2740(Current);
			}
			loc1++;
		}
	} else {
		F560_2740(Current);
	}
	RTLE;
}

/* {TUPLE}.item_code */
EIF_NATURAL_8 F692_3407 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = (EIF_NATURAL_8) eif_builtin_TUPLE_item_code (Current, arg1);
	return Result;
}

/* {TUPLE}.area_name */

EIF_REFERENCE F692_3426 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (3426,RTMS_EX_H("area",4,1634887009));
}

/* {TUPLE}.internal_primes */
static EIF_REFERENCE F692_3428_body (EIF_REFERENCE Current)
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
	RTOSP (3428);
#define Result RTOSR(3428)
	RTOC_NEW(Result);
	tr1 = RTLNS(eif_new_type(444, 0x01).id, 444, _OBJSIZ_0_1_0_1_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (3428);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F692_3428 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3428,F692_3428_body,(Current));
}

void EIF_Minit141 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
