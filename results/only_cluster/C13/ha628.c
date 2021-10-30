/*
 * Code for class HASH_TABLE [INTEGER_32, INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha628.h"
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
void F578_2859 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make", 577, Current, 4, 1, 6207);
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
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_) = (EIF_INTEGER_32) loc4;
	RTHOOK(7);
	tr1 = RTLNSP2(eif_final_id(Y2276,Y2276_gen_type,dftype,574).id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTLNSP2(eif_final_id(Y2277,Y2277_gen_type,dftype,574).id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
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
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
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
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(11);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(12);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(14);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(15);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc2;
	RTHOOK(16);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(17);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(18);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
	RTHOOK(19);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) loc2;
	RTHOOK(20);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) = (EIF_INTEGER_32) loc3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("more_than_minimum", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_) > ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("no_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F578_2967(Current))) {
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
void F578_2860 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_equal", 577, Current, 0, 1, 6208);
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
	(nstcall = 0, F578_2859(Current, arg1));
	RTHOOK(3);
	(nstcall = 0, F282_2086(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("more_than_minimum", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_) > ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("no_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F578_2967(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("compare_objects", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
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
void F578_2861 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLIU(5);
	
	RTEAA("accommodate", 577, Current, 5, 1, 6209);
	RTSA(Dtype(Current));
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
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_2 = (nstcall = 1, F587_3101(tr1));
	ti4_3 = eif_max_int32 (ti4_2,arg1);
	loc3 = (nstcall = 0, F578_2917(Current, ti4_3));
	RTHOOK(3);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	loc5 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(5);
	ti4_2 = (nstcall = 1, F587_3101(loc5));
	loc2 = (EIF_INTEGER_32) ti4_2;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(7);
		if ((nstcall = 0, F578_2938(Current, loc1))) {
			RTHOOK(8);
			ti4_2 = (nstcall = 1, F587_3091(RTCW(loc4), loc1));
			ti4_3 = (nstcall = 1, F587_3091(RTCW(loc5), loc1));
			(nstcall = 1, F578_2905(RTCW(loc3), ti4_2, ti4_3));
		}
		RTHOOK(9);
		loc1++;
	}
	RTHOOK(10);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti4_2 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
		loc1 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(12);
		ti4_2 = (nstcall = 1, F587_3091(RTCW(loc4), loc1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_3 = (nstcall = 1, F587_3091(RTCW(tr1), loc1));
		(nstcall = 1, F578_2905(RTCW(loc3), ti4_2, ti4_3));
	}
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
	(nstcall = 0, F578_2941(Current, tr1));
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
	(nstcall = 0, F578_2943(Current, tr1));
	RTHOOK(15);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_3_);
	(nstcall = 0, F578_2944(Current, tr1));
	RTHOOK(16);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_2_);
	(nstcall = 0, F578_2945(Current, tr1));
	RTHOOK(17);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_4_3_0_1_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_) = (EIF_INTEGER_32) ti4_2;
	RTHOOK(18);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_4_3_0_3_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("count_not_changed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_))) {
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
EIF_INTEGER_32 F578_2862 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_);
}


/* {HASH_TABLE}.definite_item */
EIF_INTEGER_32 F578_2863 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("definite_item", 577, Current, 2, 1, 6211);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F578_2866(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F578_2866(Current, arg1)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
	RTHOOK(4);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
	RTHOOK(5);
	(nstcall = 0, F578_2949(Current, arg1));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 0, F578_2927(Current));
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), ti4_1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) loc2;
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.item */
EIF_INTEGER_32 F578_2864 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLIU(6);
	
	RTEAA("item", 577, Current, 12, 1, 6212);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(tr2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
			ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), ti4_1));
			Result = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		RTHOOK(7);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		RTHOOK(8);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
		RTHOOK(9);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		loc2 = (nstcall = 0, F578_2875(Current, arg1));
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
				ti4_1 = (nstcall = 1, F587_3091(RTCW(loc9), loc4));
				loc12 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(18);
				if ((nstcall = 0, F578_2882(Current, loc12, arg1))) {
					RTHOOK(19);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(20);
					tr1 = *(EIF_REFERENCE *)(Current);
					ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), loc4));
					Result = (EIF_INTEGER_32) ti4_1;
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
		if ((EIF_BOOLEAN) !(nstcall = 0, F578_2866(Current, arg1))) {
			tb1 = (EIF_BOOLEAN)(Result == (nstcall = 0, F578_2948(Current)));
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
EIF_INTEGER_32 F578_2865 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLIU(6);
	
	RTEAA("at", 577, Current, 12, 1, 6213);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(tr2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
			ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), ti4_1));
			Result = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		RTHOOK(7);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		RTHOOK(8);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
		RTHOOK(9);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		loc2 = (nstcall = 0, F578_2875(Current, arg1));
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
				ti4_1 = (nstcall = 1, F587_3091(RTCW(loc9), loc4));
				loc12 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(18);
				if ((nstcall = 0, F578_2882(Current, loc12, arg1))) {
					RTHOOK(19);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(20);
					tr1 = *(EIF_REFERENCE *)(Current);
					ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), loc4));
					Result = (EIF_INTEGER_32) ti4_1;
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
		if ((EIF_BOOLEAN) !(nstcall = 0, F578_2866(Current, arg1))) {
			tb1 = (EIF_BOOLEAN)(Result == (nstcall = 0, F578_2948(Current)));
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
EIF_BOOLEAN F578_2866 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLIU(4);
	
	RTEAA("has", 577, Current, 12, 1, 6214);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		RTHOOK(7);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		RTHOOK(8);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
		RTHOOK(9);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		loc2 = (nstcall = 0, F578_2875(Current, arg1));
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
				ti4_1 = (nstcall = 1, F587_3091(RTCW(loc9), loc4));
				loc12 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(18);
				if ((nstcall = 0, F578_2882(Current, loc12, arg1))) {
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
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F578_2947(Current)))) {
			tb1 = (EIF_BOOLEAN)(Result == *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_));
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
EIF_BOOLEAN F578_2867 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has_key", 577, Current, 2, 1, 6215);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
	RTHOOK(2);
	(nstcall = 0, F578_2949(Current, arg1));
	RTHOOK(3);
	Result = (nstcall = 0, F578_2891(Current));
	RTHOOK(4);
	if (Result) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 0, F578_2927(Current));
		ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), ti4_1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(6);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc2;
	}
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("default_case", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F578_2947(Current)))) {
			tb1 = (EIF_BOOLEAN)(Result == *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("found", EX_POST);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, F578_2891(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("item_if_found", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F578_2891(Current))) {
			tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) == (nstcall = 0, F578_2864(Current, arg1)));
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
EIF_BOOLEAN F578_2868 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("has_item", 577, Current, 3, 1, 6216);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti4_1 = (nstcall = 1, F587_3091(RTCW(tr2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
		ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), ti4_1));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN) !Result) {
		RTHOOK(4);
		loc3 = *(EIF_REFERENCE *)(Current);
		RTHOOK(5);
		ti4_1 = (nstcall = 1, F587_3101(loc3));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				RTHOOK(8);
				Result = '\0';
				if ((nstcall = 0, F578_2938(Current, loc1))) {
					ti4_1 = (nstcall = 1, F587_3091(RTCW(loc3), loc1));
					Result = (arg1 == ti4_1);
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
				if ((nstcall = 0, F578_2938(Current, loc1))) {
					ti4_1 = (nstcall = 1, F587_3091(RTCW(loc3), loc1));
					Result = (EIF_BOOLEAN)(arg1 == ti4_1);
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
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F344_2122(Current));
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
EIF_REFERENCE F578_2869 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("current_keys", 577, Current, 2, 0, 6217);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F344_2122(Current))) {
		RTHOOK(2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,498,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y1890,Y1890_gen_type,dftype,415);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			Result = RTLNS(typres0.id, 498, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		(nstcall = -1, F499_2575(RTCW(Result)));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
		RTHOOK(4);
		(nstcall = 0, F578_2898(Current));
		RTHOOK(5);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,498,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y1890,Y1890_gen_type,dftype,415);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			Result = RTLNS(typres0.id, 498, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		ti4_1 = (nstcall = 0, F578_2871(Current));
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
		(nstcall = -1, F499_2576(RTCW(Result), ti4_1, ((EIF_INTEGER_32) 1L), ti4_2));
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		(nstcall = 0, F578_2899(Current));
		for (;;) {
			RTHOOK(8);
			if ((nstcall = 0, F578_2894(Current))) break;
			RTHOOK(9);
			loc1++;
			RTHOOK(10);
			ti4_1 = (nstcall = 0, F578_2871(Current));
			(nstcall = 1, F499_2600(RTCW(Result), ti4_1, loc1));
			RTHOOK(11);
			(nstcall = 0, F578_2899(Current));
		}
		RTHOOK(12);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("good_count", EX_POST);
		ti4_1 = (nstcall = 1, F499_2588(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))) {
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
EIF_INTEGER_32 F578_2870 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item_for_iteration", 577, Current, 0, 0, 6218);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F578_2894(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.key_for_iteration */
EIF_INTEGER_32 F578_2871 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("key_for_iteration", 577, Current, 0, 0, 6219);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F578_2894(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.cursor */
EIF_REFERENCE F578_2872 (EIF_REFERENCE Current)
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
	
	RTEAA("cursor", 577, Current, 0, 0, 6220);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(115, 0x01).id, 115, _OBJSIZ_0_0_0_1_0_0_0_0_);
	(nstcall = -1, F116_1323(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_)));
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
EIF_REFERENCE F578_2873 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 577, Current, 0, 0, 6221);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,227,0,0,0,0,0xFFFF};
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
		Result = RTLNS(typres0.id, 227, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	(nstcall = -1, F212_1975(RTCW(Result), Current));
	RTHOOK(2);
	(nstcall = 1, F212_1994(RTCW(Result)));
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
EIF_INTEGER_32 F578_2874 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("iteration_item", 577, Current, 0, 1, 6222);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F578_2897(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.hash_code_of */
EIF_INTEGER_32 F578_2875 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("hash_code_of", 577, Current, 0, 1, 6223);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (arg1)));
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
EIF_INTEGER_32 F578_2876 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
}


/* {HASH_TABLE}.capacity */
EIF_INTEGER_32 F578_2877 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
}


/* {HASH_TABLE}.occurrences */
EIF_INTEGER_32 F578_2878 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("occurrences", 577, Current, 1, 1, 6226);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
		RTHOOK(3);
		(nstcall = 0, F578_2898(Current));
		for (;;) {
			RTHOOK(4);
			if ((nstcall = 0, F578_2894(Current))) break;
			RTHOOK(5);
			if (((nstcall = 0, F578_2870(Current)) == arg1)) {
				RTHOOK(6);
				Result++;
			}
			RTHOOK(7);
			(nstcall = 0, F578_2899(Current));
		}
	} else {
		RTHOOK(8);
		(nstcall = 0, F578_2898(Current));
		for (;;) {
			RTHOOK(9);
			if ((nstcall = 0, F578_2894(Current))) break;
			RTHOOK(10);
			if ((EIF_BOOLEAN)((nstcall = 0, F578_2870(Current)) == arg1)) {
				RTHOOK(11);
				Result++;
			}
			RTHOOK(12);
			(nstcall = 0, F578_2899(Current));
		}
	}
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) loc1;
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
EIF_INTEGER_32 F578_2879 (EIF_REFERENCE Current)
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
	
	RTEAA("iteration_lower", 577, Current, 0, 0, 6227);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F578_2903(Current, ((EIF_INTEGER_32) -1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.iteration_upper */
EIF_INTEGER_32 F578_2880 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("iteration_upper", 577, Current, 0, 0, 6228);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F587_3101(tr1));
	Result = (nstcall = 0, F578_2904(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.is_equal */
EIF_BOOLEAN F578_2881 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("is_equal", 577, Current, 1, 1, 6229);
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
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_3_0_9_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == ti4_1)) {
		tb3 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_0_);
		tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) == tb3);
	}
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_2_);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) == tb2);
	}
	if (tb1) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		tr1 = (nstcall = 1, F578_2873(Current));
		loc1 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (nstcall = 1, F228_2006(loc1));
			if (tb1) break;
			RTHOOK(5);
			if ((EIF_BOOLEAN) !Result) break;
			RTHOOK(6);
			ti4_1 = (nstcall = 1, F228_2004(loc1));
			(nstcall = 1, F578_2901(RTCW(arg1), ti4_1));
			RTHOOK(7);
			tb2 = (nstcall = 1, F578_2891(RTCW(arg1)));
			if (tb2) {
				RTHOOK(8);
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
					RTHOOK(9);
					ti4_1 = (nstcall = 1, F228_2003(loc1));
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_3_0_0_);
					Result = (EIF_BOOLEAN) (ti4_1 == ti4_2);
				} else {
					RTHOOK(10);
					ti4_1 = (nstcall = 1, F228_2003(loc1));
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_3_0_0_);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
				}
			} else {
				RTHOOK(11);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(12);
			(nstcall = 1, F228_2007(loc1));
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
EIF_BOOLEAN F578_2882 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("same_keys", 577, Current, 0, 2, 6230);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (arg1 == arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.disjoint */
EIF_BOOLEAN F578_2883 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("disjoint", 577, Current, 1, 1, 6231);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tb1 = '\01';
	if (!(nstcall = 0, F344_2122(Current))) {
		tb2 = (nstcall = 1, F344_2122(RTCW(arg1)));
		tb1 = tb2;
	}
	if (!tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F578_2873(RTCW(arg1)));
		loc1 = (EIF_REFERENCE) tr1;
		tb1 = EIF_FALSE;
		for (;;) {
			if (tb1) break;
			tb2 = (nstcall = 1, F228_2006(loc1));
			if (tb2) break;
			RTHOOK(3);
			ti4_1 = (nstcall = 1, F228_2004(loc1));
			tb1 = (nstcall = 0, F578_2866(Current, ti4_1));
			RTHOOK(4);
			(nstcall = 1, F228_2007(loc1));
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
EIF_BOOLEAN F578_2884 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {HASH_TABLE}.extendible */
EIF_BOOLEAN F578_2885 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {HASH_TABLE}.prunable */
EIF_BOOLEAN F578_2886 (EIF_REFERENCE Current)
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
	
	RTEAA("prunable", 577, Current, 0, 0, 6234);
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
EIF_BOOLEAN F578_2887 (EIF_REFERENCE Current)
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
	
	RTEAA("conflict", 577, Current, 0, 0, 6235);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.inserted */
EIF_BOOLEAN F578_2888 (EIF_REFERENCE Current)
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
	
	RTEAA("inserted", 577, Current, 0, 0, 6236);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.replaced */
EIF_BOOLEAN F578_2889 (EIF_REFERENCE Current)
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
	
	RTEAA("replaced", 577, Current, 0, 0, 6237);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 32L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.removed */
EIF_BOOLEAN F578_2890 (EIF_REFERENCE Current)
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
	
	RTEAA("removed", 577, Current, 0, 0, 6238);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.found */
EIF_BOOLEAN F578_2891 (EIF_REFERENCE Current)
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
	
	RTEAA("found", 577, Current, 0, 0, 6239);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.not_found */
EIF_BOOLEAN F578_2892 (EIF_REFERENCE Current)
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
	
	RTEAA("not_found", 577, Current, 0, 0, 6240);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.after */
EIF_BOOLEAN F578_2893 (EIF_REFERENCE Current)
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
	
	RTEAA("after", 577, Current, 0, 0, 6241);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F578_2940(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.off */
EIF_BOOLEAN F578_2894 (EIF_REFERENCE Current)
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
	
	RTEAA("off", 577, Current, 0, 0, 6242);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F578_2940(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.valid_cursor */
EIF_BOOLEAN F578_2895 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("valid_cursor", 577, Current, 2, 1, 6243);
	RTSA(Dtype(Current));
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
		if (!(nstcall = 0, F578_2940(Current, loc1))) {
			Result = (nstcall = 0, F578_2939(Current, loc1));
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
EIF_BOOLEAN F578_2896 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("valid_key", 577, Current, 0, 1, 6244);
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
EIF_BOOLEAN F578_2897 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("valid_iteration_index", 577, Current, 0, 1, 6245);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F578_2939(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_if_in_index_set", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) ((nstcall = 0, F578_2879(Current)) <= arg1)) {
				tb2 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F578_2880(Current)));
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
void F578_2898 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("start", 577, Current, 0, 0, 6246);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F578_2903(Current, ((EIF_INTEGER_32) -1L)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.forth */
void F578_2899 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("forth", 577, Current, 0, 0, 6247);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F578_2894(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F578_2903(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.go_to */
void F578_2900 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("go_to", 577, Current, 1, 1, 6248);
	RTSA(Dtype(Current));
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
		RTTE((nstcall = 0, F578_2895(Current, arg1)), label_1);
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
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.search */
void F578_2901 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	
	RTEAA("search", 577, Current, 2, 1, 6249);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
	RTHOOK(2);
	(nstcall = 0, F578_2949(Current, arg1));
	RTHOOK(3);
	if ((nstcall = 0, F578_2891(Current))) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 0, F578_2927(Current));
		ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), ti4_1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc2;
	}
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("found_or_not_found", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, F578_2891(Current))) {
			tb1 = (nstcall = 0, F578_2892(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("item_if_found", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F578_2891(Current))) {
			tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) == (nstcall = 0, F578_2864(Current, arg1)));
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
EIF_INTEGER_32 F578_2902 (EIF_REFERENCE Current)
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
	
	RTEAA("search_item", 577, Current, 0, 0, 6250);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.next_iteration_position */
EIF_INTEGER_32 F578_2903 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("next_iteration_position", 577, Current, 2, 1, 6251);
	RTSA(Dtype(Current));
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
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F587_3101(tr1));
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F587_3101(tr1));
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
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F587_3101(tr1));
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
EIF_INTEGER_32 F578_2904 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("previous_iteration_position", 577, Current, 1, 1, 6252);
	RTSA(Dtype(Current));
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
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F587_3101(tr1));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
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
void F578_2905 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("put", 577, Current, 3, 2, 6253);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F578_2866(Current, arg2)), label_1);
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
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
		RTE_OT
		ti4_3 = (nstcall = 0, F578_2864(Current, arg2));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (nstcall = 0, F578_2864(Current, arg2));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_);
		in_assertion = 0;
	}
	RTHOOK(3);
	(nstcall = 0, F578_2949(Current, arg2));
	RTHOOK(4);
	if ((nstcall = 0, F578_2891(Current))) {
		RTHOOK(5);
		(nstcall = 0, F578_2955(Current));
		RTHOOK(6);
		tr3 = *(EIF_REFERENCE *)(Current);
		ti4_5 = (nstcall = 0, F578_2927(Current));
		ti4_5 = (nstcall = 1, F587_3091(RTCW(tr3), ti4_5));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) ti4_5;
	} else {
		RTHOOK(7);
		if ((nstcall = 0, F578_2928(Current))) {
			RTHOOK(8);
			(nstcall = 0, F578_2968(Current));
			RTHOOK(9);
			(nstcall = 0, F578_2949(Current, arg2));
			
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) == ((EIF_INTEGER_32) -1L))) {
			RTHOOK(11);
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_5 = (nstcall = 1, F587_3101(tr3));
			loc2 = (EIF_INTEGER_32) ti4_5;
			RTHOOK(12);
			loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
		} else {
			RTHOOK(13);
			loc2 = (nstcall = 0, F578_2937(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_)));
			RTHOOK(14);
			loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_);
			RTHOOK(15);
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			(nstcall = 1, F594_3107(RTCW(tr3), (EIF_BOOLEAN) 0, loc2));
		}
		RTHOOK(16);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		(nstcall = 1, F587_3106(RTCW(tr3), loc2, loc3));
		RTHOOK(17);
		tr3 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F587_3107(RTCW(tr3), arg1, loc2));
		RTHOOK(18);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(nstcall = 1, F587_3107(RTCW(tr3), arg2, loc2));
		RTHOOK(19);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			RTHOOK(20);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(21);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))++;
		RTHOOK(22);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) arg1;
		RTHOOK(23);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("conflict_or_inserted", EX_POST);
		tb2 = '\01';
		if (!(nstcall = 0, F578_2887(Current))) {
			tb2 = (nstcall = 0, F578_2888(Current));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("insertion_done", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F578_2888(Current))) {
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F578_2864(Current, arg2)) == arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("now_present", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F578_2888(Current))) {
			tb2 = (nstcall = 0, F578_2866(Current, arg2));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("one_more_if_inserted", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F578_2888(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("unchanged_if_conflict", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F578_2887(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == ti4_2);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("same_item_if_conflict", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F578_2887(Current))) {
			RTCO(tr1);
			tb2 = ((EIF_BOOLEAN)((nstcall = 0, F578_2864(Current, arg2)) == ti4_3));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("found_item_associated_with_key", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) == (nstcall = 0, F578_2864(Current, arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("new_item_if_inserted", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F578_2888(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) == arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(32);
		RTCT("old_item_if_conflict", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F578_2887(Current))) {
			RTCO(tr2);
			tb2 = ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) == ti4_4));
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
		if ((nstcall = 0, F578_2888(Current))) {
			tb3 = (EIF_BOOLEAN)(arg2 == (nstcall = 0, F578_2947(Current)));
		}
		if (!(tb3)) {
			tb3 = '\0';
			tb4 = '\01';
			if (!(nstcall = 0, F578_2887(Current))) {
				tb4 = (EIF_BOOLEAN)(arg2 != (nstcall = 0, F578_2947(Current)));
			}
			if (tb4) {
				tb3 = tb1;
			}
			tb2 = tb3;
		}
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) == tb2)) {
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
void F578_2906 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("force", 577, Current, 4, 2, 6254);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F578_2866(Current, arg2)), label_1);
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
		tb1 = (nstcall = 0, F578_2866(Current, arg2));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
		RTE_OT
		ti4_3 = (nstcall = 0, F578_2864(Current, arg2));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		tb2 = *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_);
		in_assertion = 0;
	}
	RTHOOK(3);
	(nstcall = 0, F578_2949(Current, arg2));
	RTHOOK(4);
	if ((nstcall = 0, F578_2892(Current))) {
		RTHOOK(5);
		if ((nstcall = 0, F578_2928(Current))) {
			RTHOOK(6);
			(nstcall = 0, F578_2968(Current));
			RTHOOK(7);
			(nstcall = 0, F578_2949(Current, arg2));
		}
		RTHOOK(8);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) == ((EIF_INTEGER_32) -1L))) {
			RTHOOK(9);
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_4 = (nstcall = 1, F587_3101(tr3));
			loc3 = (EIF_INTEGER_32) ti4_4;
			RTHOOK(10);
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
		} else {
			RTHOOK(11);
			loc3 = (nstcall = 0, F578_2937(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_)));
			RTHOOK(12);
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_);
			RTHOOK(13);
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			(nstcall = 1, F594_3107(RTCW(tr3), (EIF_BOOLEAN) 0, loc3));
		}
		RTHOOK(14);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		(nstcall = 1, F587_3106(RTCW(tr3), loc3, loc4));
		RTHOOK(15);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(nstcall = 1, F587_3107(RTCW(tr3), arg2, loc3));
		RTHOOK(16);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			RTHOOK(17);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(18);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))++;
		RTHOOK(19);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc2;
	} else {
		RTHOOK(20);
		loc3 = (nstcall = 0, F578_2927(Current));
		RTHOOK(21);
		tr3 = *(EIF_REFERENCE *)(Current);
		ti4_4 = (nstcall = 1, F587_3091(RTCW(tr3), loc3));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) ti4_4;
	}
	RTHOOK(22);
	tr3 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F587_3107(RTCW(tr3), arg1, loc3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F578_2863(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("insertion_done", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F578_2864(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("now_present", EX_POST);
		if ((nstcall = 0, F578_2866(Current, arg2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("found_or_not_found", EX_POST);
		tb3 = '\01';
		if (!(nstcall = 0, F578_2891(Current))) {
			tb3 = (nstcall = 0, F578_2892(Current));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("not_found_if_was_not_present", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F578_2892(Current)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("same_count_or_one_more", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == ti4_1) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("found_item_is_old_item", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, F578_2891(Current))) {
			RTCO(tr2);
			tb3 = ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) == ti4_3));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("default_value_if_not_found", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, F578_2892(Current))) {
			tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) == (nstcall = 0, F578_2948(Current)));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("default_property", EX_POST);
		tb3 = '\01';
		if (!((EIF_BOOLEAN)(arg2 == (nstcall = 0, F578_2947(Current))))) {
			tb4 = '\0';
			if ((EIF_BOOLEAN)(arg2 != (nstcall = 0, F578_2947(Current)))) {
				tb4 = tb2;
			}
			tb3 = tb4;
		}
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) == tb3)) {
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
void F578_2907 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("extend", 577, Current, 3, 2, 6255);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_present", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F578_2866(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	(nstcall = 0, F578_2950(Current, arg2));
	RTHOOK(3);
	if ((nstcall = 0, F578_2928(Current))) {
		RTHOOK(4);
		(nstcall = 0, F578_2968(Current));
		RTHOOK(5);
		(nstcall = 0, F578_2950(Current, arg2));
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F587_3101(tr1));
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
	} else {
		RTHOOK(9);
		loc2 = (nstcall = 0, F578_2937(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_)));
		RTHOOK(10);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		(nstcall = 1, F594_3107(RTCW(tr1), (EIF_BOOLEAN) 0, loc2));
	}
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, F587_3106(RTCW(tr1), loc2, loc3));
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F587_3107(RTCW(tr1), arg1, loc2));
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F587_3107(RTCW(tr1), arg2, loc2));
	RTHOOK(15);
	if ((EIF_BOOLEAN)(arg2 == loc1)) {
		RTHOOK(16);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(17);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))++;
	RTHOOK(18);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("inserted", EX_POST);
		if ((nstcall = 0, F578_2888(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("insertion_done", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F578_2864(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("one_more", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("default_property", EX_POST);
		tb2 = '\01';
		if (!((EIF_BOOLEAN)(arg2 == (nstcall = 0, F578_2947(Current))))) {
			tb2 = tb1;
		}
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) == tb2)) {
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
void F578_2908 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("replace", 577, Current, 1, 2, 6256);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F578_2864(Current, arg2));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 0, F578_2864(Current, arg2));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F578_2949(Current, arg2));
	RTHOOK(2);
	if ((nstcall = 0, F578_2891(Current))) {
		RTHOOK(3);
		tr3 = *(EIF_REFERENCE *)(Current);
		ti4_3 = (nstcall = 0, F578_2927(Current));
		ti4_3 = (nstcall = 1, F587_3091(RTCW(tr3), ti4_3));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) ti4_3;
		RTHOOK(4);
		tr3 = *(EIF_REFERENCE *)(Current);
		ti4_3 = (nstcall = 0, F578_2927(Current));
		(nstcall = 1, F587_3106(RTCW(tr3), arg1, ti4_3));
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	} else {
		RTHOOK(6);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("replaced_or_not_found", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, F578_2889(Current))) {
			tb1 = (nstcall = 0, F578_2892(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("insertion_done", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F578_2889(Current))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F578_2864(Current, arg2)) == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("no_change_if_not_found", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F578_2892(Current))) {
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F578_2864(Current, arg2)) == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("found_item_is_old_item", EX_POST);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) == ti4_2)) {
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
void F578_2909 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	
	RTEAA("replace_key", 577, Current, 1, 2, 6257);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
		RTE_OT
		ti4_2 = (nstcall = 0, F578_2864(Current, arg2));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, F578_2866(Current, arg2));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tb2 = (nstcall = 0, F578_2866(Current, arg1));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 0, F578_2864(Current, arg1));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F578_2949(Current, arg1));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(nstcall = 0, F578_2891(Current))) {
		RTHOOK(3);
		(nstcall = 0, F578_2949(Current, arg2));
		RTHOOK(4);
		if ((nstcall = 0, F578_2891(Current))) {
			RTHOOK(5);
			tr5 = *(EIF_REFERENCE *)(Current);
			ti4_4 = (nstcall = 0, F578_2927(Current));
			ti4_4 = (nstcall = 1, F587_3091(RTCW(tr5), ti4_4));
			loc1 = (EIF_INTEGER_32) ti4_4;
			RTHOOK(6);
			(nstcall = 0, F578_2911(Current, arg2));
			RTHOOK(7);
			(nstcall = 0, F578_2905(Current, loc1, arg1));
			RTHOOK(8);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
		}
	} else {
		RTHOOK(9);
		(nstcall = 0, F578_2955(Current));
		RTHOOK(10);
		tr5 = *(EIF_REFERENCE *)(Current);
		ti4_4 = (nstcall = 0, F578_2927(Current));
		ti4_4 = (nstcall = 1, F587_3091(RTCW(tr5), ti4_4));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) ti4_4;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("replaced_or_conflict_or_not_found", EX_POST);
		tb3 = '\01';
		tb4 = '\01';
		if (!(nstcall = 0, F578_2889(Current))) {
			tb4 = (nstcall = 0, F578_2887(Current));
		}
		if (!tb4) {
			tb3 = (nstcall = 0, F578_2892(Current));
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
		if ((nstcall = 0, F578_2889(Current))) {
			tb4 = (EIF_BOOLEAN) !(nstcall = 0, F578_2882(Current, arg1, arg2));
		}
		if (tb4) {
			tb3 = (EIF_BOOLEAN) !(nstcall = 0, F578_2866(Current, arg2));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("new_present", EX_POST);
		tb3 = '\01';
		if (!(nstcall = 0, F578_2889(Current))) {
			tb3 = (nstcall = 0, F578_2887(Current));
		}
		if ((EIF_BOOLEAN)(tb3 == (nstcall = 0, F578_2866(Current, arg1)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("new_item", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, F578_2889(Current))) {
			RTCO(tr1);
			tb3 = ((EIF_BOOLEAN)((nstcall = 0, F578_2864(Current, arg1)) == ti4_2));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("not_found_implies_no_old_key", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, F578_2892(Current))) {
			RTCO(tr2);
			tb3 = tb1;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("conflict_iff_already_present", EX_POST);
		RTCO(tr3);
		if ((EIF_BOOLEAN)((nstcall = 0, F578_2887(Current)) == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("not_inserted_if_conflict", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, F578_2887(Current))) {
			RTCO(tr4);
			tb3 = (EIF_BOOLEAN)((nstcall = 0, F578_2864(Current, arg1)) == ti4_3);
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
void F578_2910 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("merge", 577, Current, 2, 1, 6258);
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
	tr1 = (nstcall = 1, F578_2873(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F228_2006(loc1));
		if (tb1) break;
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F228_2003(loc1));
		ti4_2 = (nstcall = 1, F228_2004(loc1));
		(nstcall = 0, F578_2906(Current, ti4_1, ti4_2));
		RTHOOK(4);
		(nstcall = 1, F228_2007(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		RTHOOK(6);
		tr1 = (nstcall = 1, F578_2873(RTCW(arg1)));
		loc2 = (EIF_REFERENCE) tr1;
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (nstcall = 1, F228_2006(loc2));
			if (tb3) break;
			RTHOOK(7);
			ti4_1 = (nstcall = 1, F228_2004(loc2));
			tb2 = (nstcall = 0, F578_2866(Current, ti4_1));
			RTHOOK(8);
			(nstcall = 1, F228_2007(loc2));
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
void F578_2911 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("remove", 577, Current, 6, 1, 6259);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F578_2949(Current, arg1));
	RTHOOK(2);
	if ((nstcall = 0, F578_2891(Current))) {
		RTHOOK(3);
		loc3 = (nstcall = 0, F578_2927(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg1 == loc1)) {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		(nstcall = 1, F594_3106(RTCW(tr1), (EIF_BOOLEAN) 1, loc3));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		(nstcall = 1, F587_3106(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc3 + ((EIF_INTEGER_32) -2L)), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_)));
		RTHOOK(8);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) == loc3)) {
			RTHOOK(9);
			(nstcall = 0, F578_2899(Current));
		}
		RTHOOK(10);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))--;
		RTHOOK(11);
		ti4_2 = eif_min_int32 (loc3,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) ti4_2;
		RTHOOK(12);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))) {
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_2 = (nstcall = 1, F587_3101(tr1));
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - loc4);
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F587_3120(RTCW(tr1), loc4));
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			(nstcall = 1, F587_3120(RTCW(tr1), loc4));
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_3 = (nstcall = 1, F594_3101(tr2));
			(nstcall = 1, F594_3110(RTCW(tr1), (EIF_BOOLEAN) 0, ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L))));
			RTHOOK(17);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) loc2;
			RTHOOK(18);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) = (EIF_INTEGER_32) loc1;
			RTHOOK(19);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
		} else {
			RTHOOK(20);
			loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_);
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_);
			if ((EIF_BOOLEAN) ((EIF_TRUE) && (EIF_TRUE))) {
				RTHOOK(21);
				tr1 = *(EIF_REFERENCE *)(Current);
				(nstcall = 1, F587_3106(RTCW(tr1), loc5, loc3));
				RTHOOK(22);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				(nstcall = 1, F587_3106(RTCW(tr1), loc6, loc3));
			} else {
				RTHOOK(23);
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_2 = (nstcall = 1, F587_3091(RTCW(tr1), loc3));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) ti4_2;
				RTHOOK(24);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				ti4_2 = (nstcall = 1, F587_3091(RTCW(tr1), loc3));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) = (EIF_INTEGER_32) ti4_2;
			}
		}
		RTHOOK(25);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
		RTHOOK(26);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("removed_or_not_found", EX_POST);
		tb2 = '\01';
		if (!(nstcall = 0, F578_2890(Current))) {
			tb2 = (nstcall = 0, F578_2892(Current));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("not_present", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F578_2866(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("one_less", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F578_2891(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("default_case", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F578_2947(Current)))) {
			tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("non_default_case", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN)(arg1 != (nstcall = 0, F578_2947(Current)))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) == tb1);
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
void F578_2912 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune", 577, Current, 0, 1, 6260);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F578_2886(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
		for (;;) {
			RTHOOK(3);
			tb1 = '\01';
			if (!(nstcall = 0, F578_2893(Current))) {
				tb1 = ((nstcall = 0, F578_2870(Current)) == arg1);
			}
			if (tb1) break;
			RTHOOK(4);
			(nstcall = 0, F578_2899(Current));
		}
	} else {
		for (;;) {
			RTHOOK(5);
			tb2 = '\01';
			if (!(nstcall = 0, F578_2893(Current))) {
				tb2 = (EIF_BOOLEAN)((nstcall = 0, F578_2870(Current)) == arg1);
			}
			if (tb2) break;
			RTHOOK(6);
			(nstcall = 0, F578_2899(Current));
		}
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) !(nstcall = 0, F578_2893(Current))) {
		RTHOOK(8);
		ti4_1 = (nstcall = 0, F578_2871(Current));
		(nstcall = 0, F578_2911(Current, ti4_1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.wipe_out */
void F578_2913 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	
	RTEAA("wipe_out", 577, Current, 1, 0, 6261);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F578_2886(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F587_3126(RTCW(tr1)));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F587_3126(RTCW(tr1)));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti4_1 = (nstcall = 1, F594_3100(RTCW(tr2)));
	(nstcall = 1, F594_3110(RTCW(tr1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 0L), ti4_1));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, F587_3110(RTCW(tr1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_INTEGER_32) loc1;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F587_3101(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(11);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, F344_2122(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("position_equal_to_zero", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("count_equal_to_zero", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("has_default_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("no_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F578_2967(Current))) {
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
void F578_2914 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("clear_all", 577, Current, 0, 0, 6262);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F578_2913(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.linear_representation */
EIF_REFERENCE F578_2915 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("linear_representation", 577, Current, 1, 0, 6263);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,562,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y1738,Y1738_gen_type,Dftype(Current),168);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 562, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F563_2774(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_)));
	RTHOOK(3);
	(nstcall = 0, F578_2898(Current));
	for (;;) {
		RTHOOK(4);
		if ((nstcall = 0, F578_2894(Current))) break;
		RTHOOK(5);
		ti4_1 = (nstcall = 0, F578_2870(Current));
		(nstcall = 1, F563_2815(RTCW(Result), ti4_1));
		RTHOOK(6);
		(nstcall = 0, F578_2899(Current));
	}
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) loc1;
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
		ti4_1 = (nstcall = 1, F563_2795(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))) {
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
void F578_2916 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("copy", 577, Current, 0, 1, 6264);
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
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, F578_2941(Current, tr2));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, F578_2943(Current, tr2));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, F578_2944(Current, tr2));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, F578_2945(Current, tr2));
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
EIF_REFERENCE F578_2917 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("empty_duplicate", 577, Current, 0, 1, 6265);
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
	(nstcall = -1, F578_2859(RTCW(Result), arg1));
	RTHOOK(3);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
		RTHOOK(4);
		(nstcall = 1, F282_2086(RTCW(Result)));
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
void F578_2918 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,loc5);
	RTLIU(9);
	
	RTEAA("correct_mismatch", 577, Current, 13, 0, 6266);
	RTSA(Dtype(Current));
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
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,498,0,0,0xFFFF};
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
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(4);
		tr1 = RTOSCF(2741,(nstcall = 0, F560_2741), (Current));
		tr2 = RTMS_EX_H("keys",4,1801812339);
		tr2 = (nstcall = 1, F575_2864(RTCW(tr1), tr2));
		loc9 = RTCCL(tr2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,498,0,0,0xFFFF};
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
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
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
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(8);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL))) {
			tr1 = RTOSCF(2741,(nstcall = 0, F560_2741), (Current));
			tr2 = RTMS_EX_H("hash_table_version_57",21,855604023);
			tb3 = (nstcall = 1, F575_2866(RTCW(tr1), tr2));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_1 = (nstcall = 1, F594_3101(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (nstcall = 1, F587_3101(tr1));
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			RTHOOK(9);
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			RTHOOK(10);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (nstcall = 1, F587_3101(tr2));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,730,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSP2(typres0.id,0,ti4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
				RT_SPECIAL_COUNT(tr1) = 0;
			}
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
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
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == NULL))) {
			RTHOOK(15);
			(nstcall = 0, F560_2740(Current));
		} else {
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (nstcall = 1, F587_3101(tr1));
			loc3 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(17);
			loc5 = (nstcall = 0, F578_2917(Current, loc4));
			for (;;) {
				RTHOOK(18);
				if ((EIF_BOOLEAN)(loc2 == loc3)) break;
				RTHOOK(19);
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				ti4_2 = (nstcall = 1, F587_3091(RTCW(tr1), loc2));
				loc12 = ti4_2;
				if ((EIF_TRUE)) {
					tb1 = (EIF_BOOLEAN)(loc12 != loc7);
				}
				if (tb1) {
					RTHOOK(20);
					tr1 = *(EIF_REFERENCE *)(Current);
					ti4_2 = (nstcall = 1, F587_3091(RTCW(tr1), loc2));
					(nstcall = 1, F578_2905(RTCW(loc5), ti4_2, loc12));
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
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_2 = (nstcall = 1, F587_3102(tr2));
				ti4_2 = (nstcall = 1, F587_3091(RTCW(tr1), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				ti4_3 = (nstcall = 1, F587_3091(RTCW(tr1), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
				(nstcall = 1, F578_2905(RTCW(loc5), ti4_2, ti4_3));
			}
			RTHOOK(24);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
			(nstcall = 0, F578_2941(Current, tr1));
			RTHOOK(25);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_1_);
			(nstcall = 0, F578_2943(Current, tr1));
			RTHOOK(26);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_3_);
			(nstcall = 0, F578_2944(Current, tr1));
			RTHOOK(27);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_2_);
			(nstcall = 0, F578_2945(Current, tr1));
			RTHOOK(28);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_4_3_0_1_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(29);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_4_3_0_3_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(30);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_4_3_0_5_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(31);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_4_3_0_2_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(32);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
			RTHOOK(33);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) loc6;
			RTHOOK(34);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) = (EIF_INTEGER_32) loc7;
		}
		RTHOOK(35);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.hash_table_version_64 */
EIF_BOOLEAN F578_2919 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_);
}


/* {HASH_TABLE}.content */
EIF_REFERENCE F578_2920 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {HASH_TABLE}.keys */
EIF_REFERENCE F578_2921 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {HASH_TABLE}.indexes_map */
EIF_REFERENCE F578_2922 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {HASH_TABLE}.deleted_marks */
EIF_REFERENCE F578_2923 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {HASH_TABLE}.item_position */
EIF_INTEGER_32 F578_2924 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
}


/* {HASH_TABLE}.has_default */
EIF_BOOLEAN F578_2925 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_);
}


/* {HASH_TABLE}.iteration_position */
EIF_INTEGER_32 F578_2926 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
}


/* {HASH_TABLE}.position */
EIF_INTEGER_32 F578_2927 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("position", 577, Current, 0, 0, 6275);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.soon_full */
EIF_BOOLEAN F578_2928 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("soon_full", 577, Current, 0, 0, 6276);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F587_3101(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_2 = (nstcall = 1, F587_3102(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (keys.count = keys.capacity)", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F587_3101(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F587_3102(tr1));
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
EIF_INTEGER_32 F578_2929 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
}


/* {HASH_TABLE}.deleted_item_position */
EIF_INTEGER_32 F578_2930 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_);
}


/* {HASH_TABLE}.ht_lowest_deleted_position */
EIF_INTEGER_32 F578_2934 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_);
}


/* {HASH_TABLE}.ht_deleted_item */
EIF_INTEGER_32 F578_2935 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_);
}


/* {HASH_TABLE}.ht_deleted_key */
EIF_INTEGER_32 F578_2936 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_);
}


/* {HASH_TABLE}.deleted_position */
EIF_INTEGER_32 F578_2937 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("deleted_position", 577, Current, 0, 1, 6172);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("deleted", EX_PRE);
		RTTE((nstcall = 0, F578_2942(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -ti4_1 + ((EIF_INTEGER_32) -2L));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F587_3101(tr1));
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
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F587_3101(tr1));
		if ((EIF_BOOLEAN) (Result <= ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, F587_3101(tr1));
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
EIF_BOOLEAN F578_2938 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("occupied", 577, Current, 0, 1, 6173);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tb1 = (nstcall = 1, F594_3105(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
		RTHOOK(3);
		Result = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
		if ((EIF_BOOLEAN)(arg1 != ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tb1 = (nstcall = 1, F594_3091(RTCW(tr1), arg1));
			Result = (EIF_BOOLEAN) !tb1;
		}
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
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
EIF_BOOLEAN F578_2939 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("truly_occupied", 577, Current, 0, 1, 6174);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F587_3101(tr1));
		tb1 = (EIF_BOOLEAN) (arg1 < ti4_1);
	}
	if (tb1) {
		RTHOOK(2);
		Result = '\01';
		tb1 = '\0';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
			tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
		}
		if (!(tb1)) {
			Result = (nstcall = 0, F578_2938(Current, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("normal_key", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (nstcall = 1, F587_3101(tr1));
			tb3 = (EIF_BOOLEAN) (arg1 < ti4_1);
		}
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
			tb2 = (EIF_BOOLEAN)(arg1 != ti4_1);
		}
		if (tb2) {
			tb2 = '\01';
			if ((nstcall = 0, F578_2938(Current, arg1))) {
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
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			tb1 = (EIF_BOOLEAN)(Result == *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_));
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
EIF_BOOLEAN F578_2940 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_off_position", 577, Current, 0, 1, 6175);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F587_3101(tr1));
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
void F578_2941 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_content", 577, Current, 0, 1, 6176);
	RTSA(Dtype(Current));
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
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("content_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
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
EIF_BOOLEAN F578_2942 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("deleted", 577, Current, 0, 1, 6177);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
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
void F578_2943 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_keys", 577, Current, 0, 1, 6178);
	RTSA(Dtype(Current));
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
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("keys_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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
void F578_2944 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_deleted_marks", 577, Current, 0, 1, 6179);
	RTSA(Dtype(Current));
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
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("deleted_marks_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == arg1)) {
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
void F578_2945 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("set_indexes_map", 577, Current, 0, 1, 6180);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("indexes_map_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg1)) {
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
EIF_INTEGER_32 F578_2946 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	
	RTEAA("default_key_value", 577, Current, 0, 0, 6181);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_default", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)));
	ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), ti4_1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.computed_default_key */
EIF_INTEGER_32 F578_2947 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("computed_default_key", 577, Current, 0, 0, 6182);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_INTEGER_32) 0;
}

/* {HASH_TABLE}.computed_default_value */
EIF_INTEGER_32 F578_2948 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("computed_default_value", 577, Current, 0, 0, 6183);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_INTEGER_32) 0;
}

/* {HASH_TABLE}.internal_search */
void F578_2949 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLIU(4);
	
	RTEAA("internal_search", 577, Current, 12, 1, 6184);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
		RTHOOK(4);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		}
	} else {
		RTHOOK(7);
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(8);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		RTHOOK(9);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		RTHOOK(10);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
		RTHOOK(11);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(12);
		loc2 = (nstcall = 0, F578_2875(Current, arg1));
		RTHOOK(13);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(14);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		RTHOOK(15);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
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
				ti4_1 = (nstcall = 1, F587_3091(RTCW(loc9), loc4));
				loc12 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(21);
				if ((nstcall = 0, F578_2882(Current, loc12, arg1))) {
					RTHOOK(22);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(23);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
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
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) loc5;
	}
	RTHOOK(33);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) loc7;
	if (RTAL & CK_ENSURE) {
		RTHOOK(34);
		RTCT("found_or_not_found", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, F578_2891(Current))) {
			tb1 = (nstcall = 0, F578_2892(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(35);
		RTCT("deleted_item_at_deleted_position", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) != ((EIF_INTEGER_32) -1L))) {
			tb1 = (nstcall = 0, F578_2942(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(36);
		RTCT("default_iff_at_capacity", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)) == (EIF_BOOLEAN)(arg1 == (nstcall = 0, F578_2947(Current))))) {
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
void F578_2950 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLIU(3);
	
	RTEAA("search_for_insertion", 577, Current, 10, 1, 6185);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_present", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F578_2866(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(3);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		
		RTHOOK(4);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		RTHOOK(7);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
		RTHOOK(8);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(9);
		loc2 = (nstcall = 0, F578_2875(Current, arg1));
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
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) loc5;
	}
	RTHOOK(25);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) loc7;
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("deleted_item_at_deleted_position", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) != ((EIF_INTEGER_32) -1L))) {
			tb1 = (nstcall = 0, F578_2942(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("default_iff_at_capacity", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_)) == (EIF_BOOLEAN)(arg1 == (nstcall = 0, F578_2947(Current))))) {
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
EIF_INTEGER_32 F578_2951 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("key_at", 577, Current, 0, 1, 6186);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = (nstcall = 1, F587_3105(RTCW(tr1), arg1));
	if (tb1) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F587_3091(RTCW(tr1), arg1));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.initial_position */
EIF_INTEGER_32 F578_2952 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("initial_position", 577, Current, 0, 1, 6187);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.position_increment */
EIF_INTEGER_32 F578_2953 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("position_increment", 577, Current, 0, 1, 6188);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (arg1 % (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.set_conflict */
void F578_2955 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_conflict", 577, Current, 0, 0, 6190);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("conflict", EX_POST);
		if ((nstcall = 0, F578_2887(Current))) {
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
void F578_2957 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_found", 577, Current, 0, 0, 6192);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("found", EX_POST);
		if ((nstcall = 0, F578_2891(Current))) {
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
void F578_2959 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_inserted", 577, Current, 0, 0, 6194);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("inserted", EX_POST);
		if ((nstcall = 0, F578_2888(Current))) {
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
void F578_2961 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_not_found", 577, Current, 0, 0, 6196);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_found", EX_POST);
		if ((nstcall = 0, F578_2892(Current))) {
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
void F578_2962 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_no_status", 577, Current, 0, 0, 6197);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("default_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F578_2967(Current))) {
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
void F578_2964 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_removed", 577, Current, 0, 0, 6199);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("removed", EX_POST);
		if ((nstcall = 0, F578_2890(Current))) {
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
void F578_2966 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_replaced", 577, Current, 0, 0, 6201);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("replaced", EX_POST);
		if ((nstcall = 0, F578_2889(Current))) {
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
EIF_BOOLEAN F578_2967 (EIF_REFERENCE Current)
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
	
	RTEAA("special_status", 577, Current, 0, 0, 6202);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (control > 0)", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) > ((EIF_INTEGER_32) 0L)))) {
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
void F578_2968 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("add_space", 577, Current, 0, 0, 6203);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_);
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F578_2861(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) / ((EIF_INTEGER_32) 2L)))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_not_changed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_))) {
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
void F578_2970 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("collection_extend", 577, Current, 0, 1, 6205);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F578_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_inserted", EX_POST);
		if ((nstcall = 0, F392_2135(Current, arg1))) {
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
void F578_1 (EIF_REFERENCE Current, int where)
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
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 627, Current, 0, 0);
	RTIT("keys_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("content_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("keys_enough_capacity", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F587_3101(tr1));
	if ((EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_) + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("content_enough_capacity", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F587_3101(tr1));
	if ((EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_) + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_iteration_position", Current);
	tb1 = '\01';
	if (!(nstcall = 0, F578_2894(Current))) {
		tb1 = (nstcall = 0, F578_2939(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_)));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("control_non_negative", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) >= ((EIF_INTEGER_32) 0L))) {
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
	if (!(nstcall = 0, F578_2887(Current))) {
		tb5 = (nstcall = 0, F578_2888(Current));
	}
	if (!tb5) {
		tb4 = (nstcall = 0, F578_2889(Current));
	}
	if (!tb4) {
		tb3 = (nstcall = 0, F578_2890(Current));
	}
	if (!tb3) {
		tb2 = (nstcall = 0, F578_2891(Current));
	}
	if (!tb2) {
		tb1 = (nstcall = 0, F578_2892(Current));
	}
	if ((EIF_BOOLEAN)((nstcall = 0, F578_2967(Current)) == tb1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_big_enough", Current);
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_small_enough", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("slot_count_big_enough", Current);
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit628 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
