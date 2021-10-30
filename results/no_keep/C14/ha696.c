/*
 * Code for class HASH_TABLE [G#1, INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha696.h"
#include "eif_built_in.h"
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
void F577_2859 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(444, 0x01).id, 444, _OBJSIZ_0_1_0_1_0_0_0_0_);
	loc4 = eif_max_int32 (arg1,((EIF_INTEGER_32) 2L));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	ti4_1 = F445_2188(RTCW(loc1), loc4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current + O2248[dtype-574]) = (EIF_INTEGER_32) loc4;
	tr1 = RTLNSP2(eif_final_id(Y2276,Y2276_gen_type,dftype,574).id,EO_REF,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_REFERENCE), EIF_FALSE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2276[dtype-574]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSP2(eif_final_id(Y2277,Y2277_gen_type,dftype,574).id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2277[dtype-574]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,730,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_BOOLEAN), EIF_TRUE);
	}
	F594_3089(RTCW(tr1), (EIF_BOOLEAN) 0, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2279[dtype-574]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,586,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	}
	F587_3089(RTCW(tr1), ((EIF_INTEGER_32) -1L), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2278[dtype-574]) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTCCL(loc2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O2290[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
	tr1 = RTCCL(loc2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2291[dtype-574]) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current + O2292[dtype-574]) = (EIF_INTEGER_32) loc3;
	RTLE;
}

/* {HASH_TABLE}.accommodate */
void F577_2861 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	ti4_1 = eif_max_int32 (ti4_1,arg1);
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2274[dtype-574])(Current, ti4_1);
	loc4 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	loc5 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc5);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2294[dtype-574])(Current, loc1)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(loc4))-497])(loc4, loc1);
			tr2 = RTCCL(tr1);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc5) + (loc1));
			/* END INLINED CODE */
			ti4_1 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1888[Dtype(RTCW(loc3))-497])(loc3, tr2, (EIF_REFERENCE) &ti4_1);
		}
		loc1++;
	}
	if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
		tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
		/* END INLINED CODE */
		loc1 = ti4_3;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(loc4))-497])(loc4, loc1);
		tr2 = RTCCL(tr1);
		tr3 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		/* INLINED CODE (SPECIAL.item) */
		ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr3) + (loc1));
		/* END INLINED CODE */
		ti4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1888[Dtype(RTCW(loc3))-497])(loc3, tr2, (EIF_REFERENCE) &ti4_1);
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O2276[Dtype(loc3)-574]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2297[dtype-574])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O2277[Dtype(loc3)-574]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2299[dtype-574])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O2279[Dtype(loc3)-574]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2300[dtype-574])(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O2278[Dtype(loc3)-574]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2301[dtype-574])(Current, tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3) + O2248[Dtype(loc3)-574]);
	*(EIF_INTEGER_32 *)(Current + O2248[dtype-574]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3) + O2282[Dtype(loc3)-574]);
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.found_item */
EIF_REFERENCE F577_2862 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2239[Dtype(Current)-574]);
}


/* {HASH_TABLE}.item */
EIF_REFERENCE F577_2864 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
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
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc11);
	RTLIU(7);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
			tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
			tr2 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr2) + (*(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-497])(tr1, ti4_1);
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		loc10 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		loc11 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2247[dtype-574])(Current, (EIF_REFERENCE) &arg1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc10) + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc9) + (loc4));
				/* END INLINED CODE */
				loc12 = ti4_2;
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2249[dtype-574])(Current, (EIF_REFERENCE) &loc12, (EIF_REFERENCE) &arg1)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
					Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-497])(tr1, loc4);
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)RTCW(loc11) + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.has */
EIF_BOOLEAN F577_2866 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
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
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLIU(4);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		loc10 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		loc11 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2247[dtype-574])(Current, (EIF_REFERENCE) &arg1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc10) + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc9) + (loc4));
				/* END INLINED CODE */
				loc12 = ti4_2;
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2249[dtype-574])(Current, (EIF_REFERENCE) &loc12, (EIF_REFERENCE) &arg1)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)RTCW(loc11) + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.item_for_iteration */
EIF_REFERENCE F577_2870 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-497])(tr1, *(EIF_INTEGER_32 *)(Current + O2282[dtype-574]));
	RTLE;
	return Result;
}

/* {HASH_TABLE}.key_for_iteration */
EIF_INTEGER_32 F577_2871 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current + O2282[dtype-574])));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.new_cursor */
EIF_REFERENCE F577_2873 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,226,0,0,0,0,0xFFFF};
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
		Result = RTLNS(typres0.id, 226, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1786[Dtype(RTCW(Result))-210])(Result, Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R1783[Dtype(RTCW(Result))-210])(Result);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.hash_code_of */
EIF_INTEGER_32 F577_2875 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (arg1)));
	return (EIF_INTEGER_32) ti4_1;
}

/* {HASH_TABLE}.count */
EIF_INTEGER_32 F577_2876 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2326[Dtype(Current)-574]);
}


/* {HASH_TABLE}.iteration_lower */
EIF_INTEGER_32 F577_2879 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2266[Dtype(Current)-574])(Current, ((EIF_INTEGER_32) -1L));
}

/* {HASH_TABLE}.iteration_upper */
EIF_INTEGER_32 F577_2880 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2267[dtype-574])(Current, ti4_1);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_equal */
EIF_BOOLEAN F577_2881 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
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
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1737[dtype-574])(Current);
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1723[Dtype(loc1)-162])(loc1);
			if (tb1) break;
			if ((EIF_BOOLEAN) !Result) break;
			ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1735[Dtype(loc1)-224])(loc1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2264[Dtype(RTCW(arg1))-574])(arg1, (EIF_REFERENCE) &ti4_1);
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[Dtype(RTCW(arg1))-574])(arg1);
			if (tb2) {
				if (*(EIF_BOOLEAN *)(Current + O1839[dtype-280])) {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1722[Dtype(loc1)-224])(loc1);
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2239[Dtype(RTCW(arg1))-574])(arg1);
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
				} else {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1722[Dtype(loc1)-224])(loc1);
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2239[Dtype(RTCW(arg1))-574])(arg1);
					Result = (EIF_BOOLEAN) RTCEQ(tr1, tr2);
				}
			} else {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R1724[Dtype(loc1)-162])(loc1);
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.same_keys */
EIF_BOOLEAN F577_2882 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (arg1 == arg2);
}

/* {HASH_TABLE}.found */
EIF_BOOLEAN F577_2891 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2285[Dtype(Current)-574]) == ((EIF_INTEGER_32) 2L));
}

/* {HASH_TABLE}.not_found */
EIF_BOOLEAN F577_2892 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2285[Dtype(Current)-574]) == ((EIF_INTEGER_32) 8L));
}

/* {HASH_TABLE}.after */
EIF_BOOLEAN F577_2893 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2296[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2282[dtype-574]));
}

/* {HASH_TABLE}.valid_iteration_index */
EIF_BOOLEAN F577_2897 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2295[Dtype(Current)-574])(Current, arg1);
}

/* {HASH_TABLE}.start */
void F577_2898 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2266[dtype-574])(Current, ((EIF_INTEGER_32) -1L));
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.forth */
void F577_2899 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2266[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2282[dtype-574]));
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.search */
void F577_2901 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O2280[dtype-574]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, (EIF_REFERENCE) &arg1);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-497])(tr1, ti4_1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTCCL(loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	}
	*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {HASH_TABLE}.next_iteration_position */
EIF_INTEGER_32 F577_2903 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2432[Dtype(RTCW(tr1))-585])(tr1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result >= loc2)) {
			/* INLINED CODE (SPECIAL.item) */
			tb3 = *((EIF_BOOLEAN *)RTCW(loc1) + (Result));
			/* END INLINED CODE */
			tb2 = tb3;
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		Result++;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.previous_iteration_position */
EIF_INTEGER_32 F577_2904 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O2279[Dtype(Current)-574]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) -1L))) {
			/* INLINED CODE (SPECIAL.item) */
			tb3 = *((EIF_BOOLEAN *)RTCW(loc1) + (Result));
			/* END INLINED CODE */
			tb2 = tb3;
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		Result--;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.put */
void F577_2905 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, (EIF_REFERENCE) &arg2);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2255[dtype-574])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2311[dtype-574])(Current);
		tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-497])(tr1, ti4_1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	} else {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2284[dtype-574])(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2324[dtype-574])(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, (EIF_REFERENCE) &arg2);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) == ((EIF_INTEGER_32) -1L))) {
			tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			loc3 = *(EIF_INTEGER_32 *)(Current + O2280[dtype-574]);
		} else {
			loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2293[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2286[dtype-574]));
			loc3 = *(EIF_INTEGER_32 *)(Current + O2286[dtype-574]);
			tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			F594_3107(RTCW(tr1), (EIF_BOOLEAN) 0, loc2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)RTCW(tr1) + (loc3)) = loc2;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		tr2 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2447[Dtype(RTCW(tr1))-585])(tr1, tr2, loc2);
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		F587_3107(RTCW(tr1), arg2, loc2);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]))++;
		tr1 = RTCCL(arg1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
		*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	}
	RTLE;
}

/* {HASH_TABLE}.force */
void F577_2906 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, (EIF_REFERENCE) &arg2);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2256[dtype-574])(Current)) {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2284[dtype-574])(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2324[dtype-574])(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2305[dtype-574])(Current, (EIF_REFERENCE) &arg2);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) == ((EIF_INTEGER_32) -1L))) {
			tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			loc3 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			loc4 = *(EIF_INTEGER_32 *)(Current + O2280[dtype-574]);
		} else {
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2293[dtype-574])(Current, *(EIF_INTEGER_32 *)(Current + O2286[dtype-574]));
			loc4 = *(EIF_INTEGER_32 *)(Current + O2286[dtype-574]);
			tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			F594_3107(RTCW(tr1), (EIF_BOOLEAN) 0, loc3);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)RTCW(tr1) + (loc4)) = loc3;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		F587_3107(RTCW(tr1), arg2, loc3);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]))++;
		tr1 = RTCCL(loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	} else {
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2283[dtype-574])(Current);
		tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-497])(tr1, loc3);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	tr2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2447[Dtype(RTCW(tr1))-585])(tr1, tr2, loc3);
	RTLE;
}

/* {HASH_TABLE}.wipe_out */
void F577_2913 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2466[Dtype(RTCW(tr1))-585])(tr1);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	F587_3126(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
	tr2 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
	ti4_1 = F594_3100(RTCW(tr2));
	F594_3110(RTCW(tr1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 0L), ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
	F587_3110(RTCW(tr1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]));
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O2239[dtype-574]) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_BOOLEAN *)(Current + O2281[dtype-574]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {HASH_TABLE}.copy */
void F577_2916 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O2276[Dtype(arg1)-574]);
		tr1 = F1_14(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2297[dtype-574])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O2277[Dtype(arg1)-574]);
		tr1 = F1_14(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2299[dtype-574])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O2279[Dtype(arg1)-574]);
		tr1 = F1_14(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2300[dtype-574])(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O2278[Dtype(arg1)-574]);
		tr1 = F1_14(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2301[dtype-574])(Current, tr1);
	}
	RTLE;
}

/* {HASH_TABLE}.empty_duplicate */
EIF_REFERENCE F577_2917 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2236[Dtype(RTCW(Result))-574])(Result, arg1);
	if (*(EIF_BOOLEAN *)(Current + O1839[Dtype(Current)-280])) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R1841[Dtype(RTCW(Result))-444])(Result);
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.correct_mismatch */
void F577_2918 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
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
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,loc5);
	RTLR(9,loc6);
	RTLIU(10);
	
	RTGC;
	tr1 = RTOSCF(2741,F560_2741, (Current));
	tr2 = RTMS_EX_H("hash_table_version_64",21,855604276);
	tb1 = F575_2866(RTCW(tr1), tr2);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTOSCF(2741,F560_2741, (Current));
		tr2 = RTMS_EX_H("content",7,460700276);
		tr1 = F575_2864(RTCW(tr1), tr2);
		loc8 = RTCCL(tr1);
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
			tr1 = *(EIF_REFERENCE *)(loc8);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2276[dtype-574]) = (EIF_REFERENCE) tr1;
		}
		tr1 = RTOSCF(2741,F560_2741, (Current));
		tr2 = RTMS_EX_H("keys",4,1801812339);
		tr1 = F575_2864(RTCW(tr1), tr2);
		loc9 = RTCCL(tr1);
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
			tr1 = *(EIF_REFERENCE *)(loc9);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2277[dtype-574]) = (EIF_REFERENCE) tr1;
		}
		tr1 = RTOSCF(2741,F560_2741, (Current));
		tr2 = RTMS_EX_H("deleted_marks",13,2142169971);
		tr1 = F575_2864(RTCW(tr1), tr2);
		loc10 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,505,730,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc10 = RTRV(typres0,loc10);
		}
		if (EIF_TEST(loc10)) {
			tr1 = *(EIF_REFERENCE *)(loc10);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2279[dtype-574]) = (EIF_REFERENCE) tr1;
		}
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2279[dtype-574]) != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2277[dtype-574]) != NULL))) {
			tr1 = RTOSCF(2741,F560_2741, (Current));
			tr2 = RTMS_EX_H("hash_table_version_57",21,855604023);
			tb3 = F575_2866(RTCW(tr1), tr2);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			loc1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			tr2 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr2);
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
			tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
			/* INLINED CODE (SPECIAL.copy_data) */
			memmove((EIF_BOOLEAN *)RTCW(tr1) + (((EIF_INTEGER_32) 0L)),(EIF_BOOLEAN *)loc1 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)ti4_2);
			RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + ti4_2);
			/* END INLINED CODE */
			;
		}
		tr2 = RTOSCF(2741,F560_2741, (Current));
		tr3 = RTMS_EX_H("count",5,1870727284);
		tr2 = F575_2864(RTCW(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), eif_new_type(697, 0x00), tr1, loc11, tb1);
		if (tb1) {
			loc4 = (EIF_INTEGER_32) loc11;
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2276[dtype-574]) == NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2277[dtype-574]) == NULL)) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2279[dtype-574]) == NULL))) {
			F560_2740(Current);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
			loc3 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2274[dtype-574])(Current, loc4);
			for (;;) {
				if ((EIF_BOOLEAN)(loc2 == loc3)) break;
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
				/* INLINED CODE (SPECIAL.item) */
				ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc2));
				/* END INLINED CODE */
				ti4_2 = ti4_3;
				loc12 = ti4_2;
				if ((EIF_TRUE)) {
					tb1 = (EIF_BOOLEAN)(loc12 != loc7);
				}
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-497])(tr1, loc2);
					tr2 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1888[Dtype(RTCW(loc5))-497])(loc5, tr2, (EIF_REFERENCE) &loc12);
				}
				loc2++;
			}
			tb1 = '\0';
			tr2 = RTOSCF(2741,F560_2741, (Current));
			tr3 = RTMS_EX_H("has_default",11,1777575796);
			tr2 = F575_2864(RTCW(tr2), tr3);
			tr1 = RTCCL(tr2);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(730, 0x00), tr1, loc13, tb2);
			if (tb2) {
				tb1 = loc13;
			}
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
				tr2 = *(EIF_REFERENCE *)(Current + O2276[dtype-574]);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2433[Dtype(RTCW(tr2))-585])(tr2);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2099[Dtype(RTCW(tr1))-497])(tr1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
				tr2 = RTCCL(tr1);
				tr3 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
				/* INLINED CODE (SPECIAL.item) */
				ti4_4 = *((EIF_INTEGER_32 *)RTCW(tr3) + ((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
				/* END INLINED CODE */
				ti4_2 = ti4_4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1888[Dtype(RTCW(loc5))-497])(loc5, tr2, (EIF_REFERENCE) &ti4_2);
			}
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O2276[Dtype(loc5)-574]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2297[dtype-574])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O2277[Dtype(loc5)-574]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2299[dtype-574])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O2279[Dtype(loc5)-574]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2300[dtype-574])(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O2278[Dtype(loc5)-574]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2301[dtype-574])(Current, tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O2248[Dtype(loc5)-574]);
			*(EIF_INTEGER_32 *)(Current + O2248[dtype-574]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O2282[Dtype(loc5)-574]);
			*(EIF_INTEGER_32 *)(Current + O2282[dtype-574]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O2286[Dtype(loc5)-574]);
			*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O2280[Dtype(loc5)-574]);
			*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) ti4_2;
			*(EIF_INTEGER_32 *)(Current + O2290[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
			tr1 = RTCCL(loc6);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O2291[dtype-574]) = (EIF_REFERENCE) tr1;
			*(EIF_INTEGER_32 *)(Current + O2292[dtype-574]) = (EIF_INTEGER_32) loc7;
		}
		*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {HASH_TABLE}.position */
EIF_INTEGER_32 F577_2927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current + O2280[dtype-574])));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.soon_full */
EIF_BOOLEAN F577_2928 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.ht_deleted_item */
EIF_REFERENCE F577_2935 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2291[Dtype(Current)-574]);
}


/* {HASH_TABLE}.ht_deleted_key */
EIF_INTEGER_32 F577_2936 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2292[Dtype(Current)-574]);
}


/* {HASH_TABLE}.deleted_position */
EIF_INTEGER_32 F577_2937 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
	/* INLINED CODE (SPECIAL.item) */
	ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (arg1));
	/* END INLINED CODE */
	Result = ti4_2;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -Result + ((EIF_INTEGER_32) -2L));
	tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	ti4_1 = eif_min_int32 (Result,ti4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.occupied */
EIF_BOOLEAN F577_2938 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
		Result = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		if ((EIF_BOOLEAN)(arg1 != ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)RTCW(tr1) + (arg1));
			/* END INLINED CODE */
			tb1 = tb2;
			Result = (EIF_BOOLEAN) !tb1;
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		/* INLINED CODE (SPECIAL.item) */
		tb2 = *((EIF_BOOLEAN *)RTCW(tr1) + (arg1));
		/* END INLINED CODE */
		Result = tb2;
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.truly_occupied */
EIF_BOOLEAN F577_2939 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		tb1 = (EIF_BOOLEAN) (arg1 < ti4_1);
	}
	if (tb1) {
		Result = '\01';
		tb1 = '\0';
		if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
			tr1 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current + O2248[dtype-574])));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
		}
		if (!(tb1)) {
			Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2294[dtype-574])(Current, arg1);
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_off_position */
EIF_BOOLEAN F577_2940 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + O2277[Dtype(Current)-574]);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		Result = (EIF_BOOLEAN) (arg1 >= ti4_1);
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.set_content */
void F577_2941 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O2276[Dtype(Current)-574]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_keys */
void F577_2943 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O2277[Dtype(Current)-574]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_deleted_marks */
void F577_2944 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O2279[Dtype(Current)-574]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_indexes_map */
void F577_2945 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O2278[Dtype(Current)-574]) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.internal_search */
void F577_2949 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
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
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLIU(4);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
		if (*(EIF_BOOLEAN *)(Current + O2281[dtype-574])) {
			*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + O2277[dtype-574]);
		loc10 = *(EIF_REFERENCE *)(Current + O2278[dtype-574]);
		loc11 = *(EIF_REFERENCE *)(Current + O2279[dtype-574]);
		loc6 = *(EIF_INTEGER_32 *)(Current + O2248[dtype-574]);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2247[dtype-574])(Current, (EIF_REFERENCE) &arg1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc10) + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc9) + (loc4));
				/* END INLINED CODE */
				loc12 = ti4_2;
				if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2249[dtype-574])(Current, (EIF_REFERENCE) &loc12, (EIF_REFERENCE) &arg1)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					*(EIF_INTEGER_32 *)(Current + O2285[dtype-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)RTCW(loc11) + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
		*(EIF_INTEGER_32 *)(Current + O2280[dtype-574]) = (EIF_INTEGER_32) loc5;
	}
	*(EIF_INTEGER_32 *)(Current + O2286[dtype-574]) = (EIF_INTEGER_32) loc7;
	RTLE;
}

/* {HASH_TABLE}.set_conflict */
void F577_2955 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O2285[Dtype(Current)-574]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {HASH_TABLE}.add_space */
void F577_2968 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2238[dtype-574])(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O2326[dtype-574]) / ((EIF_INTEGER_32) 2L))));
}

void EIF_Minit696 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
