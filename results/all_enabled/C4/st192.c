/*
 * Code for class STRING_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st192.h"
#include <ctype.h>
#include "eif_helpers.h"
#include "eif_plug.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_8}.make_from_cil */
void F778_4860 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_cil", 777, Current, 1, 1, 11139);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_dotnet", EX_PRE);
		RTTE((nstcall = 0, F44_627(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F8_266(RTCW(arg1)));
		tr1 = RTOSCF(4585,(nstcall = 0, F770_4585), (Current));
		ti4_2 = (nstcall = 1, F3_42(RTCW(tr1), arg1));
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
	}
	RTHOOK(4);
	(nstcall = 0, F776_4789(Current, loc1));
	RTHOOK(5);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg1 != NULL))) {
		RTHOOK(6);
		(nstcall = 0, F778_4948(Current, loc1));
		RTHOOK(7);
		tr1 = RTOSCF(4585,(nstcall = 0, F770_4585), (Current));
		(nstcall = 1, F3_39(RTCW(tr1), arg1, Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.from_c */
void F778_4861 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("from_c", 777, Current, 1, 1, 11140);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOSCF(4582,(nstcall = 0, F770_4582), (Current));
	(nstcall = 1, F111_1208(RTCW(tr1), arg1));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(4582,(nstcall = 0, F770_4582), (Current)))+ _LNGOFF_1_0_0_0_);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	(nstcall = 0, F778_4932(Current, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc1;
	RTHOOK(6);
	(nstcall = 0, F772_4593(Current));
	RTHOOK(7);
	tr1 = RTOSCF(4582,(nstcall = 0, F770_4582), (Current));
	(nstcall = 1, F111_1216(RTCW(tr1), Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("no_zero_byte", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F776_4823(Current, (EIF_CHARACTER_8) '\000'))) {
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
}

/* {STRING_8}.from_c_substring */
void F778_4862 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("from_c_substring", 777, Current, 1, 3, 11141);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	tr1 = RTOSCF(4582,(nstcall = 0, F770_4582), (Current));
	tp1 = RTPOF(arg1,(EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	(nstcall = 1, F111_1209(RTCW(tr1), tp1, loc1));
	RTHOOK(6);
	(nstcall = 0, F778_4932(Current, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc1;
	RTHOOK(8);
	(nstcall = 0, F772_4593(Current));
	RTHOOK(9);
	tr1 = RTOSCF(4582,(nstcall = 0, F770_4582), (Current));
	(nstcall = 1, F111_1215(RTCW(tr1), Current, ((EIF_INTEGER_32) 1L), loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("valid_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)))) {
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
}

/* {STRING_8}.adapt */
EIF_REFERENCE F778_4863 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("adapt", 777, Current, 0, 1, 11142);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F778_4950(Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(2);
	(nstcall = 1, F778_4886(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("adapt_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("shared_implementation", EX_POST);
		tb1 = (nstcall = 1, F776_4800(RTCW(Result), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.remake */
void F778_4864 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remake", 777, Current, 0, 1, 11143);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_size", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F776_4789(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("empty_string", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("area_allocated", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F776_4809(Current)) >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {STRING_8}.item */
EIF_CHARACTER_8 F778_4865 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item", 777, Current, 0, 1, 11144);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg1)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg1)), label_3);
		RTCK;
		RTJB;
label_3:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F593_3091(RTCW(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.at */
EIF_CHARACTER_8 F778_4866 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("at", 777, Current, 0, 1, 11145);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F593_3091(RTCW(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.character_32_item */
EIF_CHARACTER_32 F778_4867 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_32_item", 777, Current, 0, 1, 11146);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (nstcall = 0, F778_4868(Current, arg1));
	tw1 = (EIF_CHARACTER_32) tu4_1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.code */
EIF_NATURAL_32 F778_4868 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("code", 777, Current, 0, 1, 11147);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F593_3091(RTCW(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.item_code */
EIF_INTEGER_32 F778_4869 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item_code", 777, Current, 0, 1, 11148);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F593_3091(RTCW(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.area */
EIF_REFERENCE F778_4870 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {STRING_8}.extendible */
EIF_BOOLEAN F778_4871 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {STRING_8}.prunable */
EIF_BOOLEAN F778_4872 (EIF_REFERENCE Current)
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
	
	RTEAA("prunable", 777, Current, 0, 0, 11151);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.changeable_comparison_criterion */
EIF_BOOLEAN F778_4873 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {STRING_8}.set */
void F778_4874 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("set", 777, Current, 1, 3, 11153);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3429[Dtype(RTCW(arg1))-773])(arg1, arg2, arg3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1) + O3583[Dtype(loc1)-775]);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_substring", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3429[Dtype(RTCW(arg1))-773])(arg1, arg2, arg3));
		if ((nstcall = 0, F776_4816(Current, tr1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {STRING_8}.subcopy */
void F778_4875 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("subcopy", 777, Current, 2, 4, 11154);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_pos", EX_PRE);
		tb1 = (nstcall = 1, F770_4507(RTCW(arg1), arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_pos", EX_PRE);
		tb1 = (nstcall = 1, F770_4507(RTCW(arg1), arg3));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= arg3) || (EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_index_pos", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg4)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("enough_space", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - arg4) >= (EIF_INTEGER_32) (arg3 - arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (arg3 >= arg2)) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		loc2 = *(EIF_REFERENCE *)(Current);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc2 == loc1)) {
			RTHOOK(11);
			(nstcall = 1, F593_3115(RTCW(loc2), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))));
		} else {
			RTHOOK(12);
			(nstcall = 1, F593_3113(RTCW(loc2), loc1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))));
		}
		RTHOOK(13);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.replace_substring */
void F778_4876 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("replace_substring", 777, Current, 5, 3, 11155);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningfull_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	loc4 = (EIF_INTEGER_32) ti4_3;
	RTHOOK(6);
	loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(7);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
	RTHOOK(8);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc5);
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		(nstcall = 0, F778_4932(Current, loc1));
	}
	RTHOOK(11);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(13);
		(nstcall = 1, F593_3115(RTCW(loc3), arg3, (EIF_INTEGER_32) (arg3 + loc2), (EIF_INTEGER_32) (loc5 - arg3)));
	}
	RTHOOK(14);
	(nstcall = 0, F778_4948(Current, loc1));
	RTHOOK(15);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3581[Dtype(RTCW(arg1))-776])(arg1));
	(nstcall = 1, F593_3113(RTCW(loc3), tr2, ti4_3, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), loc4));
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - arg3) + arg2) - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {STRING_8}.replace_substring_all */
void F778_4877 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc16);
	RTLR(4,loc13);
	RTLR(5,loc14);
	RTLR(6,tr1);
	RTLR(7,loc18);
	RTLR(8,loc17);
	RTLR(9,tr2);
	RTLIU(10);
	
	RTEAA("replace_substring_all", 777, Current, 18, 2, 11156);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("original_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("original_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3366[Dtype(RTCW(arg1))-773])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	if ((EIF_BOOLEAN) !(nstcall = 0, F346_2122(Current))) {
		RTHOOK(5);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(6);
		loc16 = RTOSCF(4833,(nstcall = 0, F776_4833), (Current));
		RTHOOK(7);
		(nstcall = 1, F58_815(RTCW(loc16), arg1));
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O3583[Dtype(arg2)-775]);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc3 >= loc4)) {
			RTHOOK(11);
			ti4_1 = (nstcall = 1, F60_832(RTCW(loc16), Current, arg1, ((EIF_INTEGER_32) 1L), loc6));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(13);
				if ((EIF_BOOLEAN)(loc3 == loc4)) {
					RTHOOK(14);
					loc13 = *(EIF_REFERENCE *)(Current);
					RTHOOK(15);
					tr1 = *(EIF_REFERENCE *)(RTCW(arg2));
					loc14 = (EIF_REFERENCE) tr1;
					RTHOOK(16);
					ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3581[Dtype(RTCW(arg2))-776])(arg2));
					loc5 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(17);
						if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
						RTHOOK(18);
						(nstcall = 1, F593_3113(RTCW(loc13), loc14, loc5, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), loc4));
						RTHOOK(19);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) <= loc6)) {
							RTHOOK(20);
							ti4_1 = (nstcall = 1, F60_832(RTCW(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc4), loc6));
							loc1 = (EIF_INTEGER_32) ti4_1;
						} else {
							RTHOOK(21);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					}
				} else {
					RTHOOK(22);
					if ((EIF_BOOLEAN) (loc3 > loc4)) {
						RTHOOK(23);
						ti4_1 = (nstcall = 1, F60_832(RTCW(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc3), loc6));
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(24);
						loc13 = *(EIF_REFERENCE *)(Current);
						RTHOOK(25);
						tr1 = *(EIF_REFERENCE *)(RTCW(arg2));
						loc14 = (EIF_REFERENCE) tr1;
						RTHOOK(26);
						ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3581[Dtype(RTCW(arg2))-776])(arg2));
						loc5 = (EIF_INTEGER_32) ti4_1;
						for (;;) {
							RTHOOK(27);
							if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
							RTHOOK(28);
							(nstcall = 1, F593_3113(RTCW(loc13), loc14, loc5, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15), loc4));
							RTHOOK(29);
							(nstcall = 1, F593_3115(RTCW(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc1) - loc3)));
							RTHOOK(30);
							loc1 = (EIF_INTEGER_32) loc2;
							RTHOOK(31);
							loc15 += (EIF_INTEGER_32) (loc3 - loc4);
							RTHOOK(32);
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) <= loc6)) {
								RTHOOK(33);
								ti4_1 = (nstcall = 1, F60_832(RTCW(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc3), loc6));
								loc2 = (EIF_INTEGER_32) ti4_1;
							} else {
								RTHOOK(34);
								loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							}
						}
						RTHOOK(35);
						(nstcall = 1, F593_3113(RTCW(loc13), loc14, loc5, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15), loc4));
						RTHOOK(36);
						(nstcall = 1, F593_3115(RTCW(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)) - loc1) - loc3)));
						RTHOOK(37);
						loc15 += (EIF_INTEGER_32) (loc3 - loc4);
						RTHOOK(38);
						(nstcall = 0, F778_4948(Current, (EIF_INTEGER_32) (loc6 - loc15)));
					}
				}
				RTHOOK(39);
				(nstcall = 0, F772_4593(Current));
			}
		} else {
			RTHOOK(40);
			tr1 = (nstcall = 1, F58_820(RTCW(loc16), Current, arg1, ((EIF_INTEGER_32) 1L), loc6));
			loc18 = tr1;
			if (EIF_TEST(loc18)) {
				RTHOOK(41);
				tr1 = (nstcall = 1, F563_2778(loc18));
				loc17 = (EIF_REFERENCE) tr1;
				RTHOOK(42);
				ti4_1 = (nstcall = 1, F587_3101(loc17));
				loc8 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(43);
				loc11 = (EIF_INTEGER_32) loc6;
				RTHOOK(44);
				loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
				RTHOOK(45);
				loc6 += (EIF_INTEGER_32) (loc8 * loc12);
				RTHOOK(46);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 1, F593_3122(RTCW(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L))));
				loc13 = (EIF_REFERENCE) tr2;
				RTHOOK(47);
				RTAR(Current, loc13);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc13;
				RTHOOK(48);
				loc7 = (EIF_INTEGER_32) loc8;
				RTHOOK(49);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3581[Dtype(RTCW(arg2))-776])(arg2));
				loc5 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(50);
				tr1 = *(EIF_REFERENCE *)(RTCW(arg2));
				loc14 = (EIF_REFERENCE) tr1;
				for (;;) {
					RTHOOK(51);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(52);
					loc7--;
					RTHOOK(53);
					ti4_1 = (nstcall = 1, F587_3091(RTCW(loc17), loc7));
					loc9 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(54);
					loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + (EIF_INTEGER_32) (loc7 * loc12));
					RTHOOK(55);
					(nstcall = 1, F593_3115(RTCW(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc3) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 + loc4) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc11 - loc9) - loc3) + ((EIF_INTEGER_32) 1L))));
					RTHOOK(56);
					loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
					RTHOOK(57);
					(nstcall = 1, F593_3113(RTCW(loc13), loc14, loc5, (EIF_INTEGER_32) (loc10 - ((EIF_INTEGER_32) 1L)), loc4));
				}
				RTHOOK(58);
				(nstcall = 0, F778_4948(Current, loc6));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(59);
	RTLE;
	RTEE;
}

/* {STRING_8}.replace_blank */
void F778_4878 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("replace_blank", 777, Current, 0, 0, 11157);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_2 = (nstcall = 0, F776_4809(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F778_4880(Current, (EIF_CHARACTER_8) ' '));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("same_size", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F776_4809(Current)) == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.fill_blank */
void F778_4879 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("fill_blank", 777, Current, 0, 0, 11158);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F776_4809(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F776_4829(Current, (EIF_CHARACTER_8) ' '));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("filled", EX_POST);
		if ((nstcall = 0, F362_2124(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_size", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (nstcall = 0, F776_4809(Current)))) {
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F776_4809(Current)) == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.fill_with */
void F778_4880 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("fill_with", 777, Current, 1, 1, 11159);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_2 = (nstcall = 0, F776_4809(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr2 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F593_3110(RTCW(tr2), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(4);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("same_count", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F776_4809(Current)) == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {STRING_8}.replace_character */
void F778_4881 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("replace_character", 777, Current, 0, 1, 11160);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_2 = (nstcall = 0, F776_4809(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F778_4880(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("same_count", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F776_4809(Current)) == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.keep_head */
void F778_4882 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("keep_head", 777, Current, 0, 1, 11161);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
		RTHOOK(4);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("new_count", EX_POST);
		ti4_2 = eif_min_int32 (arg1,ti4_1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {STRING_8}.keep_tail */
void F778_4883 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("keep_tail", 777, Current, 1, 1, 11162);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 < loc1)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F593_3115(RTCW(tr1), (EIF_INTEGER_32) (loc1 - arg1), ((EIF_INTEGER_32) 0L), arg1));
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
		RTHOOK(6);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("new_count", EX_POST);
		ti4_2 = eif_min_int32 (arg1,ti4_1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {STRING_8}.left_adjust */
void F778_4884 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTEAA("left_adjust", 777, Current, 3, 0, 11163);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	loc3 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc2 > loc1)) {
			tc1 = (nstcall = 1, F593_3091(RTCW(loc3), loc2));
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(4);
		loc2++;
	}
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) - loc2);
		RTHOOK(7);
		(nstcall = 1, F593_3115(RTCW(loc3), loc2, ((EIF_INTEGER_32) 0L), loc1));
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc1;
		RTHOOK(9);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("valid_count", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F346_2122(Current))) {
			tw1 = (nstcall = 0, F778_4867(Current, ((EIF_INTEGER_32) 1L)));
			tb3 = EIF_TEST(isspace(tw1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTHOOK(13);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {STRING_8}.right_adjust */
void F778_4885 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLIU(2);
	
	RTEAA("right_adjust", 777, Current, 4, 0, 11164);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) loc2;
	RTHOOK(3);
	loc4 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
			tc1 = (nstcall = 1, F593_3091(RTCW(loc4), loc1));
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(5);
		loc3++;
		RTHOOK(6);
		loc1--;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) - loc3);
		RTHOOK(9);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("valid_count", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F346_2122(Current))) {
			tw1 = (nstcall = 0, F778_4867(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tb3 = EIF_TEST(isspace(tw1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTHOOK(13);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {STRING_8}.share */
void F778_4886 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("share", 777, Current, 0, 1, 11165);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("shared_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("shared_area", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		if ((EIF_BOOLEAN)(tr1 == *(EIF_REFERENCE *)(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {STRING_8}.put */
void F778_4887 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put", 777, Current, 0, 2, 11166);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg2)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg2)), label_3);
		RTCK;
		RTJB;
label_3:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F593_3106(RTCW(tr1), arg1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
	RTHOOK(5);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F778_4865(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F778_4865(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("stable_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTHOOK(10);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {STRING_8}.put_code */
void F778_4888 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put_code", 777, Current, 0, 2, 11167);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		RTTE((nstcall = 0, F776_4826(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (EIF_CHARACTER_8) arg1;
	(nstcall = 1, F593_3106(RTCW(tr1), tc1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F778_4868(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("stable_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTHOOK(8);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {STRING_8}.precede */
void F778_4889 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("precede", 777, Current, 1, 1, 11168);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (nstcall = 0, F776_4809(Current)))) {
		RTHOOK(2);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti4_3 = (nstcall = 0, F374_2128(Current));
		(nstcall = 0, F778_4931(Current, (EIF_INTEGER_32) (ti4_2 + ti4_3)));
	}
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F593_3115(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
	RTHOOK(5);
	(nstcall = 1, F593_3106(RTCW(loc1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(6);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))++;
	RTHOOK(7);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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
}

/* {STRING_8}.prepend_character */
void F778_4890 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("prepend_character", 777, Current, 1, 1, 11076);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (nstcall = 0, F776_4809(Current)))) {
		RTHOOK(2);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti4_3 = (nstcall = 0, F374_2128(Current));
		(nstcall = 0, F778_4931(Current, (EIF_INTEGER_32) (ti4_2 + ti4_3)));
	}
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F593_3115(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
	RTHOOK(5);
	(nstcall = 1, F593_3106(RTCW(loc1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(6);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))++;
	RTHOOK(7);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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
}

/* {STRING_8}.prepend_string_general */
void F778_4891 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("prepend_string_general", 777, Current, 1, 1, 11077);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("compatible_strings", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F776_4819(Current))) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3365[Dtype(RTCW(arg1))-773])(arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
		ti4_1 = (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ti4_2);
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(775, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		(nstcall = 0, F778_4892(Current, loc1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F772_4608(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend */
void F778_4892 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("prepend", 777, Current, 0, 1, 11078);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
		ti4_1 = (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ti4_2);
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	(nstcall = 0, F778_4918(Current, arg1, ((EIF_INTEGER_32) 1L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_substring */
void F778_4893 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("prepend_substring", 777, Current, 3, 3, 11079);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_index_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_index_valid", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(5);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 > (nstcall = 0, F776_4809(Current)))) {
			RTHOOK(9);
			ti4_2 = (nstcall = 0, F374_2128(Current));
			(nstcall = 0, F778_4931(Current, (EIF_INTEGER_32) (loc1 + ti4_2)));
		}
		RTHOOK(10);
		loc3 = *(EIF_REFERENCE *)(Current);
		RTHOOK(11);
		(nstcall = 1, F593_3115(RTCW(loc3), ((EIF_INTEGER_32) 0L), loc2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3581[Dtype(RTCW(arg1))-776])(arg1));
		(nstcall = 1, F593_3113(RTCW(loc3), tr1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg2) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), loc2));
		RTHOOK(13);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc1;
		RTHOOK(14);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg3) - arg2) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_boolean */
void F778_4894 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("prepend_boolean", 777, Current, 0, 1, 11080);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (arg1 ? makestr ("True", 4) : makestr ("False", 5));
	(nstcall = 0, F778_4892(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_double */
void F778_4895 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("prepend_double", 777, Current, 0, 1, 11081);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = c_outr64(arg1);
	(nstcall = 0, F778_4892(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_integer */
void F778_4896 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("prepend_integer", 777, Current, 0, 1, 11082);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = c_outi(arg1);
	(nstcall = 0, F778_4892(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_real */
void F778_4897 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("prepend_real", 777, Current, 0, 1, 11083);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = c_outr32(arg1);
	(nstcall = 0, F778_4892(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_string */
void F778_4898 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("prepend_string", 777, Current, 0, 1, 11084);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		(nstcall = 0, F778_4892(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_string_general */
void F778_4899 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("append_string_general", 777, Current, 1, 1, 11085);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("compatible_strings", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F776_4819(Current))) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3365[Dtype(RTCW(arg1))-773])(arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(775, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		(nstcall = 0, F778_4900(Current, loc1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F772_4606(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.append */
void F778_4900 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("append", 777, Current, 3, 1, 11086);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	loc2 = (EIF_INTEGER_32) ti4_3;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(5);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc3 > (nstcall = 0, F776_4809(Current)))) {
			RTHOOK(7);
			ti4_3 = (nstcall = 0, F374_2128(Current));
			(nstcall = 0, F778_4931(Current, (EIF_INTEGER_32) (loc3 + ti4_3)));
		}
		RTHOOK(8);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3581[Dtype(RTCW(arg1))-776])(arg1));
		(nstcall = 1, F593_3113(RTCW(tr2), tr3, ti4_3, loc1, loc2));
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc3;
		RTHOOK(10);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_substring */
void F778_4901 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("append_substring", 777, Current, 3, 3, 11087);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_index_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_index_valid", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(5);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(8);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc3 > (nstcall = 0, F776_4809(Current)))) {
			RTHOOK(10);
			ti4_2 = (nstcall = 0, F374_2128(Current));
			(nstcall = 0, F778_4931(Current, (EIF_INTEGER_32) (loc3 + ti4_2)));
		}
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3581[Dtype(RTCW(arg1))-776])(arg1));
		(nstcall = 1, F593_3113(RTCW(tr1), tr2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg2) - ((EIF_INTEGER_32) 1L)), loc1, loc2));
		RTHOOK(12);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc3;
		RTHOOK(13);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.plus */
EIF_REFERENCE F778_4902 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("plus", 777, Current, 0, 1, 11088);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("compatible_strings", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F776_4819(Current))) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3365[Dtype(RTCW(arg1))-773])(arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
	Result = (nstcall = 0, F778_4950(Current, (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	RTHOOK(4);
	(nstcall = 1, F778_4900(RTCW(Result), Current));
	RTHOOK(5);
	(nstcall = 1, F778_4899(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("plus_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("new_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTHOOK(9);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.append_string */
void F778_4903 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("append_string", 777, Current, 0, 1, 11089);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		(nstcall = 0, F778_4900(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("appended", EX_POST);
		if ((!((EIF_BOOLEAN)(arg1 != NULL)) || ((EIF_BOOLEAN) 1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_integer */
void F778_4904 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_integer", 777, Current, 5, 1, 11090);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '-'));
			RTHOOK(6);
			loc2++;
			RTHOOK(7);
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0x80000000L))) {
				RTHOOK(8);
				(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '8'));
				RTHOOK(9);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 10L));
			} else {
				RTHOOK(10);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
			}
		} else {
			RTHOOK(11);
			loc1 = (EIF_INTEGER_32) arg1;
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 % ((EIF_INTEGER_32) 10L)) + ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F778_4914(Current, tc1));
			RTHOOK(14);
			loc1 /= ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(15);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(16);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(18);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(19);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc3));
			(nstcall = 1, F593_3106(RTCW(loc5), tc1, loc2));
			RTHOOK(20);
			(nstcall = 1, F593_3106(RTCW(loc5), loc4, loc3));
			RTHOOK(21);
			loc3--;
			RTHOOK(22);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_integer_8 */
void F778_4905 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 loc1 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_integer_8", 777, Current, 5, 1, 11091);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '-'));
			RTHOOK(6);
			loc2++;
			RTHOOK(7);
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_8) -128L))) {
				RTHOOK(8);
				(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '8'));
				RTHOOK(9);
				loc1 = (EIF_INTEGER_8) (EIF_INTEGER_8) -((EIF_INTEGER_8) (arg1 / (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L)));
			} else {
				RTHOOK(10);
				loc1 = (EIF_INTEGER_8) (EIF_INTEGER_8) -arg1;
			}
		} else {
			RTHOOK(11);
			loc1 = (EIF_INTEGER_8) arg1;
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_8) (((EIF_INTEGER_8) (loc1 % (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L))) + (EIF_INTEGER_8) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F778_4914(Current, tc1));
			RTHOOK(14);
			loc1 /= (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(15);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(16);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(18);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(19);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc3));
			(nstcall = 1, F593_3106(RTCW(loc5), tc1, loc2));
			RTHOOK(20);
			(nstcall = 1, F593_3106(RTCW(loc5), loc4, loc3));
			RTHOOK(21);
			loc3--;
			RTHOOK(22);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_integer_16 */
void F778_4906 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 loc1 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_integer_16", 777, Current, 5, 1, 11092);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '-'));
			RTHOOK(6);
			loc2++;
			RTHOOK(7);
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_16) -32768L))) {
				RTHOOK(8);
				(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '8'));
				RTHOOK(9);
				loc1 = (EIF_INTEGER_16) (EIF_INTEGER_16) -((EIF_INTEGER_16) (arg1 / (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L)));
			} else {
				RTHOOK(10);
				loc1 = (EIF_INTEGER_16) (EIF_INTEGER_16) -arg1;
			}
		} else {
			RTHOOK(11);
			loc1 = (EIF_INTEGER_16) arg1;
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_16) (((EIF_INTEGER_16) (loc1 % (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L))) + (EIF_INTEGER_16) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F778_4914(Current, tc1));
			RTHOOK(14);
			loc1 /= (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(15);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(16);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(18);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(19);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc3));
			(nstcall = 1, F593_3106(RTCW(loc5), tc1, loc2));
			RTHOOK(20);
			(nstcall = 1, F593_3106(RTCW(loc5), loc4, loc3));
			RTHOOK(21);
			loc3--;
			RTHOOK(22);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_integer_64 */
void F778_4907 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 loc1 = (EIF_INTEGER_64) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_integer_64", 777, Current, 5, 1, 11093);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '-'));
			RTHOOK(6);
			loc2++;
			RTHOOK(7);
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_64) RTI64C(0x8000000000000000)))) {
				RTHOOK(8);
				(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '8'));
				RTHOOK(9);
				loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -((EIF_INTEGER_64) (arg1 / (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L)));
			} else {
				RTHOOK(10);
				loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -arg1;
			}
		} else {
			RTHOOK(11);
			loc1 = (EIF_INTEGER_64) arg1;
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_64) (((EIF_INTEGER_64) (loc1 % (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L))) + (EIF_INTEGER_64) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F778_4914(Current, tc1));
			RTHOOK(14);
			loc1 /= (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(15);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(16);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(18);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(19);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc3));
			(nstcall = 1, F593_3106(RTCW(loc5), tc1, loc2));
			RTHOOK(20);
			(nstcall = 1, F593_3106(RTCW(loc5), loc4, loc3));
			RTHOOK(21);
			loc3--;
			RTHOOK(22);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_natural_8 */
void F778_4908 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_natural_8", 777, Current, 5, 1, 11094);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		loc1 = (EIF_NATURAL_8) arg1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(6);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_8) (((EIF_NATURAL_8) (loc1 % (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_8) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F778_4914(Current, tc1));
			RTHOOK(7);
			loc1 /= (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(11);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc3));
			(nstcall = 1, F593_3106(RTCW(loc5), tc1, loc2));
			RTHOOK(13);
			(nstcall = 1, F593_3106(RTCW(loc5), loc4, loc3));
			RTHOOK(14);
			loc3--;
			RTHOOK(15);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_natural_16 */
void F778_4909 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_natural_16", 777, Current, 5, 1, 11095);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		loc1 = (EIF_NATURAL_16) arg1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(6);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_16) (((EIF_NATURAL_16) (loc1 % (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_16) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F778_4914(Current, tc1));
			RTHOOK(7);
			loc1 /= (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(11);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc3));
			(nstcall = 1, F593_3106(RTCW(loc5), tc1, loc2));
			RTHOOK(13);
			(nstcall = 1, F593_3106(RTCW(loc5), loc4, loc3));
			RTHOOK(14);
			loc3--;
			RTHOOK(15);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_natural_32 */
void F778_4910 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_natural_32", 777, Current, 5, 1, 11096);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		loc1 = (EIF_NATURAL_32) arg1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(6);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) (((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F778_4914(Current, tc1));
			RTHOOK(7);
			loc1 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(11);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc3));
			(nstcall = 1, F593_3106(RTCW(loc5), tc1, loc2));
			RTHOOK(13);
			(nstcall = 1, F593_3106(RTCW(loc5), loc4, loc3));
			RTHOOK(14);
			loc3--;
			RTHOOK(15);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_natural_64 */
void F778_4911 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_natural_64", 777, Current, 5, 1, 11097);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F778_4914(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		loc1 = (EIF_NATURAL_64) arg1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(6);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_64) (((EIF_NATURAL_64) (loc1 % (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_64) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F778_4914(Current, tc1));
			RTHOOK(7);
			loc1 /= (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(11);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc5), loc3));
			(nstcall = 1, F593_3106(RTCW(loc5), tc1, loc2));
			RTHOOK(13);
			(nstcall = 1, F593_3106(RTCW(loc5), loc4, loc3));
			RTHOOK(14);
			loc3--;
			RTHOOK(15);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_real */
void F778_4912 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("append_real", 777, Current, 0, 1, 11098);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = c_outr32(arg1);
	(nstcall = 0, F778_4900(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_double */
void F778_4913 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("append_double", 777, Current, 0, 1, 11099);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = c_outr64(arg1);
	(nstcall = 0, F778_4900(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_character */
void F778_4914 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("append_character", 777, Current, 1, 1, 11100);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == (nstcall = 0, F776_4809(Current)))) {
		RTHOOK(3);
		ti4_2 = (nstcall = 0, F374_2128(Current));
		(nstcall = 0, F778_4931(Current, (EIF_INTEGER_32) (loc1 + ti4_2)));
	}
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F593_3106(RTCW(tr1), arg1, loc1));
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("item_inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F778_4865(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {STRING_8}.extend */
void F778_4915 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("extend", 777, Current, 1, 1, 11101);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F778_4871(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == (nstcall = 0, F776_4809(Current)))) {
		RTHOOK(4);
		ti4_2 = (nstcall = 0, F374_2128(Current));
		(nstcall = 0, F778_4931(Current, (EIF_INTEGER_32) (loc1 + ti4_2)));
	}
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F593_3106(RTCW(tr1), arg1, loc1));
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(7);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("item_inserted", EX_POST);
		if ((nstcall = 0, F394_2135(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("item_inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F778_4865(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_boolean */
void F778_4916 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("append_boolean", 777, Current, 0, 1, 11102);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (arg1 ? makestr ("True", 4) : makestr ("False", 5));
	(nstcall = 0, F778_4900(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.insert */
void F778_4917 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("insert", 777, Current, 0, 2, 11103);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(nstcall = 0, F778_4918(Current, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {STRING_8}.insert_string */
void F778_4918 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("insert_string", 777, Current, 4, 2, 11104);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_insertion_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > (nstcall = 0, F776_4809(Current)))) {
			RTHOOK(7);
			ti4_1 = (nstcall = 0, F374_2128(Current));
			(nstcall = 0, F778_4931(Current, (EIF_INTEGER_32) (loc2 + ti4_1)));
		}
		RTHOOK(8);
		loc4 = *(EIF_REFERENCE *)(Current);
		RTHOOK(9);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		RTHOOK(10);
		(nstcall = 1, F593_3115(RTCW(loc4), loc1, (EIF_INTEGER_32) (loc1 + loc3), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1)));
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3581[Dtype(RTCW(arg1))-776])(arg1));
		(nstcall = 1, F593_3113(RTCW(loc4), tr1, ti4_1, loc1, loc3));
		RTHOOK(12);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
		RTHOOK(13);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
}

/* {STRING_8}.insert_character */
void F778_4919 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTEAA("insert_character", 777, Current, 3, 2, 11105);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_insertion_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc2);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > (nstcall = 0, F776_4809(Current)))) {
		RTHOOK(4);
		ti4_2 = (nstcall = 0, F374_2128(Current));
		(nstcall = 0, F778_4931(Current, (EIF_INTEGER_32) (loc2 + ti4_2)));
	}
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(7);
	(nstcall = 1, F593_3115(RTCW(loc3), loc1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1)));
	RTHOOK(8);
	(nstcall = 1, F593_3106(RTCW(loc3), arg1, loc1));
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
	RTHOOK(10);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("one_more_character", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F778_4865(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTHOOK(14);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
}

/* {STRING_8}.remove */
void F778_4920 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("remove", 777, Current, 1, 1, 11106);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F593_3115(RTCW(tr1), arg1, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc1 - arg1)));
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.remove_head */
void F778_4921 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remove_head", 777, Current, 0, 1, 11107);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(4);
		(nstcall = 0, F772_4593(Current));
	} else {
		RTHOOK(5);
		(nstcall = 0, F778_4883(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - arg1)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {STRING_8}.remove_substring */
void F778_4922 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("remove_substring", 777, Current, 2, 2, 11108);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F593_3115(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + loc2) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc1 - arg2)));
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc2);
		RTHOOK(9);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {STRING_8}.remove_tail */
void F778_4923 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remove_tail", 777, Current, 1, 1, 11109);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 > loc1)) {
		RTHOOK(4);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(5);
		(nstcall = 0, F772_4593(Current));
	} else {
		RTHOOK(6);
		(nstcall = 0, F778_4882(Current, (EIF_INTEGER_32) (loc1 - arg1)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.prune */
void F778_4924 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune", 777, Current, 1, 1, 11110);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F778_4872(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F778_4865(Current, loc1)) == arg1);
		}
		if (tb1) break;
		RTHOOK(5);
		loc1++;
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		RTHOOK(7);
		(nstcall = 0, F778_4920(Current, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.prune_all */
void F778_4925 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLIU(3);
	
	RTEAA("prune_all", 777, Current, 5, 1, 11111);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F778_4872(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_2 = (nstcall = 0, F776_4811(Current, arg1));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc3)) break;
		RTHOOK(6);
		tc1 = (nstcall = 1, F593_3091(RTCW(loc4), loc1));
		loc5 = (EIF_CHARACTER_8) tc1;
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc5 != arg1)) {
			RTHOOK(8);
			(nstcall = 1, F593_3106(RTCW(loc4), loc5, loc2));
			RTHOOK(9);
			loc2++;
		}
		RTHOOK(10);
		loc1++;
	}
	RTHOOK(11);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
	RTHOOK(12);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("no_more_occurrences", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F776_4823(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("changed_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 - ti4_2))) {
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
}

/* {STRING_8}.prune_all_leading */
void F778_4926 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune_all_leading", 777, Current, 0, 1, 11112);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		tb1 = '\01';
		if (!(nstcall = 0, F346_2122(Current))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F778_4865(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb1) break;
		RTHOOK(2);
		(nstcall = 0, F778_4920(Current, ((EIF_INTEGER_32) 1L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {STRING_8}.prune_all_trailing */
void F778_4927 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune_all_trailing", 777, Current, 0, 1, 11113);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		tb1 = '\01';
		if (!(nstcall = 0, F346_2122(Current))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F778_4865(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) != arg1);
		}
		if (tb1) break;
		RTHOOK(2);
		(nstcall = 0, F778_4920(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {STRING_8}.wipe_out */
void F778_4928 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("wipe_out", 777, Current, 0, 0, 11114);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F776_4809(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_empty", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_capacity", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F776_4809(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, F346_2122(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {STRING_8}.clear_all */
void F778_4929 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("clear_all", 777, Current, 0, 0, 11115);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F776_4809(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_empty", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_capacity", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F776_4809(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {STRING_8}.adapt_size */
void F778_4930 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("adapt_size", 777, Current, 0, 0, 11116);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F778_4931(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.resize */
void F778_4931 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("resize", 777, Current, 0, 1, 11117);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_size_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F593_3124(RTCW(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("capacity_large_enough", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F776_4809(Current)) >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {STRING_8}.grow */
void F778_4932 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("grow", 777, Current, 0, 1, 11118);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("resizable", EX_PRE);
		RTTE((nstcall = 0, F374_2129(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 > (nstcall = 0, F776_4809(Current)))) {
		RTHOOK(3);
		(nstcall = 0, F778_4931(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_capacity", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F776_4809(Current)) >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {STRING_8}.trim */
void F778_4933 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLIU(5);
	
	RTEAA("trim", 777, Current, 1, 0, 11119);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = (nstcall = 0, F1_14(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 < (nstcall = 0, F776_4809(Current)))) {
		RTHOOK(3);
		tr3 = *(EIF_REFERENCE *)(Current);
		tr4 = (nstcall = 1, F593_3123(tr3, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
		RTAR(Current, tr4);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr4;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("minimal_capacity", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F776_4809(Current)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_string", EX_POST);
		RTCO(tr2);
		if ((nstcall = 0, F776_4816(Current, tr1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {STRING_8}.as_lower */
EIF_REFERENCE F778_4934 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("as_lower", 777, Current, 0, 0, 11120);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(2);
	(nstcall = 1, F778_4940(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("as_lower_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F778_4867(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tw2 = (nstcall = 0, F778_4867(Current, ((EIF_INTEGER_32) 1L)));
			tr1 = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)tr1 = tw2;
			tw3 = (nstcall = 1, F723_4325(RTCW(tr1)));
			tb1 = (EIF_BOOLEAN)(tw1 == tw3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F778_4946(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr2 = (nstcall = 0, F778_4946(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr3 = (nstcall = 1, F778_4934(RTCW(tr2)));
			tb1 = RTEQ(tr1, tr3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.as_upper */
EIF_REFERENCE F778_4935 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("as_upper", 777, Current, 0, 0, 11121);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(2);
	(nstcall = 1, F778_4941(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("as_upper_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F778_4867(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tw2 = (nstcall = 0, F778_4867(Current, ((EIF_INTEGER_32) 1L)));
			tr1 = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)tr1 = tw2;
			tw3 = (nstcall = 1, F723_4323(RTCW(tr1)));
			tb1 = (EIF_BOOLEAN)(tw1 == tw3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F778_4946(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr2 = (nstcall = 0, F778_4946(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr3 = (nstcall = 1, F778_4935(RTCW(tr2)));
			tb1 = RTEQ(tr1, tr3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.left_justify */
void F778_4936 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTEAA("left_justify", 777, Current, 3, 0, 11122);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	(nstcall = 0, F778_4884(Current));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 < loc2)) {
		RTHOOK(5);
		loc3 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc1 == loc2)) break;
			RTHOOK(7);
			(nstcall = 1, F593_3106(RTCW(loc3), (EIF_CHARACTER_8) ' ', loc1));
			RTHOOK(8);
			loc1++;
		}
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
		RTHOOK(10);
		(nstcall = 0, F772_4593(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {STRING_8}.center_justify */
void F778_4937 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLIU(2);
	
	RTEAA("center_justify", 777, Current, 6, 0, 11123);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	loc6 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc4 == loc2)) {
			tc1 = (nstcall = 1, F593_3091(RTCW(loc6), loc4));
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(4);
		loc4++;
	}
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	loc6 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(7);
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -1L))) {
			tc1 = (nstcall = 1, F593_3091(RTCW(loc6), loc1));
			tb3 = EIF_TEST(isspace(tc1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) break;
		RTHOOK(8);
		loc5++;
		RTHOOK(9);
		loc1--;
	}
	RTHOOK(10);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc5);
	RTHOOK(11);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(12);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 2L)));
	} else {
		RTHOOK(13);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 2L))) - ((EIF_INTEGER_32) 1L));
	}
	RTHOOK(14);
	if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(15);
		(nstcall = 1, F593_3114(RTCW(loc6), loc4, (EIF_INTEGER_32) (loc4 - loc3), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc4) - loc5)));
		RTHOOK(16);
		if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(17);
			(nstcall = 1, F593_3110(RTCW(loc6), (EIF_CHARACTER_8) ' ', loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc3) - ((EIF_INTEGER_32) 1L))));
		} else {
			RTHOOK(18);
			(nstcall = 1, F593_3110(RTCW(loc6), (EIF_CHARACTER_8) ' ', (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc5) - loc3), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
		}
		RTHOOK(19);
		(nstcall = 0, F772_4593(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {STRING_8}.right_justify */
void F778_4938 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLIU(2);
	
	RTEAA("right_justify", 777, Current, 4, 0, 11124);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	(nstcall = 0, F778_4885(Current));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		loc4 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(8);
			loc1--;
			RTHOOK(9);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc4), loc1));
			(nstcall = 1, F593_3106(RTCW(loc4), tc1, (EIF_INTEGER_32) (loc1 + loc3)));
		}
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(11);
			loc3--;
			RTHOOK(12);
			(nstcall = 1, F593_3106(RTCW(loc4), (EIF_CHARACTER_8) ' ', loc3));
		}
		RTHOOK(13);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
		RTHOOK(14);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.character_justify */
void F778_4939 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTEAA("character_justify", 777, Current, 3, 2, 11125);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (nstcall = 0, F776_4809(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_position", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("pivot_not_space", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (EIF_CHARACTER_8) ' '), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_empty", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F346_2122(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = (nstcall = 0, F776_4801(Current, arg1, ((EIF_INTEGER_32) 1L)));
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 < arg2)) {
			RTHOOK(8);
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + arg2) - loc1);
			RTHOOK(9);
			(nstcall = 0, F778_4932(Current, loc2));
			RTHOOK(10);
			loc3 = *(EIF_REFERENCE *)(Current);
			RTHOOK(11);
			(nstcall = 1, F593_3114(RTCW(loc3), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (arg2 - loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			RTHOOK(12);
			(nstcall = 1, F593_3110(RTCW(loc3), (EIF_CHARACTER_8) ' ', ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - loc1) - ((EIF_INTEGER_32) 1L))));
			RTHOOK(13);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
		} else {
			RTHOOK(14);
			loc3 = *(EIF_REFERENCE *)(Current);
			RTHOOK(15);
			(nstcall = 1, F593_3114(RTCW(loc3), (EIF_INTEGER_32) (loc1 - arg2), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1) + arg2)));
			RTHOOK(16);
			(nstcall = 1, F593_3110(RTCW(loc3), (EIF_CHARACTER_8) ' ', (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1) + arg2), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L))));
		}
		RTHOOK(17);
		(nstcall = 0, F772_4593(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {STRING_8}.to_lower */
void F778_4940 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_lower", 777, Current, 0, 0, 11126);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F776_4835(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(2);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.to_upper */
void F778_4941 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_upper", 777, Current, 0, 0, 11127);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F776_4836(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(2);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.linear_representation */
EIF_REFERENCE F778_4942 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("linear_representation", 777, Current, 2, 0, 11128);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,568,727,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc1 = RTLNS(typres0.id, 568, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = (nstcall = 0, F776_4809(Current));
	(nstcall = -1, F569_2774(RTCW(loc1), ti4_1));
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) break;
		RTHOOK(4);
		tc1 = (nstcall = 0, F778_4865(Current, loc2));
		(nstcall = 1, F569_2815(RTCW(loc1), tc1));
		RTHOOK(5);
		loc2++;
	}
	RTHOOK(6);
	Result = (EIF_REFERENCE) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.to_c */
EIF_REFERENCE F778_4943 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("to_c", 777, Current, 1, 0, 11129);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_dotnet", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F44_627(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	(nstcall = 1, F593_3106(RTCW(loc1), (EIF_CHARACTER_8) '\000', *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
	RTHOOK(4);
	Result = (EIF_REFERENCE) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.mirrored */
EIF_REFERENCE F778_4944 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("mirrored", 777, Current, 0, 0, 11130);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		(nstcall = 1, F778_4945(RTCW(Result)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("same_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.mirror */
void F778_4945 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("mirror", 777, Current, 4, 0, 11131);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(3);
		loc1 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc3 <= loc4)) break;
			RTHOOK(5);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc1), loc3));
			loc2 = (EIF_CHARACTER_8) tc1;
			RTHOOK(6);
			tc1 = (nstcall = 1, F593_3091(RTCW(loc1), loc4));
			(nstcall = 1, F593_3106(RTCW(loc1), tc1, loc3));
			RTHOOK(7);
			(nstcall = 1, F593_3106(RTCW(loc1), loc2, loc4));
			RTHOOK(8);
			loc3--;
			RTHOOK(9);
			loc4++;
		}
		RTHOOK(10);
		(nstcall = 0, F772_4593(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {STRING_8}.substring */
EIF_REFERENCE F778_4946 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("substring", 777, Current, 0, 2, 11132);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)))) {
		RTHOOK(2);
		Result = (nstcall = 0, F778_4950(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		(nstcall = 1, F593_3113(RTCW(tr1), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
		RTHOOK(4);
		(nstcall = 1, F778_4948(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(5);
		Result = (nstcall = 0, F778_4950(Current, ((EIF_INTEGER_32) 0L)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("substring_count", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if (!(EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("first_code", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F778_4867(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tw1 == (nstcall = 0, F778_4867(Current, arg1)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
			tr1 = (nstcall = 1, F778_4946(RTCW(Result), ((EIF_INTEGER_32) 2L), ti4_1));
			tb1 = RTEQ(tr1, (nstcall = 0, F778_4946(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)), arg2)));
		}
		if (tb1) {
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

/* {STRING_8}.multiply */
void F778_4947 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("multiply", 777, Current, 2, 1, 11133);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("meaningful_multiplier", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F1_14(Current));
	RTHOOK(3);
	(nstcall = 0, F778_4932(Current, (EIF_INTEGER_32) (arg1 * *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))));
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) arg1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) break;
		RTHOOK(6);
		(nstcall = 0, F778_4900(Current, loc1));
		RTHOOK(7);
		loc2--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.set_count */
void F778_4948 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_count", 777, Current, 0, 1, 11134);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_count", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= arg1)) {
			tb1 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F776_4809(Current)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	(nstcall = 0, F772_4593(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {STRING_8}.correct_mismatch */
void F778_4949 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("correct_mismatch", 777, Current, 0, 0, 11135);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {STRING_8}.new_string */
EIF_REFERENCE F778_4950 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
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
	
	RTEAA("new_string", 777, Current, 0, 1, 11136);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F776_4789(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("new_string_empty", EX_POST);
		tb1 = (nstcall = 1, F346_2122(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("new_string_area_big_enough", EX_POST);
		ti4_1 = (nstcall = 1, F776_4809(RTCW(Result)));
		if ((EIF_BOOLEAN) (ti4_1 >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.empty_area */
EIF_REFERENCE F778_4951 (EIF_REFERENCE Current)
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
	
	RTEAA("empty_area", 777, Current, 0, 0, 11137);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,592,727,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 1L),sizeof(EIF_CHARACTER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(Result) = 0;
	}
	RTHOOK(2);
	(nstcall = 1, F593_3108(RTCW(Result), (EIF_CHARACTER_8) '\000'));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("empty_area_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}._invariant */
void F778_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 191, Current, 0, 0);
	RTIT("compare_character", Current);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit192 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
