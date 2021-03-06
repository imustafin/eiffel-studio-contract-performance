/*
 * Code for class PRIMES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr125.h"
#include <math.h>

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
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 2L))) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
		} else {
			Result = (EIF_INTEGER_32) arg1;
		}
		for (;;) {
			if (F445_2191(Current, Result)) break;
			Result += ((EIF_INTEGER_32) 2L);
		}
	}
	RTLE;
	return Result;
}

/* {PRIMES}.all_lower_primes */
EIF_REFERENCE F445_2190 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,505,730,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 505, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F506_2576(RTCW(Result), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 1L), arg1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg1)) break;
		F506_2600(RTCW(Result), (EIF_BOOLEAN) 1, loc1);
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 2L))) {
		F506_2600(RTCW(Result), (EIF_BOOLEAN) 1, ((EIF_INTEGER_32) 2L));
	}
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 * loc1) > arg1)) break;
		tb1 = F506_2581(RTCW(Result), loc1);
		if (tb1) {
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 * loc1);
			for (;;) {
				if ((EIF_BOOLEAN) (loc2 > arg1)) break;
				F506_2600(RTCW(Result), (EIF_BOOLEAN) 0, loc2);
				loc2 += (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc1);
			}
		}
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	RTLE;
	return Result;
}

/* {PRIMES}.is_prime */
EIF_BOOLEAN F445_2191 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1L))) {
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 2L)) != ((EIF_INTEGER_32) 0L))) {
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % loc1) == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 * loc1) >= arg1))) break;
					loc1 += ((EIF_INTEGER_32) 2L);
				}
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 * loc1) > arg1)) {
					return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		}
	}
	return Result;
}

/* {PRIMES}.i_th */
EIF_INTEGER_32 F445_2192 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	loc3 = RTOSCF(2195,F445_2195, (Current));
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_0_);
		tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
	}
	if (tb1) {
		ti4_1 = F499_2581(RTCW(loc3), arg1);
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F445_2196(Current, arg1);
		loc1 = F445_2190(Current, ti4_1);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == arg1)) break;
			Result++;
			tb1 = F506_2581(RTCW(loc1), Result);
			if (tb1) {
				loc2++;
			}
		}
	}
	RTLE;
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
	RTLD;
	

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOSP (2195);
#define Result RTOSR(2195)
	RTOC_NEW(Result);
	ti4_1 = F445_2196(Current, ((EIF_INTEGER_32) 200L));
	loc1 = F445_2190(Current, ti4_1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,498,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 498, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F499_2576(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 200L));
	Result = (EIF_REFERENCE) tr1;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 200L))) break;
		tb1 = F506_2581(RTCW(loc1), loc2);
		if (tb1) {
			F499_2600(RTCW(Result), loc2, loc3);
			loc3++;
		}
		loc2++;
	}
	RTOSE (2195);
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
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 13L))) {
		loc1 = RTLNS(eif_new_type(31, 0x01).id, 31, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr8_1 = (EIF_REAL_64) (arg1);
		loc2 = (EIF_REAL_64) log((double) tr8_1);
		loc3 = (EIF_REAL_64) log((double) loc2);
		tr8_1 = (EIF_REAL_64) (arg1);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		Result = (EIF_INTEGER_32) ((EIF_REAL_64) (tr8_1 * (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc2 + loc3) - tr8_2) + (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.8 * loc3)) /  (EIF_REAL_64) (loc2)))));
	} else {
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 * arg1);
	}
	RTLE;
	return Result;
}

void EIF_Minit125 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
