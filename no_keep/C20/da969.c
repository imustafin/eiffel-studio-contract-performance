/*
 * Code for class DATE_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da969.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_CONSTANTS}.date_default_format_string */
EIF_REFERENCE F41_7327 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTOUCR(41,F31_7249, (RTCV(RTOUCR(42,F37_7285, (Current)))));
	RTLE;
	return Result;
}

/* {DATE_CONSTANTS}.days_text */
EIF_REFERENCE F41_7328 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTOUCR(43,F31_7245, (RTCV(RTOUCR(42,F37_7285, (Current)))));
	RTLE;
	return Result;
}

/* {DATE_CONSTANTS}.months_text */
EIF_REFERENCE F41_7329 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTOUCR(44,F31_7246, (RTCV(RTOUCR(42,F37_7285, (Current)))));
	RTLE;
	return Result;
}

/* {DATE_CONSTANTS}.is_leap_year */
EIF_BOOLEAN F41_7333 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN)(F37_7283(Current, arg1, ((EIF_INTEGER_32) 4L)) == ((EIF_INTEGER_32) 0L))) {
		tb1 = '\01';
		if (!((EIF_BOOLEAN)(F37_7283(Current, arg1, ((EIF_INTEGER_32) 100L)) != ((EIF_INTEGER_32) 0L)))) {
			tb1 = (EIF_BOOLEAN)(F37_7283(Current, arg1, ((EIF_INTEGER_32) 400L)) == ((EIF_INTEGER_32) 0L));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

void EIF_Minit969 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
