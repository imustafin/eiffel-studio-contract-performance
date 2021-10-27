/*
 * Code for class HASH_TABLE_ITERATION_CURSOR [INTEGER_32, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha900.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HASH_TABLE_ITERATION_CURSOR}.item */
EIF_INTEGER_32 F762_5203 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("item", 761, Current, 0, 0, 10015);
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
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
	ti4_1 = (nstcall = 1, F536_3085(RTCW(tr2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.key */
EIF_REFERENCE F762_5204 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("key", 761, Current, 0, 0, 10016);
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
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr2))-442])(tr2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_)));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.cursor_index */
EIF_INTEGER_32 F762_5205 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("cursor_index", 761, Current, 3, 0, 10017);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid", EX_PRE);
		RTTE((nstcall = 0, F678_5134(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr2))-530])(tr2));
		loc1 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 <= loc3)) break;
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3001[Dtype(RTCW(tr1))-595])(tr1, loc1));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			loc2--;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(10);
				Result++;
				RTHOOK(11);
				loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
			}
		}
	} else {
		RTHOOK(12);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc1 >= loc3)) break;
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3000[Dtype(RTCW(tr1))-595])(tr1, loc1));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(15);
			loc2--;
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				Result++;
				RTHOOK(18);
				loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
			}
		}
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) < loc2) && (EIF_BOOLEAN) (loc2 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)))) {
		RTHOOK(20);
		Result++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("positive_index", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F762_5206 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("after", 761, Current, 1, 0, 10018);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
	RTHOOK(2);
	Result = '\01';
	tb1 = '\01';
	if (!(EIF_BOOLEAN) !(nstcall = 0, F678_5134(Current))) {
		tb1 = (EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L));
	}
	if (!tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr2))-530])(tr2));
		Result = (EIF_BOOLEAN) (loc1 >= ti4_1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.forth */
void F762_5207 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLIU(5);
	
	RTEAA("forth", 761, Current, 3, 0, 10019);
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
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
	RTHOOK(3);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(7);
			tr3 = *(EIF_REFERENCE *)(Current);
			ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3001[Dtype(RTCW(tr3))-595])(tr3, loc3));
			loc3 = (EIF_INTEGER_32) ti4_3;
			RTHOOK(8);
			loc1++;
		}
	} else {
		RTHOOK(9);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(10);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tr3 = *(EIF_REFERENCE *)(Current);
				tr4 = *(EIF_REFERENCE *)(RTCW(tr3) + _REFACS_1_);
				ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr4))-530])(tr4));
				tb1 = (EIF_BOOLEAN) (loc3 >= ti4_3);
			}
			if (tb1) break;
			RTHOOK(11);
			tr3 = *(EIF_REFERENCE *)(Current);
			ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3000[Dtype(RTCW(tr3))-595])(tr3, loc3));
			loc3 = (EIF_INTEGER_32) ti4_3;
			RTHOOK(12);
			loc1++;
		}
	}
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) = (EIF_INTEGER_32) loc3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("cursor_index_advanced", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3768[dtype-673])(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("cursor_index_advanced", EX_POST);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3768[dtype-673])(Current)) == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
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

/* {HASH_TABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F762_5208 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit900 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
