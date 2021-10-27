/*
 * Code for class GENERAL_SPECIAL_ITERATION_CURSOR [REAL_64, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ge638.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.item */
EIF_REAL_64 F699_5154 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item", 698, Current, 0, 0, 9592);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F699_5163(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr8_1 = (nstcall = 1, F538_3085(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O3796[dtype-691])));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.cursor_index */
EIF_INTEGER_32 F699_5155 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cursor_index", 698, Current, 0, 0, 9593);
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
	Result = *(EIF_INTEGER_32 *)(Current + O3796[dtype-691]);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3797[dtype-706])(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L)) - ti4_1);
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

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.target_index */
EIF_INTEGER_32 F699_5156 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("target_index", 698, Current, 0, 0, 9594);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O3796[dtype-691]);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3770[dtype-673])(Current));
	ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3797[dtype-706])(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.last_index */
EIF_INTEGER_32 F699_5157 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_index", 698, Current, 0, 0, 9595);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O3798[dtype-691]);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3770[dtype-673])(Current));
	ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3797[dtype-706])(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.step */
EIF_INTEGER_32 F699_5158 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.reversed */
EIF_REFERENCE F699_5159 (EIF_REFERENCE Current)
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
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("reversed", 698, Current, 0, 0, 9597);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,681,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3713,Y3713_gen_type,Dftype(Current),624);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 681, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[dtype-673])(Current));
	(nstcall = -1, F682_5120(RTCW(Result), tr1));
	RTHOOK(2);
	(nstcall = 1, F682_5137(RTCW(Result)));
	RTHOOK(3);
	(nstcall = 1, F682_5139(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_reversed", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3777[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) !(nstcall = 0, F699_5164(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_step", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3772[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F699_5158(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_target", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tr1 == (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[dtype-673])(Current)))) {
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

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.incremented */
EIF_REFERENCE F699_5160 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("incremented", 698, Current, 0, 1, 9598);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) ((nstcall = 0, F699_5158(Current)) + arg1) > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,681,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3713,Y3713_gen_type,Dftype(Current),624);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 681, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[dtype-673])(Current));
	(nstcall = -1, F682_5120(RTCW(Result), tr1));
	RTHOOK(3);
	(nstcall = 1, F682_5138(RTCW(Result), (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + arg1)));
	RTHOOK(4);
	(nstcall = 1, F682_5139(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_incremented", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3772[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((nstcall = 0, F699_5158(Current)) + arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_direction", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3777[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tb1 == (nstcall = 0, F699_5164(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("same_target", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tr1 == (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[dtype-673])(Current)))) {
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

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.decremented */
EIF_REFERENCE F699_5161 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("decremented", 698, Current, 0, 1, 9599);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, F699_5158(Current)) > arg1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,681,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3713,Y3713_gen_type,Dftype(Current),624);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 681, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[dtype-673])(Current));
	(nstcall = -1, F682_5120(RTCW(Result), tr1));
	RTHOOK(3);
	(nstcall = 1, F682_5138(RTCW(Result), (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) - arg1)));
	RTHOOK(4);
	(nstcall = 1, F682_5139(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_incremented", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3772[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((nstcall = 0, F699_5158(Current)) - arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_direction", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3777[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tb1 == (nstcall = 0, F699_5164(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("same_target", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tr1 == (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[dtype-673])(Current)))) {
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

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.with_step */
EIF_REFERENCE F699_5162 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("with_step", 698, Current, 0, 1, 9600);
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
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,681,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3713,Y3713_gen_type,Dftype(Current),624);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 681, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[dtype-673])(Current));
	(nstcall = -1, F682_5120(RTCW(Result), tr1));
	RTHOOK(3);
	(nstcall = 1, F682_5138(RTCW(Result), arg1));
	RTHOOK(4);
	(nstcall = 1, F682_5139(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("step_set", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3772[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_direction", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3777[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tb1 == (nstcall = 0, F699_5164(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("same_target", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[Dtype(RTCW(Result))-673])(Result));
		if ((EIF_BOOLEAN)(tr1 == (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[dtype-673])(Current)))) {
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

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.after */
EIF_BOOLEAN F699_5163 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("after", 698, Current, 0, 0, 9601);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3796[dtype-691]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O3798[dtype-691]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.is_reversed */
EIF_BOOLEAN F699_5164 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.is_valid */
EIF_BOOLEAN F699_5165 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_valid", 698, Current, 0, 0, 9603);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3782[dtype-673])(Current));
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2558[Dtype(RTCW(tr1))-442])(tr1));
	ti4_2 = (nstcall = 0, F699_5157(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.is_first */
EIF_BOOLEAN F699_5166 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_first", 698, Current, 0, 0, 9604);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3796[dtype-691]);
	ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3797[dtype-706])(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.is_last */
EIF_BOOLEAN F699_5167 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_last", 698, Current, 0, 0, 9605);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3796[dtype-691]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O3798[dtype-691]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.start */
void F699_5168 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("start", 698, Current, 0, 0, 9606);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3797[dtype-706])(Current));
	*(EIF_INTEGER_32 *)(Current + O3796[dtype-691]) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("cursor_index_set_to_one", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F699_5155(Current)) == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("target_index_set_to_first", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F699_5156(Current)) == (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3770[dtype-673])(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_first", EX_POST);
		if ((nstcall = 0, F699_5166(Current))) {
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

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.forth */
void F699_5169 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("forth", 698, Current, 0, 0, 9607);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F699_5163(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F699_5155(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current + O3796[dtype-691]))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("cursor_index_advanced", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F699_5155(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.area */
EIF_REFERENCE F699_5170 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {GENERAL_SPECIAL_ITERATION_CURSOR}.area_index */
EIF_INTEGER_32 F699_5171 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3796[Dtype(Current)-691]);
}


/* {GENERAL_SPECIAL_ITERATION_CURSOR}.area_last_index */
EIF_INTEGER_32 F699_5173 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3798[Dtype(Current)-691]);
}


void EIF_Minit638 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
