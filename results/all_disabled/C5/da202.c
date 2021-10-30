/*
 * Code for class DATE_TIME_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da202.h"
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

/* {DATE_TIME_PARSER}.make */
void F788_5161 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make", 787, Current, 0, 1, 11390);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("code_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("code_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg1)) {
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

/* {DATE_TIME_PARSER}.source_string */
EIF_REFERENCE F788_5162 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME_PARSER}.year */
EIF_INTEGER_32 F788_5163 (EIF_REFERENCE Current)
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
	
	RTEAA("year", 787, Current, 0, 0, 11392);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_2_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.month */
EIF_INTEGER_32 F788_5164 (EIF_REFERENCE Current)
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
	
	RTEAA("month", 787, Current, 0, 0, 11393);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_3_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.day */
EIF_INTEGER_32 F788_5165 (EIF_REFERENCE Current)
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
	
	RTEAA("day", 787, Current, 0, 0, 11394);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_4_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.hour */
EIF_INTEGER_32 F788_5166 (EIF_REFERENCE Current)
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
	
	RTEAA("hour", 787, Current, 0, 0, 11395);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.minute */
EIF_INTEGER_32 F788_5167 (EIF_REFERENCE Current)
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
	
	RTEAA("minute", 787, Current, 0, 0, 11396);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_6_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.fine_second */
EIF_REAL_64 F788_5168 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("fine_second", 787, Current, 0, 0, 11397);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_REAL_64 *)(Current+ _R64OFF_5_1_0_8_0_0_0_1_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.day_text */
EIF_REFERENCE F788_5169 (EIF_REFERENCE Current)
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
	
	RTEAA("day_text", 787, Current, 0, 0, 11398);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.parsed */
EIF_BOOLEAN F788_5170 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_);
}


/* {DATE_TIME_PARSER}.is_set_up */
EIF_BOOLEAN F788_5171 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_set_up", 787, Current, 1, 0, 11400);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL))) {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tb2 = (nstcall = 1, F346_2122(loc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.is_date */
EIF_BOOLEAN F788_5172 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_date", 787, Current, 0, 0, 11401);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F788_5163(Current));
	ti4_2 = (nstcall = 0, F788_5164(Current));
	ti4_3 = (nstcall = 0, F788_5165(Current));
	Result = (nstcall = 0, F782_5047(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.is_time */
EIF_BOOLEAN F788_5173 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_time", 787, Current, 0, 0, 11402);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F788_5166(Current));
	ti4_2 = (nstcall = 0, F788_5167(Current));
	tr8_1 = (nstcall = 0, F788_5168(Current));
	Result = (nstcall = 0, F784_5092(Current, ti4_1, ti4_2, tr8_1, (EIF_BOOLEAN) 0));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.is_date_time */
EIF_BOOLEAN F788_5174 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_date_time", 787, Current, 0, 0, 11403);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F788_5163(Current));
	ti4_2 = (nstcall = 0, F788_5164(Current));
	ti4_3 = (nstcall = 0, F788_5165(Current));
	ti4_4 = (nstcall = 0, F788_5166(Current));
	ti4_5 = (nstcall = 0, F788_5167(Current));
	tr8_1 = (nstcall = 0, F788_5168(Current));
	Result = (nstcall = 0, F786_5124(Current, ti4_1, ti4_2, ti4_3, ti4_4, ti4_5, tr8_1, (EIF_BOOLEAN) 0));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.is_value_valid */
EIF_BOOLEAN F788_5175 (EIF_REFERENCE Current)
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
	
	RTEAA("is_value_valid", 787, Current, 0, 0, 11404);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_)) {
		tb1 = '\01';
		tb2 = '\01';
		if (!(nstcall = 0, F788_5172(Current))) {
			tb2 = (nstcall = 0, F788_5173(Current));
		}
		if (!tb2) {
			tb1 = (nstcall = 0, F788_5174(Current));
		}
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_PARSER}.set_source_string */
void F788_5176 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_source_string", 787, Current, 0, 1, 11405);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty_string", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (nstcall = 1, F346_2122(RTCW(arg1)));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("source_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("not_parsed", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_)) {
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
}

/* {DATE_TIME_PARSER}.set_day_array */
void F788_5177 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_day_array", 787, Current, 0, 1, 11406);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("days_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) == arg1)) {
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

/* {DATE_TIME_PARSER}.set_month_array */
void F788_5178 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_month_array", 787, Current, 0, 1, 11407);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
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
		RTCT("months_set", EX_POST);
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

/* {DATE_TIME_PARSER}.set_base_century */
void F788_5179 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_base_century", 787, Current, 0, 1, 11408);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("base_century_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_7_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("base_century_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_7_) == arg1)) {
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

/* {DATE_TIME_PARSER}.parse */
void F788_5180 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc15);
	RTLR(2,tr1);
	RTLR(3,loc7);
	RTLR(4,loc13);
	RTLR(5,tr2);
	RTLR(6,loc14);
	RTLR(7,loc16);
	RTLIU(8);
	
	RTEAA("parse", 787, Current, 16, 0, 11409);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("setup_complete", EX_PRE);
		RTTE((nstcall = 0, F788_5171(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTCT0("source_string_attached", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc15 = tr1;
	if (EIF_TEST(loc15)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	tr1 = (nstcall = 1, F778_4935(loc15));
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(4, 0x01).id, 4, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F5_169(RTCW(tr1)));
	ti4_1 = (nstcall = 1, F5_173(RTCW(tr1)));
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(10);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_5_1_0_8_0_0_0_1_) = (EIF_REAL_64) tr8_1;
	RTHOOK(11);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(12);
	loc8 = (nstcall = 0, F780_5015(Current, loc7));
	RTHOOK(13);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(14);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(15);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = (nstcall = 1, F577_2864(RTCW(tr1), loc3));
		loc13 = (EIF_REFERENCE) tr2;
		RTHOOK(16);
		if ((EIF_BOOLEAN)(loc13 == NULL)) {
			RTHOOK(17);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_1_1_0_2_);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(18);
			tb1 = (nstcall = 1, F583_2992(RTCW(loc13)));
			if (tb1) {
				RTHOOK(19);
				loc3++;
				RTHOOK(20);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc13)+ _LNGOFF_2_2_0_0_);
				loc1 += ti4_2;
			} else {
				RTHOOK(21);
				if (loc8) {
					RTHOOK(22);
					loc2 = (nstcall = 0, F780_5013(Current, loc7, loc1));
				} else {
					RTHOOK(23);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc13)+ _LNGOFF_2_2_0_0_);
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_2) - ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) -1L));
				}
				RTHOOK(24);
				tr1 = (nstcall = 0, F780_5014(Current, loc7, loc1, loc2));
				tr2 = eif_boxed_item(tr1,1);
				loc14 = (EIF_REFERENCE) tr2;
				RTHOOK(25);
				if ((EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L))) {
					RTHOOK(26);
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc2 + ((EIF_INTEGER_32) 1L));
				}
				RTHOOK(27);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc13)+ _LNGOFF_2_2_0_4_);
				loc5 = (EIF_INTEGER_32) ti4_2;
				RTHOOK(28);
				switch (loc5) {
					case 1L:
					case 2L:
						RTHOOK(29);
						ti4_2 = (nstcall = 1, F770_4560(RTCW(loc14)));
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_4_) = (EIF_INTEGER_32) ti4_2;
						break;
					case 3L:
						RTHOOK(30);
						RTAR(Current, loc14);
						*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc14;
						break;
					case 4L:
						RTHOOK(31);
						ti4_2 = (nstcall = 1, F770_4560(RTCW(loc14)));
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_2_) = (EIF_INTEGER_32) ti4_2;
						break;
					case 5L:
						RTHOOK(32);
						if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_7_) < ((EIF_INTEGER_32) 0L))) {
							RTHOOK(33);
							ti4_2 = (nstcall = 1, F770_4560(RTCW(loc14)));
							ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_7_);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - ti4_3);
							RTHOOK(34);
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_2_) - loc9) > ((EIF_INTEGER_32) 50L))) {
								RTHOOK(35);
								(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_2_)) -= ((EIF_INTEGER_32) 100L);
							} else {
								RTHOOK(36);
								if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc9 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_2_)) > ((EIF_INTEGER_32) 50L))) {
									RTHOOK(37);
									(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_2_)) += ((EIF_INTEGER_32) 100L);
								}
							}
						} else {
							RTHOOK(38);
							ti4_2 = (nstcall = 1, F770_4560(RTCW(loc14)));
							ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_7_);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - ti4_3);
						}
						break;
					case 6L:
					case 7L:
						RTHOOK(39);
						ti4_2 = (nstcall = 1, F770_4560(RTCW(loc14)));
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_3_) = (EIF_INTEGER_32) ti4_2;
						break;
					case 8L:
						RTHOOK(40);
						RTCT0("months_attached", EX_CHECK);
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
						loc16 = tr1;
						if (EIF_TEST(loc16)) {
							RTCK0;
						} else {
							RTCF0;
						}
						RTHOOK(41);
						loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						for (;;) {
							RTHOOK(42);
							if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 12L))) break;
							RTHOOK(43);
							tr1 = (nstcall = 1, F498_2581(loc16, loc4));
							tb1 = (nstcall = 1, F776_4816(RTCW(tr1), loc14));
							if (tb1) {
								RTHOOK(44);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_3_) = (EIF_INTEGER_32) loc4;
							}
							RTHOOK(45);
							loc4++;
						}
						break;
					case 9L:
					case 10L:
						RTHOOK(46);
						ti4_2 = (nstcall = 1, F770_4560(RTCW(loc14)));
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) = (EIF_INTEGER_32) ti4_2;
						break;
					case 11L:
					case 12L:
						RTHOOK(47);
						ti4_2 = (nstcall = 1, F770_4560(RTCW(loc14)));
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) = (EIF_INTEGER_32) ti4_2;
						RTHOOK(48);
						if (loc11) {
							RTHOOK(49);
							if (loc10) {
								RTHOOK(50);
								(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_)) += ((EIF_INTEGER_32) 12L);
								RTHOOK(51);
								if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) == ((EIF_INTEGER_32) 24L))) {
									RTHOOK(52);
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
								}
							} else {
								RTHOOK(53);
								if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) == ((EIF_INTEGER_32) 12L))) {
									RTHOOK(54);
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
								}
							}
						} else {
							RTHOOK(55);
							loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
						break;
					case 24L:
						RTHOOK(56);
						loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(57);
						tr1 = RTMS_EX_H("PM",2,20557);
						tb1 = (nstcall = 1, F776_4814(RTCW(loc14), tr1));
						loc10 = (EIF_BOOLEAN) tb1;
						break;
					case 13L:
					case 14L:
						RTHOOK(58);
						ti4_2 = (nstcall = 1, F770_4560(RTCW(loc14)));
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_6_) = (EIF_INTEGER_32) ti4_2;
						break;
					case 15L:
					case 16L:
						RTHOOK(59);
						ti4_2 = (nstcall = 1, F770_4560(RTCW(loc14)));
						loc6 = (EIF_INTEGER_32) ti4_2;
						break;
					case 17L:
						RTHOOK(60);
						tr8_1 = (nstcall = 1, F770_4570(RTCW(loc14)));
						ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc14)+ _LNGOFF_1_1_0_2_);
						tr8_2 = (EIF_REAL_64) ((ti4_2));
						*(EIF_REAL_64 *)(Current+ _R64OFF_5_1_0_8_0_0_0_1_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_2))));
						break;
					default:
						RTEC(EN_WHEN);
				}
				RTHOOK(61);
				loc1 = (EIF_INTEGER_32) loc2;
				RTHOOK(62);
				loc3++;
			}
		}
	}
	RTHOOK(63);
	if (loc12) {
		RTHOOK(64);
		if ((EIF_BOOLEAN) !loc11) {
			RTHOOK(65);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) == ((EIF_INTEGER_32) 12L))) {
				RTHOOK(66);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		} else {
			RTHOOK(67);
			if (loc10) {
				RTHOOK(68);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_)) += ((EIF_INTEGER_32) 12L);
				RTHOOK(69);
				if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) == ((EIF_INTEGER_32) 24L))) {
					RTHOOK(70);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
				}
			} else {
				RTHOOK(71);
				if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) == ((EIF_INTEGER_32) 12L))) {
					RTHOOK(72);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
	}
	RTHOOK(73);
	tr8_1 = (EIF_REAL_64) (loc6);
	(*(EIF_REAL_64 *)(Current+ _R64OFF_5_1_0_8_0_0_0_1_)) += tr8_1;
	RTHOOK(74);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(75);
		RTCT("string_parsed", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(76);
	RTLE;
	RTEE;
}

/* {DATE_TIME_PARSER}.year_val */
EIF_INTEGER_32 F788_5181 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_2_);
}


/* {DATE_TIME_PARSER}.month_val */
EIF_INTEGER_32 F788_5182 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_3_);
}


/* {DATE_TIME_PARSER}.day_val */
EIF_INTEGER_32 F788_5183 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_4_);
}


/* {DATE_TIME_PARSER}.hour_val */
EIF_INTEGER_32 F788_5184 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_5_);
}


/* {DATE_TIME_PARSER}.minute_val */
EIF_INTEGER_32 F788_5185 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_6_);
}


/* {DATE_TIME_PARSER}.fine_second_val */
EIF_REAL_64 F788_5186 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_5_1_0_8_0_0_0_1_);
}


/* {DATE_TIME_PARSER}.day_text_val */
EIF_REFERENCE F788_5187 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_PARSER}.code */
EIF_REFERENCE F788_5188 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {DATE_TIME_PARSER}.months */
EIF_REFERENCE F788_5189 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {DATE_TIME_PARSER}.days */
EIF_REFERENCE F788_5190 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {DATE_TIME_PARSER}.base_century */
EIF_INTEGER_32 F788_5191 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_7_);
}


/* {DATE_TIME_PARSER}._invariant */
void F788_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 201, Current, 0, 0);
	RTIT("valid_value_definition", Current);
	tb1 = '\0';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_)) {
		tb2 = '\01';
		tb3 = '\01';
		if (!(nstcall = 0, F788_5172(Current))) {
			tb3 = (nstcall = 0, F788_5173(Current));
		}
		if (!tb3) {
			tb2 = (nstcall = 0, F788_5174(Current));
		}
		tb1 = tb2;
	}
	if ((EIF_BOOLEAN)((nstcall = 0, F788_5175(Current)) == tb1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_value_implies_parsing", Current);
	tb1 = '\01';
	if ((nstcall = 0, F788_5175(Current))) {
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit202 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
