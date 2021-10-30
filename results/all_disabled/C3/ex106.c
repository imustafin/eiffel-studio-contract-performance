/*
 * Code for class EXECUTION_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex106.h"
#include <string.h>
#include <stdlib.h>
#include "eif_path_name.h"
#include <eif_system.h>
#include "eif_dir.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F127_1487
static EIF_NATURAL_32 inline_F127_1487 (void)
{
	#ifdef EIF_WINDOWS
	SYSTEM_INFO SysInfo;
	ZeroMemory (&SysInfo, sizeof (SYSTEM_INFO));
	GetSystemInfo (&SysInfo);
	return (EIF_NATURAL_32) SysInfo.dwNumberOfProcessors;
#elif defined(EIF_MACOSX)
		/* MacOS X < 10.4 */
	int nm [2];
	size_t len = 4;
	uint32_t count;
	nm [0] = CTL_HW; nm [1] = HW_AVAILCPU;
	sysctl (nm, 2, &count, &len, NULL, 0);
	if(count < 1) {
		nm[1] = HW_NCPU;
		sysctl(nm, 2, &count, &len, NULL, 0);
		if (count < 1) {count = 1;}
	}
	return (EIF_NATURAL_32) count;
#else
		/* Linux, Solaris, AIX, Mac OS X >=10.4 (i.e. Tiger onwards), ... */
	return (EIF_NATURAL_32) sysconf(_SC_NPROCESSORS_ONLN);
#endif
	;
}
#define INLINE_F127_1487
#endif
#ifndef INLINE_F127_1496
static EIF_POINTER inline_F127_1496 (EIF_INTEGER_32 arg1)
{
	if (eif_environ) {
	#ifdef EIF_WINDOWS
		EIF_NATIVE_CHAR *vars = (EIF_NATIVE_CHAR *) eif_environ;
		int cnt = 0;
		for (; *vars; vars++) {
		   if (arg1==cnt) return vars;
		   while (*vars) { vars++; }
		   cnt++;
		}
		return NULL;
	#else
		return ((EIF_NATIVE_CHAR **)eif_environ)[arg1];
	#endif
} else {
	return NULL;
}
	;
}
#define INLINE_F127_1496
#endif
#ifndef INLINE_F127_1500
static EIF_POINTER inline_F127_1500 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	return _wgetenv ((EIF_NATIVE_CHAR *) arg1);
#else
	return getenv ((EIF_NATIVE_CHAR *) arg1);
#endif
	;
}
#define INLINE_F127_1500
#endif
#ifndef INLINE_F127_1501
static EIF_INTEGER_32 inline_F127_1501 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	return _wputenv ((EIF_NATIVE_CHAR *) arg1);
#else
	return putenv ((EIF_NATIVE_CHAR *) arg1);
#endif
	;
}
#define INLINE_F127_1501
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXECUTION_ENVIRONMENT}.arguments */
static EIF_REFERENCE F127_1472_body (EIF_REFERENCE Current)
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
	
	RTEAA("arguments", 126, Current, 0, 0, 1478);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1472);
#define Result RTOSR(1472)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(278, 0x01).id, 278, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1472);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_1472 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1472,F127_1472_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.command_line */
static EIF_REFERENCE F127_1473_body (EIF_REFERENCE Current)
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
	
	RTEAA("command_line", 126, Current, 0, 0, 1479);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1473);
#define Result RTOSR(1473)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(180, 0x01).id, 180, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1473);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_1473 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1473,F127_1473_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.current_working_path */
EIF_REFERENCE F127_1474 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("current_working_path", 126, Current, 3, 0, 1480);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(108, 0x01).id, 108, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F109_1105(RTCW(loc3), loc1));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F127_1499(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(5);
		Result = RTLNS(eif_new_type(645, 0x01).id, 645, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr1 = RTMS_EX_H(".",1,46);
		(nstcall = -1, F646_3212(RTCW(Result), tr1));
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) loc2;
			RTHOOK(8);
			(nstcall = 1, F109_1195(RTCW(loc3), loc1));
			RTHOOK(9);
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			loc2 = (nstcall = 0, F127_1499(Current, tp1, loc1));
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
			RTHOOK(11);
			Result = RTLNS(eif_new_type(645, 0x01).id, 645, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			(nstcall = -1, F646_3216(RTCW(Result), tp1));
		} else {
			RTHOOK(12);
			Result = RTLNS(eif_new_type(645, 0x01).id, 645, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr1 = RTMS_EX_H(".",1,46);
			(nstcall = -1, F646_3212(RTCW(Result), tr1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.current_working_directory */
EIF_REFERENCE F127_1475 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("current_working_directory", 126, Current, 3, 0, 1481);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(108, 0x01).id, 108, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F109_1105(RTCW(loc3), loc1));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F127_1499(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(5);
		Result = RTMS_EX_H(".",1,46);
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) loc2;
			RTHOOK(8);
			(nstcall = 1, F109_1195(RTCW(loc3), loc1));
			RTHOOK(9);
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			loc2 = (nstcall = 0, F127_1499(Current, tp1, loc1));
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
			RTHOOK(11);
			tr1 = RTOSCF(1498,(nstcall = 0, F127_1498), (Current));
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			tr2 = (nstcall = 1, F149_1856(RTCW(tr1), tp1));
			Result = (EIF_REFERENCE) tr2;
		} else {
			RTHOOK(12);
			Result = RTMS_EX_H(".",1,46);
			
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.default_shell */
static EIF_REFERENCE F127_1476_body (EIF_REFERENCE Current)
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
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("default_shell", 126, Current, 1, 0, 1482);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1476);
#define Result RTOSR(1476)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTMS_EX_H("SHELL",5,1213138508);
	tr1 = (nstcall = 0, F127_1478(Current, tr1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(774, 0x01).id, 774, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F770_4495(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1476);
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_1476 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1476,F127_1476_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.get */
EIF_REFERENCE F127_1477 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("get", 126, Current, 1, 1, 1483);
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
		RTCT("not_has_null_character", EX_PRE);
		tb1 = (nstcall = 1, F776_4823(RTCW(arg1), (EIF_CHARACTER_8) '\000'));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F127_1478(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F770_4551(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.item */
EIF_REFERENCE F127_1478 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("item", 126, Current, 2, 1, 1484);
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
		RTCT("not_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R3369[Dtype(RTCW(arg1))-773])(arg1, tw1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F128_1509(RTCW(loc1), arg1));
	RTHOOK(4);
	tp1 = (nstcall = 1, F128_1516(RTCW(loc1)));
	loc2 = (nstcall = 0, F127_1500(Current, tp1));
	RTHOOK(5);
	tb1 = !loc2;
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F128_1511(RTCW(tr1), loc2));
		tr2 = (nstcall = 1, F128_1514(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.home_directory_path */
static EIF_REFERENCE F127_1479_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("home_directory_path", 126, Current, 3, 0, 1485);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("home_directory_supported", EX_PRE);
		tb1 = (nstcall = 1, F23_379(RTOSCF(28,(nstcall = 0, F1_28), (Current))));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOSP (1479);
#define Result RTOSR(1479)
	RTOC_NEW(Result);
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(3);
	loc3 = RTLNS(eif_new_type(108, 0x01).id, 108, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F109_1105(RTCW(loc3), loc1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F127_1505(Current, tp1, loc1));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(7);
		(nstcall = 1, F109_1195(RTCW(loc3), loc1));
		RTHOOK(8);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F127_1505(Current, tp1, loc1));
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(645, 0x01).id, 645, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		(nstcall = -1, F646_3216(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1479);
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_1479 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1479,F127_1479_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.user_directory_path */
static EIF_REFERENCE F127_1480_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLIU(4);
	
	RTEAA("user_directory_path", 126, Current, 4, 0, 1486);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1480);
#define Result RTOSR(1480)
	RTOC_NEW(Result);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(108, 0x01).id, 108, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F109_1105(RTCW(loc3), ((EIF_INTEGER_32) 50L)));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F127_1506(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(6);
		(nstcall = 1, F109_1195(RTCW(loc3), loc1));
		RTHOOK(7);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F127_1506(Current, tp1, loc1));
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(9);
		tr1 = RTLNS(eif_new_type(645, 0x01).id, 645, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		(nstcall = -1, F646_3216(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTHOOK(10);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result != NULL)) {
		tb2 = (nstcall = 1, F646_3220(RTCW(Result)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
	} else {
		RTHOOK(11);
		tb1 = '\0';
		tb2 = (nstcall = 1, F23_379(RTOSCF(28,(nstcall = 0, F1_28), (Current))));
		if (tb2) {
			tr1 = RTOSCF(1479,(nstcall = 0, F127_1479), (Current));
			loc4 = tr1;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(12);
			Result = (EIF_REFERENCE) loc4;
		} else {
			RTHOOK(13);
			Result = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1480);
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_1480 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1480,F127_1480_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.temporary_directory_path */
static EIF_REFERENCE F127_1481_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("temporary_directory_path", 126, Current, 3, 0, 1487);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1481);
#define Result RTOSR(1481)
	RTOC_NEW(Result);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F128_1510(RTCW(loc3), loc1));
	RTHOOK(3);
	tp1 = (nstcall = 1, F128_1516(RTCW(loc3)));
	loc2 = (nstcall = 0, F127_1507(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(6);
		loc3 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F128_1510(RTCW(loc3), loc1));
		RTHOOK(7);
		tp1 = (nstcall = 1, F128_1516(RTCW(loc3)));
		loc2 = (nstcall = 0, F127_1507(Current, tp1, loc1));
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(9);
		tr1 = RTLNS(eif_new_type(645, 0x01).id, 645, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr2 = (nstcall = 1, F128_1514(RTCW(loc3)));
		(nstcall = -1, F646_3212(RTCW(tr1), tr2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1481);
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_1481 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1481,F127_1481_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.home_directory_name */
static EIF_REFERENCE F127_1482_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("home_directory_name", 126, Current, 3, 0, 1488);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("home_directory_supported", EX_PRE);
		tb1 = (nstcall = 1, F23_379(RTOSCF(28,(nstcall = 0, F1_28), (Current))));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOSP (1482);
#define Result RTOSR(1482)
	RTOC_NEW(Result);
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(3);
	loc3 = RTLNS(eif_new_type(108, 0x01).id, 108, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F109_1105(RTCW(loc3), loc1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F127_1505(Current, tp1, loc1));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(7);
		(nstcall = 1, F109_1195(RTCW(loc3), loc1));
		RTHOOK(8);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F127_1505(Current, tp1, loc1));
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(10);
		tr1 = RTOSCF(1498,(nstcall = 0, F127_1498), (Current));
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		tr2 = (nstcall = 1, F149_1856(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1482);
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_1482 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1482,F127_1482_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.user_directory_name */
static EIF_REFERENCE F127_1483_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc4);
	RTLIU(5);
	
	RTEAA("user_directory_name", 126, Current, 4, 0, 1489);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1483);
#define Result RTOSR(1483)
	RTOC_NEW(Result);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(108, 0x01).id, 108, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F109_1105(RTCW(loc3), ((EIF_INTEGER_32) 50L)));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F127_1506(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(6);
		(nstcall = 1, F109_1195(RTCW(loc3), loc1));
		RTHOOK(7);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F127_1506(Current, tp1, loc1));
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(9);
		tr1 = RTOSCF(1498,(nstcall = 0, F127_1498), (Current));
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		tr2 = (nstcall = 1, F149_1856(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTHOOK(10);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result != NULL)) {
		tb2 = (nstcall = 1, F346_2122(RTCW(Result)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
	} else {
		RTHOOK(11);
		tb1 = '\0';
		tb2 = (nstcall = 1, F23_379(RTOSCF(28,(nstcall = 0, F1_28), (Current))));
		if (tb2) {
			tr1 = RTOSCF(1482,(nstcall = 0, F127_1482), (Current));
			loc4 = tr1;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(12);
			Result = (EIF_REFERENCE) loc4;
		} else {
			RTHOOK(13);
			Result = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1483);
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_1483 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1483,F127_1483_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.root_directory_name */
static EIF_REFERENCE F127_1484_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("root_directory_name", 126, Current, 0, 0, 1490);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("root_directory_supported", EX_PRE);
		tb1 = (nstcall = 1, F23_380(RTOSCF(28,(nstcall = 0, F1_28), (Current))));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOSP (1484);
#define Result RTOSR(1484)
	RTOC_NEW(Result);
	RTHOOK(2);
	if ((nstcall = 0, F44_628(Current))) {
		RTHOOK(3);
		Result = RTMS_EX_H("\\",1,92);
	} else {
		RTHOOK(4);
		if ((nstcall = 0, F44_630(Current))) {
			RTHOOK(5);
			Result = RTMS_EX_H("[000000]",8,1461084509);
		} else {
			RTHOOK(6);
			Result = RTMS_EX_H("/",1,47);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1484);
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_1484 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1484,F127_1484_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.starting_environment_variables */
EIF_REFERENCE F127_1485 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("starting_environment_variables", 126, Current, 4, 0, 1491);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,574,0xFF01,777,0xFF01,777,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 574, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	(nstcall = -1, F575_2859(RTCW(Result), ((EIF_INTEGER_32) 40L)));
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	loc1 = (nstcall = 0, F127_1496(Current, loc2));
	RTHOOK(4);
	loc3 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F128_1510(RTCW(loc3), ((EIF_INTEGER_32) 0L)));
	for (;;) {
		RTHOOK(5);
		tb1 = !loc1;
		if (tb1) break;
		RTHOOK(6);
		(nstcall = 1, F128_1526(RTCW(loc3), loc1));
		RTHOOK(7);
		tr1 = (nstcall = 1, F128_1514(RTCW(loc3)));
		tr1 = (nstcall = 0, F127_1497(Current, tr1));
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			RTHOOK(8);
			tr1 = eif_boxed_item(loc4,1);
			tr2 = (nstcall = 1, F770_4551(RTCW(tr1)));
			tr1 = eif_boxed_item(loc4,2);
			tr3 = (nstcall = 1, F770_4551(RTCW(tr1)));
			(nstcall = 1, F575_2906(RTCW(Result), tr2, tr3));
		}
		RTHOOK(9);
		loc2++;
		RTHOOK(10);
		loc1 = (nstcall = 0, F127_1496(Current, loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {EXECUTION_ENVIRONMENT}.starting_environment */
EIF_REFERENCE F127_1486 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("starting_environment", 126, Current, 4, 0, 1492);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,574,0xFF01,774,0xFF01,774,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 574, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	(nstcall = -1, F575_2859(RTCW(Result), ((EIF_INTEGER_32) 40L)));
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	loc1 = (nstcall = 0, F127_1496(Current, loc2));
	RTHOOK(4);
	loc3 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F128_1510(RTCW(loc3), ((EIF_INTEGER_32) 0L)));
	for (;;) {
		RTHOOK(5);
		tb1 = !loc1;
		if (tb1) break;
		RTHOOK(6);
		(nstcall = 1, F128_1526(RTCW(loc3), loc1));
		RTHOOK(7);
		tr1 = (nstcall = 1, F128_1514(RTCW(loc3)));
		tr1 = (nstcall = 0, F127_1497(Current, tr1));
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			RTHOOK(8);
			tr1 = eif_boxed_item(loc4,1);
			tr2 = eif_boxed_item(loc4,2);
			(nstcall = 1, F575_2906(RTCW(Result), tr1, tr2));
		}
		RTHOOK(9);
		loc2++;
		RTHOOK(10);
		loc1 = (nstcall = 0, F127_1496(Current, loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {EXECUTION_ENVIRONMENT}.available_cpu_count */
EIF_NATURAL_32 F127_1487 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("available_cpu_count", 126, Current, 0, 0, 1493);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F127_1487 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.return_code */
EIF_INTEGER_32 F127_1488 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
}


/* {EXECUTION_ENVIRONMENT}.change_working_directory */
void F127_1489 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("change_working_directory", 126, Current, 1, 1, 1495);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOSCF(1498,(nstcall = 0, F127_1498), (Current));
	tr2 = (nstcall = 1, F149_1854(RTCW(tr1), arg1, NULL));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = (nstcall = 0, F127_1502(Current, tp1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.change_working_path */
void F127_1490 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("change_working_path", 126, Current, 1, 1, 1496);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F646_3253(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = (nstcall = 0, F127_1502(Current, tp1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.put */
void F127_1491 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTEAA("put", 126, Current, 3, 2, 1460);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_meaningful", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3366[Dtype(RTCW(arg2))-773])(arg2));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_key_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R3369[Dtype(RTCW(arg2))-773])(arg2, tw1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("value_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("not_value_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R3369[Dtype(RTCW(arg1))-773])(arg1, tw1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	loc1 = RTLNS(eif_new_type(774, 0x01).id, 774, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1));
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg2))-773])(arg2));
	(nstcall = -1, F773_4625(RTCW(loc1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(7);
	(nstcall = 1, F775_4737(RTCW(loc1), arg2));
	RTHOOK(8);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
	(nstcall = 1, F775_4752(RTCW(loc1), tw1));
	RTHOOK(9);
	(nstcall = 1, F775_4737(RTCW(loc1), arg1));
	RTHOOK(10);
	loc2 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F128_1509(RTCW(loc2), loc1));
	RTHOOK(11);
	tr1 = RTOSCF(1495,(nstcall = 0, F127_1495), (Current));
	tr2 = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
	(nstcall = -1, F774_4676(RTCW(tr2), arg2));
	(nstcall = 1, F575_2906(RTCW(tr1), loc2, tr2));
	RTHOOK(12);
	tp1 = (nstcall = 1, F128_1516(RTCW(loc2)));
	ti4_1 = (nstcall = 0, F127_1501(Current, tp1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("variable_set", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\01';
			tb3 = '\0';
			tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3366[Dtype(RTCW(arg1))-773])(arg1));
			if (tb4) {
				tb3 = (EIF_BOOLEAN)((nstcall = 0, F127_1478(Current, arg2)) == NULL);
			}
			if (!(tb3)) {
				tb3 = '\0';
				tb4 = '\0';
				tb5 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3366[Dtype(RTCW(arg1))-773])(arg1));
				if ((EIF_BOOLEAN) !tb5) {
					tr1 = (nstcall = 0, F127_1478(Current, arg2));
					loc3 = tr1;
					tb4 = EIF_TEST(loc3);
				}
				if (tb4) {
					tb4 = (nstcall = 1, F770_4540(loc3, arg1));
					tb3 = tb4;
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
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.system */
void F127_1492 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("system", 126, Current, 1, 1, 1461);
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
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3366[Dtype(RTCW(arg1))-773])(arg1));
	if (tb1) {
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr1 = RTOSCF(1476,(nstcall = 0, F127_1476), (Current));
		(nstcall = -1, F128_1509(RTCW(loc1), tr1));
	} else {
		RTHOOK(4);
		loc1 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F128_1509(RTCW(loc1), arg1));
	}
	RTHOOK(5);
	tp1 = (nstcall = 1, F128_1516(RTCW(loc1)));
	ti4_1 = (nstcall = 0, F127_1503(Current, tp1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.launch */
void F127_1493 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("launch", 126, Current, 1, 1, 1462);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3366[Dtype(RTCW(arg1))-773])(arg1));
	if (tb1) {
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr1 = RTOSCF(1476,(nstcall = 0, F127_1476), (Current));
		(nstcall = -1, F128_1509(RTCW(loc1), tr1));
	} else {
		RTHOOK(4);
		loc1 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F128_1509(RTCW(loc1), arg1));
	}
	RTHOOK(5);
	tp1 = (nstcall = 1, F128_1516(RTCW(loc1)));
	(nstcall = 0, F127_1504(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.sleep */
void F127_1494 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("sleep", 126, Current, 0, 1, 1463);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_nanoseconds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F127_1508(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.environ */
static EIF_REFERENCE F127_1495_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("environ", 126, Current, 0, 0, 1464);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1495);
#define Result RTOSR(1495)
	RTOC_NEW(Result);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,574,0xFF01,127,0xFF01,773,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 574, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	(nstcall = -1, F575_2859(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1495);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_1495 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1495,F127_1495_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.i_th_environ */
EIF_POINTER F127_1496 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("i_th_environ", 126, Current, 0, 1, 1465);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F127_1496 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.separated_variables */
EIF_REFERENCE F127_1497 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("separated_variables", 126, Current, 3, 1, 1466);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_var_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || loc3)) break;
		RTHOOK(5);
		tw1 = (nstcall = 1, F775_4704(RTCW(arg1), loc1));
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			RTHOOK(6);
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			loc1++;
		}
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (loc1 < loc2))) {
		RTHOOK(9);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,691,0xFF01,774,0xFF01,774,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		tr2 = (nstcall = 1, F775_4784(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), loc2));
		((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
		RTAR(tr1,tr2);
		tr2 = (nstcall = 1, F775_4784(RTCW(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
		RTAR(tr1,tr2);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.file_info */
static EIF_REFERENCE F127_1498_body (EIF_REFERENCE Current)
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
	
	RTEAA("file_info", 126, Current, 0, 0, 1467);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1498);
#define Result RTOSR(1498)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(148, 0x01).id, 148, _OBJSIZ_3_2_0_0_0_0_0_0_);
	(nstcall = -1, F149_1837(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1498);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_1498 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1498,F127_1498_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.eif_dir_current */
EIF_INTEGER_32 F127_1499 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_dir_current", 126, Current, 0, 2, 1468);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_getenv */
EIF_POINTER F127_1500 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_getenv", 126, Current, 0, 1, 1469);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F127_1500 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_putenv */
EIF_INTEGER_32 F127_1501 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_putenv", 126, Current, 0, 1, 1470);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F127_1501 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_chdir */
EIF_INTEGER_32 F127_1502 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_chdir", 126, Current, 0, 1, 1471);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_chdir((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.system_call */
EIF_INTEGER_32 F127_1503 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("system_call", 126, Current, 0, 1, 1472);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_system(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.asynchronous_system_call */
void F127_1504 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("asynchronous_system_call", 126, Current, 0, 1, 1473);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_system_asynchronous(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.eif_home_directory_name_ptr */
EIF_INTEGER_32 F127_1505 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_home_directory_name_ptr", 126, Current, 0, 2, 1474);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_home_directory_name_ptr((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_user_directory_name_ptr */
EIF_INTEGER_32 F127_1506 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_user_directory_name_ptr", 126, Current, 0, 2, 1475);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_user_directory_name_ptr((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_temporary_directory_name_ptr */
EIF_INTEGER_32 F127_1507 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_temporary_directory_name_ptr", 126, Current, 0, 2, 1476);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_temporary_directory_name_ptr((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_sleep */
void F127_1508 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_sleep", 126, Current, 0, 1, 1477);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_nanoseconds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	EIF_ENTER_C;eif_sleep(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

void EIF_Minit106 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
