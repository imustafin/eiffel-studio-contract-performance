/*
 * Code for class ARGUMENTS_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar123.h"
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

/* {ARGUMENTS_32}.argument */
EIF_REFERENCE F279_2057 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("argument", 278, Current, 0, 1, 2780);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F279_2071(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOSCF(2075,(nstcall = 0, F279_2075), (Current));
	tr2 = (nstcall = 1, F498_2581(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("argument_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {ARGUMENTS_32}.argument_array */
EIF_REFERENCE F279_2058 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("argument_array", 278, Current, 0, 0, 2781);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F1_14(RTOSCF(2075,(nstcall = 0, F279_2075), (Current))));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("argument_array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("argument_array_compare_objects", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(RTCW(Result)+ _CHROFF_1_0_);
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
	return Result;
}

/* {ARGUMENTS_32}.command_line */
static EIF_REFERENCE F279_2059_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("command_line", 278, Current, 3, 0, 2782);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (2059);
#define Result RTOSR(2059)
	RTOC_NEW(Result);
	RTHOOK(1);
	loc2 = (nstcall = 0, F279_2071(Current));
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(774, 0x01).id, 774, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(2060,(nstcall = 0, F279_2060), (Current)))+ _LNGOFF_1_0_0_2_);
	(nstcall = -1, F773_4625(RTCW(loc3), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 10L)))));
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
			(nstcall = 1, F775_4752(RTCW(loc3), tw1));
		}
		RTHOOK(7);
		tr1 = (nstcall = 0, F279_2057(Current, loc1));
		(nstcall = 1, F775_4738(RTCW(loc3), tr1));
		RTHOOK(8);
		loc1++;
	}
	RTHOOK(9);
	tr1 = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
	(nstcall = -1, F773_4627(RTCW(tr1), loc3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("Result.count >= command_name.count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(2060,(nstcall = 0, F279_2060), (Current)))+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (2059);
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F279_2059 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2059,F279_2059_body,(Current));
}

/* {ARGUMENTS_32}.command_name */
static EIF_REFERENCE F279_2060_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("command_name", 278, Current, 0, 0, 2783);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (2060);
#define Result RTOSR(2060)
	RTOC_NEW(Result);
	RTHOOK(1);
	Result = (nstcall = 0, F279_2057(Current, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = (nstcall = 0, F279_2057(Current, ((EIF_INTEGER_32) 0L)));
		tb1 = (nstcall = 1, F773_4651(RTCW(Result), tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (2060);
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F279_2060 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2060,F279_2060_body,(Current));
}

/* {ARGUMENTS_32}.new_cursor */
EIF_REFERENCE F279_2061 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("new_cursor", 278, Current, 0, 0, 2784);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F498_2585(RTCV(RTOSCF(2075,(nstcall = 0, F279_2075), (Current)))));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {ARGUMENTS_32}.index_of_word_option */
EIF_INTEGER_32 F279_2062 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("index_of_word_option", 278, Current, 1, 1, 2785);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("opt_non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("opt_meaningful", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3366[Dtype(RTCW(arg1))-773])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > (nstcall = 0, F279_2071(Current)))) {
			tr1 = RTOSCF(2075,(nstcall = 0, F279_2075), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), loc1));
			tb1 = (nstcall = 0, F279_2072(Current, tr2, arg1));
		}
		if (tb1) break;
		RTHOOK(5);
		loc1++;
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc1 <= (nstcall = 0, F279_2071(Current)))) {
		RTHOOK(7);
		Result = (EIF_INTEGER_32) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS_32}.index_of_beginning_with_word_option */
EIF_INTEGER_32 F279_2063 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("index_of_beginning_with_word_option", 278, Current, 1, 1, 2786);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("opt_non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("opt_meaningful", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3366[Dtype(RTCW(arg1))-773])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > (nstcall = 0, F279_2071(Current)))) {
			tr1 = RTOSCF(2075,(nstcall = 0, F279_2075), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), loc1));
			tb1 = (nstcall = 0, F279_2073(Current, tr2, arg1));
		}
		if (tb1) break;
		RTHOOK(5);
		loc1++;
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc1 <= (nstcall = 0, F279_2071(Current)))) {
		RTHOOK(7);
		Result = (EIF_INTEGER_32) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS_32}.index_of_character_option */
EIF_INTEGER_32 F279_2064 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("index_of_character_option", 278, Current, 1, 1, 2787);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("o_non_null", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		RTTE((EIF_BOOLEAN)(arg1 != tw1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > (nstcall = 0, F279_2071(Current)))) {
			tr1 = RTOSCF(2075,(nstcall = 0, F279_2075), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), loc1));
			tb1 = (nstcall = 0, F279_2074(Current, tr2, arg1));
		}
		if (tb1) break;
		RTHOOK(4);
		loc1++;
	}
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc1 <= (nstcall = 0, F279_2071(Current)))) {
		RTHOOK(6);
		Result = (EIF_INTEGER_32) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS_32}.separate_character_option_value */
EIF_REFERENCE F279_2065 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("separate_character_option_value", 278, Current, 1, 1, 2788);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("o_non_null", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		RTTE((EIF_BOOLEAN)(arg1 != tw1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F279_2064(Current, arg1));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == (nstcall = 0, F279_2071(Current)))) {
			tr1 = RTOSCF(2075,(nstcall = 0, F279_2075), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
			tw1 = (nstcall = 1, F774_4682(RTCW(tr2), ((EIF_INTEGER_32) 1L)));
			tw2 = *(EIF_CHARACTER_32 *)(RTCV(RTOSCF(2069,(nstcall = 0, F279_2069), (Current)))+ _LNGOFF_0_0_0_0_);
			tb1 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb1) {
			RTHOOK(5);
			Result = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
			(nstcall = -1, F770_4495(RTCW(Result)));
		} else {
			RTHOOK(6);
			tr1 = RTOSCF(2075,(nstcall = 0, F279_2075), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
			Result = (EIF_REFERENCE) tr2;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS_32}.separate_word_option_value */
EIF_REFERENCE F279_2066 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("separate_word_option_value", 278, Current, 1, 1, 2789);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("opt_non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("opt_meaningful", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3366[Dtype(RTCW(arg1))-773])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (nstcall = 0, F279_2062(Current, arg1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == (nstcall = 0, F279_2071(Current)))) {
			tr1 = RTOSCF(2075,(nstcall = 0, F279_2075), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
			tw1 = (nstcall = 1, F774_4682(RTCW(tr2), ((EIF_INTEGER_32) 1L)));
			tw2 = *(EIF_CHARACTER_32 *)(RTCV(RTOSCF(2069,(nstcall = 0, F279_2069), (Current)))+ _LNGOFF_0_0_0_0_);
			tb1 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb1) {
			RTHOOK(6);
			Result = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
			(nstcall = -1, F770_4495(RTCW(Result)));
		} else {
			RTHOOK(7);
			tr1 = RTOSCF(2075,(nstcall = 0, F279_2075), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
			Result = (EIF_REFERENCE) tr2;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS_32}.coalesced_character_option_value */
EIF_REFERENCE F279_2067 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("coalesced_character_option_value", 278, Current, 1, 1, 2790);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("o_non_null", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		RTTE((EIF_BOOLEAN)(arg1 != tw1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F279_2064(Current, arg1));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = RTOSCF(2075,(nstcall = 0, F279_2075), (Current));
		tr2 = (nstcall = 1, F498_2581(RTCW(tr1), loc1));
		Result = (EIF_REFERENCE) tr2;
		RTHOOK(5);
		tw1 = *(EIF_CHARACTER_32 *)(RTCV(RTOSCF(2069,(nstcall = 0, F279_2069), (Current)))+ _LNGOFF_0_0_0_0_);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			RTHOOK(6);
			ti4_1 = (nstcall = 1, F773_4636(RTCW(Result), arg1, ((EIF_INTEGER_32) 1L)));
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
			tr1 = (nstcall = 1, F774_4691(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(7);
			ti4_1 = (nstcall = 1, F773_4636(RTCW(Result), arg1, ((EIF_INTEGER_32) 1L)));
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
			tr1 = (nstcall = 1, F774_4691(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)), ti4_2));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS_32}.coalesced_word_option_value */
EIF_REFERENCE F279_2068 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("coalesced_word_option_value", 278, Current, 1, 1, 2791);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("opt_non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("opt_meaningful", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3366[Dtype(RTCW(arg1))-773])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (nstcall = 0, F279_2063(Current, arg1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		tr1 = RTOSCF(2075,(nstcall = 0, F279_2075), (Current));
		tr2 = (nstcall = 1, F498_2581(RTCW(tr1), loc1));
		Result = (EIF_REFERENCE) tr2;
		RTHOOK(6);
		tw1 = *(EIF_CHARACTER_32 *)(RTCV(RTOSCF(2069,(nstcall = 0, F279_2069), (Current)))+ _LNGOFF_0_0_0_0_);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			RTHOOK(7);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
			tr1 = (nstcall = 1, F774_4691(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(8);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
			tr1 = (nstcall = 1, F774_4691(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)), ti4_2));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS_32}.option_sign */
static EIF_REFERENCE F279_2069_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("option_sign", 278, Current, 0, 0, 2792);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (2069);
#define Result RTOSR(2069)
	RTOC_NEW(Result);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,39,724,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 39, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
	(nstcall = -1, F40_620(RTCW(tr1), tw1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (2069);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F279_2069 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2069,F279_2069_body,(Current));
}

/* {ARGUMENTS_32}.set_option_sign */
void F279_2070 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("set_option_sign", 278, Current, 0, 1, 2793);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(2069,(nstcall = 0, F279_2069), (Current));
	(nstcall = 1, F40_620(RTCW(tr1), arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ARGUMENTS_32}.argument_count */
EIF_INTEGER_32 F279_2071 (EIF_REFERENCE Current)
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
	
	RTEAA("argument_count", 278, Current, 0, 0, 2794);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count;
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("argument_count_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	return Result;
}

/* {ARGUMENTS_32}.option_word_equal */
EIF_BOOLEAN F279_2072 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("option_word_equal", 278, Current, 0, 2, 2795);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("arg_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("w_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tw1 = *(EIF_CHARACTER_32 *)(RTCV(RTOSCF(2069,(nstcall = 0, F279_2069), (Current)))+ _LNGOFF_0_0_0_0_);
	tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	if ((EIF_BOOLEAN)(tw1 == tw2)) {
		RTHOOK(4);
		tb1 = (nstcall = 1, F770_4540(RTCW(arg1), arg2));
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(5);
		tb1 = '\0';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3366[Dtype(RTCW(arg1))-773])(arg1));
		if ((EIF_BOOLEAN) !tb2) {
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3352[Dtype(RTCW(arg1))-773])(arg1, ((EIF_INTEGER_32) 1L)));
			tw2 = *(EIF_CHARACTER_32 *)(RTCV(RTOSCF(2069,(nstcall = 0, F279_2069), (Current)))+ _LNGOFF_0_0_0_0_);
			tb1 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb1) {
			RTHOOK(6);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3429[Dtype(RTCW(arg1))-773])(arg1, ((EIF_INTEGER_32) 2L), ti4_1));
			tb1 = (nstcall = 1, F770_4540(RTCW(tr1), arg2));
			Result = (EIF_BOOLEAN) tb1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS_32}.option_word_begins_with */
EIF_BOOLEAN F279_2073 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("option_word_begins_with", 278, Current, 0, 2, 2796);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("arg_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("w_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tw1 = *(EIF_CHARACTER_32 *)(RTCV(RTOSCF(2069,(nstcall = 0, F279_2069), (Current)))+ _LNGOFF_0_0_0_0_);
	tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	if ((EIF_BOOLEAN)(tw1 == tw2)) {
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg2))-773])(arg2));
		tb1 = (EIF_BOOLEAN) (ti4_1 >= ti4_2);
	}
	if (tb1) {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg2))-773])(arg2));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3429[Dtype(RTCW(arg1))-773])(arg1, ((EIF_INTEGER_32) 1L), ti4_1));
		tb1 = (nstcall = 1, F770_4540(RTCW(tr1), arg2));
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(5);
		tb1 = '\0';
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3352[Dtype(RTCW(arg1))-773])(arg1, ((EIF_INTEGER_32) 1L)));
		tw2 = *(EIF_CHARACTER_32 *)(RTCV(RTOSCF(2069,(nstcall = 0, F279_2069), (Current)))+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg2))-773])(arg2));
			tb1 = (EIF_BOOLEAN) (ti4_1 > ti4_2);
		}
		if (tb1) {
			RTHOOK(6);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg2))-773])(arg2));
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3429[Dtype(RTCW(arg1))-773])(arg1, ((EIF_INTEGER_32) 2L), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
			tb1 = (nstcall = 1, F770_4540(RTCW(tr1), arg2));
			Result = (EIF_BOOLEAN) tb1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS_32}.option_character_equal */
EIF_BOOLEAN F279_2074 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_CHARACTER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("option_character_equal", 278, Current, 0, 2, 2797);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("arg_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tw1 = *(EIF_CHARACTER_32 *)(RTCV(RTOSCF(2069,(nstcall = 0, F279_2069), (Current)))+ _LNGOFF_0_0_0_0_);
	tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	if ((EIF_BOOLEAN)(tw1 == tw2)) {
		RTHOOK(3);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R3369[Dtype(RTCW(arg1))-773])(arg1, arg2));
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(4);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3352[Dtype(RTCW(arg1))-773])(arg1, ((EIF_INTEGER_32) 1L)));
		tw2 = *(EIF_CHARACTER_32 *)(RTCV(RTOSCF(2069,(nstcall = 0, F279_2069), (Current)))+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			RTHOOK(5);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3429[Dtype(RTCW(arg1))-773])(arg1, ((EIF_INTEGER_32) 2L), ti4_1));
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R3369[Dtype(RTCW(tr1))-773])(tr1, arg2));
			Result = (EIF_BOOLEAN) tb1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS_32}.internal_argument_array */
static EIF_REFERENCE F279_2075_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("internal_argument_array", 278, Current, 1, 0, 2798);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (2075);
#define Result RTOSR(2075)
	RTOC_NEW(Result);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,497,0xFF01,773,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 497, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr2 = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
	(nstcall = -1, F770_4495(RTCW(tr2)));
	ti4_1 = (nstcall = 0, F279_2071(Current));
	(nstcall = -1, F498_2576(RTCW(tr1), tr2, ((EIF_INTEGER_32) 0L), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F281_2086(RTCW(Result)));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > (nstcall = 0, F279_2071(Current)))) break;
		RTHOOK(4);
		tr1 = (nstcall = 0, F279_2076(Current, loc1));
		(nstcall = 1, F498_2600(RTCW(Result), tr1, loc1));
		RTHOOK(5);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("internal_argument_array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("internal_argument_array_compare_objects", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(RTCW(Result)+ _CHROFF_1_0_);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (2075);
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F279_2075 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2075,F279_2075_body,(Current));
}

/* {ARGUMENTS_32}.i_th_argument_string */
EIF_REFERENCE F279_2076 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("i_th_argument_string", 278, Current, 2, 1, 2799);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F279_2071(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F128_1510(RTCW(loc1), ((EIF_INTEGER_32) 0L)));
	RTHOOK(4);
	loc2 = (nstcall = 0, F279_2077(Current, arg1));
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc2 != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(6);
		(nstcall = 1, F128_1526(RTCW(loc1), loc2));
		RTHOOK(7);
		Result = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
		tr1 = (nstcall = 1, F128_1514(RTCW(loc1)));
		(nstcall = -1, F773_4627(RTCW(Result), tr1));
	} else {
		RTHOOK(8);
		Result = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F770_4495(RTCW(Result)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS_32}.i_th_argument_pointer */
EIF_POINTER F279_2077 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("i_th_argument_pointer", 278, Current, 0, 1, 2779);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F279_2071(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_POINTER) eif_builtin_ARGUMENTS_32_i_th_argument_pointer (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit123 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
