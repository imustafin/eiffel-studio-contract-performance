/*
 * Code for class TIME_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti102.h"
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

/* {TIME_DURATION}.make_by_seconds */
void F123_1428 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	ti4_1 = F45_677(Current, arg1, ((EIF_INTEGER_32) 3600L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 3600L))));
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) -= tr8_1;
	ti4_1 = F123_1435(Current);
	ti4_1 = F45_677(Current, ti4_1, ((EIF_INTEGER_32) 60L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L))));
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) -= tr8_1;
	RTLE;
}

/* {TIME_DURATION}.fine_seconds_count */
EIF_REAL_64 F123_1430 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_REAL_64) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 60L))));
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
	Result = (EIF_REAL_64) (EIF_REAL_64) (Result + tr8_1);
	RTLE;
	return Result;
}

/* {TIME_DURATION}.hour */
EIF_INTEGER_32 F123_1433 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
}


/* {TIME_DURATION}.minute */
EIF_INTEGER_32 F123_1434 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
}


/* {TIME_DURATION}.second */
EIF_INTEGER_32 F123_1435 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
	Result = (EIF_INTEGER_32) tr8_1;
	RTLE;
	return Result;
}

/* {TIME_DURATION}.fine_second */
EIF_REAL_64 F123_1436 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
}


/* {TIME_DURATION}.is_equal */
EIF_BOOLEAN F123_1439 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tr8_1 = F123_1430(Current);
	tr8_2 = F123_1430(RTCW(arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, tr8_2);
	RTLE;
	return Result;
}

/* {TIME_DURATION}.fine_second_add */
void F123_1448 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) += arg1;
}

/* {TIME_DURATION}.to_days */
EIF_INTEGER_32 F123_1454 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = F123_1430(Current);
	ti4_1 = F720_4264(RTCW(tr1));
	Result = F45_677(Current, ti4_1, ((EIF_INTEGER_32) 86400L));
	RTLE;
	return Result;
}

/* {TIME_DURATION}.time_modulo_day */
EIF_REFERENCE F123_1455 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	tr1 = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = F123_1430(Current);
	ti4_1 = F720_4264(RTCW(tr1));
	ti4_1 = F45_676(Current, ti4_1, ((EIF_INTEGER_32) 86400L));
	F123_1428(RTCW(Result), ti4_1);
	tr8_1 = F123_1430(Current);
	tr1 = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = F123_1430(Current);
	ti4_1 = F720_4264(RTCW(tr1));
	tr8_2 = (EIF_REAL_64) (ti4_1);
	F123_1448(RTCW(Result), (EIF_REAL_64) (tr8_1 - tr8_2));
	RTLE;
	return Result;
}

void EIF_Minit102 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
