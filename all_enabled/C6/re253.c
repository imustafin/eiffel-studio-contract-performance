/*
 * Code for class READABLE_INDEXABLE_ITERATION_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re253.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.make */
void F674_5120 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("make", 673, Current, 1, 1, 9111);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("t_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(23, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tu4_1 = *(EIF_NATURAL_32 *)(loc1);
		*(EIF_NATURAL_32 *)(Current + O3785[dtype-673]) = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(5);
		*(EIF_NATURAL_32 *)(Current + O3785[dtype-673]) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	}
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O3790[dtype-673]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	*(EIF_BOOLEAN *)(Current + O3789[dtype-673]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("target_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_valid", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3778[dtype-673])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("default_step", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3790[dtype-673]) == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("ascending_traversal", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3789[dtype-673])) {
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

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.cursor_index */
EIF_INTEGER_32 F674_5121 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cursor_index", 673, Current, 0, 0, 9112);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3778[dtype-673])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3793[dtype-673]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O3792[dtype-673]);
	ti4_3 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - ti4_2));
	Result = *(EIF_INTEGER_32 *)(Current + O3790[dtype-673]);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3790[dtype-673]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 + Result) - ((EIF_INTEGER_32) 1L)) / ti4_1) + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("positive_index", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.target_index */
EIF_INTEGER_32 F674_5122 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3793[Dtype(Current)-673]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.first_index */
EIF_INTEGER_32 F674_5123 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3792[Dtype(Current)-673]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.last_index */
EIF_INTEGER_32 F674_5124 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3791[Dtype(Current)-673]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.step */
EIF_INTEGER_32 F674_5125 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3790[Dtype(Current)-673]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.new_cursor */
EIF_REFERENCE F674_5126 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 673, Current, 0, 0, 9117);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3781[Dtype(RTCW(Result))-673])(Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_attached", EX_POST);
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

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.reversed */
EIF_REFERENCE F674_5127 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("reversed", 673, Current, 0, 0, 9118);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3786[Dtype(RTCW(Result))-673])(Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_reversed", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3777[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3789[dtype-673]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_step", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3772[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current + O3790[dtype-673]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_target", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tr1 == *(EIF_REFERENCE *)(Current))) {
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

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.incremented */
EIF_REFERENCE F674_5128 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("incremented", 673, Current, 0, 1, 9119);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3790[dtype-673]) + arg1) > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(3);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3787[Dtype(RTCW(Result))-673])(Result, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3790[dtype-673]) + arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_incremented", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3772[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3790[dtype-673]) + arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_direction", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3777[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tb1 == *(EIF_BOOLEAN *)(Current + O3789[dtype-673]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_target", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[Dtype(RTCW(Result))-673])(Result));
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
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.decremented */
EIF_REFERENCE F674_5129 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("decremented", 673, Current, 0, 1, 9120);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3790[dtype-673]) > arg1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(3);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3787[Dtype(RTCW(Result))-673])(Result, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3790[dtype-673]) - arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_incremented", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3772[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3790[dtype-673]) - arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_direction", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3777[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tb1 == *(EIF_BOOLEAN *)(Current + O3789[dtype-673]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_target", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[Dtype(RTCW(Result))-673])(Result));
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
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.with_step */
EIF_REFERENCE F674_5130 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("with_step", 673, Current, 0, 1, 9121);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(3);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3787[Dtype(RTCW(Result))-673])(Result, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("step_set", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3772[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_direction", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3777[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tb1 == *(EIF_BOOLEAN *)(Current + O3789[dtype-673]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_target", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[Dtype(RTCW(Result))-673])(Result));
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
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.version */
static EIF_NATURAL_32 F674_5131_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("version", 673, Current, 0, 0, 9122);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_NATURAL_32) 0;
}

EIF_NATURAL_32 F674_5131 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current + O3785[Dtype(Current)-673]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F674_5132 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("after", 673, Current, 0, 0, 9123);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3778[dtype-673])(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2560[Dtype(RTCW(tr1))-442])(tr1, *(EIF_INTEGER_32 *)(Current + O3793[dtype-673])));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.is_reversed */
EIF_BOOLEAN F674_5133 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3789[Dtype(Current)-673]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.is_valid */
EIF_BOOLEAN F674_5134 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_valid", 673, Current, 1, 0, 9125);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(23, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(loc1);
		Result = (EIF_BOOLEAN)(tu4_1 == *(EIF_NATURAL_32 *)(Current + O3785[dtype-673]));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.is_first */
EIF_BOOLEAN F674_5135 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_first", 673, Current, 0, 0, 9126);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3793[dtype-673]) == *(EIF_INTEGER_32 *)(Current + O3792[dtype-673]))) {
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3778[dtype-673])(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.is_last */
EIF_BOOLEAN F674_5136 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_last", 673, Current, 0, 0, 9127);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3793[dtype-673]) == *(EIF_INTEGER_32 *)(Current + O3791[dtype-673]))) {
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3778[dtype-673])(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.reverse */
void F674_5137 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("reverse", 673, Current, 0, 0, 9128);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tb1 = *(EIF_BOOLEAN *)(Current + O3789[dtype-673]);
		in_assertion = 0;
	}
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current + O3789[dtype-673]) = (EIF_BOOLEAN) (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3789[dtype-673]);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_reversed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3789[dtype-673]) == (EIF_BOOLEAN) !tb1)) {
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

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.set_step */
void F674_5138 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("set_step", 673, Current, 0, 1, 9129);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + O3790[dtype-673]) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("step_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3790[dtype-673]) == arg1)) {
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

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.start */
void F674_5139 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("start", 673, Current, 1, 0, 9130);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current + O3789[dtype-673])) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2558[Dtype(RTCW(loc1))-442])(loc1));
		*(EIF_INTEGER_32 *)(Current + O3792[dtype-673]) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2557[Dtype(RTCW(loc1))-442])(loc1));
		*(EIF_INTEGER_32 *)(Current + O3791[dtype-673]) = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(5);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2558[Dtype(RTCW(loc1))-442])(loc1));
		*(EIF_INTEGER_32 *)(Current + O3791[dtype-673]) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2557[Dtype(RTCW(loc1))-442])(loc1));
		*(EIF_INTEGER_32 *)(Current + O3792[dtype-673]) = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O3793[dtype-673]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O3792[dtype-673]);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("cursor_index_set_to_one", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3768[dtype-673])(Current)) == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("target_index_set_to_first", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3793[dtype-673]) == *(EIF_INTEGER_32 *)(Current + O3792[dtype-673]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("is_first", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3779[dtype-673])(Current))) {
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

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.forth */
void F674_5140 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("forth", 673, Current, 0, 0, 9131);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3711[dtype-639])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3768[dtype-673])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3768[dtype-673])(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current + O3789[dtype-673])) {
		RTHOOK(3);
		(*(EIF_INTEGER_32 *)(Current + O3793[dtype-673])) -= *(EIF_INTEGER_32 *)(Current + O3790[dtype-673]);
	} else {
		RTHOOK(4);
		(*(EIF_INTEGER_32 *)(Current + O3793[dtype-673])) += *(EIF_INTEGER_32 *)(Current + O3790[dtype-673]);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("cursor_index_advanced", EX_POST);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3768[dtype-673])(Current)) == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("cursor_index_advanced", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3768[dtype-673])(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F674_5141 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit253 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
