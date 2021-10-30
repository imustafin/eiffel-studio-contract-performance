/*
 * Code for class TIME_UTILITY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti27.h"
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

/* {TIME_UTILITY}.mod */
EIF_INTEGER_32 F45_676 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % arg2);
	if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 0L))) {
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + arg2);
	}
	return Result;
}

/* {TIME_UTILITY}.div */
EIF_INTEGER_32 F45_677 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / arg2);
	tr8_1 = (EIF_REAL_64) (Result);
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2)))) {
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
	}
	return Result;
}

/* {TIME_UTILITY}.date_time_tools */
static EIF_REFERENCE F45_678_body (EIF_REFERENCE Current)
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
	RTOSP (678);
#define Result RTOSR(678)
	RTOC_NEW(Result);
	tr1 = RTLNS(eif_new_type(25, 0x01).id, 25, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (678);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F45_678 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(678,F45_678_body,(Current));
}

/* {TIME_UTILITY}.default_format_string */
EIF_REFERENCE F45_679 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTOSCF(474,F26_474, (RTCV(RTOSCF(678,F45_678, (Current)))));
	RTLE;
	return Result;
}

void EIF_Minit27 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
