/*
 * Code for class DATE_TIME_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da974.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_DURATION}.date */
EIF_REFERENCE F112_7403 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {DATE_TIME_DURATION}.time */
EIF_REFERENCE F112_7404 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_DURATION}.is_equal */
EIF_BOOLEAN F112_7410 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = F42_7337(RTCW(arg1));
	if ((EIF_BOOLEAN)(F42_7337(Current) == ti4_1)) {
		ti4_1 = F42_7338(RTCW(arg1));
		tb2 = (EIF_BOOLEAN)(F42_7338(Current) == ti4_1);
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F114_7478(RTCW(tr1));
		ti4_2 = F42_7339(RTCW(arg1));
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		ti4_3 = F114_7478(RTCW(tr1));
		tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (F42_7339(Current) + ti4_1) == (EIF_INTEGER_32) (ti4_2 + ti4_3));
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F114_7479(RTCW(tr1));
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tr2 = F114_7479(RTCW(tr2));
		tb1 = F114_7463(RTCW(tr1), tr2);
		Result = tb1;
	}
	RTLE;
	return Result;
}

void EIF_Minit974 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
