/*
 * Code for class HASH_TABLE [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha582.h"
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

/* {HASH_TABLE}.make */
void F575_2859 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTEAA("make", 574, Current, 4, 1, 6094);
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
	loc1 = RTLNS(eif_new_type(444, 0x01).id, 444, _OBJSIZ_0_1_0_1_0_0_0_0_);
	RTHOOK(3);
	ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 2L));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F445_2188(RTCW(loc1), loc4));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O2248[dtype-574]) = (EIF_INTEGER_32) loc4;
	RTHOOK(7);
	tr1 = RTLNSP2(eif_final_id(Y2276,Y2276_gen_type,dftype,574).id,EO_REF,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_REFERENCE), EIF_FALSE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2276[dtype-574]) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTLNSP2(eif_final_id(Y2277,Y2277_gen_type,dftype,574).id,EO_REF,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_REFERENCE), EIF_FALSE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2277[dtype-574]) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,730,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_BOOLEAN), EIF_TRUE);
	}
	(nstcall = -1, F594_3089(RTCW(tr1), (EIF_BOOLEAN) 0, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2279[dtype-574]) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,586,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	}
	(nstcall = -1, F587_3089(RTCW(tr1), ((EIF_INTEGER_32) -1L), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2278[dtype-574]) = (EIF_REFERENCE) tr1;
	RTHOOK(11);
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(12);
	*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(14);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(15);
	tr1 = RTCCL(loc2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	RTHOOK(16);
	*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(17);
	*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(18);
	*(EIF_INTEGER_32 *)(Current + O2290[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
	RTHOOK(19);
	tr1 = RTCCL(loc2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2291[dtype-574]) = (EIF_REFERENCE) tr1;
	RTHOOK(20);
	tr1 = RTCCL(loc3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2292[dtype-574]) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("more_than_minimum", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O2248[dtype-574]) > ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("no_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2323[dtype-574])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.make_equal */
void F575_2860 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make_equal", 574, Current, 0, 1, 6095);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2236[dtype-574])(Current, arg1));
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1841[dtype-444])(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("more_than_minimum", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O2248[dtype-574]) > ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("no_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2323[dtype-574])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("compare_objects", EX_POST);
		if (*(EIF_BOOLEAN *)(Current + O1839[dtype-280])) {
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

/* {HASH_TABLE}.accommodate */
void F575_2861 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLIU(8);
	
	RTEAA("accommodate", 574, Current, 5, 1, 6096);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]);
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
	ti4_3 = eif_max_int32 (ti4_2,arg1);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2274[dtype-574])(Current, ti4_3));
	RTHOOK(3);
	loc4 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	RTHOOK(4);
	loc5 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	RTHOOK(5);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(loc5))-585])(loc5));
	loc2 = (EIF_INTEGER_32) ti4_2;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(7);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2294[dtype-574])(Current, loc1))) {
			RTHOOK(8);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(loc4))-496])(loc4, loc1));
			tr2 = RTCCL(tr1);
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(loc5))-496])(loc5, loc1));
			tr4 = RTCCL(tr3);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1888[Dtype(RTCW(loc3))-496])(loc3, tr2, tr4));
		}
		RTHOOK(9);
		loc1++;
	}
	RTHOOK(10);
	if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		ti4_2 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
		loc1 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(12);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(loc4))-496])(loc4, loc1));
		tr2 = RTCCL(tr1);
		tr3 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr3))-496])(tr3, loc1));
		tr3 = RTCCL(tr4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1888[Dtype(RTCW(loc3))-496])(loc3, tr2, tr3));
	}
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O2276[Dtype(loc3)-574]);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2297[dtype-574])(Current, tr1));
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O2277[Dtype(loc3)-574]);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2299[dtype-574])(Current, tr1));
	RTHOOK(15);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O2279[Dtype(loc3)-574]);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2300[dtype-574])(Current, tr1));
	RTHOOK(16);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O2278[Dtype(loc3)-574]);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2301[dtype-574])(Current, tr1));
	RTHOOK(17);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc3) + O2248[Dtype(loc3)-574]);
	*(EIF_INTEGER_32 *)(Current + O2248[dtype-574]) = (EIF_INTEGER_32) ti4_2;
	RTHOOK(18);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc3) + O2282[Dtype(loc3)-574]);
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) ti4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("count_not_changed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) < *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.found_item */
EIF_REFERENCE F575_2862 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2239[Dtype(Current)-574]);
}


/* {HASH_TABLE}.definite_item */
EIF_REFERENCE F575_2863 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("definite_item", 574, Current, 2, 1, 6098);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr1)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current + O2280[dtype-574]);
	RTHOOK(4);
	loc2 = *(EIF_INTEGER_32 *)(Current + O2285[dtype-574]);
	RTHOOK(5);
	tr1 = RTCCL(arg1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, tr1));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, ti4_1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) loc2;
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.item */
EIF_REFERENCE F575_2864 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLR(6,loc9);
	RTLR(7,loc10);
	RTLR(8,loc11);
	RTLR(9,loc12);
	RTLIU(10);
	
	RTEAA("item", 574, Current, 12, 1, 6099);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
			tr2 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(tr2), *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, ti4_1));
			Result = (EIF_REFERENCE) RTCCL(tr2);
		}
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		RTHOOK(7);
		loc11 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		RTHOOK(8);
		loc6 = *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
		RTHOOK(9);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		tr1 = RTCCL(arg1);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2247[dtype-574])(Current, tr1));
		RTHOOK(11);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(12);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(14);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(15);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(loc10), loc5));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(loc9))-496])(loc9, loc4));
				loc12 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(18);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2249[dtype-574])(Current, tr1, tr2))) {
					RTHOOK(19);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(20);
					tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, loc4));
					Result = (EIF_REFERENCE) RTCCL(tr2);
				}
			} else {
				RTHOOK(21);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					RTHOOK(22);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(23);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						RTHOOK(24);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						
						RTHOOK(25);
						tb1 = (nstcall = 1, F594_3091(RTCW(loc11), loc4));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(26);
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(27);
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(28);
			loc8--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(29);
		RTCT("default_value_if_not_present", EX_POST);
		tb1 = '\01';
		tr1 = RTCCL(arg1);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr1))) {
			tb1 = RTCEQ(Result, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2304[dtype-574])(Current)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.at */
EIF_REFERENCE F575_2865 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLR(6,loc9);
	RTLR(7,loc10);
	RTLR(8,loc11);
	RTLR(9,loc12);
	RTLIU(10);
	
	RTEAA("at", 574, Current, 12, 1, 6100);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
			tr2 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(tr2), *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, ti4_1));
			Result = (EIF_REFERENCE) RTCCL(tr2);
		}
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		RTHOOK(7);
		loc11 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		RTHOOK(8);
		loc6 = *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
		RTHOOK(9);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		tr1 = RTCCL(arg1);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2247[dtype-574])(Current, tr1));
		RTHOOK(11);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(12);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(14);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(15);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(loc10), loc5));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(loc9))-496])(loc9, loc4));
				loc12 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(18);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2249[dtype-574])(Current, tr1, tr2))) {
					RTHOOK(19);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(20);
					tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, loc4));
					Result = (EIF_REFERENCE) RTCCL(tr2);
				}
			} else {
				RTHOOK(21);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					RTHOOK(22);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(23);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						RTHOOK(24);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						
						RTHOOK(25);
						tb1 = (nstcall = 1, F594_3091(RTCW(loc11), loc4));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(26);
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(27);
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(28);
			loc8--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(29);
		RTCT("default_value_if_not_present", EX_POST);
		tb1 = '\01';
		tr1 = RTCCL(arg1);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr1))) {
			tb1 = RTCEQ(Result, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2304[dtype-574])(Current)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.has */
EIF_BOOLEAN F575_2866 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLR(6,tr1);
	RTLR(7,loc12);
	RTLR(8,tr2);
	RTLIU(9);
	
	RTEAA("has", 574, Current, 12, 1, 6101);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		RTHOOK(7);
		loc11 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		RTHOOK(8);
		loc6 = *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
		RTHOOK(9);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		tr1 = RTCCL(arg1);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2247[dtype-574])(Current, tr1));
		RTHOOK(11);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(12);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(14);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(15);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(loc10), loc5));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(loc9))-496])(loc9, loc4));
				loc12 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(18);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2249[dtype-574])(Current, tr1, tr2))) {
					RTHOOK(19);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(20);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				RTHOOK(21);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					RTHOOK(22);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(23);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						RTHOOK(24);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						
						RTHOOK(25);
						tb1 = (nstcall = 1, F594_3091(RTCW(loc11), loc4));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(26);
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(27);
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(28);
			loc8--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(29);
		RTCT("default_case", EX_POST);
		tb1 = '\01';
		if (RTCEQ(arg1, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2303[dtype-574])(Current)))) {
			tb1 = (EIF_BOOLEAN)(Result == *(EIF_BOOLEAN *)(Current + O2281[dtype-574]));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.has_key */
EIF_BOOLEAN F575_2867 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("has_key", 574, Current, 2, 1, 6102);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + O2280[dtype-574]);
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, tr1));
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current));
	RTHOOK(4);
	if (Result) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, ti4_1));
		tr1 = RTCCL(tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		tr1 = RTCCL(loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("default_case", EX_POST);
		tb1 = '\01';
		if (RTCEQ(arg1, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2303[dtype-574])(Current)))) {
			tb1 = (EIF_BOOLEAN)(Result == *(EIF_BOOLEAN *)(Current + O2281[dtype-574]));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("found", EX_POST);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("item_if_found", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
			tr1 = *(EIF_REFERENCE *)(Current + O2239[dtype-574]);
			tr2 = RTCCL(arg1);
			tb1 = RTCEQ(tr1, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr2)));
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

/* {HASH_TABLE}.has_item */
EIF_BOOLEAN F575_2868 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTEAA("has_item", 574, Current, 3, 1, 6103);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		tr2 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		ti4_1 = (nstcall = 1, F587_3091(RTCW(tr2), *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, ti4_1));
		Result = (EIF_BOOLEAN) RTCEQ(arg1, tr2);
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN) !Result) {
		RTHOOK(4);
		loc3 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		RTHOOK(5);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(loc3))-585])(loc3));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		if (*(EIF_BOOLEAN *)(Current + O1839[dtype-280])) {
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				RTHOOK(8);
				Result = '\0';
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2294[dtype-574])(Current, loc1))) {
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(loc3))-496])(loc3, loc1));
					Result = RTEQ(arg1, tr1);
				}
				RTHOOK(9);
				loc1++;
			}
		} else {
			for (;;) {
				RTHOOK(10);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				RTHOOK(11);
				Result = '\0';
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2294[dtype-574])(Current, loc1))) {
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(loc3))-496])(loc3, loc1));
					Result = RTCEQ(arg1, tr1);
				}
				RTHOOK(12);
				loc1++;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1837[dtype-444])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.current_keys */
EIF_REFERENCE F575_2869 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("current_keys", 574, Current, 2, 0, 6104);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1837[dtype-444])(Current))) {
		RTHOOK(2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,497,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y1890,Y1890_gen_type,dftype,415);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			Result = RTLNS(typres0.id, 497, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2123[Dtype(RTCW(Result))-497])(Result));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current + O2282[dtype-574]);
		RTHOOK(4);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2261[dtype-574])(Current));
		RTHOOK(5);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,497,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y1890,Y1890_gen_type,dftype,415);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			Result = RTLNS(typres0.id, 497, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2245[dtype-574])(Current));
		tr2 = RTCCL(tr1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2124[Dtype(RTCW(Result))-497])(Result, tr2, ((EIF_INTEGER_32) 1L), ti4_1));
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2262[dtype-574])(Current));
		for (;;) {
			RTHOOK(8);
			if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2258[dtype-574])(Current))) break;
			RTHOOK(9);
			loc1++;
			RTHOOK(10);
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2245[dtype-574])(Current));
			tr2 = RTCCL(tr1);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1888[Dtype(RTCW(Result))-496])(Result, tr2, (EIF_REFERENCE) &loc1));
			RTHOOK(11);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2262[dtype-574])(Current));
		}
		RTHOOK(12);
		*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("good_count", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1865[Dtype(RTCW(Result))-470])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.item_for_iteration */
EIF_REFERENCE F575_2870 (EIF_REFERENCE Current)
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
	
	RTEAA("item_for_iteration", 574, Current, 0, 0, 6105);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2258[dtype-574])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, *(EIF_INTEGER_32 *)(Current + O2282[dtype-574])));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.key_for_iteration */
EIF_REFERENCE F575_2871 (EIF_REFERENCE Current)
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
	
	RTEAA("key_for_iteration", 574, Current, 0, 0, 6106);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2258[dtype-574])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, *(EIF_INTEGER_32 *)(Current + O2282[dtype-574])));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.cursor */
EIF_REFERENCE F575_2872 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("cursor", 574, Current, 0, 0, 6107);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(115, 0x01).id, 115, _OBJSIZ_0_0_0_1_0_0_0_0_);
	(nstcall = -1, F116_1323(RTCW(Result), *(EIF_INTEGER_32 *)(Current + O2282[dtype-574])));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("cursor_not_void", EX_POST);
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

/* {HASH_TABLE}.new_cursor */
EIF_REFERENCE F575_2873 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 574, Current, 0, 0, 6108);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,224,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y1738,Y1738_gen_type,Dftype(Current),168);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y1890,Y1890_gen_type,Dftype(Current),415);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 224, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1786[Dtype(RTCW(Result))-210])(Result, Current));
	RTHOOK(2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1783[Dtype(RTCW(Result))-210])(Result));
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

/* {HASH_TABLE}.iteration_item */
EIF_REFERENCE F575_2874 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("iteration_item", 574, Current, 0, 1, 6109);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2103[dtype-496])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.hash_code_of */
EIF_INTEGER_32 F575_2875 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("hash_code_of", 574, Current, 0, 1, 6110);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2523[Dtype(RTCW(arg1))-645])(arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("non_negative", EX_POST);
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

/* {HASH_TABLE}.count */
EIF_INTEGER_32 F575_2876 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2326[Dtype(Current)-574]);
}


/* {HASH_TABLE}.capacity */
EIF_INTEGER_32 F575_2877 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2248[Dtype(Current)-574]);
}


/* {HASH_TABLE}.occurrences */
EIF_INTEGER_32 F575_2878 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("occurrences", 574, Current, 1, 1, 6113);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + O2282[dtype-574]);
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current + O1839[dtype-280])) {
		RTHOOK(3);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2261[dtype-574])(Current));
		for (;;) {
			RTHOOK(4);
			if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2258[dtype-574])(Current))) break;
			RTHOOK(5);
			if (RTEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2244[dtype-574])(Current)), arg1)) {
				RTHOOK(6);
				Result++;
			}
			RTHOOK(7);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2262[dtype-574])(Current));
		}
	} else {
		RTHOOK(8);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2261[dtype-574])(Current));
		for (;;) {
			RTHOOK(9);
			if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2258[dtype-574])(Current))) break;
			RTHOOK(10);
			if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2244[dtype-574])(Current)), arg1)) {
				RTHOOK(11);
				Result++;
			}
			RTHOOK(12);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2262[dtype-574])(Current));
		}
	}
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("non_negative_occurrences", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {HASH_TABLE}.iteration_lower */
EIF_INTEGER_32 F575_2879 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("iteration_lower", 574, Current, 0, 0, 6114);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2266[dtype-574])(Current, ((EIF_INTEGER_32) -1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.iteration_upper */
EIF_INTEGER_32 F575_2880 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("iteration_upper", 574, Current, 0, 0, 6115);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2267[dtype-574])(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.is_equal */
EIF_BOOLEAN F575_2881 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("is_equal", 574, Current, 1, 1, 6116);
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
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O2326[Dtype(arg1)-574]);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) == ti4_1)) {
		tb3 = *(EIF_BOOLEAN *)(RTCW(arg1) + O1839[Dtype(arg1)-280]);
		tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O1839[dtype-280]) == tb3);
	}
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(arg1) + O2281[Dtype(arg1)-574]);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) == tb2);
	}
	if (tb1) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1737[dtype-180])(Current));
		loc1 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1723[Dtype(loc1)-162])(loc1));
			if (tb1) break;
			RTHOOK(5);
			if ((EIF_BOOLEAN) !Result) break;
			RTHOOK(6);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1735[Dtype(loc1)-224])(loc1));
			tr2 = RTCCL(tr1);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2264[Dtype(RTCW(arg1))-574])(arg1, tr2));
			RTHOOK(7);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[Dtype(RTCW(arg1))-574])(arg1));
			if (tb2) {
				RTHOOK(8);
				if (*(EIF_BOOLEAN *)(Current + O1839[dtype-280])) {
					RTHOOK(9);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1722[Dtype(loc1)-162])(loc1));
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2239[Dtype(RTCW(arg1))-574])(arg1));
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
				} else {
					RTHOOK(10);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1722[Dtype(loc1)-162])(loc1));
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2239[Dtype(RTCW(arg1))-574])(arg1));
					Result = (EIF_BOOLEAN) RTCEQ(tr1, tr2);
				}
			} else {
				RTHOOK(11);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(12);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1724[Dtype(loc1)-162])(loc1));
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
		tb2 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb2 = Result;
		}
		if (tb2) {
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

/* {HASH_TABLE}.same_keys */
EIF_BOOLEAN F575_2882 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("same_keys", 574, Current, 0, 2, 6117);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) RTEQ(arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.disjoint */
EIF_BOOLEAN F575_2883 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("disjoint", 574, Current, 1, 1, 6118);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tb1 = '\01';
	if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1837[dtype-444])(Current))) {
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1837[Dtype(RTCW(arg1))-444])(arg1));
		tb1 = tb2;
	}
	if (!tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1737[Dtype(RTCW(arg1))-180])(arg1));
		loc1 = (EIF_REFERENCE) tr1;
		tb1 = EIF_FALSE;
		for (;;) {
			if (tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1723[Dtype(loc1)-162])(loc1));
			if (tb2) break;
			RTHOOK(3);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1735[Dtype(loc1)-224])(loc1));
			tr2 = RTCCL(tr1);
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr2));
			RTHOOK(4);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1724[Dtype(loc1)-162])(loc1));
		}
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.full */
EIF_BOOLEAN F575_2884 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {HASH_TABLE}.extendible */
EIF_BOOLEAN F575_2885 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {HASH_TABLE}.prunable */
EIF_BOOLEAN F575_2886 (EIF_REFERENCE Current)
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
	
	RTEAA("prunable", 574, Current, 0, 0, 6121);
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

/* {HASH_TABLE}.conflict */
EIF_BOOLEAN F575_2887 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("conflict", 574, Current, 0, 0, 6122);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2285[dtype-574]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.inserted */
EIF_BOOLEAN F575_2888 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("inserted", 574, Current, 0, 0, 6123);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2285[dtype-574]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.replaced */
EIF_BOOLEAN F575_2889 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("replaced", 574, Current, 0, 0, 6124);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2285[dtype-574]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 32L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.removed */
EIF_BOOLEAN F575_2890 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("removed", 574, Current, 0, 0, 6125);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2285[dtype-574]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.found */
EIF_BOOLEAN F575_2891 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("found", 574, Current, 0, 0, 6126);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2285[dtype-574]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.not_found */
EIF_BOOLEAN F575_2892 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("not_found", 574, Current, 0, 0, 6127);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2285[dtype-574]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.after */
EIF_BOOLEAN F575_2893 (EIF_REFERENCE Current)
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
	
	RTEAA("after", 574, Current, 0, 0, 6128);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2296[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2282[dtype-574])));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.off */
EIF_BOOLEAN F575_2894 (EIF_REFERENCE Current)
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
	
	RTEAA("off", 574, Current, 0, 0, 6129);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2296[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2282[dtype-574])));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.valid_cursor */
EIF_BOOLEAN F575_2895 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("valid_cursor", 574, Current, 2, 1, 6130);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(115, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_0_0_0_0_);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		Result = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2296[dtype-574])(Current, loc1))) {
			Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2295[dtype-574])(Current, loc1));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.valid_key */
EIF_BOOLEAN F575_2896 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("valid_key", 574, Current, 0, 1, 6131);
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

/* {HASH_TABLE}.valid_iteration_index */
EIF_BOOLEAN F575_2897 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("valid_iteration_index", 574, Current, 0, 1, 6132);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2295[dtype-574])(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_if_in_index_set", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2100[dtype-496])(Current)) <= arg1)) {
				tb2 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2101[dtype-496])(Current)));
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

/* {HASH_TABLE}.start */
void F575_2898 (EIF_REFERENCE Current)
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
	
	RTEAA("start", 574, Current, 0, 0, 6133);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2266[dtype-574])(Current, ((EIF_INTEGER_32) -1L)));
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.forth */
void F575_2899 (EIF_REFERENCE Current)
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
	
	RTEAA("forth", 574, Current, 0, 0, 6134);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2258[dtype-574])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2266[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2282[dtype-574])));
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.go_to */
void F575_2900 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("go_to", 574, Current, 1, 1, 6135);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_cursor", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2259[dtype-574])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(115, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_0_0_0_0_);
		*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.search */
void F575_2901 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("search", 574, Current, 2, 1, 6136);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + O2280[dtype-574]);
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, tr1));
	RTHOOK(3);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, ti4_1));
		tr1 = RTCCL(tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = RTCCL(loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("found_or_not_found", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("item_if_found", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
			tr1 = *(EIF_REFERENCE *)(Current + O2239[dtype-574]);
			tr2 = RTCCL(arg1);
			tb1 = RTCEQ(tr1, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr2)));
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
}

/* {HASH_TABLE}.search_item */
EIF_REFERENCE F575_2902 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("search_item", 574, Current, 0, 0, 6137);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current + O2239[dtype-574]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.next_iteration_position */
EIF_INTEGER_32 F575_2903 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("next_iteration_position", 574, Current, 2, 1, 6138);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) -1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_position_small_enough", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(6);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result >= loc2)) {
			tb2 = (nstcall = 1, F594_3091(RTCW(loc1), Result));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(7);
		Result++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("is_increased", EX_POST);
		if ((EIF_BOOLEAN) (Result > arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_below_upper_bound", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
		if ((EIF_BOOLEAN) (Result <= ti4_1)) {
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

/* {HASH_TABLE}.previous_iteration_position */
EIF_INTEGER_32 F575_2904 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("previous_iteration_position", 574, Current, 1, 1, 6139);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_position_small_enough", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
	RTHOOK(4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) -1L))) {
			tb2 = (nstcall = 1, F594_3091(RTCW(loc1), Result));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(6);
		Result--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_decreased", EX_POST);
		if ((EIF_BOOLEAN) (Result < arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_above_lower_bound", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) -1L))) {
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

/* {HASH_TABLE}.put */
void F575_2905 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,arg1);
	RTLR(9,loc1);
	RTLIU(10);
	
	RTEAA("put", 574, Current, 3, 2, 6140);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr1)), label_1);
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
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]);
		RTE_OT
		tr2 = RTCCL(arg2);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr2));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = RTCCL(arg2);
		tr3 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr4));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		tb1 = *(EIF_BOOLEAN *)(Current + O2281[dtype-574]);
		in_assertion = 0;
	}
	RTHOOK(3);
	tr5 = RTCCL(arg2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, tr5));
	RTHOOK(4);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
		RTHOOK(5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2311[dtype-574])(Current));
		RTHOOK(6);
		tr5 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current));
		tr6 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr5))-496])(tr5, ti4_3));
		tr5 = RTCCL(tr6);
		RTAR(Current, tr5);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr5;
	} else {
		RTHOOK(7);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2284[dtype-574])(Current))) {
			RTHOOK(8);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2324[dtype-574])(Current));
			RTHOOK(9);
			tr5 = RTCCL(arg2);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, tr5));
			
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) == ((EIF_INTEGER_32) -1L))) {
			RTHOOK(11);
			tr5 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr5))-585])(tr5));
			loc2 = (EIF_INTEGER_32) ti4_3;
			RTHOOK(12);
			loc3 = *(EIF_INTEGER_32 *)(Current + O2280[dtype-574]);
		} else {
			RTHOOK(13);
			loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2293[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2286[dtype-574])));
			RTHOOK(14);
			loc3 = *(EIF_INTEGER_32 *)(Current + O2286[dtype-574]);
			RTHOOK(15);
			tr5 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			(nstcall = 1, F594_3107(RTCW(tr5), (EIF_BOOLEAN) 0, loc2));
		}
		RTHOOK(16);
		tr5 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		(nstcall = 1, F587_3106(RTCW(tr5), loc2, loc3));
		RTHOOK(17);
		tr5 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		tr6 = RTCCL(arg1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2447[Dtype(RTCW(tr5))-585])(tr5, tr6, loc2));
		RTHOOK(18);
		tr5 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		tr6 = RTCCL(arg2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2447[Dtype(RTCW(tr5))-585])(tr5, tr6, loc2));
		RTHOOK(19);
		if (RTCEQ(arg2, loc1)) {
			RTHOOK(20);
			*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(21);
		(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]))++;
		RTHOOK(22);
		tr5 = RTCCL(arg1);
		RTAR(Current, tr5);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr5;
		RTHOOK(23);
		*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("conflict_or_inserted", EX_POST);
		tb2 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2251[dtype-574])(Current))) {
			tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2252[dtype-574])(Current));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("insertion_done", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2252[dtype-574])(Current))) {
			tr5 = RTCCL(arg2);
			tb2 = RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr5)), arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("now_present", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2252[dtype-574])(Current))) {
			tr5 = RTCCL(arg2);
			tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr5));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("one_more_if_inserted", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2252[dtype-574])(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("unchanged_if_conflict", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2251[dtype-574])(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) == ti4_2);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("same_item_if_conflict", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2251[dtype-574])(Current))) {
			tr5 = RTCCL(arg2);
			tr5 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr5));
			RTCO(tr2);
			tb2 = RTCEQ(tr5, tr1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("found_item_associated_with_key", EX_POST);
		tr5 = *(EIF_REFERENCE *)(Current + O2239[dtype-574]);
		tr6 = RTCCL(arg2);
		if (RTCEQ(tr5, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr6)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("new_item_if_inserted", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2252[dtype-574])(Current))) {
			tb2 = RTCEQ(*(EIF_REFERENCE *)(Current + O2239[dtype-574]), arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(32);
		RTCT("old_item_if_conflict", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2251[dtype-574])(Current))) {
			tr5 = *(EIF_REFERENCE *)(Current + O2239[dtype-574]);
			RTCO(tr4);
			tb2 = RTCEQ(tr5, tr3);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("default_property", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2252[dtype-574])(Current))) {
			tb3 = RTCEQ(arg2, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2303[dtype-574])(Current)));
		}
		if (!(tb3)) {
			tb3 = '\0';
			tb4 = '\01';
			if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2251[dtype-574])(Current))) {
				tb4 = !RTCEQ(arg2, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2303[dtype-574])(Current)));
			}
			if (tb4) {
				tb3 = tb1;
			}
			tb2 = tb3;
		}
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.force */
void F575_2906 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,loc1);
	RTLR(8,loc2);
	RTLR(9,arg1);
	RTLIU(10);
	
	RTEAA("force", 574, Current, 4, 2, 6141);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr1)), label_1);
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
		RTE_OT
		tr1 = RTCCL(arg2);
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr1));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]);
		RTE_OT
		tr3 = RTCCL(arg2);
		tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr3));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		tb2 = *(EIF_BOOLEAN *)(Current + O2281[dtype-574]);
		in_assertion = 0;
	}
	RTHOOK(3);
	tr4 = RTCCL(arg2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, tr4));
	RTHOOK(4);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current))) {
		RTHOOK(5);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2284[dtype-574])(Current))) {
			RTHOOK(6);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2324[dtype-574])(Current));
			RTHOOK(7);
			tr4 = RTCCL(arg2);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, tr4));
		}
		RTHOOK(8);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) == ((EIF_INTEGER_32) -1L))) {
			RTHOOK(9);
			tr4 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr4))-585])(tr4));
			loc3 = (EIF_INTEGER_32) ti4_3;
			RTHOOK(10);
			loc4 = *(EIF_INTEGER_32 *)(Current + O2280[dtype-574]);
		} else {
			RTHOOK(11);
			loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2293[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2286[dtype-574])));
			RTHOOK(12);
			loc4 = *(EIF_INTEGER_32 *)(Current + O2286[dtype-574]);
			RTHOOK(13);
			tr4 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			(nstcall = 1, F594_3107(RTCW(tr4), (EIF_BOOLEAN) 0, loc3));
		}
		RTHOOK(14);
		tr4 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		(nstcall = 1, F587_3106(RTCW(tr4), loc3, loc4));
		RTHOOK(15);
		tr4 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		tr5 = RTCCL(arg2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2447[Dtype(RTCW(tr4))-585])(tr4, tr5, loc3));
		RTHOOK(16);
		if (RTCEQ(arg2, loc1)) {
			RTHOOK(17);
			*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(18);
		(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]))++;
		RTHOOK(19);
		tr4 = RTCCL(loc2);
		RTAR(Current, tr4);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr4;
	} else {
		RTHOOK(20);
		loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current));
		RTHOOK(21);
		tr4 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		tr5 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr4))-496])(tr4, loc3));
		tr4 = RTCCL(tr5);
		RTAR(Current, tr4);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr4;
	}
	RTHOOK(22);
	tr4 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	tr5 = RTCCL(arg1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2447[Dtype(RTCW(tr4))-585])(tr4, tr5, loc3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("inserted", EX_POST);
		tr4 = RTCCL(arg2);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R1885[dtype-496])(Current, tr4)), arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("insertion_done", EX_POST);
		tr4 = RTCCL(arg2);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr4)), arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("now_present", EX_POST);
		tr4 = RTCCL(arg2);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr4))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("found_or_not_found", EX_POST);
		tb3 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
			tb3 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("not_found_if_was_not_present", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("same_count_or_one_more", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) == ti4_1) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("found_item_is_old_item", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
			tr4 = *(EIF_REFERENCE *)(Current + O2239[dtype-574]);
			RTCO(tr3);
			tb3 = RTCEQ(tr4, tr2);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("default_value_if_not_found", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current))) {
			tr4 = *(EIF_REFERENCE *)(Current + O2239[dtype-574]);
			tb3 = RTCEQ(tr4, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2304[dtype-574])(Current)));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("default_property", EX_POST);
		tb3 = '\01';
		if (!(RTCEQ(arg2, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2303[dtype-574])(Current))))) {
			tb4 = '\0';
			if (!RTCEQ(arg2, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2303[dtype-574])(Current)))) {
				tb4 = tb2;
			}
			tb3 = tb4;
		}
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) == tb3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.extend */
void F575_2907 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLIU(6);
	
	RTEAA("extend", 574, Current, 3, 2, 6142);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_present", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]);
		tb1 = *(EIF_BOOLEAN *)(Current + O2281[dtype-574]);
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2306[dtype-574])(Current, tr1));
	RTHOOK(3);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2284[dtype-574])(Current))) {
		RTHOOK(4);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2324[dtype-574])(Current));
		RTHOOK(5);
		tr1 = RTCCL(arg2);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2306[dtype-574])(Current, tr1));
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current + O2280[dtype-574]);
	} else {
		RTHOOK(9);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2293[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2286[dtype-574])));
		RTHOOK(10);
		loc3 = *(EIF_INTEGER_32 *)(Current + O2286[dtype-574]);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		(nstcall = 1, F594_3107(RTCW(tr1), (EIF_BOOLEAN) 0, loc2));
	}
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
	(nstcall = 1, F587_3106(RTCW(tr1), loc2, loc3));
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	tr2 = RTCCL(arg1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2447[Dtype(RTCW(tr1))-585])(tr1, tr2, loc2));
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	tr2 = RTCCL(arg2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2447[Dtype(RTCW(tr1))-585])(tr1, tr2, loc2));
	RTHOOK(15);
	if (RTCEQ(arg2, loc1)) {
		RTHOOK(16);
		*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(17);
	(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]))++;
	RTHOOK(18);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("inserted", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2252[dtype-574])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("insertion_done", EX_POST);
		tr1 = RTCCL(arg2);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr1)), arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("one_more", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("default_property", EX_POST);
		tb2 = '\01';
		if (!(RTCEQ(arg2, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2303[dtype-574])(Current))))) {
			tb2 = tb1;
		}
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.replace */
void F575_2908 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,arg2);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,arg1);
	RTLR(9,loc1);
	RTLIU(10);
	
	RTEAA("replace", 574, Current, 1, 2, 6143);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = RTCCL(arg2);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr2));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = RTCCL(arg2);
		tr3 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr4));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr5 = RTCCL(arg2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, tr5));
	RTHOOK(2);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
		RTHOOK(3);
		tr5 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current));
		tr6 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr5))-496])(tr5, ti4_1));
		tr5 = RTCCL(tr6);
		RTAR(Current, tr5);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr5;
		RTHOOK(4);
		tr5 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		tr6 = RTCCL(arg1);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2446[Dtype(RTCW(tr5))-585])(tr5, tr6, ti4_1));
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	} else {
		RTHOOK(6);
		tr5 = RTCCL(loc1);
		RTAR(Current, tr5);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr5;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("replaced_or_not_found", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2253[dtype-574])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("insertion_done", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2253[dtype-574])(Current))) {
			tr5 = RTCCL(arg2);
			tb1 = RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr5)), arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("no_change_if_not_found", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current))) {
			tr5 = RTCCL(arg2);
			tr5 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr5));
			RTCO(tr2);
			tb1 = RTCEQ(tr5, tr1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("found_item_is_old_item", EX_POST);
		tr5 = *(EIF_REFERENCE *)(Current + O2239[dtype-574]);
		RTCO(tr4);
		if (RTCEQ(tr5, tr3)) {
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

/* {HASH_TABLE}.replace_key */
void F575_2909 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,arg1);
	RTLR(6,tr4);
	RTLR(7,tr5);
	RTLR(8,tr6);
	RTLR(9,tr7);
	RTLR(10,loc1);
	RTLR(11,tr8);
	RTLIU(12);
	
	RTEAA("replace_key", 574, Current, 1, 2, 6144);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]);
		RTE_OT
		tr2 = RTCCL(arg2);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr2));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr3 = RTCCL(arg2);
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr3));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = RTCCL(arg1);
		tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr4));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		tr6 = RTCCL(arg1);
		tr5 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr6));
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr7 = RTCCL(arg1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, tr7));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
		RTHOOK(3);
		tr7 = RTCCL(arg2);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, tr7));
		RTHOOK(4);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
			RTHOOK(5);
			tr7 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
			ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current));
			tr8 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr7))-496])(tr7, ti4_2));
			loc1 = (EIF_REFERENCE) RTCCL(tr8);
			RTHOOK(6);
			tr7 = RTCCL(arg2);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2272[dtype-574])(Current, tr7));
			RTHOOK(7);
			tr7 = RTCCL(loc1);
			tr8 = RTCCL(arg1);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1888[dtype-496])(Current, tr7, tr8));
			RTHOOK(8);
			*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
		}
	} else {
		RTHOOK(9);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2311[dtype-574])(Current));
		RTHOOK(10);
		tr7 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current));
		tr8 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr7))-496])(tr7, ti4_2));
		tr7 = RTCCL(tr8);
		RTAR(Current, tr7);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr7;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("replaced_or_conflict_or_not_found", EX_POST);
		tb3 = '\01';
		tb4 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2253[dtype-574])(Current))) {
			tb4 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2251[dtype-574])(Current));
		}
		if (!tb4) {
			tb3 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("old_absent", EX_POST);
		tb3 = '\01';
		tb4 = '\0';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2253[dtype-574])(Current))) {
			tr7 = RTCCL(arg1);
			tr8 = RTCCL(arg2);
			tb4 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2249[dtype-574])(Current, tr7, tr8));
		}
		if (tb4) {
			tr7 = RTCCL(arg2);
			tb3 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr7));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("new_present", EX_POST);
		tb3 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2253[dtype-574])(Current))) {
			tb3 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2251[dtype-574])(Current));
		}
		tr7 = RTCCL(arg1);
		if ((EIF_BOOLEAN)(tb3 == (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr7)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("new_item", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2253[dtype-574])(Current))) {
			tr7 = RTCCL(arg1);
			tr7 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr7));
			RTCO(tr2);
			tb3 = RTCEQ(tr7, tr1);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("not_found_implies_no_old_key", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current))) {
			RTCO(tr3);
			tb3 = tb1;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("conflict_iff_already_present", EX_POST);
		RTCO(tr4);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2251[dtype-574])(Current)) == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("not_inserted_if_conflict", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2251[dtype-574])(Current))) {
			tr7 = RTCCL(arg1);
			tr7 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2240[dtype-574])(Current, tr7));
			RTCO(tr6);
			tb3 = RTCEQ(tr7, tr5);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.merge */
void F575_2910 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,Current);
	RTLR(7,loc2);
	RTLIU(8);
	
	RTEAA("merge", 574, Current, 2, 1, 6145);
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
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1737[Dtype(RTCW(arg1))-180])(arg1));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1723[Dtype(loc1)-162])(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1722[Dtype(loc1)-162])(loc1));
		tr2 = RTCCL(tr1);
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1735[Dtype(loc1)-224])(loc1));
		tr4 = RTCCL(tr3);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1889[dtype-496])(Current, tr2, tr4));
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1724[Dtype(loc1)-162])(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		RTHOOK(6);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1737[Dtype(RTCW(arg1))-180])(arg1));
		loc2 = (EIF_REFERENCE) tr1;
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1723[Dtype(loc2)-162])(loc2));
			if (tb3) break;
			RTHOOK(7);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1735[Dtype(loc2)-224])(loc2));
			tr2 = RTCCL(tr1);
			tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr2));
			RTHOOK(8);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1724[Dtype(loc2)-162])(loc2));
		}
		if (tb2) {
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

/* {HASH_TABLE}.remove */
void F575_2911 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLIU(8);
	
	RTEAA("remove", 574, Current, 6, 1, 6146);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]);
		tb1 = *(EIF_BOOLEAN *)(Current + O2281[dtype-574]);
		in_assertion = 0;
	}
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, tr1));
	RTHOOK(2);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
		RTHOOK(3);
		loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current));
		RTHOOK(4);
		if (RTCEQ(arg1, loc1)) {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		(nstcall = 1, F594_3106(RTCW(tr1), (EIF_BOOLEAN) 1, loc3));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		(nstcall = 1, F587_3106(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc3 + ((EIF_INTEGER_32) -2L)), *(EIF_INTEGER_32 *)(Current + O2280[dtype-574])));
		RTHOOK(8);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) == loc3)) {
			RTHOOK(9);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2262[dtype-574])(Current));
		}
		RTHOOK(10);
		(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]))--;
		RTHOOK(11);
		ti4_2 = eif_min_int32 (loc3,*(EIF_INTEGER_32 *)(Current + O2290[dtype-574]));
		*(EIF_INTEGER_32 *)(Current + O2290[dtype-574]) = (EIF_INTEGER_32) ti4_2;
		RTHOOK(12);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2290[dtype-574]) == *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]))) {
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
			loc4 = *(EIF_INTEGER_32 *)(Current + O2290[dtype-574]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - loc4);
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2460[Dtype(RTCW(tr1))-585])(tr1, loc4));
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2460[Dtype(RTCW(tr1))-585])(tr1, loc4));
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + O2290[dtype-574]);
			tr2 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			ti4_3 = (nstcall = 1, F594_3101(tr2));
			(nstcall = 1, F594_3110(RTCW(tr1), (EIF_BOOLEAN) 0, ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L))));
			RTHOOK(17);
			tr1 = RTCCL(loc2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2291[dtype-574]) = (EIF_REFERENCE) tr1;
			RTHOOK(18);
			tr1 = RTCCL(loc1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2292[dtype-574]) = (EIF_REFERENCE) tr1;
			RTHOOK(19);
			*(EIF_INTEGER_32 *)(Current + O2290[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
		} else {
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(Current + O2291[dtype-574]);
			loc5 = RTCCL(tr1);
			tr1 = *(EIF_REFERENCE *)(Current + O2292[dtype-574]);
			loc6 = RTCCL(tr1);
			if ((EIF_BOOLEAN) (EIF_TEST(loc5) && EIF_TEST(loc6))) {
				RTHOOK(21);
				tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
				tr2 = RTCCL(loc5);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2446[Dtype(RTCW(tr1))-585])(tr1, tr2, loc3));
				RTHOOK(22);
				tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
				tr2 = RTCCL(loc6);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2446[Dtype(RTCW(tr1))-585])(tr1, tr2, loc3));
			} else {
				RTHOOK(23);
				tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, loc3));
				tr1 = RTCCL(tr2);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O2291[dtype-574]) = (EIF_REFERENCE) tr1;
				RTHOOK(24);
				tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, loc3));
				tr1 = RTCCL(tr2);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O2292[dtype-574]) = (EIF_REFERENCE) tr1;
			}
		}
		RTHOOK(25);
		*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
		RTHOOK(26);
		tr1 = RTCCL(loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("removed_or_not_found", EX_POST);
		tb2 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2254[dtype-574])(Current))) {
			tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("not_present", EX_POST);
		tr1 = RTCCL(arg1);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("one_less", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("default_case", EX_POST);
		tb2 = '\01';
		if (RTCEQ(arg1, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2303[dtype-574])(Current)))) {
			tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O2281[dtype-574]);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("non_default_case", EX_POST);
		tb2 = '\01';
		if (!RTCEQ(arg1, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2303[dtype-574])(Current)))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) == tb1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.prune */
void F575_2912 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("prune", 574, Current, 0, 1, 6147);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1875[dtype-444])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current + O1839[dtype-280])) {
		for (;;) {
			RTHOOK(3);
			tb1 = '\01';
			if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2257[dtype-574])(Current))) {
				tb1 = RTEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2244[dtype-574])(Current)), arg1);
			}
			if (tb1) break;
			RTHOOK(4);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2262[dtype-574])(Current));
		}
	} else {
		for (;;) {
			RTHOOK(5);
			tb2 = '\01';
			if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2257[dtype-574])(Current))) {
				tb2 = RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2244[dtype-574])(Current)), arg1);
			}
			if (tb2) break;
			RTHOOK(6);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2262[dtype-574])(Current));
		}
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2257[dtype-574])(Current))) {
		RTHOOK(8);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2245[dtype-574])(Current));
		tr2 = RTCCL(tr1);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2272[dtype-574])(Current, tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.wipe_out */
void F575_2913 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("wipe_out", 574, Current, 1, 0, 6148);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1875[dtype-444])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2466[Dtype(RTCW(tr1))-585])(tr1));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2466[Dtype(RTCW(tr1))-585])(tr1));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
	tr2 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
	ti4_1 = (nstcall = 1, F594_3100(RTCW(tr2)));
	(nstcall = 1, F594_3110(RTCW(tr1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 0L), ti4_1));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
	(nstcall = 1, F587_3110(RTCW(tr1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
	RTHOOK(6);
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(11);
	*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1837[dtype-444])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("position_equal_to_zero", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("count_equal_to_zero", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("has_default_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("no_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2323[dtype-574])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.clear_all */
void F575_2914 (EIF_REFERENCE Current)
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
	
	RTEAA("clear_all", 574, Current, 0, 0, 6149);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1882[dtype-444])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.linear_representation */
EIF_REFERENCE F575_2915 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("linear_representation", 574, Current, 1, 0, 6150);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + O2282[dtype-574]);
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,561,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y1738,Y1738_gen_type,Dftype(Current),168);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 561, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2209[Dtype(RTCW(Result))-561])(Result, *(EIF_INTEGER_32 *)(Current + O2326[dtype-574])));
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2261[dtype-574])(Current));
	for (;;) {
		RTHOOK(4);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2258[dtype-574])(Current))) break;
		RTHOOK(5);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2244[dtype-574])(Current));
		tr2 = RTCCL(tr1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1878[Dtype(RTCW(Result))-444])(Result, tr2));
		RTHOOK(6);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2262[dtype-574])(Current));
	}
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("good_count", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1865[Dtype(RTCW(Result))-470])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]))) {
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

/* {HASH_TABLE}.copy */
void F575_2916 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("copy", 574, Current, 0, 1, 6151);
	RTSA(dtype);
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
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O2276[Dtype(arg1)-574]);
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2297[dtype-574])(Current, tr2));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O2277[Dtype(arg1)-574]);
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2299[dtype-574])(Current, tr2));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O2279[Dtype(arg1)-574]);
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2300[dtype-574])(Current, tr2));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O2278[Dtype(arg1)-574]);
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2301[dtype-574])(Current, tr2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
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
}

/* {HASH_TABLE}.empty_duplicate */
EIF_REFERENCE F575_2917 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("empty_duplicate", 574, Current, 0, 1, 6152);
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
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2236[Dtype(RTCW(Result))-574])(Result, arg1));
	RTHOOK(3);
	if (*(EIF_BOOLEAN *)(Current + O1839[dtype-280])) {
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1841[Dtype(RTCW(Result))-444])(Result));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("empty_duplicate_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {HASH_TABLE}.correct_mismatch */
void F575_2918 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,loc5);
	RTLR(9,loc12);
	RTLR(10,loc7);
	RTLR(11,tr4);
	RTLR(12,loc6);
	RTLIU(13);
	
	RTEAA("correct_mismatch", 574, Current, 13, 0, 6153);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(2741,(nstcall = 0, F560_2741), (Current));
	tr2 = RTMS_EX_H("hash_table_version_64",21,855604276);
	tb1 = (nstcall = 1, F575_2866(RTCW(tr1), tr2));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		tr1 = RTOSCF(2741,(nstcall = 0, F560_2741), (Current));
		tr2 = RTMS_EX_H("content",7,460700276);
		tr2 = (nstcall = 1, F575_2864(RTCW(tr1), tr2));
		loc8 = RTCCL(tr2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,497,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y1738,Y1738_gen_type,dftype,168);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc8 = RTRV(typres0,loc8);
		}
		if (EIF_TEST(loc8)) {
			RTHOOK(3);
			tr1 = *(EIF_REFERENCE *)(loc8);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2276[dtype-574]) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(4);
		tr1 = RTOSCF(2741,(nstcall = 0, F560_2741), (Current));
		tr2 = RTMS_EX_H("keys",4,1801812339);
		tr2 = (nstcall = 1, F575_2864(RTCW(tr1), tr2));
		loc9 = RTCCL(tr2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,497,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y1890,Y1890_gen_type,dftype,415);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc9 = RTRV(typres0,loc9);
		}
		if (EIF_TEST(loc9)) {
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(loc9);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2277[dtype-574]) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(6);
		tr1 = RTOSCF(2741,(nstcall = 0, F560_2741), (Current));
		tr2 = RTMS_EX_H("deleted_marks",13,2142169971);
		tr2 = (nstcall = 1, F575_2864(RTCW(tr1), tr2));
		loc10 = RTCCL(tr2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,505,730,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc10 = RTRV(typres0,loc10);
		}
		if (EIF_TEST(loc10)) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(loc10);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2279[dtype-574]) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(8);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2279[dtype-574]) != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2277[dtype-574]) != NULL))) {
			tr1 = RTOSCF(2741,(nstcall = 0, F560_2741), (Current));
			tr2 = RTMS_EX_H("hash_table_version_57",21,855604023);
			tb3 = (nstcall = 1, F575_2866(RTCW(tr1), tr2));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			ti4_1 = (nstcall = 1, F594_3101(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			RTHOOK(9);
			loc1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			RTHOOK(10);
			tr2 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr2))-585])(tr2));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,730,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSP2(typres0.id,0,ti4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
				RT_SPECIAL_COUNT(tr1) = 0;
			}
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2279[dtype-574]) = (EIF_REFERENCE) tr1;
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			ti4_2 = (nstcall = 1, F594_3101(loc1));
			(nstcall = 1, F594_3113(RTCW(tr1), loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_2));
		}
		RTHOOK(12);
		tr2 = RTOSCF(2741,(nstcall = 0, F560_2741), (Current));
		tr3 = RTMS_EX_H("count",5,1870727284);
		tr3 = (nstcall = 1, F575_2864(RTCW(tr2), tr3));
		tr1 = RTCCL(tr3);
		RTOB(*(EIF_INTEGER_32 *), eif_new_type(697, 0x00), tr1, loc11, tb1);
		if (tb1) {
			RTHOOK(13);
			loc4 = (EIF_INTEGER_32) loc11;
		}
		RTHOOK(14);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2276[dtype-574]) == NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2277[dtype-574]) == NULL)) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2279[dtype-574]) == NULL))) {
			RTHOOK(15);
			(nstcall = 0, F560_2740(Current));
		} else {
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
			loc3 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(17);
			loc5 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2274[dtype-574])(Current, loc4));
			for (;;) {
				RTHOOK(18);
				if ((EIF_BOOLEAN)(loc2 == loc3)) break;
				RTHOOK(19);
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, loc2));
				loc12 = RTCCL(tr2);
				if (EIF_TEST(loc12)) {
					tb1 = !RTCEQ(loc12, loc7);
				}
				if (tb1) {
					RTHOOK(20);
					tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, loc2));
					tr1 = RTCCL(tr2);
					tr3 = RTCCL(loc12);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1888[Dtype(RTCW(loc5))-496])(loc5, tr1, tr3));
				}
				RTHOOK(21);
				loc2++;
			}
			RTHOOK(22);
			tb1 = '\0';
			tr2 = RTOSCF(2741,(nstcall = 0, F560_2741), (Current));
			tr3 = RTMS_EX_H("has_default",11,1777575796);
			tr3 = (nstcall = 1, F575_2864(RTCW(tr2), tr3));
			tr1 = RTCCL(tr3);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(730, 0x00), tr1, loc13, tb2);
			if (tb2) {
				tb1 = loc13;
			}
			if (tb1) {
				RTHOOK(23);
				tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
				tr2 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
				ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2433[Dtype(RTCW(tr2))-585])(tr2));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
				tr1 = RTCCL(tr2);
				tr3 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
				tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr3))-496])(tr3, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
				tr3 = RTCCL(tr4);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1888[Dtype(RTCW(loc5))-496])(loc5, tr1, tr3));
			}
			RTHOOK(24);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O2276[Dtype(loc5)-574]);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2297[dtype-574])(Current, tr1));
			RTHOOK(25);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O2277[Dtype(loc5)-574]);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2299[dtype-574])(Current, tr1));
			RTHOOK(26);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O2279[Dtype(loc5)-574]);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2300[dtype-574])(Current, tr1));
			RTHOOK(27);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O2278[Dtype(loc5)-574]);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2301[dtype-574])(Current, tr1));
			RTHOOK(28);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O2248[Dtype(loc5)-574]);
			*(EIF_INTEGER_32 *)(Current + O2248[dtype-574]) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(29);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O2282[Dtype(loc5)-574]);
			*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(30);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O2286[Dtype(loc5)-574]);
			*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(31);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O2280[Dtype(loc5)-574]);
			*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(32);
			*(EIF_INTEGER_32 *)(Current + O2290[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
			RTHOOK(33);
			tr1 = RTCCL(loc6);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2291[dtype-574]) = (EIF_REFERENCE) tr1;
			RTHOOK(34);
			tr1 = RTCCL(loc7);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2292[dtype-574]) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(35);
		*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.hash_table_version_64 */
EIF_BOOLEAN F575_2919 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O2275[Dtype(Current)-574]);
}


/* {HASH_TABLE}.content */
EIF_REFERENCE F575_2920 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2276[Dtype(Current)-574]);
}


/* {HASH_TABLE}.keys */
EIF_REFERENCE F575_2921 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2277[Dtype(Current)-574]);
}


/* {HASH_TABLE}.indexes_map */
EIF_REFERENCE F575_2922 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2278[Dtype(Current)-574]);
}


/* {HASH_TABLE}.deleted_marks */
EIF_REFERENCE F575_2923 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2279[Dtype(Current)-574]);
}


/* {HASH_TABLE}.item_position */
EIF_INTEGER_32 F575_2924 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2280[Dtype(Current)-574]);
}


/* {HASH_TABLE}.has_default */
EIF_BOOLEAN F575_2925 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O2281[Dtype(Current)-574]);
}


/* {HASH_TABLE}.iteration_position */
EIF_INTEGER_32 F575_2926 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2282[Dtype(Current)-574]);
}


/* {HASH_TABLE}.position */
EIF_INTEGER_32 F575_2927 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("position", 574, Current, 0, 0, 6162);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O2280[dtype-574])));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.soon_full */
EIF_BOOLEAN F575_2928 (EIF_REFERENCE Current)
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
	
	RTEAA("soon_full", 574, Current, 0, 0, 6163);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2433[Dtype(RTCW(tr1))-585])(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (keys.count = keys.capacity)", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2433[Dtype(RTCW(tr1))-585])(tr1));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
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

/* {HASH_TABLE}.control */
EIF_INTEGER_32 F575_2929 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2285[Dtype(Current)-574]);
}


/* {HASH_TABLE}.deleted_item_position */
EIF_INTEGER_32 F575_2930 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2286[Dtype(Current)-574]);
}


/* {HASH_TABLE}.ht_lowest_deleted_position */
EIF_INTEGER_32 F575_2934 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2290[Dtype(Current)-574]);
}


/* {HASH_TABLE}.ht_deleted_item */
EIF_REFERENCE F575_2935 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2291[Dtype(Current)-574]);
}


/* {HASH_TABLE}.ht_deleted_key */
EIF_REFERENCE F575_2936 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2292[Dtype(Current)-574]);
}


/* {HASH_TABLE}.deleted_position */
EIF_INTEGER_32 F575_2937 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("deleted_position", 574, Current, 0, 1, 6059);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("deleted", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2298[dtype-574])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -ti4_1 + ((EIF_INTEGER_32) -2L));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
	ti4_1 = eif_min_int32 (Result,ti4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("deleted_position_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("deleted_position_valid", EX_POST);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
		if ((EIF_BOOLEAN) (Result <= ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
			tb1 = (EIF_BOOLEAN) (Result <= ti4_1);
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

/* {HASH_TABLE}.occupied */
EIF_BOOLEAN F575_2938 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("occupied", 574, Current, 0, 1, 6060);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		tb1 = (nstcall = 1, F594_3105(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
		RTHOOK(3);
		Result = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
		if ((EIF_BOOLEAN)(arg1 != ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			tb1 = (nstcall = 1, F594_3091(RTCW(tr1), arg1));
			Result = (EIF_BOOLEAN) !tb1;
		}
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		tb1 = (nstcall = 1, F594_3091(RTCW(tr1), arg1));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.truly_occupied */
EIF_BOOLEAN F575_2939 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("truly_occupied", 574, Current, 0, 1, 6061);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
		tb1 = (EIF_BOOLEAN) (arg1 < ti4_1);
	}
	if (tb1) {
		RTHOOK(2);
		Result = '\01';
		tb1 = '\0';
		if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
			tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
			tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
		}
		if (!(tb1)) {
			Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2294[dtype-574])(Current, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("normal_key", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
			tb3 = (EIF_BOOLEAN) (arg1 < ti4_1);
		}
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
			tb2 = (EIF_BOOLEAN)(arg1 != ti4_1);
		}
		if (tb2) {
			tb2 = '\01';
			if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2294[dtype-574])(Current, arg1))) {
				tb2 = Result;
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("default_key", EX_POST);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			tb1 = (EIF_BOOLEAN)(Result == *(EIF_BOOLEAN *)(Current + O2281[dtype-574]));
		}
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

/* {HASH_TABLE}.is_off_position */
EIF_BOOLEAN F575_2940 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_off_position", 574, Current, 0, 1, 6062);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
		Result = (EIF_BOOLEAN) (arg1 >= ti4_1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.set_content */
void F575_2941 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_content", 574, Current, 0, 1, 6063);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O2276[dtype-574]) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("content_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2276[dtype-574]) == arg1)) {
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

/* {HASH_TABLE}.deleted */
EIF_BOOLEAN F575_2942 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("deleted", 574, Current, 0, 1, 6064);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) -2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.set_keys */
void F575_2943 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_keys", 574, Current, 0, 1, 6065);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O2277[dtype-574]) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("keys_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2277[dtype-574]) == arg1)) {
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

/* {HASH_TABLE}.set_deleted_marks */
void F575_2944 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_deleted_marks", 574, Current, 0, 1, 6066);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O2279[dtype-574]) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("deleted_marks_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2279[dtype-574]) == arg1)) {
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

/* {HASH_TABLE}.set_indexes_map */
void F575_2945 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("set_indexes_map", 574, Current, 0, 1, 6067);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O2278[dtype-574]) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("indexes_map_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2278[dtype-574]) == arg1)) {
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

/* {HASH_TABLE}.default_key_value */
EIF_REFERENCE F575_2946 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("default_key_value", 574, Current, 0, 0, 6068);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_default", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current + O2281[dtype-574]), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	tr2 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr2), *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, ti4_1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.computed_default_key */
EIF_REFERENCE F575_2947 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("computed_default_key", 574, Current, 0, 0, 6069);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

/* {HASH_TABLE}.computed_default_value */
EIF_REFERENCE F575_2948 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("computed_default_value", 574, Current, 0, 0, 6070);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

/* {HASH_TABLE}.internal_search */
void F575_2949 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLR(6,tr1);
	RTLR(7,loc12);
	RTLR(8,tr2);
	RTLIU(9);
	
	RTEAA("internal_search", 574, Current, 12, 1, 6071);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
		RTHOOK(4);
		if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		}
	} else {
		RTHOOK(7);
		loc9 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		RTHOOK(8);
		loc10 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		RTHOOK(9);
		loc11 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		RTHOOK(10);
		loc6 = *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
		RTHOOK(11);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(12);
		tr1 = RTCCL(arg1);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2247[dtype-574])(Current, tr1));
		RTHOOK(13);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(14);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		RTHOOK(15);
		*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		for (;;) {
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(17);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(18);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(loc10), loc5));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(19);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(20);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(loc9))-496])(loc9, loc4));
				loc12 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(21);
				tr1 = RTCCL(loc12);
				tr2 = RTCCL(arg1);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2249[dtype-574])(Current, tr1, tr2))) {
					RTHOOK(22);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(23);
					*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				}
			} else {
				RTHOOK(24);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					RTHOOK(25);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(26);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						RTHOOK(27);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						
						RTHOOK(28);
						tb1 = (nstcall = 1, F594_3091(RTCW(loc11), loc4));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(29);
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(30);
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(31);
			loc8--;
		}
		RTHOOK(32);
		*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) loc5;
	}
	RTHOOK(33);
	*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) = (EIF_INTEGER_32) loc7;
	if (RTAL & CK_ENSURE) {
		RTHOOK(34);
		RTCT("found_or_not_found", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(35);
		RTCT("deleted_item_at_deleted_position", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) != ((EIF_INTEGER_32) -1L))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2298[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2286[dtype-574])));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(36);
		RTCT("default_iff_at_capacity", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) == *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])) == RTCEQ(arg1, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2303[dtype-574])(Current))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.search_for_insertion */
void F575_2950 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLIU(6);
	
	RTEAA("search_for_insertion", 574, Current, 10, 1, 6072);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_present", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1887[dtype-496])(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (RTCEQ(arg1, loc1) || (EIF_BOOLEAN)(arg1 == NULL))) {
		
		RTHOOK(4);
		*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		RTHOOK(7);
		loc6 = *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
		RTHOOK(8);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(9);
		tr1 = RTCCL(arg1);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2247[dtype-574])(Current, tr1));
		RTHOOK(10);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(11);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(14);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(loc9), loc5));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(15);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
			} else {
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					RTHOOK(17);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(18);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						RTHOOK(19);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						
						RTHOOK(20);
						tb1 = (nstcall = 1, F594_3091(RTCW(loc10), loc4));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(21);
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(22);
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(23);
			loc8--;
		}
		RTHOOK(24);
		*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) loc5;
	}
	RTHOOK(25);
	*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) = (EIF_INTEGER_32) loc7;
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("deleted_item_at_deleted_position", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) != ((EIF_INTEGER_32) -1L))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2298[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2286[dtype-574])));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("default_iff_at_capacity", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) == *(EIF_INTEGER_32 *)(Current + O2248[dtype-574])) == RTCEQ(arg1, (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2303[dtype-574])(Current))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.key_at */
EIF_REFERENCE F575_2951 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("key_at", 574, Current, 0, 1, 6073);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2434[Dtype(RTCW(tr1))-585])(tr1, arg1));
	if (tb1) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-496])(tr1, arg1));
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.initial_position */
EIF_INTEGER_32 F575_2952 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("initial_position", 574, Current, 0, 1, 6074);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.position_increment */
EIF_INTEGER_32 F575_2953 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("position_increment", 574, Current, 0, 1, 6075);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (arg1 % (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.set_conflict */
void F575_2955 (EIF_REFERENCE Current)
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
	
	RTEAA("set_conflict", 574, Current, 0, 0, 6077);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("conflict", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2251[dtype-574])(Current))) {
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

/* {HASH_TABLE}.set_found */
void F575_2957 (EIF_REFERENCE Current)
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
	
	RTEAA("set_found", 574, Current, 0, 0, 6079);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("found", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current))) {
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

/* {HASH_TABLE}.set_inserted */
void F575_2959 (EIF_REFERENCE Current)
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
	
	RTEAA("set_inserted", 574, Current, 0, 0, 6081);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("inserted", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2252[dtype-574])(Current))) {
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

/* {HASH_TABLE}.set_not_found */
void F575_2961 (EIF_REFERENCE Current)
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
	
	RTEAA("set_not_found", 574, Current, 0, 0, 6083);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_found", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current))) {
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

/* {HASH_TABLE}.set_no_status */
void F575_2962 (EIF_REFERENCE Current)
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
	
	RTEAA("set_no_status", 574, Current, 0, 0, 6084);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("default_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2323[dtype-574])(Current))) {
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

/* {HASH_TABLE}.set_removed */
void F575_2964 (EIF_REFERENCE Current)
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
	
	RTEAA("set_removed", 574, Current, 0, 0, 6086);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("removed", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2254[dtype-574])(Current))) {
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

/* {HASH_TABLE}.set_replaced */
void F575_2966 (EIF_REFERENCE Current)
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
	
	RTEAA("set_replaced", 574, Current, 0, 0, 6088);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("replaced", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2253[dtype-574])(Current))) {
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

/* {HASH_TABLE}.special_status */
EIF_BOOLEAN F575_2967 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("special_status", 574, Current, 0, 0, 6089);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2285[dtype-574]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (control > 0)", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) > ((EIF_INTEGER_32) 0L)))) {
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

/* {HASH_TABLE}.add_space */
void F575_2968 (EIF_REFERENCE Current)
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
	
	RTEAA("add_space", 574, Current, 0, 0, 6090);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]);
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2238[dtype-574])(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) / ((EIF_INTEGER_32) 2L)))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_not_changed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) < *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]))) {
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

/* {HASH_TABLE}.collection_extend */
void F575_2970 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("collection_extend", 574, Current, 0, 1, 6092);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1874[dtype-444])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_inserted", EX_POST);
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1876[dtype-444])(Current, tr1))) {
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

/* {HASH_TABLE}._invariant */
void F575_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 581, Current, 0, 0);
	RTIT("keys_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2277[dtype-574]) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("content_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2276[dtype-574]) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("keys_enough_capacity", Current);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
	if ((EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O2248[dtype-574]) + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("content_enough_capacity", Current);
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1));
	if ((EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O2248[dtype-574]) + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_iteration_position", Current);
	tb1 = '\01';
	if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2258[dtype-574])(Current))) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2295[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2282[dtype-574])));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("control_non_negative", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("special_status", Current);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2251[dtype-574])(Current))) {
		tb5 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2252[dtype-574])(Current));
	}
	if (!tb5) {
		tb4 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2253[dtype-574])(Current));
	}
	if (!tb4) {
		tb3 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2254[dtype-574])(Current));
	}
	if (!tb3) {
		tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current));
	}
	if (!tb2) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current));
	}
	if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2323[dtype-574])(Current)) == tb1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_big_enough", Current);
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_small_enough", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) <= *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("slot_count_big_enough", Current);
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= *(EIF_INTEGER_32 *)(Current + O2326[dtype-574]))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit582 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
