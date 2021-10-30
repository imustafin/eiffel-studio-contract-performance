/*
 * Code for class ARGUMENTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar119.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARGUMENTS}.argument */
EIF_REFERENCE F181_1917 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("argument", 180, Current, 0, 1, 2006);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F181_1935(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOSCF(1940,(nstcall = 0, F181_1940), (Current));
	tr1 = (nstcall = 1, F279_2057(RTCW(Result), arg1));
	tr2 = (nstcall = 1, F770_4551(RTCW(tr1)));
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

/* {ARGUMENTS}.argument_array */
static EIF_REFERENCE F181_1918_body (EIF_REFERENCE Current)
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
	
	RTEAA("argument_array", 180, Current, 0, 0, 2007);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1918);
#define Result RTOSR(1918)
	RTOC_NEW(Result);
	RTHOOK(1);
	Result = (nstcall = 0, F181_1939(Current));
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
	RTOSE (1918);
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F181_1918 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1918,F181_1918_body,(Current));
}

/* {ARGUMENTS}.command_line */
static EIF_REFERENCE F181_1919_body (EIF_REFERENCE Current)
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
	
	RTEAA("command_line", 180, Current, 1, 0, 2008);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1919);
#define Result RTOSR(1919)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = (nstcall = 1, F1_14(RTOSCF(1920,(nstcall = 0, F181_1920), (Current))));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > (nstcall = 0, F181_1935(Current)))) break;
		RTHOOK(4);
		tr1 = RTMS_EX_H(" ",1,32);
		(nstcall = 1, F778_4900(RTCW(Result), tr1));
		RTHOOK(5);
		tr1 = (nstcall = 0, F181_1917(Current, loc1));
		(nstcall = 1, F778_4900(RTCW(Result), tr1));
		RTHOOK(6);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("Result.count >= command_name.count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(1920,(nstcall = 0, F181_1920), (Current)))+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1919);
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F181_1919 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1919,F181_1919_body,(Current));
}

/* {ARGUMENTS}.command_name */
static EIF_REFERENCE F181_1920_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("command_name", 180, Current, 0, 0, 2009);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1920);
#define Result RTOSR(1920)
	RTOC_NEW(Result);
	RTHOOK(1);
	Result = (nstcall = 0, F181_1917(Current, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if (RTEQ(Result, (nstcall = 0, F181_1917(Current, ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1920);
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F181_1920 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1920,F181_1920_body,(Current));
}

/* {ARGUMENTS}.new_cursor */
EIF_REFERENCE F181_1921 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 180, Current, 0, 0, 2010);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F498_2585(RTCV(RTOSCF(1918,(nstcall = 0, F181_1918), (Current)))));
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

/* {ARGUMENTS}.has_word_option */
EIF_INTEGER_32 F181_1922 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("has_word_option", 180, Current, 0, 1, 1986);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F181_1923(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS}.index_of_word_option */
EIF_INTEGER_32 F181_1923 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("index_of_word_option", 180, Current, 1, 1, 1987);
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
		tb1 = (nstcall = 1, F346_2122(RTCW(arg1)));
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
		if (!(EIF_BOOLEAN) (loc1 > (nstcall = 0, F181_1935(Current)))) {
			tr1 = RTOSCF(1918,(nstcall = 0, F181_1918), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), loc1));
			tb1 = (nstcall = 0, F181_1936(Current, tr2, arg1));
		}
		if (tb1) break;
		RTHOOK(5);
		loc1++;
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc1 <= (nstcall = 0, F181_1935(Current)))) {
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

/* {ARGUMENTS}.index_of_beginning_with_word_option */
EIF_INTEGER_32 F181_1924 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("index_of_beginning_with_word_option", 180, Current, 1, 1, 1988);
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
		tb1 = (nstcall = 1, F346_2122(RTCW(arg1)));
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
		if (!(EIF_BOOLEAN) (loc1 > (nstcall = 0, F181_1935(Current)))) {
			tr1 = RTOSCF(1918,(nstcall = 0, F181_1918), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), loc1));
			tb1 = (nstcall = 0, F181_1937(Current, tr2, arg1));
		}
		if (tb1) break;
		RTHOOK(5);
		loc1++;
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc1 <= (nstcall = 0, F181_1935(Current)))) {
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

/* {ARGUMENTS}.has_character_option */
EIF_INTEGER_32 F181_1925 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("has_character_option", 180, Current, 0, 1, 1989);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F181_1926(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS}.index_of_character_option */
EIF_INTEGER_32 F181_1926 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("index_of_character_option", 180, Current, 1, 1, 1990);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("o_non_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (EIF_CHARACTER_8) '\000'), label_1);
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
		if (!(EIF_BOOLEAN) (loc1 > (nstcall = 0, F181_1935(Current)))) {
			tr1 = RTOSCF(1918,(nstcall = 0, F181_1918), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), loc1));
			tb1 = (nstcall = 0, F181_1938(Current, tr2, arg1));
		}
		if (tb1) break;
		RTHOOK(4);
		loc1++;
	}
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc1 <= (nstcall = 0, F181_1935(Current)))) {
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

/* {ARGUMENTS}.separate_character_option_value */
EIF_REFERENCE F181_1927 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
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
	
	RTEAA("separate_character_option_value", 180, Current, 1, 1, 1991);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("o_non_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (EIF_CHARACTER_8) '\000'), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F181_1926(Current, arg1));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == (nstcall = 0, F181_1935(Current)))) {
			tr1 = RTOSCF(1918,(nstcall = 0, F181_1918), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
			tc1 = (nstcall = 1, F778_4865(RTCW(tr2), ((EIF_INTEGER_32) 1L)));
			tc2 = *(EIF_CHARACTER_8 *)(RTCV(RTOSCF(1933,(nstcall = 0, F181_1933), (Current)))+ _CHROFF_0_0_);
			tb1 = (EIF_BOOLEAN)(tc1 == tc2);
		}
		if (tb1) {
			RTHOOK(5);
			Result = RTMS_EX_H("",0,0);
		} else {
			RTHOOK(6);
			tr1 = RTOSCF(1918,(nstcall = 0, F181_1918), (Current));
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

/* {ARGUMENTS}.separate_word_option_value */
EIF_REFERENCE F181_1928 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
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
	
	RTEAA("separate_word_option_value", 180, Current, 1, 1, 1992);
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
		tb1 = (nstcall = 1, F346_2122(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (nstcall = 0, F181_1923(Current, arg1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == (nstcall = 0, F181_1935(Current)))) {
			tr1 = RTOSCF(1918,(nstcall = 0, F181_1918), (Current));
			tr2 = (nstcall = 1, F498_2581(RTCW(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
			tc1 = (nstcall = 1, F778_4865(RTCW(tr2), ((EIF_INTEGER_32) 1L)));
			tc2 = *(EIF_CHARACTER_8 *)(RTCV(RTOSCF(1933,(nstcall = 0, F181_1933), (Current)))+ _CHROFF_0_0_);
			tb1 = (EIF_BOOLEAN)(tc1 == tc2);
		}
		if (tb1) {
			RTHOOK(6);
			Result = RTMS_EX_H("",0,0);
		} else {
			RTHOOK(7);
			tr1 = RTOSCF(1918,(nstcall = 0, F181_1918), (Current));
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

/* {ARGUMENTS}.coalesced_option_character_value */
EIF_REFERENCE F181_1929 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("coalesced_option_character_value", 180, Current, 0, 1, 1993);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F181_1930(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS}.coalesced_character_option_value */
EIF_REFERENCE F181_1930 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("coalesced_character_option_value", 180, Current, 2, 1, 1994);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("o_non_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (EIF_CHARACTER_8) '\000'), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F181_1926(Current, arg1));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		loc2 = RTOSCF(1918,(nstcall = 0, F181_1918), (Current));
		tr1 = (nstcall = 1, F498_2581(RTCW(loc2), loc1));
		tr2 = (nstcall = 1, F1_14(tr1));
		loc2 = (EIF_REFERENCE) tr2;
		RTHOOK(5);
		tc1 = *(EIF_CHARACTER_8 *)(RTCV(RTOSCF(1933,(nstcall = 0, F181_1933), (Current)))+ _CHROFF_0_0_);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\000')) {
			RTHOOK(6);
			(nstcall = 1, F778_4920(RTCW(loc2), ((EIF_INTEGER_32) 1L)));
		}
		RTHOOK(7);
		ti4_1 = (nstcall = 1, F776_4801(RTCW(loc2), arg1, ((EIF_INTEGER_32) 1L)));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_1_0_2_);
		tr1 = (nstcall = 1, F778_4946(RTCW(loc2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS}.coalesced_option_word_value */
EIF_REFERENCE F181_1931 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("coalesced_option_word_value", 180, Current, 0, 1, 1995);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F181_1932(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS}.coalesced_word_option_value */
EIF_REFERENCE F181_1932 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("coalesced_word_option_value", 180, Current, 2, 1, 1996);
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
		tb1 = (nstcall = 1, F346_2122(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (nstcall = 0, F181_1924(Current, arg1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		loc2 = RTOSCF(1918,(nstcall = 0, F181_1918), (Current));
		tr1 = (nstcall = 1, F498_2581(RTCW(loc2), loc1));
		tr2 = (nstcall = 1, F1_14(tr1));
		loc2 = (EIF_REFERENCE) tr2;
		RTHOOK(6);
		tc1 = *(EIF_CHARACTER_8 *)(RTCV(RTOSCF(1933,(nstcall = 0, F181_1933), (Current)))+ _CHROFF_0_0_);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\000')) {
			RTHOOK(7);
			(nstcall = 1, F778_4920(RTCW(loc2), ((EIF_INTEGER_32) 1L)));
		}
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_1_0_2_);
		tr1 = (nstcall = 1, F778_4946(RTCW(loc2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS}.option_sign */
static EIF_REFERENCE F181_1933_body (EIF_REFERENCE Current)
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
	
	RTEAA("option_sign", 180, Current, 0, 0, 1997);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1933);
#define Result RTOSR(1933)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(725, 0x01).id, 725, _OBJSIZ_0_1_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(nstcall = 1, F726_4356(RTCW(Result), (EIF_CHARACTER_8) '-'));
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1933);
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F181_1933 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1933,F181_1933_body,(Current));
}

/* {ARGUMENTS}.set_option_sign */
void F181_1934 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("set_option_sign", 180, Current, 0, 1, 1998);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(1933,(nstcall = 0, F181_1933), (Current));
	(nstcall = 1, F726_4356(RTCW(tr1), arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ARGUMENTS}.argument_count */
EIF_INTEGER_32 F181_1935 (EIF_REFERENCE Current)
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
	
	RTEAA("argument_count", 180, Current, 0, 0, 1999);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 1, F279_2071(RTOSCF(1940,(nstcall = 0, F181_1940), (Current))));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("argument_count_positive", EX_POST);
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

/* {ARGUMENTS}.option_word_equal */
EIF_BOOLEAN F181_1936 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
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
	
	RTEAA("option_word_equal", 180, Current, 0, 2, 2000);
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
	tc1 = *(EIF_CHARACTER_8 *)(RTCV(RTOSCF(1933,(nstcall = 0, F181_1933), (Current)))+ _CHROFF_0_0_);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000')) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) RTEQ(arg1, arg2);
	} else {
		RTHOOK(5);
		tb1 = '\0';
		tb2 = (nstcall = 1, F346_2122(RTCW(arg1)));
		if ((EIF_BOOLEAN) !tb2) {
			tc1 = (nstcall = 1, F778_4865(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
			tc2 = *(EIF_CHARACTER_8 *)(RTCV(RTOSCF(1933,(nstcall = 0, F181_1933), (Current)))+ _CHROFF_0_0_);
			tb1 = (EIF_BOOLEAN)(tc1 == tc2);
		}
		if (tb1) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tr1 = (nstcall = 1, F778_4946(RTCW(arg1), ((EIF_INTEGER_32) 2L), ti4_1));
			Result = (EIF_BOOLEAN) RTEQ(tr1, arg2);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS}.option_word_begins_with */
EIF_BOOLEAN F181_1937 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
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
	
	RTEAA("option_word_begins_with", 180, Current, 0, 2, 2001);
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
	tc1 = *(EIF_CHARACTER_8 *)(RTCV(RTOSCF(1933,(nstcall = 0, F181_1933), (Current)))+ _CHROFF_0_0_);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000')) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 >= ti4_2);
	}
	if (tb1) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr1 = (nstcall = 1, F778_4946(RTCW(arg1), ((EIF_INTEGER_32) 1L), ti4_1));
		Result = (EIF_BOOLEAN) RTEQ(tr1, arg2);
	} else {
		RTHOOK(5);
		tb1 = '\0';
		tc1 = (nstcall = 1, F778_4865(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
		tc2 = *(EIF_CHARACTER_8 *)(RTCV(RTOSCF(1933,(nstcall = 0, F181_1933), (Current)))+ _CHROFF_0_0_);
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN) (ti4_1 > ti4_2);
		}
		if (tb1) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			tr1 = (nstcall = 1, F778_4946(RTCW(arg1), ((EIF_INTEGER_32) 2L), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
			Result = (EIF_BOOLEAN) RTEQ(tr1, arg2);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS}.option_character_equal */
EIF_BOOLEAN F181_1938 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("option_character_equal", 180, Current, 0, 2, 2002);
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
	tc1 = *(EIF_CHARACTER_8 *)(RTCV(RTOSCF(1933,(nstcall = 0, F181_1933), (Current)))+ _CHROFF_0_0_);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000')) {
		RTHOOK(3);
		tb1 = (nstcall = 1, F776_4823(RTCW(arg1), arg2));
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(4);
		tc1 = (nstcall = 1, F778_4865(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
		tc2 = *(EIF_CHARACTER_8 *)(RTCV(RTOSCF(1933,(nstcall = 0, F181_1933), (Current)))+ _CHROFF_0_0_);
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tr1 = (nstcall = 1, F778_4946(RTCW(arg1), ((EIF_INTEGER_32) 2L), ti4_1));
			tb1 = (nstcall = 1, F776_4823(RTCW(tr1), arg2));
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

/* {ARGUMENTS}.internal_argument_array */
EIF_REFERENCE F181_1939 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("internal_argument_array", 180, Current, 1, 0, 2003);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,497,0xFF01,777,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 497, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr1 = RTMS_EX_H("",0,0);
	ti4_1 = (nstcall = 0, F181_1935(Current));
	(nstcall = -1, F498_2576(RTCW(Result), tr1, ((EIF_INTEGER_32) 0L), ti4_1));
	RTHOOK(2);
	(nstcall = 1, F281_2086(RTCW(Result)));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > (nstcall = 0, F181_1935(Current)))) break;
		RTHOOK(4);
		tr1 = (nstcall = 0, F181_1917(Current, loc1));
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
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {ARGUMENTS}.internal_arguments */
static EIF_REFERENCE F181_1940_body (EIF_REFERENCE Current)
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
	
	RTEAA("internal_arguments", 180, Current, 0, 0, 2004);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1940);
#define Result RTOSR(1940)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(278, 0x01).id, 278, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1940);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F181_1940 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1940,F181_1940_body,(Current));
}

/* {ARGUMENTS}._invariant */
void F181_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 118, Current, 0, 0);
	RTIT("argument_array_consistent", Current);
	tr1 = RTOSCF(1918,(nstcall = 0, F181_1918), (Current));
	if (RTEQ(tr1, (nstcall = 0, F181_1939(Current)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit119 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
