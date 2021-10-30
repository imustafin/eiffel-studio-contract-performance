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

/* {TIME_DURATION}.make */
void F123_1426 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 122, Current, 0, 3, 1416);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	tr8_1 = (EIF_REAL_64) (arg3);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("second_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F123_1435(Current)) == arg3)) {
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

/* {TIME_DURATION}.make_fine */
void F123_1427 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_fine", 122, Current, 0, 3, 1417);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("fine_second_set", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_), arg3)) {
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

/* {TIME_DURATION}.make_by_seconds */
void F123_1428 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_seconds", 122, Current, 0, 1, 1418);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F45_677(Current, arg1, ((EIF_INTEGER_32) 3600L)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 3600L))));
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) -= tr8_1;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F123_1435(Current));
	ti4_1 = (nstcall = 0, F45_677(Current, ti4_1, ((EIF_INTEGER_32) 60L)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L))));
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) -= tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("seconds_count_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F123_1431(Current)) == arg1)) {
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

/* {TIME_DURATION}.make_by_fine_seconds */
void F123_1429 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_fine_seconds", 122, Current, 0, 1, 1419);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) arg1;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F123_1435(Current));
	ti4_1 = (nstcall = 0, F45_677(Current, ti4_1, ((EIF_INTEGER_32) 3600L)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 3600L))));
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) -= tr8_1;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F123_1435(Current));
	ti4_1 = (nstcall = 0, F45_677(Current, ti4_1, ((EIF_INTEGER_32) 60L)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L))));
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) -= tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("minute_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("minute_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) < ((EIF_INTEGER_32) 60L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("second_large_enough", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F123_1435(Current)) >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("second_small_enough", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F123_1435(Current)) < ((EIF_INTEGER_32) 60L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("fine_seconds_set", EX_POST);
		tr8_1 = (nstcall = 0, F123_1430(Current));
		if ((EIF_BOOLEAN) eif_is_less_equal_real_64 ((nstcall = 0, F32_532(Current, (EIF_REAL_64) (tr8_1 - arg1))), 9.9999999999999995e-07)) {
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

/* {TIME_DURATION}.fine_seconds_count */
EIF_REAL_64 F123_1430 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("fine_seconds_count", 122, Current, 0, 0, 1420);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 60L))));
	Result = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
	Result = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 + Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME_DURATION}.seconds_count */
EIF_INTEGER_32 F123_1431 (EIF_REFERENCE Current)
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
	
	RTEAA("seconds_count", 122, Current, 0, 0, 1421);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (EIF_INTEGER_32) (nstcall = 0, F123_1430(Current));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("same_count", EX_POST);
		ti4_1 = (EIF_INTEGER_32) (nstcall = 0, F123_1430(Current));
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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

/* {TIME_DURATION}.zero */
EIF_REFERENCE F123_1432 (EIF_REFERENCE Current)
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
	
	RTEAA("zero", 122, Current, 0, 0, 1422);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F123_1426(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
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
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("second", 122, Current, 0, 0, 1425);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) tr8_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME_DURATION}.fine_second */
EIF_REAL_64 F123_1436 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
}


/* {TIME_DURATION}.fractional_second */
EIF_REAL_64 F123_1437 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("fractional_second", 122, Current, 0, 0, 1427);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
	ti4_1 = (nstcall = 0, F123_1435(Current));
	tr8_1 = (EIF_REAL_64) (ti4_1);
	Result = (EIF_REAL_64) (EIF_REAL_64) (Result - tr8_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME_DURATION}.is_less */
EIF_BOOLEAN F123_1438 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_less", 122, Current, 0, 1, 1428);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr8_1 = (nstcall = 0, F123_1430(Current));
	tr8_2 = (nstcall = 1, F123_1430(RTCW(arg1)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_less_real_64 (tr8_1, tr8_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME_DURATION}.is_equal */
EIF_BOOLEAN F123_1439 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_equal", 122, Current, 0, 1, 1429);
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
	tr8_1 = (nstcall = 0, F123_1430(Current));
	tr8_2 = (nstcall = 1, F123_1430(RTCW(arg1)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, tr8_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb1 = Result;
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

/* {TIME_DURATION}.canonical */
EIF_BOOLEAN F123_1440 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("canonical", 122, Current, 0, 0, 1430);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 ((nstcall = 0, F123_1430(Current)), tr8_1)) {
		RTHOOK(2);
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 60L));
		if ((EIF_BOOLEAN) eif_is_less_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_), tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tb2 = (EIF_BOOLEAN) eif_is_greater_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_), tr8_1);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) < ((EIF_INTEGER_32) 60L));
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) >= ((EIF_INTEGER_32) 0L));
		}
	} else {
		RTHOOK(3);
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) -((EIF_INTEGER_32) 60L));
		if ((EIF_BOOLEAN) eif_is_greater_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_), tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tb2 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_), tr8_1);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) > (EIF_INTEGER_32) -((EIF_INTEGER_32) 60L));
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) <= ((EIF_INTEGER_32) 0L));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME_DURATION}.is_positive */
EIF_BOOLEAN F123_1441 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_positive", 122, Current, 0, 0, 1431);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) > ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) > ((EIF_INTEGER_32) 0L)))) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		Result = (EIF_BOOLEAN) eif_is_greater_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_), tr8_1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME_DURATION}.set_second */
void F123_1442 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_second", 122, Current, 0, 1, 1432);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 60L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("second_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F123_1435(Current)) == arg1)) {
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

/* {TIME_DURATION}.set_fine_second */
void F123_1443 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_fine_second", 122, Current, 0, 1, 1433);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_large_enough", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_small_enough", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 60L));
		RTTE((EIF_BOOLEAN) eif_is_less_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("fine_second_set", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_), arg1)) {
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

/* {TIME_DURATION}.set_fractionals */
void F123_1444 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("set_fractionals", 122, Current, 0, 1, 1434);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("f_large_enough", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("f_small_enough", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		RTTE((EIF_BOOLEAN) eif_is_less_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F123_1435(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = (nstcall = 0, F123_1435(Current));
	tr8_1 = (EIF_REAL_64) (ti4_2);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 + arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("second_same", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F123_1435(Current)) == ti4_1)) {
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

/* {TIME_DURATION}.set_minute */
void F123_1445 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_minute", 122, Current, 0, 1, 1435);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("m_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("m_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 60L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) == arg1)) {
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

/* {TIME_DURATION}.set_hour */
void F123_1446 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_hour", 122, Current, 0, 1, 1436);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("h_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("h_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 24L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) == arg1)) {
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

/* {TIME_DURATION}.second_add */
void F123_1447 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("second_add", 122, Current, 0, 1, 1437);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F123_1435(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr8_1 = (EIF_REAL_64) (arg1);
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) += tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("second_set", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F123_1435(Current)) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {TIME_DURATION}.fine_second_add */
void F123_1448 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("fine_second_add", 122, Current, 0, 1, 1438);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)) += arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {TIME_DURATION}.minute_add */
void F123_1449 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("minute_add", 122, Current, 0, 1, 1439);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_)) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {TIME_DURATION}.hour_add */
void F123_1450 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("hour_add", 122, Current, 0, 1, 1440);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_)) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {TIME_DURATION}.plus */
EIF_REFERENCE F123_1451 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("plus", 122, Current, 0, 1, 1441);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_1_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_4 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_);
	tr8_2 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_2_0_0_0_0_);
	(nstcall = -1, F123_1427(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2), (EIF_INTEGER_32) (ti4_3 + ti4_4), (EIF_REAL_64) (tr8_1 + tr8_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("commutative", EX_POST);
		tr1 = (nstcall = 1, F123_1451(RTCW(arg1), Current));
		tb1 = (nstcall = 1, F123_1439(RTCW(Result), tr1));
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

/* {TIME_DURATION}.opposite */
EIF_REFERENCE F123_1452 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("opposite", 122, Current, 0, 0, 1442);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F123_1427(RTCW(Result), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_), (EIF_REAL_64) -*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("result_definition", EX_POST);
		tr1 = (nstcall = 1, F123_1451(RTCW(Result), Current));
		tr2 = (nstcall = 0, F123_1432(Current));
		tb1 = (nstcall = 1, F123_1439(RTCW(tr1), tr2));
		if (tb1) {
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

/* {TIME_DURATION}.to_canonical */
EIF_REFERENCE F123_1453 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("to_canonical", 122, Current, 0, 0, 1443);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F123_1440(Current))) {
		RTHOOK(2);
		Result = (nstcall = 0, F1_14(Current));
	} else {
		RTHOOK(3);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 ((nstcall = 0, F123_1430(Current)), tr8_1)) {
			RTHOOK(4);
			Result = RTLNSMART(dftype);
			tr8_1 = (nstcall = 0, F123_1430(Current));
			(nstcall = -1, F123_1429(RTCW(Result), tr8_1));
		} else {
			RTHOOK(5);
			Result = RTLNSMART(dftype);
			(nstcall = -1, F123_1429(RTCW(Result), (EIF_REAL_64) -(nstcall = 0, F123_1430(Current))));
			RTHOOK(6);
			tr1 = (nstcall = 1, F123_1452(RTCW(Result)));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_canonical", EX_POST);
		tb1 = (nstcall = 1, F123_1440(RTCW(Result)));
		if (tb1) {
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

/* {TIME_DURATION}.to_days */
EIF_INTEGER_32 F123_1454 (EIF_REFERENCE Current)
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
	
	RTEAA("to_days", 122, Current, 0, 0, 1444);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = (nstcall = 0, F123_1430(Current));
	ti4_1 = (nstcall = 1, F720_4264(RTCW(tr1)));
	Result = (nstcall = 0, F45_677(Current, ti4_1, ((EIF_INTEGER_32) 86400L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME_DURATION}.time_modulo_day */
EIF_REFERENCE F123_1455 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("time_modulo_day", 122, Current, 0, 0, 1445);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	tr1 = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = (nstcall = 0, F123_1430(Current));
	ti4_1 = (nstcall = 1, F720_4264(RTCW(tr1)));
	ti4_1 = (nstcall = 0, F45_676(Current, ti4_1, ((EIF_INTEGER_32) 86400L)));
	(nstcall = -1, F123_1428(RTCW(Result), ti4_1));
	RTHOOK(2);
	tr8_1 = (nstcall = 0, F123_1430(Current));
	tr1 = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = (nstcall = 0, F123_1430(Current));
	ti4_1 = (nstcall = 1, F720_4264(RTCW(tr1)));
	tr8_2 = (EIF_REAL_64) (ti4_1);
	(nstcall = 1, F123_1448(RTCW(Result), (EIF_REAL_64) (tr8_1 - tr8_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_smaller_than_day", EX_POST);
		ti4_1 = (nstcall = 1, F123_1431(RTCW(Result)));
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 86400L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_positive", EX_POST);
		tr1 = (nstcall = 0, F123_1432(Current));
		tb1 = (nstcall = 1, F118_1330(RTCW(Result), tr1));
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

/* {TIME_DURATION}._invariant */
void F123_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 101, Current, 0, 0);
	RTIT("fractionals_large_enough", Current);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) -1L));
	if ((EIF_BOOLEAN) eif_is_greater_real_64 ((nstcall = 0, F123_1437(Current)), tr8_1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("fractionals_small_enough", Current);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) eif_is_less_real_64 ((nstcall = 0, F123_1437(Current)), tr8_1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("fractional_and_second_same_sign", Current);
	ti4_1 = (nstcall = 0, F123_1435(Current));
	tr8_1 = (EIF_REAL_64) (ti4_1);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 ((EIF_REAL_64) (tr8_1 * (nstcall = 0, F123_1437(Current))), tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("equal_signs", Current);
	tb1 = '\01';
	if ((nstcall = 0, F123_1440(Current))) {
		tb2 = '\01';
		tb3 = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) >= ((EIF_INTEGER_32) 0L)))) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tb3 = (EIF_BOOLEAN) eif_is_greater_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_), tr8_1);
		}
		if (!(tb3)) {
			tb3 = '\0';
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) <= ((EIF_INTEGER_32) 0L)))) {
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				tb3 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_2_0_0_0_0_), tr8_1);
			}
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit102 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
