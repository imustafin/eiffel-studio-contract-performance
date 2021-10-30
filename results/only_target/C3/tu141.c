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
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("item", 691, Current, 0, 1, 9279);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch ((nstcall = 0, F692_3407(Current, arg1))) {
		case 1U:
			RTHOOK(3);
			Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F692_3305(Current, arg1));
			break;
		case 2U:
			RTHOOK(4);
			Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F692_3306(Current, arg1));
			break;
		case 14U:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F692_3308(Current, arg1));
			break;
		case 3U:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F692_3310(Current, arg1));
			break;
		case 4U:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F692_3322(Current, arg1));
			break;
		case 5U:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F692_3321(Current, arg1));
			break;
		case 10U:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F692_3312(Current, arg1));
			break;
		case 11U:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F692_3313(Current, arg1));
			break;
		case 12U:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F692_3314(Current, arg1));
			break;
		case 13U:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F692_3315(Current, arg1));
			break;
		case 6U:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F692_3316(Current, arg1));
			break;
		case 7U:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F692_3317(Current, arg1));
			break;
		case 8U:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F692_3318(Current, arg1));
			break;
		case 9U:
			RTHOOK(16);
			Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F692_3320(Current, arg1));
			break;
		case 0U:
			RTHOOK(17);
			Result = (nstcall = 0, F692_3304(Current, arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.at */
EIF_REFERENCE F692_3303 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("at", 691, Current, 0, 1, 9280);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch ((nstcall = 0, F692_3407(Current, arg1))) {
		case 1U:
			RTHOOK(2);
			Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F692_3305(Current, arg1));
			break;
		case 2U:
			RTHOOK(3);
			Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F692_3306(Current, arg1));
			break;
		case 14U:
			RTHOOK(4);
			Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F692_3308(Current, arg1));
			break;
		case 3U:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F692_3310(Current, arg1));
			break;
		case 4U:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F692_3322(Current, arg1));
			break;
		case 5U:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F692_3321(Current, arg1));
			break;
		case 10U:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F692_3312(Current, arg1));
			break;
		case 11U:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F692_3313(Current, arg1));
			break;
		case 12U:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F692_3314(Current, arg1));
			break;
		case 13U:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F692_3315(Current, arg1));
			break;
		case 6U:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F692_3316(Current, arg1));
			break;
		case 7U:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F692_3317(Current, arg1));
			break;
		case 8U:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F692_3318(Current, arg1));
			break;
		case 9U:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F692_3320(Current, arg1));
			break;
		case 0U:
			RTHOOK(16);
			Result = (nstcall = 0, F692_3304(Current, arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.reference_item */
EIF_REFERENCE F692_3304 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("reference_item", 691, Current, 0, 1, 9281);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_reference", EX_PRE);
		RTTE((nstcall = 0, F692_3373(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_REFERENCE) eif_builtin_TUPLE_reference_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.boolean_item */
EIF_BOOLEAN F692_3305 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("boolean_item", 691, Current, 0, 1, 9282);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_boolean", EX_PRE);
		RTTE((nstcall = 0, F692_3356(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_BOOLEAN) eif_builtin_TUPLE_boolean_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_8_item */
EIF_CHARACTER_8 F692_3306 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_8_item", 691, Current, 0, 1, 9283);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_8", EX_PRE);
		RTTE((nstcall = 0, F692_3357(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_CHARACTER_8) eif_builtin_TUPLE_character_8_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_item */
EIF_CHARACTER_8 F692_3307 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_item", 691, Current, 0, 1, 9284);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_8", EX_PRE);
		RTTE((nstcall = 0, F692_3357(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F692_3306(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_32_item */
EIF_CHARACTER_32 F692_3308 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_32_item", 691, Current, 0, 1, 9285);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_32", EX_PRE);
		RTTE((nstcall = 0, F692_3359(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_CHARACTER_32) eif_builtin_TUPLE_character_32_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.wide_character_item */
EIF_CHARACTER_32 F692_3309 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wide_character_item", 691, Current, 0, 1, 9286);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_32", EX_PRE);
		RTTE((nstcall = 0, F692_3359(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F692_3308(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.real_64_item */
EIF_REAL_64 F692_3310 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_64_item", 691, Current, 0, 1, 9287);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_numeric", EX_PRE);
		RTTE((nstcall = 0, F692_3361(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_REAL_64) eif_builtin_TUPLE_real_64_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.double_item */
EIF_REAL_64 F692_3311 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("double_item", 691, Current, 0, 1, 9288);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_numeric", EX_PRE);
		RTTE((nstcall = 0, F692_3361(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F692_3310(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_8_item */
EIF_NATURAL_8 F692_3312 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_8_item", 691, Current, 0, 1, 9289);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3362(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_8) eif_builtin_TUPLE_natural_8_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_16_item */
EIF_NATURAL_16 F692_3313 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_16_item", 691, Current, 0, 1, 9290);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3363(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_16) eif_builtin_TUPLE_natural_16_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_32_item */
EIF_NATURAL_32 F692_3314 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_item", 691, Current, 0, 1, 9291);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3364(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_32) eif_builtin_TUPLE_natural_32_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_64_item */
EIF_NATURAL_64 F692_3315 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_64_item", 691, Current, 0, 1, 9292);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3365(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_64) eif_builtin_TUPLE_natural_64_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_8_item */
EIF_INTEGER_8 F692_3316 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_8_item", 691, Current, 0, 1, 9293);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3366(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_8) eif_builtin_TUPLE_integer_8_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_16_item */
EIF_INTEGER_16 F692_3317 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_16_item", 691, Current, 0, 1, 9294);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3367(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_16) eif_builtin_TUPLE_integer_16_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_32_item */
EIF_INTEGER_32 F692_3318 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_32_item", 691, Current, 0, 1, 9295);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3369(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_32) eif_builtin_TUPLE_integer_32_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_item */
EIF_INTEGER_32 F692_3319 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_item", 691, Current, 0, 1, 9296);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3369(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F692_3318(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_64_item */
EIF_INTEGER_64 F692_3320 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_64_item", 691, Current, 0, 1, 9297);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3370(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_64) eif_builtin_TUPLE_integer_64_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.pointer_item */
EIF_POINTER F692_3321 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("pointer_item", 691, Current, 0, 1, 9298);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_pointer", EX_PRE);
		RTTE((nstcall = 0, F692_3371(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_POINTER) eif_builtin_TUPLE_pointer_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.real_32_item */
EIF_REAL_32 F692_3322 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_32_item", 691, Current, 0, 1, 9299);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_real_or_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3372(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_REAL_32) eif_builtin_TUPLE_real_32_item (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.real_item */
EIF_REAL_32 F692_3323 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_item", 691, Current, 0, 1, 9300);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_real_or_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3372(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F692_3322(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.object_comparison */
EIF_BOOLEAN F692_3324 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("object_comparison", 691, Current, 0, 0, 9301);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_TUPLE_object_comparison (Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_equal */
EIF_BOOLEAN F692_3325 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_equal", 691, Current, 3, 1, 9302);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc3 = (nstcall = 0, F692_3324(Current));
	RTHOOK(3);
	tb1 = (nstcall = 1, F692_3324(arg1));
	if ((EIF_BOOLEAN)(loc3 == tb1)) {
		RTHOOK(4);
		if (loc3) {
			RTHOOK(5);
			loc2 = (nstcall = 0, F692_3331(Current));
			RTHOOK(6);
			ti4_1 = (nstcall = 1, F692_3331(arg1));
			if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(8);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(9);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
					RTHOOK(10);
					tr1 = (nstcall = 0, F692_3302(Current, loc1));
					tr2 = (nstcall = 1, F692_3302(RTCW(arg1), loc1));
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
					RTHOOK(11);
					loc1++;
				}
			}
		} else {
			RTHOOK(12);
			Result = (nstcall = 0, F1_8(Current, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.compare_objects */
void F692_3326 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("compare_objects", 691, Current, 0, 0, 9303);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F692_3429(Current, (EIF_BOOLEAN) 1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("object_comparison", EX_POST);
		if ((nstcall = 0, F692_3324(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.compare_references */
void F692_3327 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("compare_references", 691, Current, 0, 0, 9304);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F692_3429(Current, (EIF_BOOLEAN) 0));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("reference_comparison", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F692_3324(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.hash_code */
EIF_INTEGER_32 F692_3328 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("hash_code", 691, Current, 4, 0, 9305);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	loc2 = (nstcall = 0, F692_3331(Current));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		switch ((nstcall = 0, F692_3407(Current, loc1))) {
			case 1U:
				RTHOOK(5);
				tb1 = (nstcall = 0, F692_3305(Current, loc1));
				ti4_1 = (tb1 ? 1L : 0L);
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 2U:
				RTHOOK(6);
				tc1 = (nstcall = 0, F692_3306(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (tc1);
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 14U:
				RTHOOK(7);
				tw1 = (nstcall = 0, F692_3308(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (tw1);
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 3U:
				RTHOOK(8);
				tr8_1 = (nstcall = 0, F692_3310(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr8_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 4U:
				RTHOOK(9);
				tr4_1 = (nstcall = 0, F692_3322(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr4_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 5U:
				RTHOOK(10);
				tp1 = (nstcall = 0, F692_3321(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 10U:
				RTHOOK(11);
				tu1_1 = (nstcall = 0, F692_3312(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu1_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 11U:
				RTHOOK(12);
				tu2_1 = (nstcall = 0, F692_3313(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu2_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 12U:
				RTHOOK(13);
				tu4_1 = (nstcall = 0, F692_3314(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 13U:
				RTHOOK(14);
				tu8_1 = (nstcall = 0, F692_3315(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu8_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 6U:
				RTHOOK(15);
				ti1_1 = (nstcall = 0, F692_3316(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti1_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 7U:
				RTHOOK(16);
				ti2_1 = (nstcall = 0, F692_3317(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti2_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 8U:
				RTHOOK(17);
				ti4_1 = (nstcall = 0, F692_3318(Current, loc1));
				ti4_2 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
				loc3 = (EIF_INTEGER_32) ti4_2;
				break;
			case 9U:
				RTHOOK(18);
				ti8_1 = (nstcall = 0, F692_3320(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti8_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 0U:
				RTHOOK(19);
				tr1 = (nstcall = 0, F692_3304(Current, loc1));
				loc4 = RTCCL(tr1);
				loc4 = RTRV(eif_new_type(644, 0x01),loc4);
				if (EIF_TEST(loc4)) {
					RTHOOK(20);
					ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2523[Dtype(loc4)-645])(loc4));
					loc3 = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(21);
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
		RTHOOK(22);
		tr1 = RTOSCF(3428,(nstcall = 0, F692_3428), (Current));
		ti4_1 = (nstcall = 1, F445_2192(RTCW(tr1), loc1));
		Result += (EIF_INTEGER_32) (loc3 * ti4_1);
		RTHOOK(23);
		loc1++;
	}
	RTHOOK(24);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(25);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.valid_index */
EIF_BOOLEAN F692_3329 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("valid_index", 691, Current, 0, 1, 9306);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F692_3331(Current)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_if_in_index_set", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) ((nstcall = 0, F692_3332(Current)) <= arg1)) {
				tb2 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F692_3331(Current)));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.valid_type_for_index */
EIF_BOOLEAN F692_3330 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
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
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(19);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
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
	RTLR(16,loc15);
	RTLR(17,loc16);
	RTLR(18,loc1);
	RTLIU(19);
	
	RTEAA("valid_type_for_index", 691, Current, 16, 2, 9307);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3407(Current, arg2)) == ((EIF_NATURAL_8) 0U))) {
			RTHOOK(4);
			tr1 = (nstcall = 0, F1_5(Current));
			tr2 = (nstcall = 1, F647_3274(tr1, arg2));
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2589[Dtype(RTCW(tr2))-646])(tr2));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
		}
	} else {
		RTHOOK(5);
		switch ((nstcall = 0, F692_3407(Current, arg2))) {
			case 1U:
				RTHOOK(6);
				loc3 = RTCCL(arg1);
				loc3 = RTRV(eif_new_type(728, 0x01),loc3);
				Result = (EIF_BOOLEAN) EIF_TEST(loc3);
				break;
			case 2U:
				RTHOOK(7);
				loc4 = RTCCL(arg1);
				loc4 = RTRV(eif_new_type(725, 0x01),loc4);
				Result = (EIF_BOOLEAN) EIF_TEST(loc4);
				break;
			case 14U:
				RTHOOK(8);
				loc5 = RTCCL(arg1);
				loc5 = RTRV(eif_new_type(722, 0x01),loc5);
				Result = (EIF_BOOLEAN) EIF_TEST(loc5);
				break;
			case 3U:
				RTHOOK(9);
				loc6 = RTCCL(arg1);
				loc6 = RTRV(eif_new_type(719, 0x01),loc6);
				Result = (EIF_BOOLEAN) EIF_TEST(loc6);
				break;
			case 4U:
				RTHOOK(10);
				loc7 = RTCCL(arg1);
				loc7 = RTRV(eif_new_type(716, 0x01),loc7);
				Result = (EIF_BOOLEAN) EIF_TEST(loc7);
				break;
			case 5U:
				RTHOOK(11);
				loc8 = RTCCL(arg1);
				loc8 = RTRV(eif_new_type(731, 0x01),loc8);
				Result = (EIF_BOOLEAN) EIF_TEST(loc8);
				break;
			case 10U:
				RTHOOK(12);
				loc9 = RTCCL(arg1);
				loc9 = RTRV(eif_new_type(713, 0x01),loc9);
				Result = (EIF_BOOLEAN) EIF_TEST(loc9);
				break;
			case 11U:
				RTHOOK(13);
				loc10 = RTCCL(arg1);
				loc10 = RTRV(eif_new_type(710, 0x01),loc10);
				Result = (EIF_BOOLEAN) EIF_TEST(loc10);
				break;
			case 12U:
				RTHOOK(14);
				loc11 = RTCCL(arg1);
				loc11 = RTRV(eif_new_type(707, 0x01),loc11);
				Result = (EIF_BOOLEAN) EIF_TEST(loc11);
				break;
			case 13U:
				RTHOOK(15);
				loc12 = RTCCL(arg1);
				loc12 = RTRV(eif_new_type(704, 0x01),loc12);
				Result = (EIF_BOOLEAN) EIF_TEST(loc12);
				break;
			case 6U:
				RTHOOK(16);
				loc13 = RTCCL(arg1);
				loc13 = RTRV(eif_new_type(701, 0x01),loc13);
				Result = (EIF_BOOLEAN) EIF_TEST(loc13);
				break;
			case 7U:
				RTHOOK(17);
				loc14 = RTCCL(arg1);
				loc14 = RTRV(eif_new_type(698, 0x01),loc14);
				Result = (EIF_BOOLEAN) EIF_TEST(loc14);
				break;
			case 8U:
				RTHOOK(18);
				loc15 = RTCCL(arg1);
				loc15 = RTRV(eif_new_type(695, 0x01),loc15);
				Result = (EIF_BOOLEAN) EIF_TEST(loc15);
				break;
			case 9U:
				RTHOOK(19);
				loc16 = RTCCL(arg1);
				loc16 = RTRV(eif_new_type(692, 0x01),loc16);
				Result = (EIF_BOOLEAN) EIF_TEST(loc16);
				break;
			case 0U:
				RTHOOK(20);
				loc1 = RTLNS(eif_new_type(130, 0x01).id, 130, _OBJSIZ_0_0_0_0_0_0_0_0_);
				RTHOOK(21);
				tr1 = RTCCL(arg1);
				loc2 = (nstcall = 0, F10_283(Current, tr1));
				RTHOOK(22);
				tr1 = (nstcall = 0, F1_5(Current));
				tr2 = (nstcall = 1, F647_3274(tr1, arg2));
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2584[Dtype(RTCW(tr2))-646])(tr2));
				tb1 = (nstcall = 1, F131_1623(RTCW(loc1), loc2, ti4_1));
				Result = (EIF_BOOLEAN) tb1;
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.count */
EIF_INTEGER_32 F692_3331 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("count", 691, Current, 0, 0, 9308);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.lower */
EIF_INTEGER_32 F692_3332 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {TUPLE}.upper */
EIF_INTEGER_32 F692_3333 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("upper", 691, Current, 0, 0, 9310);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3331(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, F692_3331(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_empty */
EIF_BOOLEAN F692_3334 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_empty", 691, Current, 0, 0, 9311);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F692_3331(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.put */
void F692_3335 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
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
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(17);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,loc9);
	RTLR(12,loc10);
	RTLR(13,loc11);
	RTLR(14,loc12);
	RTLR(15,loc13);
	RTLR(16,loc14);
	RTLIU(17);
	
	RTEAA("put", 691, Current, 14, 2, 9312);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type_for_index", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F692_3330(Current, tr1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	switch ((nstcall = 0, F692_3407(Current, arg2))) {
		case 1U:
			RTHOOK(4);
			loc1 = RTCCL(arg1);
			loc1 = RTRV(eif_new_type(728, 0x01),loc1);
			if (EIF_TEST(loc1)) {
				RTHOOK(5);
				tb1 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_0_0_);
				(nstcall = 0, F692_3337(Current, tb1, arg2));
			}
			break;
		case 2U:
			RTHOOK(6);
			loc2 = RTCCL(arg1);
			loc2 = RTRV(eif_new_type(725, 0x01),loc2);
			if (EIF_TEST(loc2)) {
				RTHOOK(7);
				tc1 = *(EIF_CHARACTER_8 *)(loc2+ _CHROFF_0_0_);
				(nstcall = 0, F692_3338(Current, tc1, arg2));
			}
			break;
		case 14U:
			RTHOOK(8);
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(722, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				RTHOOK(9);
				tw1 = *(EIF_CHARACTER_32 *)(loc3+ _LNGOFF_0_0_0_0_);
				(nstcall = 0, F692_3340(Current, tw1, arg2));
			}
			break;
		case 3U:
			RTHOOK(10);
			loc4 = RTCCL(arg1);
			loc4 = RTRV(eif_new_type(719, 0x01),loc4);
			if (EIF_TEST(loc4)) {
				RTHOOK(11);
				tr8_1 = *(EIF_REAL_64 *)(loc4+ _R64OFF_0_0_0_0_0_0_0_0_);
				(nstcall = 0, F692_3342(Current, tr8_1, arg2));
			}
			break;
		case 4U:
			RTHOOK(12);
			loc5 = RTCCL(arg1);
			loc5 = RTRV(eif_new_type(716, 0x01),loc5);
			if (EIF_TEST(loc5)) {
				RTHOOK(13);
				tr4_1 = *(EIF_REAL_32 *)(loc5+ _R32OFF_0_0_0_0_0_);
				(nstcall = 0, F692_3344(Current, tr4_1, arg2));
			}
			break;
		case 5U:
			RTHOOK(14);
			loc6 = RTCCL(arg1);
			loc6 = RTRV(eif_new_type(731, 0x01),loc6);
			if (EIF_TEST(loc6)) {
				RTHOOK(15);
				tp1 = *(EIF_POINTER *)(loc6+ _PTROFF_0_0_0_0_0_0_);
				(nstcall = 0, F692_3346(Current, tp1, arg2));
			}
			break;
		case 10U:
			RTHOOK(16);
			loc7 = RTCCL(arg1);
			loc7 = RTRV(eif_new_type(713, 0x01),loc7);
			if (EIF_TEST(loc7)) {
				RTHOOK(17);
				tu1_1 = *(EIF_NATURAL_8 *)(loc7+ _CHROFF_0_0_);
				(nstcall = 0, F692_3347(Current, tu1_1, arg2));
			}
			break;
		case 11U:
			RTHOOK(18);
			loc8 = RTCCL(arg1);
			loc8 = RTRV(eif_new_type(710, 0x01),loc8);
			if (EIF_TEST(loc8)) {
				RTHOOK(19);
				tu2_1 = *(EIF_NATURAL_16 *)(loc8+ _I16OFF_0_0_0_);
				(nstcall = 0, F692_3348(Current, tu2_1, arg2));
			}
			break;
		case 12U:
			RTHOOK(20);
			loc9 = RTCCL(arg1);
			loc9 = RTRV(eif_new_type(707, 0x01),loc9);
			if (EIF_TEST(loc9)) {
				RTHOOK(21);
				tu4_1 = *(EIF_NATURAL_32 *)(loc9+ _LNGOFF_0_0_0_0_);
				(nstcall = 0, F692_3349(Current, tu4_1, arg2));
			}
			break;
		case 13U:
			RTHOOK(22);
			loc10 = RTCCL(arg1);
			loc10 = RTRV(eif_new_type(704, 0x01),loc10);
			if (EIF_TEST(loc10)) {
				RTHOOK(23);
				tu8_1 = *(EIF_NATURAL_64 *)(loc10+ _I64OFF_0_0_0_0_0_0_0_);
				(nstcall = 0, F692_3350(Current, tu8_1, arg2));
			}
			break;
		case 6U:
			RTHOOK(24);
			loc11 = RTCCL(arg1);
			loc11 = RTRV(eif_new_type(701, 0x01),loc11);
			if (EIF_TEST(loc11)) {
				RTHOOK(25);
				ti1_1 = *(EIF_INTEGER_8 *)(loc11+ _CHROFF_0_0_);
				(nstcall = 0, F692_3353(Current, ti1_1, arg2));
			}
			break;
		case 7U:
			RTHOOK(26);
			loc12 = RTCCL(arg1);
			loc12 = RTRV(eif_new_type(698, 0x01),loc12);
			if (EIF_TEST(loc12)) {
				RTHOOK(27);
				ti2_1 = *(EIF_INTEGER_16 *)(loc12+ _I16OFF_0_0_0_);
				(nstcall = 0, F692_3354(Current, ti2_1, arg2));
			}
			break;
		case 8U:
			RTHOOK(28);
			loc13 = RTCCL(arg1);
			loc13 = RTRV(eif_new_type(695, 0x01),loc13);
			if (EIF_TEST(loc13)) {
				RTHOOK(29);
				ti4_1 = *(EIF_INTEGER_32 *)(loc13+ _LNGOFF_0_0_0_0_);
				(nstcall = 0, F692_3351(Current, ti4_1, arg2));
			}
			break;
		case 9U:
			RTHOOK(30);
			loc14 = RTCCL(arg1);
			loc14 = RTRV(eif_new_type(692, 0x01),loc14);
			if (EIF_TEST(loc14)) {
				RTHOOK(31);
				ti8_1 = *(EIF_INTEGER_64 *)(loc14+ _I64OFF_0_0_0_0_0_0_0_);
				(nstcall = 0, F692_3355(Current, ti8_1, arg2));
			}
			break;
		case 0U:
			RTHOOK(32);
			tr1 = RTCCL(arg1);
			(nstcall = 0, F692_3336(Current, tr1, arg2));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_reference */
void F692_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("put_reference", 691, Current, 0, 2, 9313);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type_for_index", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F692_3330(Current, tr1, arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3373(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_reference (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_boolean */
void F692_3337 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_boolean", 691, Current, 0, 2, 9314);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3356(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_boolean (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_character_8 */
void F692_3338 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_character_8", 691, Current, 0, 2, 9315);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3357(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_character_8 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_character */
void F692_3339 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_character", 691, Current, 0, 2, 9316);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3357(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F692_3338(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_character_32 */
void F692_3340 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_character_32", 691, Current, 0, 2, 9317);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3359(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_character_32 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_wide_character */
void F692_3341 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_wide_character", 691, Current, 0, 2, 9318);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3359(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F692_3340(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_real_64 */
void F692_3342 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_64", 691, Current, 0, 2, 9319);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3361(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_real_64 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_double */
void F692_3343 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_double", 691, Current, 0, 2, 9320);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3361(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F692_3342(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_real_32 */
void F692_3344 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_32", 691, Current, 0, 2, 9321);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3372(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_real_32 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_real */
void F692_3345 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real", 691, Current, 0, 2, 9322);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3372(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F692_3344(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_pointer */
void F692_3346 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_pointer", 691, Current, 0, 2, 9323);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3371(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_pointer (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_8 */
void F692_3347 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_8", 691, Current, 0, 2, 9324);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3362(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_8 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_16 */
void F692_3348 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_16", 691, Current, 0, 2, 9325);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3363(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_16 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_32 */
void F692_3349 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_32", 691, Current, 0, 2, 9326);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3364(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_32 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_64 */
void F692_3350 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_64", 691, Current, 0, 2, 9327);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3365(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_64 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_32 */
void F692_3351 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_32", 691, Current, 0, 2, 9328);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3369(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_32 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer */
void F692_3352 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer", 691, Current, 0, 2, 9329);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3369(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F692_3351(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_8 */
void F692_3353 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_8", 691, Current, 0, 2, 9330);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3366(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_8 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_16 */
void F692_3354 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_16", 691, Current, 0, 2, 9331);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3367(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_16 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_64 */
void F692_3355 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_64", 691, Current, 0, 2, 9332);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F692_3370(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_64 (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.is_boolean_item */
EIF_BOOLEAN F692_3356 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_boolean_item", 691, Current, 0, 1, 9333);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 1U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_character_8_item */
EIF_BOOLEAN F692_3357 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_character_8_item", 691, Current, 0, 1, 9334);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 2U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_character_item */
EIF_BOOLEAN F692_3358 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_character_item", 691, Current, 0, 1, 9335);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 2U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_character_32_item */
EIF_BOOLEAN F692_3359 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_character_32_item", 691, Current, 0, 1, 9336);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 14U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_wide_character_item */
EIF_BOOLEAN F692_3360 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_wide_character_item", 691, Current, 0, 1, 9337);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 14U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_double_item */
EIF_BOOLEAN F692_3361 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_double_item", 691, Current, 0, 1, 9338);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 3U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_8_item */
EIF_BOOLEAN F692_3362 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_8_item", 691, Current, 0, 1, 9339);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 10U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_16_item */
EIF_BOOLEAN F692_3363 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_16_item", 691, Current, 0, 1, 9340);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 11U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_32_item */
EIF_BOOLEAN F692_3364 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_32_item", 691, Current, 0, 1, 9341);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 12U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_64_item */
EIF_BOOLEAN F692_3365 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_64_item", 691, Current, 0, 1, 9342);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 13U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_8_item */
EIF_BOOLEAN F692_3366 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_8_item", 691, Current, 0, 1, 9343);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 6U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_16_item */
EIF_BOOLEAN F692_3367 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_16_item", 691, Current, 0, 1, 9344);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 7U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_item */
EIF_BOOLEAN F692_3368 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_item", 691, Current, 0, 1, 9345);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 8U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_32_item */
EIF_BOOLEAN F692_3369 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_32_item", 691, Current, 0, 1, 9346);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 8U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_64_item */
EIF_BOOLEAN F692_3370 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_64_item", 691, Current, 0, 1, 9347);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 9U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_pointer_item */
EIF_BOOLEAN F692_3371 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_pointer_item", 691, Current, 0, 1, 9348);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 5U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_real_item */
EIF_BOOLEAN F692_3372 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_real_item", 691, Current, 0, 1, 9349);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 4U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_reference_item */
EIF_BOOLEAN F692_3373 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_reference_item", 691, Current, 0, 1, 9350);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F692_3407(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 0U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_numeric_item */
EIF_BOOLEAN F692_3374 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_numeric_item", 691, Current, 1, 1, 9351);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F692_3407(Current, arg1));
	RTHOOK(3);
	switch (loc1) {
		case 3U:
		case 4U:
		case 6U:
		case 7U:
		case 8U:
		case 9U:
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform */
EIF_BOOLEAN F692_3375 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform", 691, Current, 0, 0, 9352);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 255U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_boolean */
EIF_BOOLEAN F692_3376 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_boolean", 691, Current, 0, 0, 9353);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 1U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_character_8 */
EIF_BOOLEAN F692_3377 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_character_8", 691, Current, 0, 0, 9354);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 2U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_character */
EIF_BOOLEAN F692_3378 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_character", 691, Current, 0, 0, 9355);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 2U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_character_32 */
EIF_BOOLEAN F692_3379 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_character_32", 691, Current, 0, 0, 9356);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 14U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_wide_character */
EIF_BOOLEAN F692_3380 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_wide_character", 691, Current, 0, 0, 9357);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 14U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_double */
EIF_BOOLEAN F692_3381 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_double", 691, Current, 0, 0, 9358);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 3U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_natural_8 */
EIF_BOOLEAN F692_3382 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_natural_8", 691, Current, 0, 0, 9359);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 10U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_natural_16 */
EIF_BOOLEAN F692_3383 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_natural_16", 691, Current, 0, 0, 9360);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 11U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_natural_32 */
EIF_BOOLEAN F692_3384 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_natural_32", 691, Current, 0, 0, 9361);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 12U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_natural_64 */
EIF_BOOLEAN F692_3385 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_natural_64", 691, Current, 0, 0, 9362);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 13U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_integer_8 */
EIF_BOOLEAN F692_3386 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_integer_8", 691, Current, 0, 0, 9363);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 6U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_integer_16 */
EIF_BOOLEAN F692_3387 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_integer_16", 691, Current, 0, 0, 9364);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 7U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_integer */
EIF_BOOLEAN F692_3388 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_integer", 691, Current, 0, 0, 9365);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 8U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_integer_32 */
EIF_BOOLEAN F692_3389 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_integer_32", 691, Current, 0, 0, 9366);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 8U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_integer_64 */
EIF_BOOLEAN F692_3390 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_integer_64", 691, Current, 0, 0, 9367);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 9U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_pointer */
EIF_BOOLEAN F692_3391 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_pointer", 691, Current, 0, 0, 9368);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 5U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_real */
EIF_BOOLEAN F692_3392 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_real", 691, Current, 0, 0, 9369);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 4U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_reference */
EIF_BOOLEAN F692_3393 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_reference", 691, Current, 0, 0, 9370);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F692_3427(Current, ((EIF_NATURAL_8) 0U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.plus */
EIF_REFERENCE F692_3394 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(14);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc10);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc9);
	RTLR(6,loc8);
	RTLR(7,loc5);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc1);
	RTLR(11,loc11);
	RTLR(12,loc12);
	RTLR(13,loc13);
	RTLIU(14);
	
	RTEAA("plus", 691, Current, 13, 1, 9371);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = (nstcall = 0, F692_3331(Current));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F692_3331(arg1));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1_14(arg1));
		loc10 = tr1;
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,691,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc10 = RTRV(typres0,loc10);
		}
		if (EIF_TEST(loc10)) {
			RTHOOK(5);
			Result = (EIF_REFERENCE) loc10;
		} else {
			
		}
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			Result = (nstcall = 0, F1_14(Current));
		} else {
			RTHOOK(8);
			loc9 = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
			tr1 = RTMS_EX_H("TUPLE [",7,776318043);
			(nstcall = -1, F776_4791(RTCW(loc9), tr1));
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,585,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc8 = RTLNSP2(typres0.id,EO_REF,(EIF_INTEGER_32) (loc3 + loc4),sizeof(EIF_REFERENCE), EIF_FALSE);
				RT_SPECIAL_COUNT(loc8) = 0;
			}
			RTHOOK(10);
			loc5 = (nstcall = 0, F1_5(Current));
			
			RTHOOK(11);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc2 > loc3)) break;
				RTHOOK(13);
				if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
					RTHOOK(14);
					(nstcall = 1, F778_4914(RTCW(loc9), (EIF_CHARACTER_8) ','));
					RTHOOK(15);
					(nstcall = 1, F778_4914(RTCW(loc9), (EIF_CHARACTER_8) ' '));
				}
				RTHOOK(16);
				tr1 = (nstcall = 1, F647_3274(loc5, loc2));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2582[Dtype(RTCW(tr1))-646])(tr1));
				(nstcall = 1, F778_4900(RTCW(loc9), tr2));
				RTHOOK(17);
				tr1 = (nstcall = 0, F692_3302(Current, loc2));
				tr2 = RTCCL(tr1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2447[Dtype(RTCW(loc8))-585])(loc8, tr2, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
				RTHOOK(18);
				loc2++;
			}
			RTHOOK(19);
			tr1 = (nstcall = 1, F1_5(arg1));
			loc6 = (EIF_REFERENCE) tr1;
			
			for (;;) {
				RTHOOK(20);
				if ((EIF_BOOLEAN) (loc2 > (EIF_INTEGER_32) (loc3 + loc4))) break;
				RTHOOK(21);
				(nstcall = 1, F778_4914(RTCW(loc9), (EIF_CHARACTER_8) ','));
				RTHOOK(22);
				(nstcall = 1, F778_4914(RTCW(loc9), (EIF_CHARACTER_8) ' '));
				RTHOOK(23);
				tr1 = (nstcall = 1, F647_3274(loc6, (EIF_INTEGER_32) (loc2 - loc3)));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2582[Dtype(RTCW(tr1))-646])(tr1));
				(nstcall = 1, F778_4900(RTCW(loc9), tr2));
				RTHOOK(24);
				tr1 = (nstcall = 1, F692_3302(RTCW(arg1), (EIF_INTEGER_32) (loc2 - loc3)));
				tr2 = RTCCL(tr1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2447[Dtype(RTCW(loc8))-585])(loc8, tr2, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
				RTHOOK(25);
				loc2++;
			}
			RTHOOK(26);
			(nstcall = 1, F778_4914(RTCW(loc9), (EIF_CHARACTER_8) ']'));
			RTHOOK(27);
			loc1 = RTLNS(eif_new_type(130, 0x01).id, 130, _OBJSIZ_0_0_0_0_0_0_0_0_);
			RTHOOK(28);
			ti4_1 = (nstcall = 1, F131_1624(RTCW(loc1), loc9));
			loc7 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(29);
			if ((EIF_BOOLEAN) (loc7 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(30);
				tr1 = (nstcall = 1, F131_1627(RTCW(loc1), loc7, loc8));
				loc11 = tr1;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,691,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc11 = RTRV(typres0,loc11);
				}
				if (EIF_TEST(loc11)) {
					RTHOOK(31);
					Result = (EIF_REFERENCE) loc11;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("has_expected_count", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			ti4_1 = (nstcall = 1, F692_3331(Result));
			ti4_2 = (nstcall = 1, F692_3331(arg1));
			tb1 = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((nstcall = 0, F692_3331(Current)) + ti4_2));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("has_expected_items", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = '\0';
			RTHOOK(34);
			ti4_1 = (nstcall = 0, F692_3331(Current));
			tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = (nstcall = 1, F696_3551(RTCW(tr1), ti4_1));
			tr1 = (nstcall = 1, F474_2531(RTCW(tr2)));
			loc12 = (EIF_REFERENCE) tr1;
			tb3 = EIF_TRUE;
			for (;;) {
				if (!tb3) break;
				tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1723[Dtype(loc12)-162])(loc12));
				if (tb4) break;
				RTHOOK(35);
				ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1722[Dtype(loc12)-162])(loc12));
				tr1 = (nstcall = 1, F692_3302(RTCW(Result), ti4_1));
				ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1722[Dtype(loc12)-162])(loc12));
				tb3 = RTCEQ(tr1, (nstcall = 0, F692_3302(Current, ti4_1)));
				RTHOOK(36);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1724[Dtype(loc12)-162])(loc12));
			}
			if (tb3) {
				RTHOOK(37);
				ti4_1 = (nstcall = 1, F692_3331(arg1));
				tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
				tr2 = (nstcall = 1, F696_3551(RTCW(tr1), ti4_1));
				tr1 = (nstcall = 1, F474_2531(RTCW(tr2)));
				loc13 = (EIF_REFERENCE) tr1;
				tb3 = EIF_TRUE;
				for (;;) {
					if (!tb3) break;
					tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1723[Dtype(loc13)-162])(loc13));
					if (tb4) break;
					RTHOOK(38);
					ti4_1 = (nstcall = 0, F692_3331(Current));
					ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1722[Dtype(loc13)-162])(loc13));
					tr1 = (nstcall = 1, F692_3302(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
					ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1722[Dtype(loc13)-162])(loc13));
					tr2 = (nstcall = 1, F692_3302(RTCW(arg1), ti4_1));
					tb3 = RTCEQ(tr1, tr2);
					RTHOOK(39);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1724[Dtype(loc13)-162])(loc13));
				}
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(40);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.convertible_to_double */
EIF_BOOLEAN F692_3395 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("convertible_to_double", 691, Current, 3, 0, 9372);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F692_3331(Current));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
		RTHOOK(5);
		loc3 = (nstcall = 0, F692_3407(Current, loc1));
		RTHOOK(6);
		switch (loc3) {
			case 3U:
			case 4U:
			case 6U:
			case 7U:
			case 8U:
			case 9U:
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
			default:
				RTHOOK(8);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				break;
		}
		RTHOOK(9);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.convertible_to_real */
EIF_BOOLEAN F692_3396 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("convertible_to_real", 691, Current, 3, 0, 9373);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F692_3331(Current));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
		RTHOOK(5);
		loc3 = (nstcall = 0, F692_3407(Current, loc1));
		RTHOOK(6);
		switch (loc3) {
			case 4U:
			case 6U:
			case 7U:
			case 8U:
			case 9U:
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
			default:
				RTHOOK(8);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				break;
		}
		RTHOOK(9);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3331(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.arrayed */
EIF_REFERENCE F692_3397 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("arrayed", 691, Current, 2, 0, 9374);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	loc2 = (nstcall = 0, F692_3331(Current));
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,497,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 497, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F498_2576(RTCW(Result), NULL, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		tr1 = (nstcall = 0, F692_3302(Current, loc1));
		tr2 = RTCCL(tr1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1888[Dtype(RTCW(Result))-496])(Result, tr2, (EIF_REFERENCE) &loc1));
		RTHOOK(6);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1865[Dtype(RTCW(Result))-470])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F692_3331(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.boolean_arrayed */
EIF_REFERENCE F692_3398 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("boolean_arrayed", 691, Current, 2, 0, 9375);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_boolean", EX_PRE);
		RTTE((nstcall = 0, F692_3376(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F692_3331(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,505,730,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 505, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F506_2576(RTCW(Result), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tb1 = (nstcall = 0, F692_3305(Current, loc1));
		(nstcall = 1, F506_2600(RTCW(Result), tb1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F506_2588(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F692_3331(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_8_arrayed */
EIF_REFERENCE F692_3399 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("character_8_arrayed", 691, Current, 2, 0, 9376);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_character", EX_PRE);
		RTTE((nstcall = 0, F692_3378(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F692_3331(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,504,727,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 504, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F505_2576(RTCW(Result), (EIF_CHARACTER_8) ' ', ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tc1 = (nstcall = 0, F692_3306(Current, loc1));
		(nstcall = 1, F505_2600(RTCW(Result), tc1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F505_2588(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F692_3331(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_arrayed */
EIF_REFERENCE F692_3400 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("character_arrayed", 691, Current, 2, 0, 9377);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_character", EX_PRE);
		RTTE((nstcall = 0, F692_3378(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F692_3331(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,504,727,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 504, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F505_2576(RTCW(Result), (EIF_CHARACTER_8) ' ', ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tc1 = (nstcall = 0, F692_3306(Current, loc1));
		(nstcall = 1, F505_2600(RTCW(Result), tc1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F505_2588(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F692_3331(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.double_arrayed */
EIF_REFERENCE F692_3401 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("double_arrayed", 691, Current, 2, 0, 9378);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("convertible", EX_PRE);
		RTTE((nstcall = 0, F692_3395(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F692_3331(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,503,721,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 503, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F504_2576(RTCW(Result), (EIF_REAL_64) 0.0, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tr8_1 = (nstcall = 0, F692_3311(Current, loc1));
		(nstcall = 1, F504_2600(RTCW(Result), tr8_1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F504_2588(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F692_3331(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_arrayed */
EIF_REFERENCE F692_3402 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("integer_arrayed", 691, Current, 2, 0, 9379);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_integer", EX_PRE);
		RTTE((nstcall = 0, F692_3388(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F692_3331(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,498,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 498, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F499_2576(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 0, F692_3318(Current, loc1));
		(nstcall = 1, F499_2600(RTCW(Result), ti4_1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F499_2588(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F692_3331(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.pointer_arrayed */
EIF_REFERENCE F692_3403 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("pointer_arrayed", 691, Current, 2, 0, 9380);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_pointer", EX_PRE);
		RTTE((nstcall = 0, F692_3391(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F692_3331(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,508,763,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 508, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tp1 = (nstcall = 0, F1_33(Current));
	(nstcall = -1, F509_2576(RTCW(Result), tp1, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tp1 = (nstcall = 0, F692_3321(Current, loc1));
		(nstcall = 1, F509_2600(RTCW(Result), tp1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F509_2588(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F692_3331(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.real_arrayed */
EIF_REFERENCE F692_3404 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("real_arrayed", 691, Current, 2, 0, 9381);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("convertible", EX_PRE);
		RTTE((nstcall = 0, F692_3396(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F692_3331(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,502,718,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 502, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F503_2576(RTCW(Result), (EIF_REAL_32) 0.0, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tr4_1 = (nstcall = 0, F692_3323(Current, loc1));
		(nstcall = 1, F503_2600(RTCW(Result), tr4_1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F503_2588(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F692_3331(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.string_arrayed */
EIF_REFERENCE F692_3405 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("string_arrayed", 691, Current, 3, 0, 9382);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	loc2 = (nstcall = 0, F692_3331(Current));
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,497,777,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 497, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F498_2576(RTCW(Result), NULL, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		tr1 = (nstcall = 0, F692_3302(Current, loc1));
		loc3 = RTCCL(tr1);
		loc3 = RTRV(eif_new_type(777, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTHOOK(6);
			(nstcall = 1, F498_2600(RTCW(Result), loc3, loc1));
		}
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F498_2588(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F692_3331(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.correct_mismatch */
void F692_3406 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTEAA("correct_mismatch", 691, Current, 4, 0, 9383);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(2741,(nstcall = 0, F560_2741), (Current));
	tr2 = RTOSCF(3426,(nstcall = 0, F692_3426), (Current));
	tr2 = (nstcall = 1, F575_2864(RTCW(tr1), tr2));
	loc4 = RTCCL(tr2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,585,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc4 = RTRV(typres0,loc4);
	}
	if (EIF_TEST(loc4)) {
		RTHOOK(2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(3);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(loc4)-585])(loc4));
		loc2 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(5);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(loc4)-496])(loc4, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(6);
			tr1 = RTCCL(loc3);
			if ((nstcall = 0, F692_3330(Current, tr1, loc1))) {
				RTHOOK(7);
				tr1 = RTCCL(loc3);
				(nstcall = 0, F692_3335(Current, tr1, loc1));
			} else {
				RTHOOK(8);
				(nstcall = 0, F560_2740(Current));
			}
			RTHOOK(9);
			loc1++;
		}
	} else {
		RTHOOK(10);
		(nstcall = 0, F560_2740(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {TUPLE}.item_code */
EIF_NATURAL_8 F692_3407 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("item_code", 691, Current, 0, 1, 9384);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F692_3329(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_8) eif_builtin_TUPLE_item_code (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.area_name */

EIF_REFERENCE F692_3426 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (3426,RTMS_EX_H("area",4,1634887009));
}

/* {TUPLE}.is_tuple_uniform */
EIF_BOOLEAN F692_3427 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_tuple_uniform", 691, Current, 3, 1, 9276);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((nstcall = 0, F692_3331(Current)) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc2 = (nstcall = 0, F692_3331(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg1 == ((EIF_NATURAL_8) 255U))) {
			RTHOOK(5);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			RTHOOK(6);
			loc3 = (nstcall = 0, F692_3407(Current, ((EIF_INTEGER_32) 1L)));
		} else {
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(8);
			loc3 = (EIF_NATURAL_8) arg1;
		}
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(10);
			tu1_1 = (nstcall = 0, F692_3407(Current, loc1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == tu1_1);
			RTHOOK(11);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.internal_primes */
static EIF_REFERENCE F692_3428_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("internal_primes", 691, Current, 0, 0, 9277);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (3428);
#define Result RTOSR(3428)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(444, 0x01).id, 444, _OBJSIZ_0_1_0_1_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (3428);
	RTHOOK(2);
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

/* {TUPLE}.set_object_comparison */
void F692_3429 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_object_comparison", 691, Current, 0, 1, 9278);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_TUPLE_set_object_comparison (Current, arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("object_comparison_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F692_3324(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

void EIF_Minit141 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
