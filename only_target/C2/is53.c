/*
 * Code for class ISE_EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is53.h"
#include "eif_built_in.h"
#include "eif_except.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_EXCEPTION_MANAGER}.last_exception */
EIF_REFERENCE F52_1220 (EIF_REFERENCE Current)
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
	
	RTEAA("last_exception", 51, Current, 0, 0, 1163);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(12,(nstcall = 0, F52_1238), (Current))));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.raise */
void F52_1221 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("raise", 51, Current, 3, 1, 1164);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_exception_is_raisable", EX_PRE);
		tb1 = (nstcall = 1, F62_1434(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (nstcall = 1, F62_1435(RTCW(arg1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		if ((nstcall = 0, F52_1246(Current))) {
			RTHOOK(5);
			tr1 = (nstcall = 0, F52_1220(Current));
			(nstcall = 1, F62_1439(RTCW(arg1), tr1));
		}
		RTHOOK(6);
		(nstcall = 0, F52_1232(Current, arg1));
		RTHOOK(7);
		loc1 = (nstcall = 0, F1_33(Current));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTHOOK(9);
			tp1 = (nstcall = 1, F108_1913(loc3));
			loc2 = (EIF_POINTER) tp1;
		} else {
			RTHOOK(10);
			loc2 = (nstcall = 0, F1_33(Current));
		}
		RTHOOK(11);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1314[Dtype(RTCW(arg1))-61])(arg1));
		(nstcall = 0, F52_1245(Current, ti4_1, loc1, loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.ignore */
void F52_1222 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("ignore", 51, Current, 1, 1, 1165);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_ignorable", EX_PRE);
		RTTE((nstcall = 0, F52_1225(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F766_5290(arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tr1 = RTOUCR(13,(nstcall = 0, F52_1234), (Current));
	(nstcall = 1, F600_3971(RTCW(tr1), loc1, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_caught", EX_POST);
		if ((nstcall = 0, F52_1227(Current, arg1))) {
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

/* {ISE_EXCEPTION_MANAGER}.catch */
void F52_1223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("catch", 51, Current, 0, 1, 1166);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(13,(nstcall = 0, F52_1234), (Current));
	ti4_1 = (nstcall = 1, F766_5290(arg1));
	(nstcall = 1, F600_3976(RTCW(tr1), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_ignored", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F52_1227(Current, arg1))) {
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

/* {ISE_EXCEPTION_MANAGER}.set_is_ignored */
void F52_1224 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_is_ignored", 51, Current, 0, 2, 1167);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_ignored_implies_is_ignorable", EX_PRE);
		tb1 = '\01';
		if (arg2) {
			tb1 = (nstcall = 0, F52_1225(Current, arg1));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (arg2) {
		RTHOOK(4);
		(nstcall = 0, F52_1222(Current, arg1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F52_1223(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_ignored_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F52_1227(Current, arg1)) == arg2)) {
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

/* {ISE_EXCEPTION_MANAGER}.is_ignorable */
EIF_BOOLEAN F52_1225 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_ignorable", 51, Current, 0, 1, 1168);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(14,(nstcall = 0, F52_1235), (Current));
	ti4_1 = (nstcall = 1, F766_5290(arg1));
	tb1 = (nstcall = 1, F600_3931(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.is_raisable */
EIF_BOOLEAN F52_1226 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_raisable", 51, Current, 0, 1, 1169);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(15,(nstcall = 0, F52_1236), (Current));
	ti4_1 = (nstcall = 1, F766_5290(arg1));
	tb1 = (nstcall = 1, F600_3931(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F52_1227 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_ignored", 51, Current, 0, 1, 1170);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(13,(nstcall = 0, F52_1234), (Current));
	ti4_1 = (nstcall = 1, F766_5290(arg1));
	tb1 = (nstcall = 1, F600_3931(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_is_caught", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !(nstcall = 0, F52_1228(Current, arg1)))) {
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

/* {ISE_EXCEPTION_MANAGER}.is_caught */
EIF_BOOLEAN F52_1228 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_caught", 51, Current, 0, 1, 1171);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(13,(nstcall = 0, F52_1234), (Current));
	ti4_1 = (nstcall = 1, F766_5290(arg1));
	tb1 = (nstcall = 1, F600_3931(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_is_ignored", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !(nstcall = 0, F52_1227(Current, arg1)))) {
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

/* {ISE_EXCEPTION_MANAGER}.type_of_code */
EIF_REFERENCE F52_1229 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("type_of_code", 51, Current, 0, 1, 1172);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			tr1 = RTLNTY2(eif_new_type(86, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			RTHOOK(3);
			tr1 = RTLNTY2(eif_new_type(80, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 3L:
			RTHOOK(4);
			tr1 = RTLNTY2(eif_new_type(95, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			RTHOOK(5);
			tr1 = RTLNTY2(eif_new_type(96, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			RTHOOK(6);
			tr1 = RTLNTY2(eif_new_type(65, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			RTHOOK(7);
			tr1 = RTLNTY2(eif_new_type(99, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			RTHOOK(8);
			tr1 = RTLNTY2(eif_new_type(98, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			RTHOOK(9);
			tr1 = RTLNTY2(eif_new_type(88, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			RTHOOK(10);
			tr1 = RTLNTY2(eif_new_type(89, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			RTHOOK(11);
			tr1 = RTLNTY2(eif_new_type(97, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			RTHOOK(12);
			tr1 = RTLNTY2(eif_new_type(94, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			RTHOOK(13);
			tr1 = RTLNTY2(eif_new_type(69, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			RTHOOK(14);
			tr1 = RTLNTY2(eif_new_type(75, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 14L:
			RTHOOK(15);
			tr1 = RTLNTY2(eif_new_type(72, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			RTHOOK(16);
			tr1 = RTLNTY2(eif_new_type(80, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 16L:
			RTHOOK(17);
			tr1 = RTLNTY2(eif_new_type(71, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			RTHOOK(18);
			tr1 = RTLNTY2(eif_new_type(91, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			RTHOOK(19);
			tr1 = RTLNTY2(eif_new_type(79, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			RTHOOK(20);
			tr1 = RTLNTY2(eif_new_type(87, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			RTHOOK(21);
			tr1 = RTLNTY2(eif_new_type(73, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			RTHOOK(22);
			tr1 = RTLNTY2(eif_new_type(84, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 22L:
			RTHOOK(23);
			tr1 = RTLNTY2(eif_new_type(68, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			RTHOOK(24);
			tr1 = RTLNTY2(eif_new_type(83, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			RTHOOK(25);
			tr1 = RTLNTY2(eif_new_type(62, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			RTHOOK(26);
			tr1 = RTLNTY2(eif_new_type(75, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 26L:
			RTHOOK(27);
			tr1 = RTLNTY2(eif_new_type(92, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			RTHOOK(28);
			tr1 = RTLNTY2(eif_new_type(84, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 28L:
			RTHOOK(29);
			tr1 = RTLNTY2(eif_new_type(67, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			RTHOOK(30);
			tr1 = RTLNTY2(eif_new_type(98, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			RTHOOK(31);
			tr1 = RTLNTY2(eif_new_type(76, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			RTHOOK(32);
			tr1 = RTLNTY2(eif_new_type(82, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			RTHOOK(33);
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F52_1230 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Result);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("exception_from_code", 51, Current, 3, 1, 1173);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			Result = RTLNS(eif_new_type(86, 0x01).id, 86, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 2L:
			RTHOOK(3);
			tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(16,(nstcall = 0, F52_1239), (Current))));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(4);
			(nstcall = 1, F81_1495(RTCW(loc3), ((EIF_INTEGER_32) 2L)));
			RTHOOK(5);
			Result = (EIF_REFERENCE) loc3;
			break;
		case 3L:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(95, 0x01).id, 95, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 4L:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(96, 0x01).id, 96, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 5L:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(65, 0x01).id, 65, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 6L:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(99, 0x01).id, 99, _OBJSIZ_5_2_0_1_0_0_0_0_);
			break;
		case 7L:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(98, 0x01).id, 98, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 8L:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(88, 0x01).id, 88, _OBJSIZ_7_1_0_1_0_0_0_0_);
			break;
		case 9L:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(89, 0x01).id, 89, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 10L:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(97, 0x01).id, 97, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 11L:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(94, 0x01).id, 94, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 12L:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(69, 0x01).id, 69, _OBJSIZ_5_1_0_2_0_0_0_0_);
			break;
		case 13L:
			RTHOOK(16);
			loc1 = RTLNS(eif_new_type(75, 0x01).id, 75, _OBJSIZ_5_1_0_2_0_0_0_0_);
			RTHOOK(17);
			(nstcall = 1, F76_1487(RTCW(loc1), ((EIF_INTEGER_32) 13L)));
			RTHOOK(18);
			Result = (EIF_REFERENCE) loc1;
			break;
		case 14L:
			RTHOOK(19);
			Result = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 15L:
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(16,(nstcall = 0, F52_1239), (Current))));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(21);
			(nstcall = 1, F81_1495(RTCW(loc3), ((EIF_INTEGER_32) 15L)));
			RTHOOK(22);
			Result = (EIF_REFERENCE) loc3;
			break;
		case 16L:
			RTHOOK(23);
			Result = RTLNS(eif_new_type(71, 0x01).id, 71, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 17L:
			RTHOOK(24);
			Result = RTLNS(eif_new_type(91, 0x01).id, 91, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 18L:
			RTHOOK(25);
			Result = RTLNS(eif_new_type(79, 0x01).id, 79, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 19L:
			RTHOOK(26);
			Result = RTLNS(eif_new_type(87, 0x01).id, 87, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 20L:
			RTHOOK(27);
			Result = RTLNS(eif_new_type(73, 0x01).id, 73, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 21L:
			RTHOOK(28);
			loc2 = RTLNS(eif_new_type(84, 0x01).id, 84, _OBJSIZ_5_1_0_3_0_0_0_0_);
			RTHOOK(29);
			(nstcall = 1, F85_1505(RTCW(loc2), ((EIF_INTEGER_32) 21L)));
			RTHOOK(30);
			Result = (EIF_REFERENCE) loc2;
			break;
		case 22L:
			RTHOOK(31);
			Result = RTLNS(eif_new_type(68, 0x01).id, 68, _OBJSIZ_5_1_0_2_0_0_0_0_);
			break;
		case 23L:
			RTHOOK(32);
			Result = RTLNS(eif_new_type(83, 0x01).id, 83, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 24L:
			RTHOOK(33);
			Result = RTLNS(eif_new_type(62, 0x01).id, 62, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 25L:
			RTHOOK(34);
			loc1 = RTLNS(eif_new_type(75, 0x01).id, 75, _OBJSIZ_5_1_0_2_0_0_0_0_);
			RTHOOK(35);
			(nstcall = 1, F76_1487(RTCW(loc1), ((EIF_INTEGER_32) 25L)));
			RTHOOK(36);
			Result = (EIF_REFERENCE) loc1;
			break;
		case 26L:
			RTHOOK(37);
			Result = RTLNS(eif_new_type(92, 0x01).id, 92, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 27L:
			RTHOOK(38);
			loc2 = RTLNS(eif_new_type(84, 0x01).id, 84, _OBJSIZ_5_1_0_3_0_0_0_0_);
			RTHOOK(39);
			(nstcall = 1, F85_1505(RTCW(loc2), ((EIF_INTEGER_32) 27L)));
			RTHOOK(40);
			Result = (EIF_REFERENCE) loc2;
			break;
		case 28L:
			RTHOOK(41);
			Result = RTLNS(eif_new_type(67, 0x01).id, 67, _OBJSIZ_6_1_0_3_0_0_0_0_);
			break;
		case 29L:
			RTHOOK(42);
			Result = RTLNS(eif_new_type(98, 0x01).id, 98, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 30L:
			RTHOOK(43);
			Result = RTLNS(eif_new_type(76, 0x01).id, 76, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 31L:
			RTHOOK(44);
			Result = RTLNS(eif_new_type(82, 0x01).id, 82, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_data */
EIF_REFERENCE F52_1231 (EIF_REFERENCE Current)
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
	
	RTEAA("exception_data", 51, Current, 0, 0, 1174);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(17,(nstcall = 0, F52_1237), (Current))));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.set_last_exception */
void F52_1232 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("set_last_exception", 51, Current, 0, 1, 1175);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(12,(nstcall = 0, F52_1238), (Current));
	(nstcall = 1, F117_1934(RTCW(tr1), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("last_exception_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(12,(nstcall = 0, F52_1238), (Current))));
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
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

/* {ISE_EXCEPTION_MANAGER}.set_exception_data */
void F52_1233 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_REFERENCE arg8, EIF_REFERENCE arg9, EIF_REFERENCE arg10, EIF_INTEGER_32 arg11, EIF_BOOLEAN arg12)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg5);
	RTLR(4,arg6);
	RTLR(5,arg7);
	RTLR(6,arg8);
	RTLR(7,arg9);
	RTLR(8,arg10);
	RTLR(9,loc1);
	RTLR(10,loc2);
	RTLIU(11);
	
	RTEAA("set_exception_data", 51, Current, 2, 12, 1176);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(17,(nstcall = 0, F52_1237), (Current));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,11,811,844,844,844,0xFF01,892,0xFF01,892,0xFF01,892,0xFF01,892,0xFF01,892,0xFF01,892,844,829,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 12, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr2+4)->it_r = arg5;
	RTAR(tr2,arg5);
	((EIF_TYPED_VALUE *)tr2+5)->it_r = arg6;
	RTAR(tr2,arg6);
	((EIF_TYPED_VALUE *)tr2+6)->it_r = arg7;
	RTAR(tr2,arg7);
	((EIF_TYPED_VALUE *)tr2+7)->it_r = arg8;
	RTAR(tr2,arg8);
	((EIF_TYPED_VALUE *)tr2+8)->it_r = arg9;
	RTAR(tr2,arg9);
	((EIF_TYPED_VALUE *)tr2+9)->it_r = arg10;
	RTAR(tr2,arg10);
	((EIF_TYPED_VALUE *)tr2+10)->it_i4 = arg11;
	((EIF_TYPED_VALUE *)tr2+11)->it_b = arg12;
	(nstcall = 1, F117_1934(RTCW(tr1), tr2));
	RTHOOK(2);
	if (arg2) {
		RTHOOK(3);
		tr1 = (nstcall = 0, F52_1241(Current));
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTHOOK(4);
			(nstcall = 0, F52_1232(Current, loc1));
		}
	} else {
		RTHOOK(5);
		RTCT0("last_exception_attached", EX_CHECK);
		tr1 = (nstcall = 0, F52_1220(Current));
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		(nstcall = 1, F62_1446(loc2, arg10));
		RTHOOK(7);
		(nstcall = 1, F62_1440(loc2, arg6));
		RTHOOK(8);
		(nstcall = 1, F62_1444(loc2, arg7));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.ignored_exceptions */
static EIF_REFERENCE F52_1234_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(13)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("ignored_exceptions", 51, Current, 0, 0, 1177);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,599,844,844,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 599, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F600_3924(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F52_1234 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(13,F52_1234_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unignorable_exceptions */
static EIF_REFERENCE F52_1235_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(14)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("unignorable_exceptions", 51, Current, 1, 0, 1178);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,599,844,844,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 599, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F600_3924(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNTY2(eif_new_type(86, 0x01), 0x01);
	ti4_1 = (nstcall = 1, F766_5290(tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	(nstcall = 1, F600_3971(RTCW(Result), loc1, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F52_1235 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(14,F52_1235_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unraisable_exceptions */
static EIF_REFERENCE F52_1236_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(15)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("unraisable_exceptions", 51, Current, 1, 0, 1179);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,599,844,844,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 599, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F600_3924(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNTY2(eif_new_type(88, 0x01), 0x01);
	ti4_1 = (nstcall = 1, F766_5290(tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	(nstcall = 1, F600_3971(RTCW(Result), loc1, loc1));
	RTHOOK(4);
	tr1 = RTLNTY2(eif_new_type(76, 0x01), 0x01);
	ti4_1 = (nstcall = 1, F766_5290(tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	(nstcall = 1, F600_3971(RTCW(Result), loc1, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F52_1236 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(15,F52_1236_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.exception_data_cell */
static EIF_REFERENCE F52_1237_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(17)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("exception_data_cell", 51, Current, 0, 0, 1180);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,116,0xFFF9,11,811,844,844,844,0xFF01,892,0xFF01,892,0xFF01,892,0xFF01,892,0xFF01,892,0xFF01,892,844,829,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 116, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F117_1934(RTCW(tr1), NULL));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F52_1237 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(17,F52_1237_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.last_exception_cell */
static EIF_REFERENCE F52_1238_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(12)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("last_exception_cell", 51, Current, 0, 0, 1181);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,116,61,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 116, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F117_1934(RTCW(tr1), NULL));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F52_1238 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(12,F52_1238_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.no_memory_exception_object_cell */
static EIF_REFERENCE F52_1239_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(16)

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("no_memory_exception_object_cell", 51, Current, 1, 0, 1182);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(80, 0x01).id, 80, _OBJSIZ_5_1_0_2_0_0_0_0_);
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(892, 0x01).id, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F891_6605(RTCW(tr1), ((EIF_INTEGER_32) 4096L)));
	(nstcall = 1, F62_1446(RTCW(loc1), tr1));
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,116,0xFF01,80,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 116, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F117_1934(RTCW(tr1), loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F52_1239 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(16,F52_1239_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.is_code_ignored */
EIF_BOOLEAN F52_1240 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_code_ignored", 51, Current, 1, 1, 1183);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F52_1229(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (nstcall = 0, F52_1227(Current, loc1));
	} else {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_data */
EIF_REFERENCE F52_1241 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,Result);
	RTLIU(13);
	
	RTEAA("exception_from_data", 51, Current, 10, 0, 1184);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = (nstcall = 0, F52_1231(Current));
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ti4_1 = eif_integer_32_item(loc2,1);
		tr1 = (nstcall = 0, F52_1230(Current, ti4_1));
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		RTHOOK(2);
		loc4 = loc3;
		loc4 = RTRV(eif_new_type(88, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			RTHOOK(3);
			loc1 = (nstcall = 0, F52_1220(Current));
			RTHOOK(4);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(5);
				(nstcall = 1, F62_1439(loc3, loc1));
			}
			RTHOOK(6);
			tr1 = eif_boxed_item(loc2,7);
			(nstcall = 1, F89_1515(loc4, tr1));
			RTHOOK(7);
			tr1 = eif_boxed_item(loc2,8);
			(nstcall = 1, F89_1516(loc4, tr1));
		} else {
			RTHOOK(8);
			loc5 = loc3;
			loc5 = RTRV(eif_new_type(76, 0x01),loc5);
			if (EIF_TEST(loc5)) {
				RTHOOK(9);
				loc1 = (nstcall = 0, F52_1220(Current));
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(11);
					(nstcall = 1, F62_1439(loc3, loc1));
				}
			} else {
				RTHOOK(12);
				loc6 = loc3;
				loc6 = RTRV(eif_new_type(99, 0x01),loc6);
				if (EIF_TEST(loc6)) {
					RTHOOK(13);
					tb1 = eif_boolean_item(loc2,11);
					(nstcall = 1, F100_1534(loc6, tb1));
				} else {
					RTHOOK(14);
					loc7 = loc3;
					loc7 = RTRV(eif_new_type(69, 0x01),loc7);
					if (EIF_TEST(loc7)) {
						RTHOOK(15);
						ti4_1 = eif_integer_32_item(loc2,2);
						(nstcall = 1, F70_1478(loc7, ti4_1));
					} else {
						RTHOOK(16);
						loc8 = loc3;
						loc8 = RTRV(eif_new_type(84, 0x01),loc8);
						if (EIF_TEST(loc8)) {
							RTHOOK(17);
							ti4_1 = eif_integer_32_item(loc2,3);
							(nstcall = 1, F85_1504(loc8, ti4_1));
						} else {
							RTHOOK(18);
							loc9 = loc3;
							loc9 = RTRV(eif_new_type(68, 0x01),loc9);
							if (EIF_TEST(loc9)) {
								RTHOOK(19);
								ti4_1 = eif_integer_32_item(loc2,3);
								(nstcall = 1, F69_1474(loc9, ti4_1));
							} else {
								RTHOOK(20);
								loc10 = loc3;
								loc10 = RTRV(eif_new_type(67, 0x01),loc10);
								if (EIF_TEST(loc10)) {
									RTHOOK(21);
									ti4_1 = eif_integer_32_item(loc2,2);
									(nstcall = 1, F68_1456(loc10, ti4_1));
									RTHOOK(22);
									tr1 = eif_boxed_item(loc2,4);
									(nstcall = 1, F68_1461(loc10, tr1));
								}
							}
						}
					}
				}
				RTHOOK(23);
				if ((nstcall = 0, F52_1246(Current))) {
					RTHOOK(24);
					loc1 = (nstcall = 0, F52_1220(Current));
				}
				RTHOOK(25);
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					RTHOOK(26);
					loc1 = (EIF_REFERENCE) loc3;
				}
				RTHOOK(27);
				(nstcall = 1, F62_1439(loc3, loc1));
			}
		}
		RTHOOK(28);
		tr1 = eif_boxed_item(loc2,9);
		(nstcall = 1, F62_1446(loc3, tr1));
		RTHOOK(29);
		tr1 = eif_boxed_item(loc2,4);
		(nstcall = 1, F62_1432(loc3, tr1));
		RTHOOK(30);
		tr1 = eif_boxed_item(loc2,5);
		(nstcall = 1, F62_1440(loc3, tr1));
		RTHOOK(31);
		tr1 = eif_boxed_item(loc2,6);
		(nstcall = 1, F62_1444(loc3, tr1));
		RTHOOK(32);
		Result = (EIF_REFERENCE) loc3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.once_raise */
void F52_1242 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTEAA("once_raise", 51, Current, 3, 1, 1185);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, F62_1435(RTCW(arg1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		if ((nstcall = 0, F52_1246(Current))) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F62_1425(RTCW(arg1)));
			tr2 = (nstcall = 0, F52_1220(Current));
			(nstcall = 1, F62_1439(RTCW(tr1), tr2));
		}
		RTHOOK(5);
		(nstcall = 0, F52_1232(Current, arg1));
		RTHOOK(6);
		loc1 = (nstcall = 0, F1_33(Current));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTHOOK(8);
			tp1 = (nstcall = 1, F108_1913(loc3));
			loc2 = (EIF_POINTER) tp1;
		} else {
			RTHOOK(9);
			loc2 = (nstcall = 0, F1_33(Current));
		}
		RTHOOK(10);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1314[Dtype(RTCW(arg1))-61])(arg1));
		(nstcall = 0, F52_1245(Current, ti4_1, loc1, loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.init_exception_manager */
void F52_1243 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("init_exception_manager", 51, Current, 0, 0, 1186);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 1, F1_31(RTCV(RTOUCR(13,(nstcall = 0, F52_1234), (Current)))));
	RTHOOK(2);
	(nstcall = 1, F1_31(RTCV(RTOUCR(14,(nstcall = 0, F52_1235), (Current)))));
	RTHOOK(3);
	(nstcall = 1, F1_31(RTCV(RTOUCR(15,(nstcall = 0, F52_1236), (Current)))));
	RTHOOK(4);
	(nstcall = 1, F1_31(RTCV(RTOUCR(17,(nstcall = 0, F52_1237), (Current)))));
	RTHOOK(5);
	(nstcall = 1, F1_31(RTCV(RTOUCR(12,(nstcall = 0, F52_1238), (Current)))));
	RTHOOK(6);
	(nstcall = 1, F1_31(RTCV(RTOUCR(16,(nstcall = 0, F52_1239), (Current)))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.free_preallocated_trace */
void F52_1244 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("free_preallocated_trace", 51, Current, 1, 0, 1187);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(16,(nstcall = 0, F52_1239), (Current))));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		(nstcall = 1, F62_1432(RTCW(loc1), NULL));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.developer_raise */
void F52_1245 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("developer_raise", 51, Current, 0, 3, 1188);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.in_rescue */
EIF_BOOLEAN F52_1246 (EIF_REFERENCE Current)
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
	
	RTEAA("in_rescue", 51, Current, 0, 0, 1189);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit53 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
