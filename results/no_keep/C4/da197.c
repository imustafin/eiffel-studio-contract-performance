/*
 * Code for class DATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da197.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE}.make */
void F783_5048 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F574_2844(Current, arg1, arg2, arg3);
}

/* {DATE}.origin */
static EIF_REFERENCE F783_5060_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOSP (5060);
#define Result RTOSR(5060)
	RTOC_NEW(Result);
	tr1 = RTLNS(eif_new_type(782, 0x01).id, 782, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F783_5048(RTCW(tr1), ((EIF_INTEGER_32) 1600L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (5060);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F783_5060 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(5060,F783_5060_body,(Current));
}

/* {DATE}.is_less */
EIF_BOOLEAN F783_5061 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)))) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 < loc2);
	} else {
		Result = '\0';
		ti4_1 = F574_2841(RTCW(arg1));
		if ((EIF_BOOLEAN) (F574_2841(Current) < ti4_1)) {
			ti4_1 = eif_bit_and(loc1,((EIF_INTEGER_32) 65535L));
			ti4_2 = eif_bit_and(loc2,((EIF_INTEGER_32) 65535L));
			Result = (EIF_BOOLEAN) (ti4_1 < ti4_2);
		}
	}
	RTLE;
	return Result;
}

/* {DATE}.days */
EIF_INTEGER_32 F783_5063 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F574_2841(RTCV(RTOSCF(5060,F783_5060, (Current))));
	Result = F783_5071(Current, ti4_1);
	ti4_1 = F783_5066(Current);
	ti4_2 = F783_5066(RTCV(RTOSCF(5060,F783_5060, (Current))));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ti4_2);
	RTLE;
	return Result;
}

/* {DATE}.leap_year */
EIF_BOOLEAN F783_5064 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F574_2841(Current);
	Result = F49_726(Current, ti4_1);
	RTLE;
	return Result;
}

/* {DATE}.days_at_month */
EIF_INTEGER_32 F783_5065 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	loc1 = F574_2840(Current);
	tr1 = RTOSCF(5089,F783_5089, (Current));
	/* INLINED CODE (SPECIAL.item) */
	ti4_1 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc1));
	/* END INLINED CODE */
	Result = ti4_1;
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 2L))) {
		tb1 = F783_5064(Current);
	}
	if (tb1) {
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {DATE}.year_day */
EIF_INTEGER_32 F783_5066 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F783_5065(Current);
	ti4_1 = F574_2839(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	RTLE;
	return Result;
}

/* {DATE}.day_of_the_week */
EIF_INTEGER_32 F783_5069 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F783_5063(Current);
	Result = F45_676(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 7L));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {DATE}.days_from */
EIF_INTEGER_32 F783_5071 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = F574_2841(Current);
	Result = F45_677(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 4L));
	ti4_1 = F45_677(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 4L));
	ti4_2 = F45_677(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 100L));
	ti4_3 = F45_677(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 100L));
	ti4_4 = F45_677(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 400L));
	ti4_5 = F45_677(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 400L));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - arg1) * ((EIF_INTEGER_32) 365L)) + (EIF_INTEGER_32) (Result - ti4_1)) - (EIF_INTEGER_32) (ti4_2 - ti4_3)) + (EIF_INTEGER_32) (ti4_4 - ti4_5));
	RTLE;
	return Result;
}

/* {DATE}.out */
EIF_REFERENCE F783_5087 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = F49_720(Current);
	Result = F783_5088(Current, tr1);
	RTLE;
	return Result;
}

/* {DATE}.formatted_out */
EIF_REFERENCE F783_5088 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(780, 0x01).id, 780, _OBJSIZ_4_2_0_1_0_0_0_0_);
	F781_5016(RTCW(tr1), arg1);
	Result = F781_5028(RTCW(tr1), Current);
	RTLE;
	return Result;
}

/* {DATE}.days_at_months */
static EIF_REFERENCE F783_5089_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOSP (5089);
#define Result RTOSR(5089)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {586,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 13L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 13L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 90L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 120L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 151L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 181L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 212L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 243L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 273L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 304L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 334L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F587_3097)(tr2);
	Result = *(EIF_REFERENCE *)(tr1);
	RTOSE (5089);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F783_5089 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(5089,F783_5089_body,(Current));
}

void EIF_Minit197 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
