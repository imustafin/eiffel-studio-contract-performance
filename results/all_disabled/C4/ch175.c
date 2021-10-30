/*
 * Code for class CHARACTER_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch175.h"
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

/* {CHARACTER_8_REF}.item */
EIF_CHARACTER_8 F726_4342 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
}


/* {CHARACTER_8_REF}.code */
EIF_INTEGER_32 F726_4343 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("code", 725, Current, 0, 0, 10590);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("code_non_negatif", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("code_in_range", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 255L)))) {
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

/* {CHARACTER_8_REF}.natural_32_code */
EIF_NATURAL_32 F726_4344 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_code", 725, Current, 0, 0, 10591);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.hash_code */
EIF_INTEGER_32 F726_4345 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code", 725, Current, 0, 0, 10592);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) ((nstcall = 0, F726_4344(Current)))));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {CHARACTER_8_REF}.is_less */
EIF_BOOLEAN F726_4349 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_less", 725, Current, 0, 1, 10596);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (nstcall = 0, F726_4344(Current));
	tu4_2 = (nstcall = 1, F726_4344(RTCW(arg1)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, F726_4349(RTCW(arg1), tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tu4_1 = (nstcall = 1, F726_4344(RTCW(arg1)));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((nstcall = 0, F726_4344(Current)) < tu4_1))) {
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

/* {CHARACTER_8_REF}.is_equal */
EIF_BOOLEAN F726_4350 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_equal", 725, Current, 0, 1, 10597);
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
	tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	tc2 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, F1_9(Current, tr1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		tr1 = RTCCL(arg1);
		tb2 = (nstcall = 1, F726_4349(Current, tr1));
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, F726_4349(RTCW(arg1), tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {CHARACTER_8_REF}.plus */
EIF_CHARACTER_8 F726_4351 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("plus", 725, Current, 0, 1, 10598);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_increment", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 + arg1);
		tb1 = (nstcall = 1, F696_3539(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 + arg1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tr1 = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (nstcall = 1, F726_4353(RTCW(tr1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_)));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* {CHARACTER_8_REF}.minus */
EIF_CHARACTER_8 F726_4352 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("minus", 725, Current, 0, 1, 10599);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_decrement", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 - arg1);
		tb1 = (nstcall = 1, F696_3539(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 - arg1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		tr1 = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)tr1 = tc1;
		ti4_1 = (nstcall = 1, F726_4353(RTCW(tr1), Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* {CHARACTER_8_REF}.difference */
EIF_INTEGER_32 F726_4353 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("difference", 725, Current, 0, 1, 10600);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ti4_2 = (EIF_INTEGER_32) (arg1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_result", EX_POST);
		tc1 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) arg1) + Result);
		if ((EIF_BOOLEAN)(tc1 == *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_))) {
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

/* {CHARACTER_8_REF}.next */
EIF_CHARACTER_8 F726_4354 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("next", 725, Current, 0, 0, 10601);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		tb1 = (nstcall = 1, F696_3539(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) + ((EIF_INTEGER_32) 1L));
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tr1 = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (nstcall = 1, F726_4353(RTCW(tr1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_)));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
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

/* {CHARACTER_8_REF}.previous */
EIF_CHARACTER_8 F726_4355 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("previous", 725, Current, 0, 0, 10602);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		tb1 = (nstcall = 1, F696_3539(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) - ((EIF_INTEGER_32) 1L));
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tr1 = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (nstcall = 1, F726_4353(RTCW(tr1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_)));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
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

/* {CHARACTER_8_REF}.set_item */
void F726_4356 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_item", 725, Current, 0, 1, 10603);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_) = (EIF_CHARACTER_8) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {CHARACTER_8_REF}.out */
EIF_REFERENCE F726_4357 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("out", 725, Current, 0, 0, 10604);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F776_4789(RTCW(Result), ((EIF_INTEGER_32) 1L)));
	RTHOOK(2);
	(nstcall = 1, F778_4914(RTCW(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("out_not_void", EX_POST);
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

/* {CHARACTER_8_REF}.make_from_reference */
void F726_4358 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_reference", 725, Current, 0, 1, 10605);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	(nstcall = 0, F726_4356(Current, tc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_) == tc1)) {
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

/* {CHARACTER_8_REF}.to_reference */
EIF_REFERENCE F726_4359 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("to_reference", 725, Current, 0, 0, 10606);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(725, 0x01).id, 725, _OBJSIZ_0_1_0_0_0_0_0_0_);
	RTHOOK(2);
	(nstcall = 1, F726_4356(RTCW(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_reference_not_void", EX_POST);
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

/* {CHARACTER_8_REF}.to_character_8 */
EIF_CHARACTER_8 F726_4360 (EIF_REFERENCE Current)
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
	
	RTEAA("to_character_8", 725, Current, 0, 0, 10607);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.to_character_32 */
EIF_CHARACTER_32 F726_4361 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_32", 725, Current, 0, 0, 10608);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	tw1 = (EIF_CHARACTER_32) tc1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.as_upper */
EIF_CHARACTER_8 F726_4362 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_upper", 725, Current, 0, 0, 10609);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F726_4368(Current))) {
		RTHOOK(2);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(3);
		Result = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.upper */
EIF_CHARACTER_8 F726_4363 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("upper", 725, Current, 0, 0, 10610);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F726_4368(Current))) {
		RTHOOK(2);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(3);
		Result = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.as_lower */
EIF_CHARACTER_8 F726_4364 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_lower", 725, Current, 0, 0, 10611);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F726_4367(Current))) {
		RTHOOK(2);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(3);
		Result = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.lower */
EIF_CHARACTER_8 F726_4365 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lower", 725, Current, 0, 0, 10612);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F726_4367(Current))) {
		RTHOOK(2);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(3);
		Result = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_alpha */
EIF_BOOLEAN F726_4366 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_alpha", 725, Current, 0, 0, 10613);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F726_4377(Current, ti4_1));
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 2U));
	tu1_2 = eif_bit_and(tu1_1,tu1_2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_upper */
EIF_BOOLEAN F726_4367 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_upper", 725, Current, 0, 0, 10614);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F726_4377(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 1U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_lower */
EIF_BOOLEAN F726_4368 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_lower", 725, Current, 0, 0, 10615);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F726_4377(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 2U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_digit */
EIF_BOOLEAN F726_4369 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_digit", 725, Current, 0, 0, 10616);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F726_4377(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 4U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_hexa_digit */
EIF_BOOLEAN F726_4370 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_hexa_digit", 725, Current, 0, 0, 10617);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F726_4377(Current, ti4_1));
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 64U),((EIF_NATURAL_8) 4U));
	tu1_2 = eif_bit_and(tu1_1,tu1_2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_space */
EIF_BOOLEAN F726_4371 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_space", 725, Current, 0, 0, 10618);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F726_4377(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 8U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_punctuation */
EIF_BOOLEAN F726_4372 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_punctuation", 725, Current, 0, 0, 10619);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F726_4377(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 16U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_alpha_numeric */
EIF_BOOLEAN F726_4373 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_alpha_numeric", 725, Current, 0, 0, 10620);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F726_4377(Current, ti4_1));
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 2U));
	tu1_3 = eif_bit_or(tu1_2,((EIF_NATURAL_8) 4U));
	tu1_2 = eif_bit_and(tu1_1,tu1_3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_printable */
EIF_BOOLEAN F726_4374 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_printable", 725, Current, 0, 0, 10621);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F726_4377(Current, ti4_1));
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 2U));
	tu1_3 = eif_bit_or(tu1_2,((EIF_NATURAL_8) 4U));
	tu1_2 = eif_bit_or(tu1_3,((EIF_NATURAL_8) 16U));
	tu1_3 = eif_bit_or(tu1_2,((EIF_NATURAL_8) 128U));
	tu1_2 = eif_bit_and(tu1_1,tu1_3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_graph */
EIF_BOOLEAN F726_4375 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_graph", 725, Current, 0, 0, 10622);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F726_4377(Current, ti4_1));
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 2U));
	tu1_3 = eif_bit_or(tu1_2,((EIF_NATURAL_8) 4U));
	tu1_2 = eif_bit_or(tu1_3,((EIF_NATURAL_8) 16U));
	tu1_2 = eif_bit_and(tu1_1,tu1_2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_control */
EIF_BOOLEAN F726_4376 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_control", 725, Current, 0, 0, 10623);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F726_4377(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 32U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.character_types */
EIF_NATURAL_8 F726_4377 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("character_types", 725, Current, 0, 1, 10624);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L))) {
		RTHOOK(2);
		tr1 = RTOSCF(4378,(nstcall = 0, F726_4378), (Current));
		tu1_1 = (nstcall = 1, F589_3091(RTCW(tr1), arg1));
		Result = (EIF_NATURAL_8) tu1_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.internal_character_types */
static EIF_REFERENCE F726_4378_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("internal_character_types", 725, Current, 0, 0, 10625);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (4378);
#define Result RTOSR(4378)
	RTOC_NEW(Result);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,588,715,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 256L),sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(3);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(4);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(5);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(6);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(7);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(8);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(9);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(10);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(11);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(12);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(13);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(14);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(15);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(16);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(17);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(18);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(19);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(20);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(21);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(22);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(23);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(24);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(25);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(26);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(27);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(28);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(29);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(30);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(31);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(32);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(33);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(34);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 8U),((EIF_NATURAL_8) 128U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(35);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(36);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(37);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(38);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(39);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(40);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(41);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(42);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(43);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(44);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(45);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(46);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(47);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(48);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(49);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(50);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(51);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(52);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(53);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(54);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(55);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(56);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(57);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(58);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(59);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(60);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(61);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(62);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(63);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(64);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(65);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(66);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(67);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(68);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(69);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(70);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(71);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(72);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(73);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(74);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(75);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(76);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(77);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(78);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(79);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(80);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(81);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(82);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(83);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(84);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(85);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(86);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(87);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(88);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(89);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(90);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(91);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(92);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(93);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(94);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(95);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(96);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(97);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(98);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(99);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(100);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(101);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(102);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(103);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(104);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F589_3108(RTCW(Result), tu1_1));
	RTHOOK(105);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(106);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(107);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(108);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(109);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(110);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(111);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(112);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(113);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(114);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(115);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(116);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(117);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(118);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(119);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(120);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(121);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(122);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(123);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(124);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(125);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(126);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(127);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(128);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(129);
	(nstcall = 1, F589_3108(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(130);
	(nstcall = 1, F589_3110(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 128L), ((EIF_INTEGER_32) 255L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(131);
		RTCT("internal_character_types_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (4378);
	RTHOOK(132);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F726_4378 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4378,F726_4378_body,(Current));
}

void EIF_Minit175 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
