/*
 * Code for class DATE_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da31.h"

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
EIF_REFERENCE F49_720 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTOSCF(472,F26_472, (RTCV(RTOSCF(678,F45_678, (Current)))));
	RTLE;
	return Result;
}

/* {DATE_CONSTANTS}.days_text */
EIF_REFERENCE F49_721 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTOSCF(468,F26_468, (RTCV(RTOSCF(678,F45_678, (Current)))));
	RTLE;
	return Result;
}

/* {DATE_CONSTANTS}.months_text */
EIF_REFERENCE F49_722 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTOSCF(469,F26_469, (RTCV(RTOSCF(678,F45_678, (Current)))));
	RTLE;
	return Result;
}

/* {DATE_CONSTANTS}.is_leap_year */
EIF_BOOLEAN F49_726 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	if ((EIF_BOOLEAN)(F45_676(Current, arg1, ((EIF_INTEGER_32) 4L)) == ((EIF_INTEGER_32) 0L))) {
		tb1 = '\01';
		if (!((EIF_BOOLEAN)(F45_676(Current, arg1, ((EIF_INTEGER_32) 100L)) != ((EIF_INTEGER_32) 0L)))) {
			tb1 = (EIF_BOOLEAN)(F45_676(Current, arg1, ((EIF_INTEGER_32) 400L)) == ((EIF_INTEGER_32) 0L));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

void EIF_Minit31 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
