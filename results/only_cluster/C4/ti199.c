/*
 * Code for class TIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti199.h"
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

/* {TIME}.make */
void F785_5093 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("make", 784, Current, 0, 3, 11322);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_time", EX_PRE);
		tr8_1 = (EIF_REAL_64) (arg3);
		RTTE((nstcall = 0, F784_5092(Current, arg1, arg2, tr8_1, (EIF_BOOLEAN) 0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F48_704(Current, arg1));
	RTHOOK(3);
	(nstcall = 0, F48_705(Current, arg2));
	RTHOOK(4);
	(nstcall = 0, F48_706(Current, arg3));
	RTHOOK(5);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F48_695(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F48_696(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("second_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F48_697(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("fractional_second_set", EX_POST);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_), tr8_1)) {
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

/* {TIME}.make_fine */
void F785_5094 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_fine", 784, Current, 1, 3, 11323);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_time", EX_PRE);
		RTTE((nstcall = 0, F784_5092(Current, arg1, arg2, arg3, (EIF_BOOLEAN) 0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (EIF_INTEGER_32) arg3;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	(nstcall = 0, F785_5093(Current, arg1, arg2, loc1));
	RTHOOK(4);
	tr8_1 = (EIF_REAL_64) (loc1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) (arg3 - tr8_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F48_695(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F48_696(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("fine_second_set", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 ((nstcall = 0, F48_700(Current)), arg3)) {
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

/* {TIME}.make_now */
void F785_5095 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_now", 784, Current, 1, 0, 11324);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(4, 0x01).id, 4, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F5_169(RTCW(loc1)));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F5_176(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F5_177(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F5_178(RTCW(loc1)));
	(nstcall = 0, F785_5093(Current, ti4_1, ti4_2, ti4_3));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F5_179(RTCW(loc1)));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TIME}.make_now_utc */
void F785_5096 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_now_utc", 784, Current, 1, 0, 11325);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(4, 0x01).id, 4, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F5_170(RTCW(loc1)));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F5_176(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F5_177(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F5_178(RTCW(loc1)));
	(nstcall = 0, F785_5093(Current, ti4_1, ti4_2, ti4_3));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F5_179(RTCW(loc1)));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TIME}.make_by_seconds */
void F785_5097 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_seconds", 784, Current, 3, 1, 11326);
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
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 86400L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 3600L));
	RTHOOK(5);
	loc3 -= (EIF_INTEGER_32) (loc1 * ((EIF_INTEGER_32) 3600L));
	RTHOOK(6);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 60L));
	RTHOOK(7);
	loc3 -= (EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 60L));
	RTHOOK(8);
	(nstcall = 0, F785_5093(Current, loc1, loc2, loc3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("seconds_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F785_5105(Current)) == arg1)) {
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

/* {TIME}.make_by_fine_seconds */
void F785_5098 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_fine_seconds", 784, Current, 1, 1, 11327);
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
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 86400L));
		RTTE((EIF_BOOLEAN) eif_is_less_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (EIF_INTEGER_32) arg1;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	(nstcall = 0, F785_5097(Current, loc1));
	RTHOOK(5);
	tr8_1 = (EIF_REAL_64) (loc1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) (arg1 - tr8_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TIME}.make_from_string_default */
void F785_5099 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_string_default", 784, Current, 0, 1, 11328);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("time_valid", EX_PRE);
		tr1 = (nstcall = 0, F45_679(Current));
		RTTE((nstcall = 0, F784_5090(Current, arg1, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F45_679(Current));
	(nstcall = 0, F785_5100(Current, arg1, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TIME}.make_from_string */
void F785_5100 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("make_from_string", 784, Current, 1, 2, 11329);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("c_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("time_valid", EX_PRE);
		RTTE((nstcall = 0, F784_5090(Current, arg1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(780, 0x01).id, 780, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F781_5016(RTCW(tr1), arg2));
	tr2 = (nstcall = 1, F781_5032(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F48_695(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F48_696(RTCW(loc1)));
	tr8_1 = (nstcall = 1, F48_700(RTCW(loc1)));
	(nstcall = 0, F785_5094(Current, ti4_1, ti4_2, tr8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TIME}.make_by_compact_time */
void F785_5101 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_compact_time", 784, Current, 0, 1, 11330);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_t_valid", EX_PRE);
		RTTE((nstcall = 0, F784_5091(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("compact_time_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) == arg1)) {
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

/* {TIME}.origin */
static EIF_REFERENCE F785_5102_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("origin", 784, Current, 0, 0, 11331);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (5102);
#define Result RTOSR(5102)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(784, 0x01).id, 784, _OBJSIZ_0_0_0_1_0_0_0_1_);
	(nstcall = -1, F785_5093(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
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
	RTOSE (5102);
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F785_5102 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(5102,F785_5102_body,(Current));
}

/* {TIME}.is_less */
EIF_BOOLEAN F785_5103 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_less", 784, Current, 2, 1, 11332);
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
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	Result = '\01';
	if (!((EIF_BOOLEAN) (loc1 < loc2))) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 == loc2)) {
			tb2 = '\0';
			tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
			if ((EIF_BOOLEAN) eif_is_less_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_), tr8_1)) {
				tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
				tb2 = (EIF_BOOLEAN) eif_is_greater_real_64 ((EIF_REAL_64) (tr8_1 - *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_)), (EIF_REAL_64) 1.0e-10);
			}
			tb1 = tb2;
		}
		Result = tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (nstcall = 1, F785_5103(RTCW(arg1), Current));
			tb1 = (EIF_BOOLEAN) !tb2;
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

/* {TIME}.duration */
EIF_REFERENCE F785_5104 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("duration", 784, Current, 0, 0, 11333);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(122, 0x01).id, 122, _OBJSIZ_0_0_0_2_0_0_0_1_);
	ti4_1 = (nstcall = 0, F48_695(Current));
	ti4_2 = (nstcall = 0, F48_696(Current));
	tr8_1 = (nstcall = 0, F48_700(Current));
	(nstcall = -1, F123_1427(RTCW(Result), ti4_1, ti4_2, tr8_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("seconds_large_enough", EX_POST);
		ti4_1 = (nstcall = 1, F123_1431(RTCW(Result)));
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("seconds_small_enough", EX_POST);
		ti4_1 = (nstcall = 1, F123_1431(RTCW(Result)));
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 86400L))) {
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

/* {TIME}.seconds */
EIF_INTEGER_32 F785_5105 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("seconds", 784, Current, 0, 0, 11334);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F48_695(Current));
	ti4_1 = (nstcall = 0, F48_696(Current));
	ti4_2 = (nstcall = 0, F48_697(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L))) + ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_definition", EX_POST);
		ti4_1 = (nstcall = 1, F123_1431(RTCV((nstcall = 0, F785_5104(Current)))));
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

/* {TIME}.fine_seconds */
EIF_REAL_64 F785_5106 (EIF_REFERENCE Current)
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
	
	RTEAA("fine_seconds", 784, Current, 0, 0, 11335);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F48_695(Current));
	ti4_2 = (nstcall = 0, F48_696(Current));
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 60L)))));
	Result = (nstcall = 0, F48_700(Current));
	Result = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 + Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME}.plus */
EIF_REFERENCE F785_5107 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("plus", 784, Current, 0, 1, 11336);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("t_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(3);
	tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_2_0_0_0_0_);
	(nstcall = 1, F785_5110(RTCW(Result), tr8_1));
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	(nstcall = 1, F785_5111(RTCW(Result), ti4_1));
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_1_);
	(nstcall = 1, F785_5112(RTCW(Result), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {TIME}.relative_duration */
EIF_REFERENCE F785_5108 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
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
	
	RTEAA("relative_duration", 784, Current, 0, 1, 11337);
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
	Result = RTLNS(eif_new_type(122, 0x01).id, 122, _OBJSIZ_0_0_0_2_0_0_0_1_);
	tr8_1 = (nstcall = 0, F785_5106(Current));
	tr8_2 = (nstcall = 1, F785_5106(RTCW(arg1)));
	(nstcall = -1, F123_1429(RTCW(Result), (EIF_REAL_64) (tr8_1 - tr8_2)));
	RTHOOK(3);
	tr1 = (nstcall = 1, F123_1453(RTCW(Result)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {TIME}.second_add */
void F785_5109 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("second_add", 784, Current, 1, 1, 11338);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F48_697(Current));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		RTHOOK(3);
		ti4_1 = (nstcall = 0, F45_676(Current, loc1, ((EIF_INTEGER_32) 60L)));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		tr8_2 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
		(nstcall = 0, F48_707(Current, (EIF_REAL_64) (tr8_1 + tr8_2)));
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F45_677(Current, loc1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F785_5111(Current, ti4_1));
	} else {
		RTHOOK(5);
		tr8_1 = (EIF_REAL_64) (loc1);
		tr8_2 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
		(nstcall = 0, F48_707(Current, (EIF_REAL_64) (tr8_1 + tr8_2)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TIME}.fine_second_add */
void F785_5110 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("fine_second_add", 784, Current, 1, 1, 11339);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F48_700(Current));
	loc1 = (EIF_REAL_64) (EIF_REAL_64) (loc1 + arg1);
	RTHOOK(2);
	tb1 = '\01';
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if (!(EIF_BOOLEAN) eif_is_less_real_64 (loc1, tr8_1)) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 60L));
		tb1 = (EIF_BOOLEAN) eif_is_greater_equal_real_64 (loc1, tr8_1);
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = loc1;
		ti4_1 = (nstcall = 1, F720_4264(RTCW(tr1)));
		ti4_1 = (nstcall = 0, F45_677(Current, ti4_1, ((EIF_INTEGER_32) 60L)));
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F48_707(Current, (EIF_REAL_64) (loc1 - tr8_1)));
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = loc1;
		ti4_1 = (nstcall = 1, F720_4264(RTCW(tr1)));
		ti4_1 = (nstcall = 0, F45_677(Current, ti4_1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F785_5111(Current, ti4_1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F48_707(Current, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TIME}.minute_add */
void F785_5111 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("minute_add", 784, Current, 1, 1, 11340);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F48_696(Current));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg1);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 60L)))) {
		RTHOOK(3);
		ti4_1 = (nstcall = 0, F45_676(Current, loc1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F48_705(Current, ti4_1));
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F45_677(Current, loc1, ((EIF_INTEGER_32) 60L)));
		(nstcall = 0, F785_5112(Current, ti4_1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F48_705(Current, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TIME}.hour_add */
void F785_5112 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("hour_add", 784, Current, 0, 1, 11311);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F48_695(Current));
	ti4_1 = (nstcall = 0, F45_676(Current, (EIF_INTEGER_32) (ti4_1 + arg1), ((EIF_INTEGER_32) 24L)));
	(nstcall = 0, F48_704(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {TIME}.second_forth */
void F785_5113 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("second_forth", 784, Current, 0, 0, 11312);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 60L) - ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN) eif_is_less_real_64 ((nstcall = 0, F48_700(Current)), tr8_1)) {
		RTHOOK(2);
		tr8_1 = (nstcall = 0, F48_700(Current));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		(nstcall = 0, F48_707(Current, (EIF_REAL_64) (tr8_1 + tr8_2)));
	} else {
		RTHOOK(3);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		(nstcall = 0, F48_707(Current, tr8_1));
		RTHOOK(4);
		(nstcall = 0, F785_5115(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {TIME}.second_back */
void F785_5114 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("second_back", 784, Current, 0, 0, 11313);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_real_64 ((nstcall = 0, F48_700(Current)), tr8_1)) {
		RTHOOK(2);
		tr8_1 = (nstcall = 0, F48_700(Current));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		(nstcall = 0, F48_707(Current, (EIF_REAL_64) (tr8_1 - tr8_2)));
	} else {
		RTHOOK(3);
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 60L) - ((EIF_INTEGER_32) 1L)));
		(nstcall = 0, F48_707(Current, tr8_1));
		RTHOOK(4);
		(nstcall = 0, F785_5116(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {TIME}.minute_forth */
void F785_5115 (EIF_REFERENCE Current)
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
	
	RTEAA("minute_forth", 784, Current, 0, 0, 11314);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((nstcall = 0, F48_696(Current)) < (EIF_INTEGER_32) (((EIF_INTEGER_32) 60L) - ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(2);
		ti4_1 = (nstcall = 0, F48_696(Current));
		(nstcall = 0, F48_705(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(3);
		(nstcall = 0, F48_705(Current, ((EIF_INTEGER_32) 0L)));
		RTHOOK(4);
		(nstcall = 0, F785_5117(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {TIME}.minute_back */
void F785_5116 (EIF_REFERENCE Current)
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
	
	RTEAA("minute_back", 784, Current, 0, 0, 11315);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((nstcall = 0, F48_696(Current)) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		ti4_1 = (nstcall = 0, F48_696(Current));
		(nstcall = 0, F48_705(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(3);
		(nstcall = 0, F48_705(Current, (EIF_INTEGER_32) (((EIF_INTEGER_32) 60L) - ((EIF_INTEGER_32) 1L))));
		RTHOOK(4);
		(nstcall = 0, F785_5118(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {TIME}.hour_forth */
void F785_5117 (EIF_REFERENCE Current)
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
	
	RTEAA("hour_forth", 784, Current, 0, 0, 11316);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((nstcall = 0, F48_695(Current)) < (EIF_INTEGER_32) (((EIF_INTEGER_32) 24L) - ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(2);
		ti4_1 = (nstcall = 0, F48_695(Current));
		(nstcall = 0, F48_704(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(3);
		(nstcall = 0, F48_704(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TIME}.hour_back */
void F785_5118 (EIF_REFERENCE Current)
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
	
	RTEAA("hour_back", 784, Current, 0, 0, 11317);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((nstcall = 0, F48_695(Current)) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		ti4_1 = (nstcall = 0, F48_695(Current));
		(nstcall = 0, F48_704(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(3);
		(nstcall = 0, F48_704(Current, (EIF_INTEGER_32) (((EIF_INTEGER_32) 24L) - ((EIF_INTEGER_32) 1L))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TIME}.debug_output */
EIF_REFERENCE F785_5119 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("debug_output", 784, Current, 0, 0, 11318);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F46_685(Current));
	Result = (nstcall = 0, F785_5121(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* {TIME}.out */
EIF_REFERENCE F785_5120 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("out", 784, Current, 0, 0, 11319);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F46_685(Current));
	Result = (nstcall = 0, F785_5121(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("out_not_void", EX_POST);
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

/* {TIME}.formatted_out */
EIF_REFERENCE F785_5121 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
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
	
	RTEAA("formatted_out", 784, Current, 0, 1, 11320);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(780, 0x01).id, 780, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F781_5016(RTCW(tr1), arg1));
	tr2 = (nstcall = 1, F781_5029(RTCW(tr1), Current));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TIME}._invariant */
void F785_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 198, Current, 0, 0);
	RTIT("second_large_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F48_697(Current)) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("second_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F48_697(Current)) < ((EIF_INTEGER_32) 60L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("fractionals_large_enough", Current);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_), tr8_1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("fractionals_small_enough", Current);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) eif_is_less_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_), tr8_1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("minute_large_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F48_696(Current)) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("minute_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F48_696(Current)) < ((EIF_INTEGER_32) 60L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("hour_large_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F48_695(Current)) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("hour_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F48_695(Current)) < ((EIF_INTEGER_32) 24L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit199 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
