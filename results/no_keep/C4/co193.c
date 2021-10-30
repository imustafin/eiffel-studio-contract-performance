/*
 * Code for class CONSOLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co193.h"
#include "eif_console.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CONSOLE}.make_open_stdout */
void F779_4953 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F470_2208(Current, arg1);
	tp1 = (EIF_POINTER) console_def(((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_) = (EIF_POINTER) tp1;
	F470_2433(Current);
	RTLE;
}

/* {CONSOLE}.exists */
EIF_BOOLEAN F779_4956 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {CONSOLE}.count */
EIF_INTEGER_32 F779_4957 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {CONSOLE}.dispose */
void F779_4958 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {CONSOLE}.put_string */
void F779_4979 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		console_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {CONSOLE}.console_def */
EIF_POINTER F779_4990 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) console_def(arg1);
	
	return Result;
}

/* {CONSOLE}.console_ps */
void F779_4997 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	console_ps((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
}

/* {CONSOLE}.file_close */
void F779_5011 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	console_file_close((FILE*) arg1);
	
}

void EIF_Minit193 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
