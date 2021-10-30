/*
 * Code for class EXCEPTIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex50.h"
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

/* {EXCEPTIONS}.meaning */
EIF_REFERENCE F68_957 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("meaning", 67, Current, 1, 1, 1031);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R552[Dtype(RTCW(tr1))-34])(tr1, arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R928[Dtype(loc1)-68])(loc1));
		tr2 = (nstcall = 1, F770_4551(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.assertion_violation */
EIF_BOOLEAN F68_958 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("assertion_violation", 67, Current, 2, 0, 1032);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F69_991(loc1));
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(100, 0x01),loc2);
		Result = EIF_TEST(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_developer_exception */
EIF_BOOLEAN F68_959 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("is_developer_exception", 67, Current, 2, 0, 1033);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F69_991(loc1));
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(69, 0x01),loc2);
		Result = EIF_TEST(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_developer_exception_of_name */
EIF_BOOLEAN F68_960 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_developer_exception_of_name", 67, Current, 0, 1, 1034);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F68_959(Current))) {
		RTHOOK(2);
		tr1 = (nstcall = 0, F68_961(Current));
		Result = (EIF_BOOLEAN) RTEQ(tr1, arg1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.developer_exception_name */
EIF_REFERENCE F68_961 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("developer_exception_name", 67, Current, 2, 0, 1010);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("applicable", EX_PRE);
		RTTE((nstcall = 0, F68_959(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F69_991(loc1));
		tr2 = (nstcall = 1, F69_987(RTCW(tr1)));
		loc2 = tr2;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F770_4551(loc2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_signal */
EIF_BOOLEAN F68_962 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("is_signal", 67, Current, 2, 0, 1011);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F69_991(loc1));
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(74, 0x01),loc2);
		Result = EIF_TEST(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_system_exception */
EIF_BOOLEAN F68_963 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("is_system_exception", 67, Current, 3, 0, 1012);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R552[Dtype(RTCW(tr1))-34])(tr1, ((EIF_INTEGER_32) 18L)));
		loc2 = tr2;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		Result = '\01';
		tr1 = (nstcall = 1, F69_991(loc1));
		tb1 = (nstcall = 1, F1_6(tr1, loc2));
		if (!tb1) {
			tr1 = (nstcall = 1, F69_991(loc1));
			loc3 = tr1;
			loc3 = RTRV(eif_new_type(76, 0x01),loc3);
			Result = EIF_TEST(loc3);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.tag_name */
EIF_REFERENCE F68_964 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("tag_name", 67, Current, 2, 0, 1013);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F69_987(loc1));
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F770_4551(loc2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.recipient_name */
EIF_REFERENCE F68_965 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("recipient_name", 67, Current, 1, 0, 1014);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(loc1);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.class_name */
EIF_REFERENCE F68_966 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("class_name", 67, Current, 1, 0, 1015);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_1_);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.exception */
EIF_INTEGER_32 F68_967 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("exception", 67, Current, 1, 0, 1016);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R933[Dtype(loc1)-68])(loc1));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.exception_trace */
EIF_REFERENCE F68_968 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("exception_trace", 67, Current, 2, 0, 1017);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F69_991(loc1));
		tr2 = (nstcall = 1, F69_989(RTCW(tr1)));
		loc2 = tr2;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F770_4551(loc2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_tag_name */
EIF_REFERENCE F68_969 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("original_tag_name", 67, Current, 2, 0, 1018);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F69_992(loc1));
		tr2 = (nstcall = 1, F69_991(RTCW(tr1)));
		tr1 = (nstcall = 1, F69_987(RTCW(tr2)));
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F770_4551(loc2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_exception */
EIF_INTEGER_32 F68_970 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("original_exception", 67, Current, 1, 0, 1019);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F69_992(loc1));
		tr2 = (nstcall = 1, F69_991(RTCW(tr1)));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R933[Dtype(RTCW(tr2))-68])(tr2));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_recipient_name */
EIF_REFERENCE F68_971 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("original_recipient_name", 67, Current, 1, 0, 1020);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F69_992(loc1));
		tr2 = (nstcall = 1, F69_991(RTCW(tr1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(tr2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_class_name */
EIF_REFERENCE F68_972 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("original_class_name", 67, Current, 1, 0, 1021);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R542[Dtype(RTCW(tr1))-34])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F69_992(loc1));
		tr2 = (nstcall = 1, F69_991(RTCW(tr1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_1_);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.catch */
void F68_973 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("catch", 67, Current, 1, 1, 1022);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R551[Dtype(RTCW(tr1))-34])(tr1, arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R545[Dtype(RTCW(tr1))-34])(tr1, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.ignore */
void F68_974 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("ignore", 67, Current, 1, 1, 1023);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R551[Dtype(RTCW(tr1))-34])(tr1, arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R544[Dtype(RTCW(tr1))-34])(tr1, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.raise */
void F68_975 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("raise", 67, Current, 1, 1, 1024);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(69, 0x01).id, 69, _OBJSIZ_5_1_0_1_0_0_0_0_);
	RTHOOK(2);
	(nstcall = 1, F69_998(RTCW(loc1), arg1));
	RTHOOK(3);
	(nstcall = 1, F69_983(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.raise_retrieval_exception */
void F68_976 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTEAA("raise_retrieval_exception", 67, Current, 1, 1, 1025);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(956,(nstcall = 0, F67_956), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R552[Dtype(RTCW(tr1))-34])(tr1, ((EIF_INTEGER_32) 31L)));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		(nstcall = 1, F69_998(loc1, arg1));
		RTHOOK(3);
		(nstcall = 1, F69_983(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.die */
void F68_977 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("die", 67, Current, 0, 1, 1026);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);esdie(arg1);
	
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("False", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.new_die */
void F68_978 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("new_die", 67, Current, 0, 1, 1027);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);esdie(arg1);
	
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("False", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.message_on_failure */
void F68_979 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("message_on_failure", 67, Current, 0, 0, 1028);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F68_981(Current, (EIF_BOOLEAN) 1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.no_message_on_failure */
void F68_980 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("no_message_on_failure", 67, Current, 0, 0, 1029);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F68_981(Current, (EIF_BOOLEAN) 0));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.c_trace_exception */
void F68_981 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_trace_exception", 67, Current, 0, 1, 1030);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eetrace(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

void EIF_Minit50 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
