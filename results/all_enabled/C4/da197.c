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
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 782, Current, 0, 3, 11265);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_date", EX_PRE);
		RTTE((nstcall = 0, F782_5047(Current, arg1, arg2, arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F574_2844(Current, arg1, arg2, arg3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2841(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2840(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2839(Current)) == arg3)) {
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

/* {DATE}.make_month_day_year */
void F783_5049 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_month_day_year", 782, Current, 0, 3, 11266);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_date", EX_PRE);
		RTTE((nstcall = 0, F782_5047(Current, arg3, arg1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F783_5048(Current, arg3, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2841(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2840(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2839(Current)) == arg2)) {
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

/* {DATE}.make_day_month_year */
void F783_5050 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_day_month_year", 782, Current, 0, 3, 11267);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_date", EX_PRE);
		RTTE((nstcall = 0, F782_5047(Current, arg3, arg2, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F783_5048(Current, arg3, arg2, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2841(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2840(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2839(Current)) == arg1)) {
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

/* {DATE}.make_now */
void F783_5051 (EIF_REFERENCE Current)
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
	
	RTEAA("make_now", 782, Current, 1, 0, 11268);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(4, 0x01).id, 4, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F5_169(RTCW(loc1)));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F5_173(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F5_174(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F5_175(RTCW(loc1)));
	(nstcall = 0, F783_5048(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DATE}.make_now_utc */
void F783_5052 (EIF_REFERENCE Current)
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
	
	RTEAA("make_now_utc", 782, Current, 1, 0, 11269);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(4, 0x01).id, 4, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F5_170(RTCW(loc1)));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F5_173(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F5_174(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F5_175(RTCW(loc1)));
	(nstcall = 0, F783_5048(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DATE}.make_by_days */
void F783_5053 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_days", 782, Current, 5, 1, 11270);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 59L))) - ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F45_676(Current, loc1, ((EIF_INTEGER_32) 146097L)));
	loc2 = (nstcall = 0, F45_677(Current, ti4_1, ((EIF_INTEGER_32) 4L)));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * loc2) + ((EIF_INTEGER_32) 3L));
	RTHOOK(3);
	loc3 = (nstcall = 0, F45_677(Current, loc1, ((EIF_INTEGER_32) 146097L)));
	ti4_1 = (nstcall = 0, F45_677(Current, loc2, ((EIF_INTEGER_32) 1461L)));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 100L) * loc3) + ti4_1);
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F45_676(Current, loc2, ((EIF_INTEGER_32) 1461L)));
	loc1 = (nstcall = 0, F45_677(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 4L)), ((EIF_INTEGER_32) 4L)));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 5L) * loc1) - ((EIF_INTEGER_32) 3L));
	RTHOOK(5);
	loc4 = (nstcall = 0, F45_677(Current, loc1, ((EIF_INTEGER_32) 153L)));
	RTHOOK(6);
	ti4_1 = (nstcall = 0, F45_676(Current, loc1, ((EIF_INTEGER_32) 153L)));
	loc5 = (nstcall = 0, F45_677(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 5L)), ((EIF_INTEGER_32) 5L)));
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 10L))) {
		RTHOOK(8);
		loc4 += ((EIF_INTEGER_32) 3L);
	} else {
		RTHOOK(9);
		loc4 -= ((EIF_INTEGER_32) 9L);
		RTHOOK(10);
		loc3++;
	}
	RTHOOK(11);
	loc3 += ((EIF_INTEGER_32) 1600L);
	RTHOOK(12);
	(nstcall = 0, F783_5048(Current, loc3, loc4, loc5));
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("days_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F783_5063(Current)) == arg1)) {
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
}

/* {DATE}.make_from_string_default */
void F783_5054 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_from_string_default", 782, Current, 0, 1, 11271);
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
		RTCT("date_valid", EX_PRE);
		tr1 = (nstcall = 0, F49_720(Current));
		RTTE((nstcall = 0, F782_5041(Current, arg1, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F49_720(Current));
	(nstcall = 0, F783_5056(Current, arg1, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {DATE}.make_from_string_default_with_base */
void F783_5055 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("make_from_string_default_with_base", 782, Current, 0, 2, 11272);
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
		RTCT("base_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg2 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("date_valid", EX_PRE);
		tr1 = (nstcall = 0, F49_720(Current));
		RTTE((nstcall = 0, F782_5042(Current, arg1, tr1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 0, F49_720(Current));
	(nstcall = 0, F783_5057(Current, arg1, tr1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DATE}.make_from_string */
void F783_5056 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
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
	
	RTEAA("make_from_string", 782, Current, 1, 2, 11273);
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
		RTCT("date_valid", EX_PRE);
		RTTE((nstcall = 0, F782_5041(Current, arg1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(780, 0x01).id, 780, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F781_5016(RTCW(tr1), arg2));
	tr2 = (nstcall = 1, F781_5031(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F574_2841(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F574_2840(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F574_2839(RTCW(loc1)));
	(nstcall = 0, F783_5048(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DATE}.make_from_string_with_base */
void F783_5057 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("make_from_string_with_base", 782, Current, 2, 3, 11274);
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
		RTCT("base_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("date_valid", EX_PRE);
		RTTE((nstcall = 0, F782_5042(Current, arg1, arg2, arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = RTLNS(eif_new_type(780, 0x01).id, 780, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F781_5016(RTCW(loc1), arg2));
	RTHOOK(6);
	(nstcall = 1, F781_5025(RTCW(loc1), arg3));
	RTHOOK(7);
	tr1 = (nstcall = 1, F781_5031(RTCW(loc1), arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	ti4_1 = (nstcall = 1, F574_2841(RTCW(loc2)));
	ti4_2 = (nstcall = 1, F574_2840(RTCW(loc2)));
	ti4_3 = (nstcall = 1, F574_2839(RTCW(loc2)));
	(nstcall = 0, F783_5048(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {DATE}.make_by_compact_date */
void F783_5058 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_compact_date", 782, Current, 0, 1, 11275);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_d_valid", EX_PRE);
		RTTE((nstcall = 0, F782_5045(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F574_2858(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("compact_date_set", EX_POST);
		ti4_1 = (nstcall = 0, F574_2841(Current));
		ti4_2 = (nstcall = 0, F574_2840(Current));
		ti4_3 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 16L));
		ti4_2 = eif_bit_or(ti4_1,ti4_3);
		ti4_1 = (nstcall = 0, F574_2839(Current));
		ti4_3 = eif_bit_shift_left(ti4_1,((EIF_INTEGER_32) 24L));
		ti4_1 = eif_bit_or(ti4_2,ti4_3);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* {DATE}.make_by_ordered_compact_date */
void F783_5059 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_ordered_compact_date", 782, Current, 0, 1, 11276);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_d_valid", EX_PRE);
		RTTE((nstcall = 0, F782_5046(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F574_2849(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("ordered_compact_date_set", EX_POST);
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

/* {DATE}.origin */
static EIF_REFERENCE F783_5060_body (EIF_REFERENCE Current)
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
	
	RTEAA("origin", 782, Current, 0, 0, 11277);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (5060);
#define Result RTOSR(5060)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(782, 0x01).id, 782, _OBJSIZ_0_0_0_1_0_0_0_0_);
	(nstcall = -1, F783_5048(RTCW(tr1), ((EIF_INTEGER_32) 1600L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L)));
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
	RTOSE (5060);
	RTHOOK(3);
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
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA("is_less", 782, Current, 2, 1, 11278);
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
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(5);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 < loc2);
	} else {
		RTHOOK(6);
		Result = '\0';
		ti4_1 = (nstcall = 1, F574_2841(RTCW(arg1)));
		if ((EIF_BOOLEAN) ((nstcall = 0, F574_2841(Current)) < ti4_1)) {
			ti4_1 = eif_bit_and(loc1,((EIF_INTEGER_32) 65535L));
			ti4_2 = eif_bit_and(loc2,((EIF_INTEGER_32) 65535L));
			Result = (EIF_BOOLEAN) (ti4_1 < ti4_2);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (nstcall = 1, F783_5061(RTCW(arg1), Current));
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
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.duration */
EIF_REFERENCE F783_5062 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
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
	
	RTEAA("duration", 782, Current, 0, 0, 11279);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(121, 0x01).id, 121, _OBJSIZ_1_0_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, F574_2841(RTCV(RTOSCF(5060,(nstcall = 0, F783_5060), (Current)))));
	ti4_1 = (nstcall = 0, F783_5071(Current, ti4_1));
	ti4_2 = (nstcall = 0, F783_5066(Current));
	ti4_3 = (nstcall = 1, F783_5066(RTCV(RTOSCF(5060,(nstcall = 0, F783_5060), (Current)))));
	(nstcall = -1, F122_1400(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definite_result", EX_POST);
		tb1 = (nstcall = 1, F122_1409(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("duration_set", EX_POST);
		tr1 = RTOSCF(5060,(nstcall = 0, F783_5060), (Current));
		tr1 = (nstcall = 1, F125_1468(Current, tr1));
		tr2 = (nstcall = 1, F119_1334(RTCW(tr1)));
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(tr2))-0])(tr2, Result));
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

/* {DATE}.days */
EIF_INTEGER_32 F783_5063 (EIF_REFERENCE Current)
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
	
	RTEAA("days", 782, Current, 0, 0, 11280);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 1, F574_2841(RTCV(RTOSCF(5060,(nstcall = 0, F783_5060), (Current)))));
	Result = (nstcall = 0, F783_5071(Current, ti4_1));
	ti4_1 = (nstcall = 0, F783_5066(Current));
	ti4_2 = (nstcall = 1, F783_5066(RTCV(RTOSCF(5060,(nstcall = 0, F783_5060), (Current)))));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("same_duration", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV((nstcall = 0, F783_5062(Current)))+ _LNGOFF_1_0_0_2_);
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

/* {DATE}.leap_year */
EIF_BOOLEAN F783_5064 (EIF_REFERENCE Current)
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
	
	RTEAA("leap_year", 782, Current, 0, 0, 11281);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F574_2841(Current));
	Result = (nstcall = 0, F49_726(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.days_at_month */
EIF_INTEGER_32 F783_5065 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	
	RTEAA("days_at_month", 782, Current, 1, 0, 11282);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F574_2840(Current));
	RTHOOK(2);
	tr1 = RTOSCF(5089,(nstcall = 0, F783_5089), (Current));
	ti4_1 = (nstcall = 1, F587_3092(RTCW(tr1), loc1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 2L))) {
		tb1 = (nstcall = 0, F783_5064(Current));
	}
	if (tb1) {
		RTHOOK(4);
		Result++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {DATE}.year_day */
EIF_INTEGER_32 F783_5066 (EIF_REFERENCE Current)
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
	
	RTEAA("year_day", 782, Current, 0, 0, 11283);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F783_5065(Current));
	ti4_1 = (nstcall = 0, F574_2839(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("result_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= (nstcall = 0, F783_5068(Current)))) {
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

/* {DATE}.week_of_year */
EIF_INTEGER_32 F783_5067 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("week_of_year", 782, Current, 0, 0, 11284);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((nstcall = 0, F783_5069(Current)) <= (nstcall = 0, F783_5066(Current)))) {
		RTHOOK(2);
		if ((EIF_BOOLEAN) ((nstcall = 0, F783_5070(Current)) > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(3);
			ti4_1 = (nstcall = 0, F783_5066(Current));
			ti4_2 = (nstcall = 0, F783_5069(Current));
			Result = (nstcall = 0, F45_677(Current, (EIF_INTEGER_32) (ti4_1 - ti4_2), ((EIF_INTEGER_32) 7L)));
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(4);
			ti4_1 = (nstcall = 0, F783_5066(Current));
			ti4_2 = (nstcall = 0, F783_5069(Current));
			ti4_3 = (nstcall = 0, F783_5070(Current));
			Result = (nstcall = 0, F45_677(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 7L)));
		}
	} else {
		RTHOOK(5);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("result_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 53L))) {
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

/* {DATE}.days_in_year */
EIF_INTEGER_32 F783_5068 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("days_in_year", 782, Current, 0, 0, 11285);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F783_5064(Current))) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 366L);
	} else {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 365L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_result", EX_POST);
		tb1 = '\0';
		tb2 = '\01';
		if ((nstcall = 0, F783_5064(Current))) {
			tb2 = (EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 366L));
		}
		if (tb2) {
			tb2 = '\01';
			if ((EIF_BOOLEAN) !(nstcall = 0, F783_5064(Current))) {
				tb2 = (EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 365L));
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.day_of_the_week */
EIF_INTEGER_32 F783_5069 (EIF_REFERENCE Current)
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
	
	RTEAA("day_of_the_week", 782, Current, 0, 0, 11286);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F783_5063(Current));
	Result = (nstcall = 0, F45_676(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 7L)));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("day_of_the_week_range", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 8L)))) {
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

/* {DATE}.day_of_january_1st */
EIF_INTEGER_32 F783_5070 (EIF_REFERENCE Current)
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
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("day_of_january_1st", 782, Current, 0, 0, 11287);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(782, 0x01).id, 782, _OBJSIZ_0_0_0_1_0_0_0_0_);
	ti4_1 = (nstcall = 0, F574_2841(Current));
	(nstcall = -1, F783_5048(RTCW(tr1), ti4_1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L)));
	ti4_1 = (nstcall = 1, F783_5069(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("day_of_the_week_definition", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 8L)))) {
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

/* {DATE}.days_from */
EIF_INTEGER_32 F783_5071 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("days_from", 782, Current, 1, 1, 11288);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F574_2841(Current));
	RTHOOK(2);
	Result = (nstcall = 0, F45_677(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 4L)));
	ti4_1 = (nstcall = 0, F45_677(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 4L)));
	ti4_2 = (nstcall = 0, F45_677(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 100L)));
	ti4_3 = (nstcall = 0, F45_677(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 100L)));
	ti4_4 = (nstcall = 0, F45_677(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 400L)));
	ti4_5 = (nstcall = 0, F45_677(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 400L)));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - arg1) * ((EIF_INTEGER_32) 365L)) + (EIF_INTEGER_32) (Result - ti4_1)) - (EIF_INTEGER_32) (ti4_2 - ti4_3)) + (EIF_INTEGER_32) (ti4_4 - ti4_5));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.to_date_time */
EIF_REFERENCE F783_5072 (EIF_REFERENCE Current)
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
	
	RTEAA("to_date_time", 782, Current, 0, 0, 11289);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(786, 0x01).id, 786, _OBJSIZ_2_0_0_2_0_0_0_1_);
	(nstcall = -1, F787_5128(RTCW(Result), Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.plus */
EIF_REFERENCE F783_5073 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("plus", 782, Current, 0, 1, 11290);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_not_void", EX_PRE);
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
	(nstcall = 1, F783_5074(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("definite_set", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 1, F122_1409(RTCW(arg1)));
		if (tb2) {
			tr1 = (nstcall = 1, F125_1468(RTCW(Result), Current));
			tr2 = (nstcall = 1, F119_1334(RTCW(tr1)));
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(tr2))-0])(tr2, arg1));
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
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.add */
void F783_5074 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("add", 782, Current, 0, 1, 11291);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, F122_1409(RTCW(arg1)));
	if (tb1) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
		(nstcall = 0, F783_5078(Current, ti4_1));
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_1_);
		(nstcall = 0, F783_5085(Current, ti4_1, ti4_2));
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
		(nstcall = 0, F783_5078(Current, ti4_1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DATE}.relative_duration */
EIF_REFERENCE F783_5075 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA("relative_duration", 782, Current, 0, 1, 11292);
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
	Result = RTLNS(eif_new_type(121, 0x01).id, 121, _OBJSIZ_1_0_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 0, F783_5063(Current));
	ti4_2 = (nstcall = 1, F783_5063(RTCW(arg1)));
	(nstcall = -1, F122_1400(RTCW(Result), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
	RTHOOK(3);
	tr1 = (nstcall = 1, F122_1423(RTCW(Result), arg1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 1, F1_14(arg1));
	(nstcall = 1, F122_1413(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("exact_duration", EX_POST);
		tr1 = (nstcall = 1, F783_5073(RTCW(arg1), Result));
		tb1 = (nstcall = 1, F124_1461(RTCW(tr1), Current));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("canonical_duration", EX_POST);
		tb1 = (nstcall = 1, F122_1410(RTCW(Result), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("origin_date_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		if ((nstcall = 0, F1_10(Current, tr1, arg1))) {
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

/* {DATE}.day_forth */
void F783_5076 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("day_forth", 782, Current, 0, 0, 11293);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F783_5063(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN)((nstcall = 0, F574_2839(Current)) == (nstcall = 0, F52_747(Current)))) {
		RTHOOK(2);
		(nstcall = 0, F574_2845(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		(nstcall = 0, F783_5079(Current));
	} else {
		RTHOOK(4);
		ti4_2 = (nstcall = 0, F574_2839(Current));
		(nstcall = 0, F574_2845(Current, (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("days_set", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F783_5063(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* {DATE}.day_back */
void F783_5077 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("day_back", 782, Current, 0, 0, 11294);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F783_5063(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN)((nstcall = 0, F574_2839(Current)) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		(nstcall = 0, F783_5080(Current));
		RTHOOK(3);
		ti4_2 = (nstcall = 0, F52_747(Current));
		(nstcall = 0, F574_2845(Current, ti4_2));
	} else {
		RTHOOK(4);
		ti4_2 = (nstcall = 0, F574_2839(Current));
		(nstcall = 0, F574_2845(Current, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("days_set", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F783_5063(Current)) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
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

/* {DATE}.day_add */
void F783_5078 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("day_add", 782, Current, 0, 1, 11295);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F783_5063(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = (nstcall = 0, F783_5063(Current));
	(nstcall = 0, F783_5053(Current, (EIF_INTEGER_32) (ti4_2 + arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("days_set", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F783_5063(Current)) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {DATE}.month_forth */
void F783_5079 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("month_forth", 782, Current, 1, 0, 11296);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)((nstcall = 0, F574_2840(Current)) == ((EIF_INTEGER_32) 12L))) {
		RTHOOK(2);
		(nstcall = 0, F574_2846(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		(nstcall = 0, F783_5082(Current));
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F574_2840(Current));
		ti4_2 = (nstcall = 0, F574_2841(Current));
		loc1 = (nstcall = 0, F49_719(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((nstcall = 0, F574_2839(Current)) > loc1)) {
			RTHOOK(6);
			(nstcall = 0, F574_2845(Current, loc1));
		}
		RTHOOK(7);
		ti4_1 = (nstcall = 0, F574_2840(Current));
		(nstcall = 0, F574_2846(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {DATE}.month_back */
void F783_5080 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("month_back", 782, Current, 1, 0, 11297);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)((nstcall = 0, F574_2840(Current)) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		(nstcall = 0, F574_2846(Current, ((EIF_INTEGER_32) 12L)));
		RTHOOK(3);
		(nstcall = 0, F783_5083(Current));
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F574_2840(Current));
		ti4_2 = (nstcall = 0, F574_2841(Current));
		loc1 = (nstcall = 0, F49_719(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ti4_2));
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((nstcall = 0, F574_2839(Current)) > loc1)) {
			RTHOOK(6);
			(nstcall = 0, F574_2845(Current, loc1));
		}
		RTHOOK(7);
		ti4_1 = (nstcall = 0, F574_2840(Current));
		(nstcall = 0, F574_2846(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {DATE}.month_add */
void F783_5081 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("month_add", 782, Current, 5, 1, 11298);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = (nstcall = 0, F574_2840(Current));
	RTHOOK(2);
	loc1 = (nstcall = 0, F45_676(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + arg1) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 12L)));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	loc2 = (nstcall = 0, F574_2841(Current));
	ti4_1 = (nstcall = 0, F45_677(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + arg1) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 12L)));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_1);
	RTHOOK(4);
	loc3 = (nstcall = 0, F49_719(Current, loc1, loc2));
	RTHOOK(5);
	loc5 = (nstcall = 0, F574_2839(Current));
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc5 > loc3)) {
		RTHOOK(7);
		(nstcall = 0, F574_2844(Current, loc2, loc1, loc3));
	} else {
		RTHOOK(8);
		(nstcall = 0, F574_2844(Current, loc2, loc1, loc5));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {DATE}.year_forth */
void F783_5082 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("year_forth", 782, Current, 3, 0, 11299);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F574_2841(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	loc2 = (nstcall = 0, F574_2840(Current));
	RTHOOK(2);
	loc1 = (nstcall = 0, F574_2841(Current));
	RTHOOK(3);
	loc3 = (nstcall = 0, F49_719(Current, loc2, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	if ((EIF_BOOLEAN) ((nstcall = 0, F574_2839(Current)) > loc3)) {
		RTHOOK(5);
		(nstcall = 0, F574_2845(Current, loc3));
	}
	RTHOOK(6);
	(nstcall = 0, F574_2847(Current, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("year_increased", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2841(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* {DATE}.year_back */
void F783_5083 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("year_back", 782, Current, 0, 0, 11300);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F574_2841(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = (nstcall = 0, F574_2840(Current));
	ti4_3 = (nstcall = 0, F574_2841(Current));
	if ((EIF_BOOLEAN) ((nstcall = 0, F574_2839(Current)) > (nstcall = 0, F49_719(Current, ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)))))) {
		RTHOOK(2);
		ti4_2 = (nstcall = 0, F574_2840(Current));
		ti4_3 = (nstcall = 0, F574_2841(Current));
		ti4_2 = (nstcall = 0, F49_719(Current, ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L))));
		(nstcall = 0, F574_2845(Current, ti4_2));
	}
	RTHOOK(3);
	ti4_2 = (nstcall = 0, F574_2841(Current));
	(nstcall = 0, F574_2847(Current, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("year_decreased", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2841(Current)) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
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

/* {DATE}.year_add */
void F783_5084 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("year_add", 782, Current, 0, 1, 11301);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F574_2841(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = (nstcall = 0, F574_2840(Current));
	ti4_3 = (nstcall = 0, F574_2841(Current));
	if ((EIF_BOOLEAN) ((nstcall = 0, F574_2839(Current)) > (nstcall = 0, F49_719(Current, ti4_2, (EIF_INTEGER_32) (ti4_3 + arg1))))) {
		RTHOOK(2);
		ti4_2 = (nstcall = 0, F574_2840(Current));
		ti4_3 = (nstcall = 0, F574_2841(Current));
		ti4_2 = (nstcall = 0, F49_719(Current, ti4_2, (EIF_INTEGER_32) (ti4_3 + arg1)));
		(nstcall = 0, F574_2845(Current, ti4_2));
	}
	RTHOOK(3);
	ti4_2 = (nstcall = 0, F574_2841(Current));
	(nstcall = 0, F574_2847(Current, (EIF_INTEGER_32) (ti4_2 + arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("year_set", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F574_2841(Current)) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {DATE}.year_month_add */
void F783_5085 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("year_month_add", 782, Current, 0, 2, 11302);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F783_5081(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 12L)) + arg2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {DATE}.debug_output */
EIF_REFERENCE F783_5086 (EIF_REFERENCE Current)
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
	
	RTEAA("debug_output", 782, Current, 0, 0, 11303);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F49_720(Current));
	Result = (nstcall = 0, F783_5088(Current, tr1));
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

/* {DATE}.out */
EIF_REFERENCE F783_5087 (EIF_REFERENCE Current)
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
	
	RTEAA("out", 782, Current, 0, 0, 11304);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F49_720(Current));
	Result = (nstcall = 0, F783_5088(Current, tr1));
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

/* {DATE}.formatted_out */
EIF_REFERENCE F783_5088 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("formatted_out", 782, Current, 0, 1, 11305);
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
	tr2 = (nstcall = 1, F781_5028(RTCW(tr1), Current));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.days_at_months */
static EIF_REFERENCE F783_5089_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("days_at_months", 782, Current, 0, 0, 11306);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (5089);
#define Result RTOSR(5089)
	RTOC_NEW(Result);
	RTHOOK(1);
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
	tr3 = *(EIF_REFERENCE *)(tr1);
	Result = (EIF_REFERENCE) tr3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("count_is_months_in_year", EX_POST);
		ti4_1 = (nstcall = 1, F587_3101(Result));
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)) == ((EIF_INTEGER_32) 12L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (5089);
	RTHOOK(4);
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

/* {DATE}._invariant */
void F783_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 196, Current, 0, 0);
	RTIT("day_large_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F574_2839(Current)) >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("day_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F574_2839(Current)) <= (nstcall = 0, F52_747(Current)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("month_large_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F574_2840(Current)) >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("month_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F574_2840(Current)) <= ((EIF_INTEGER_32) 12L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("year_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F574_2841(Current)) <= ((EIF_INTEGER_32) 65535L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("year_non_negative", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F574_2841(Current)) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit197 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
