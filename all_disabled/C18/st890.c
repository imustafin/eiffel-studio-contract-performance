/*
 * Code for class STRING_TABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st890.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_TABLE}.make_caseless */
void F601_4036 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_caseless", 600, Current, 0, 1, 7195);
	RTSA(dtype);
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
	*(EIF_BOOLEAN *)(Current + O3063[dtype-600]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2970[dtype-595])(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current + O2982[dtype-595]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("more_than_minimum", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O2982[dtype-595]) > ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("no_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3057[dtype-595])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("is_case_insensitive", EX_POST);
		if (*(EIF_BOOLEAN *)(Current + O3063[dtype-600])) {
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

/* {STRING_TABLE}.make_equal_caseless */
void F601_4037 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_equal_caseless", 600, Current, 0, 1, 7196);
	RTSA(dtype);
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
	*(EIF_BOOLEAN *)(Current + O3063[dtype-600]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2971[dtype-595])(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current + O2982[dtype-595]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("more_than_minimum", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O2982[dtype-595]) > ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("no_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3057[dtype-595])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("is_case_insensitive", EX_POST);
		if (*(EIF_BOOLEAN *)(Current + O3063[dtype-600])) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("compare_objects", EX_POST);
		if (*(EIF_BOOLEAN *)(Current + O2212[dtype-176])) {
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

/* {STRING_TABLE}.hash_code_of */
EIF_INTEGER_32 F601_4038 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("hash_code_of", 600, Current, 0, 1, 7197);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current + O3063[dtype-600])) {
		RTHOOK(2);
		ti4_1 = (nstcall = 1, F890_6520(RTCW(arg1)));
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F890_6519(RTCW(arg1)));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {STRING_TABLE}.is_case_insensitive */
EIF_BOOLEAN F601_4039 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3063[Dtype(Current)-600]);
}


/* {STRING_TABLE}.same_keys */
EIF_BOOLEAN F601_4040 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTEAA("same_keys", 600, Current, 0, 2, 7199);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current + O3063[dtype-600])) {
		RTHOOK(2);
		tb1 = (nstcall = 1, F890_6552(RTCW(arg1), arg2));
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		tb1 = (nstcall = 1, F890_6555(RTCW(arg1), arg2));
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TABLE}.is_equal */
EIF_BOOLEAN F601_4041 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_equal", 600, Current, 0, 1, 7200);
	RTSA(dtype);
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
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O3063[Dtype(arg1)-600]);
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3063[dtype-600]) == tb1)) {
		RTHOOK(3);
		Result = (nstcall = 0, F596_3946(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
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
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TABLE}.empty_duplicate */
EIF_REFERENCE F601_4042 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("empty_duplicate", 600, Current, 0, 1, 7201);
	RTSA(dtype);
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
	if (*(EIF_BOOLEAN *)(Current + O3063[dtype-600])) {
		RTHOOK(3);
		Result = RTLNSMART(dftype);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3061[Dtype(RTCW(Result))-600])(Result, arg1));
	} else {
		RTHOOK(4);
		Result = RTLNSMART(dftype);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2970[Dtype(RTCW(Result))-595])(Result, arg1));
	}
	RTHOOK(5);
	if (*(EIF_BOOLEAN *)(Current + O2212[dtype-176])) {
		RTHOOK(6);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2214[Dtype(RTCW(Result))-442])(Result));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("empty_duplicate_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

void EIF_Minit890 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
