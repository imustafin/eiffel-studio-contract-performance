/*
 * Code for class PRIMES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr125.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PRIMES}.higher_prime */
EIF_INTEGER_32 F445_2188 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("higher_prime", 444, Current, 0, 1, 3349);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		
		RTHOOK(3);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(5);
			Result = (EIF_INTEGER_32) arg1;
		}
		for (;;) {
			RTHOOK(6);
			if ((nstcall = 0, F445_2191(Current, Result))) break;
			RTHOOK(7);
			Result += ((EIF_INTEGER_32) 2L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {PRIMES}.lower_prime */
EIF_INTEGER_32 F445_2189 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("lower_prime", 444, Current, 0, 1, 3350);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(6);
			Result = (EIF_INTEGER_32) arg1;
		}
		for (;;) {
			RTHOOK(7);
			if ((nstcall = 0, F445_2191(Current, Result))) break;
			RTHOOK(8);
			Result -= ((EIF_INTEGER_32) 2L);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {PRIMES}.all_lower_primes */
EIF_REFERENCE F445_2190 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("all_lower_primes", 444, Current, 2, 1, 3351);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,505,730,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 505, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F506_2576(RTCW(Result), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 1L), arg1));
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > arg1)) break;
		RTHOOK(4);
		(nstcall = 1, F506_2600(RTCW(Result), (EIF_BOOLEAN) 1, loc1));
		RTHOOK(5);
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(7);
		(nstcall = 1, F506_2600(RTCW(Result), (EIF_BOOLEAN) 1, ((EIF_INTEGER_32) 2L)));
	}
	RTHOOK(8);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 * loc1) > arg1)) break;
		RTHOOK(10);
		tb1 = (nstcall = 1, F506_2581(RTCW(Result), loc1));
		if (tb1) {
			RTHOOK(11);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 * loc1);
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc2 > arg1)) break;
				RTHOOK(13);
				(nstcall = 1, F506_2600(RTCW(Result), (EIF_BOOLEAN) 0, loc2));
				RTHOOK(14);
				loc2 += (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc1);
			}
		}
		RTHOOK(15);
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
	return Result;
}

/* {PRIMES}.is_prime */
EIF_BOOLEAN F445_2191 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_prime", 444, Current, 1, 1, 3352);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(5);
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 2L)) != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(6);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				for (;;) {
					RTHOOK(7);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % loc1) == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 * loc1) >= arg1))) break;
					RTHOOK(8);
					loc1 += ((EIF_INTEGER_32) 2L);
				}
				RTHOOK(9);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 * loc1) > arg1)) {
					RTHOOK(10);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F341_2118(Current));
		}
		if (tb1) {
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
	return Result;
}

/* {PRIMES}.i_th */
EIF_INTEGER_32 F445_2192 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("i_th", 444, Current, 3, 1, 3353);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc3 = RTOSCF(2195,(nstcall = 0, F445_2195), (Current));
	RTHOOK(3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_0_);
		tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
	}
	if (tb1) {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F499_2581(RTCW(loc3), arg1));
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(5);
		ti4_1 = (nstcall = 0, F445_2196(Current, arg1));
		loc1 = (nstcall = 0, F445_2190(Current, ti4_1));
		RTHOOK(6);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		RTHOOK(7);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc2 == arg1)) break;
			RTHOOK(9);
			Result++;
			RTHOOK(10);
			tb1 = (nstcall = 1, F506_2581(RTCW(loc1), Result));
			if (tb1) {
				RTHOOK(11);
				loc2++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {PRIMES}.new_cursor */
EIF_REFERENCE F445_2193 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 444, Current, 0, 0, 3354);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(444, 0x01).id, 444, _OBJSIZ_0_1_0_1_0_0_0_0_);
	RTHOOK(2);
	(nstcall = 1, F444_2177(RTCW(Result)));
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

/* {PRIMES}.internal_precomputed_primes */
static EIF_REFERENCE F445_2195_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("internal_precomputed_primes", 444, Current, 3, 0, 3356);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (2195);
#define Result RTOSR(2195)
	RTOC_NEW(Result);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F445_2196(Current, ((EIF_INTEGER_32) 200L)));
	loc1 = (nstcall = 0, F445_2190(Current, ti4_1));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,498,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 498, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F499_2576(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 200L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 200L))) break;
		RTHOOK(6);
		tb1 = (nstcall = 1, F506_2581(RTCW(loc1), loc2));
		if (tb1) {
			RTHOOK(7);
			(nstcall = 1, F499_2600(RTCW(Result), loc2, loc3));
			RTHOOK(8);
			loc3++;
		}
		RTHOOK(9);
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("internal_precomputed_primes_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("lower_valid", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("upper_valid", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 200L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (2195);
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F445_2195 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2195,F445_2195_body,(Current));
}

/* {PRIMES}.approximated_i_th */
EIF_INTEGER_32 F445_2196 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("approximated_i_th", 444, Current, 3, 1, 3357);
	RTSA(Dtype(Current));
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
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 13L))) {
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(31, 0x01).id, 31, _OBJSIZ_0_0_0_0_0_0_0_0_);
		RTHOOK(4);
		tr8_1 = (EIF_REAL_64) (arg1);
		tr8_1 = (nstcall = 1, F32_528(loc1, tr8_1));
		loc2 = (EIF_REAL_64) tr8_1;
		RTHOOK(5);
		tr8_1 = (nstcall = 1, F32_528(loc1, loc2));
		loc3 = (EIF_REAL_64) tr8_1;
		RTHOOK(6);
		tr8_1 = (EIF_REAL_64) (arg1);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		ti4_1 = (EIF_INTEGER_32) ((EIF_REAL_64) (tr8_1 * (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc2 + loc3) - tr8_2) + (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.8 * loc3)) /  (EIF_REAL_64) (loc2)))));
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(7);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 * arg1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("approximation_valid", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F445_2192(Current, arg1)) <= Result)) {
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

void EIF_Minit125 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
