/*
 * Code for class IMMUTABLE_STRING_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "im188.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IMMUTABLE_STRING_32}.make_from_string_general */
void F774_4676 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("make_from_string_general", 773, Current, 2, 1, 10913);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(775, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		(nstcall = 0, F774_4677(Current, loc1));
	} else {
		RTHOOK(4);
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(772, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			(nstcall = 0, F774_4678(Current, loc2));
		} else {
			RTHOOK(6);
			tr1 = (nstcall = 1, F770_4555(RTCW(arg1)));
			(nstcall = 0, F774_4678(Current, tr1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("not_shared_implementation", EX_POST);
		if ((EIF_BOOLEAN)(Current != arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("initialized", EX_POST);
		if ((nstcall = 0, F770_4540(Current, arg1))) {
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

/* {IMMUTABLE_STRING_32}.make_from_string_8 */
void F774_4677 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("make_from_string_8", 773, Current, 5, 1, 10914);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,595,724,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3581[Dtype(RTCW(arg1))-776])(arg1));
	loc4 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc3 > loc5)) break;
		RTHOOK(8);
		tc1 = (nstcall = 1, F593_3091(RTCW(loc2), loc4));
		tw1 = (EIF_CHARACTER_32) tc1;
		(nstcall = 1, F596_3108(RTCW(loc1), tw1));
		RTHOOK(9);
		loc3++;
		RTHOOK(10);
		loc4++;
	}
	RTHOOK(11);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	(nstcall = 1, F596_3108(RTCW(loc1), tw1));
	RTHOOK(12);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3583[Dtype(arg1)-775]);
	(nstcall = 0, F774_4679(Current, loc1, ((EIF_INTEGER_32) 0L), ti4_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {IMMUTABLE_STRING_32}.make_from_string_32 */
void F774_4678 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("make_from_string_32", 773, Current, 1, 1, 10915);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_attached", EX_PRE);
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
	if ((nstcall = 0, F1_7(Current, arg1))) {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3503[Dtype(RTCW(arg1))-773])(arg1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3505[Dtype(arg1)-772]);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,595,724,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(loc1) = 0;
		}
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3503[Dtype(RTCW(arg1))-773])(arg1));
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3505[Dtype(arg1)-772]);
		(nstcall = 1, F596_3113(RTCW(loc1), tr1, ti4_2, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L))));
		RTHOOK(7);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTHOOK(9);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3505[Dtype(arg1)-772]);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) ti4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {IMMUTABLE_STRING_32}.make_from_area_and_bounds */
void F774_4679 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_area_and_bounds", 773, Current, 0, 3, 10916);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_valid_count", EX_PRE);
		ti4_1 = (nstcall = 1, F596_3101(arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 - arg2) >= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("low_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) arg2;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("area_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("area_lower_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == arg3)) {
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

/* {IMMUTABLE_STRING_32}.make_from_cil */
void F774_4680 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_from_cil", 773, Current, 1, 1, 10917);
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
	(nstcall = 0, F773_4625(Current, loc1));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		tr1 = RTOSCF(4585,(nstcall = 0, F770_4585), (Current));
		(nstcall = 1, F3_41(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current)));
		RTHOOK(7);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {IMMUTABLE_STRING_32}.copy */
void F774_4681 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("copy", 773, Current, 0, 1, 10896);
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
		RTCT("type_identity", EX_PRE);
		RTTE((nstcall = 0, F1_7(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		(nstcall = 0, F1_16(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("new_result_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("new_result_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {IMMUTABLE_STRING_32}.item */
EIF_CHARACTER_32 F774_4682 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item", 773, Current, 0, 1, 10897);
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
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F770_4507(Current, arg1)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tw1 = (nstcall = 1, F596_3091(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.at */
EIF_CHARACTER_32 F774_4683 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("at", 773, Current, 0, 1, 10898);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tw1 = (nstcall = 1, F596_3091(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.code */
EIF_NATURAL_32 F774_4684 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("code", 773, Current, 0, 1, 10899);
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
	tw1 = (nstcall = 1, F596_3091(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	tu4_1 = (EIF_NATURAL_32) tw1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.item_code */
EIF_INTEGER_32 F774_4685 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item_code", 773, Current, 0, 1, 10900);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)), label_1);
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
	tw1 = (nstcall = 1, F596_3091(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	tu4_1 = (EIF_NATURAL_32) tw1;
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.plus */
EIF_REFERENCE F774_4686 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc7);
	RTLR(4,tr1);
	RTLR(5,loc8);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("plus", 773, Current, 8, 1, 10901);
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
		if ((nstcall = 0, F773_4654(Current))) {
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,595,724,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	RTHOOK(4);
	(nstcall = 1, F596_3113(RTCW(loc1), *(EIF_REFERENCE *)(Current), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_), ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
	RTHOOK(5);
	loc7 = arg1;
	loc7 = RTRV(eif_new_type(772, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(loc7);
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3503[Dtype(loc7)-773])(loc7));
		ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		ti4_5 = *(EIF_INTEGER_32 *)(loc7 + O3505[Dtype(loc7)-772]);
		(nstcall = 1, F596_3113(RTCW(loc1), tr1, ti4_3, ti4_4, (EIF_INTEGER_32) (ti4_5 + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(7);
		loc8 = arg1;
		loc8 = RTRV(eif_new_type(775, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(8);
			ti4_3 = *(EIF_INTEGER_32 *)(loc8 + O3583[Dtype(loc8)-775]);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,595,724,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc2 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(loc2) = 0;
			}
			RTHOOK(9);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(10);
			ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3581[Dtype(loc8)-776])(loc8));
			loc5 = (EIF_INTEGER_32) ti4_4;
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(loc8);
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			ti4_4 = *(EIF_INTEGER_32 *)(loc8 + O3583[Dtype(loc8)-775]);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(13);
				if ((EIF_BOOLEAN) (loc4 > loc6)) break;
				RTHOOK(14);
				tc1 = (nstcall = 1, F593_3091(RTCW(loc3), loc5));
				tw1 = (EIF_CHARACTER_32) tc1;
				(nstcall = 1, F596_3108(RTCW(loc2), tw1));
				RTHOOK(15);
				loc4++;
				RTHOOK(16);
				loc5++;
			}
			RTHOOK(17);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
			(nstcall = 1, F596_3108(RTCW(loc2), tw1));
			RTHOOK(18);
			(nstcall = 1, F596_3113(RTCW(loc1), loc2, ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_), (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 2L))));
		}
	}
	RTHOOK(19);
	Result = RTLNSMART(dftype);
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	ti4_5 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
	(nstcall = -1, F774_4679(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_4 + ti4_5)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("plus_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("new_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		ti4_5 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ti4_5))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTHOOK(23);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.mirrored */
EIF_REFERENCE F774_4687 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("mirrored", 773, Current, 1, 0, 10902);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,595,724,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	RTHOOK(2);
	(nstcall = 1, F596_3113(RTCW(loc1), *(EIF_REFERENCE *)(Current), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	(nstcall = 0, F773_4672(Current, loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	Result = RTLNSMART(dftype);
	(nstcall = -1, F774_4679(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(ti4_2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_))) {
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

/* {IMMUTABLE_STRING_32}.as_lower */
EIF_REFERENCE F774_4688 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("as_lower", 773, Current, 1, 0, 10903);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,595,724,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	RTHOOK(2);
	(nstcall = 1, F596_3113(RTCW(loc1), *(EIF_REFERENCE *)(Current), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	(nstcall = 0, F773_4670(Current, loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	Result = RTLNSMART(dftype);
	(nstcall = -1, F774_4679(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("as_lower_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("length", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(ti4_2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F774_4682(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tw2 = (nstcall = 0, F774_4682(Current, ((EIF_INTEGER_32) 1L)));
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
		RTHOOK(8);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F774_4690(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
			tr2 = (nstcall = 0, F774_4690(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
			tr3 = (nstcall = 1, F774_4688(RTCW(tr2)));
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
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.as_upper */
EIF_REFERENCE F774_4689 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("as_upper", 773, Current, 1, 0, 10904);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,595,724,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	RTHOOK(2);
	(nstcall = 1, F596_3113(RTCW(loc1), *(EIF_REFERENCE *)(Current), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	(nstcall = 0, F773_4671(Current, loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	Result = RTLNSMART(dftype);
	(nstcall = -1, F774_4679(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("as_upper_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("length", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(ti4_2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F774_4682(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tw2 = (nstcall = 0, F774_4682(Current, ((EIF_INTEGER_32) 1L)));
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
		RTHOOK(8);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F774_4690(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
			tr2 = (nstcall = 0, F774_4690(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
			tr3 = (nstcall = 1, F774_4689(RTCW(tr2)));
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
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.substring */
EIF_REFERENCE F774_4690 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("substring", 773, Current, 2, 2, 10905);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)))) {
		RTHOOK(2);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
		RTHOOK(3);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,595,724,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(loc1) = 0;
		}
		RTHOOK(4);
		(nstcall = 1, F596_3113(RTCW(loc1), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) + arg1) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), loc2));
		RTHOOK(5);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		(nstcall = 1, F596_3108(RTCW(loc1), tw1));
		RTHOOK(6);
		Result = RTLNSMART(dftype);
		(nstcall = -1, F774_4679(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), loc2));
	} else {
		RTHOOK(7);
		Result = RTOSCF(4695,(nstcall = 0, F774_4695), (Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("substring_count", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if (!(EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("first_code", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F774_4682(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tw1 == (nstcall = 0, F774_4682(Current, arg1)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
			tr1 = (nstcall = 1, F774_4690(RTCW(Result), ((EIF_INTEGER_32) 2L), ti4_1));
			tb1 = RTEQ(tr1, (nstcall = 0, F774_4690(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)), arg2)));
		}
		if (tb1) {
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
	return Result;
}

/* {IMMUTABLE_STRING_32}.shared_substring */
EIF_REFERENCE F774_4691 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("shared_substring", 773, Current, 0, 2, 10906);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)))) {
		RTHOOK(2);
		Result = RTLNSMART(Dftype(Current));
		(nstcall = -1, F774_4679(RTCW(Result), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) + arg1) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(3);
		Result = RTOSCF(4695,(nstcall = 0, F774_4695), (Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.linear_representation */
EIF_REFERENCE F774_4692 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("linear_representation", 773, Current, 2, 0, 10907);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,571,724,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc1 = RTLNS(typres0.id, 571, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = (nstcall = 0, F773_4644(Current));
	(nstcall = -1, F572_2774(RTCW(loc1), ti4_1));
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_))) break;
		RTHOOK(4);
		tw1 = (nstcall = 0, F774_4682(Current, loc2));
		(nstcall = 1, F572_2815(RTCW(loc1), tw1));
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

/* {IMMUTABLE_STRING_32}.is_empty */
EIF_BOOLEAN F774_4693 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 773, Current, 0, 0, 10908);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.new_string */
EIF_REFERENCE F774_4694 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("new_string", 773, Current, 0, 1, 10909);
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
	Result = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
	(nstcall = -1, F773_4625(RTCW(Result), arg1));
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
		tb1 = (nstcall = 1, F774_4693(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("new_string_area_big_enough", EX_POST);
		ti4_1 = (nstcall = 1, F773_4644(RTCW(Result)));
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

/* {IMMUTABLE_STRING_32}.empty_string */
static EIF_REFERENCE F774_4695_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("empty_string", 773, Current, 0, 0, 10910);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (4695);
#define Result RTOSR(4695)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
	(nstcall = -1, F773_4625(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("empty_string_empty", EX_POST);
		tb1 = (nstcall = 1, F774_4693(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (4695);
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F774_4695 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4695,F774_4695_body,(Current));
}

/* {IMMUTABLE_STRING_32}.area_lower */
EIF_INTEGER_32 F774_4696 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
}


/* {IMMUTABLE_STRING_32}.correct_mismatch */
void F774_4697 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("correct_mismatch", 773, Current, 1, 0, 10912);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
		tr1 = RTOSCF(2741,(nstcall = 0, F560_2741), (Current));
		tr2 = RTMS_EX_H("area",4,1634887009);
		tr2 = (nstcall = 1, F575_2864(RTCW(tr1), tr2));
		loc1 = RTCCL(tr2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,595,724,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTRV(typres0,loc1);
		}
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		RTHOOK(2);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

void EIF_Minit188 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
