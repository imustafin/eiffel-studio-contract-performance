/*
 * Code for class EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex23.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTION_MANAGER}.raise */
void F35_549 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(66, 0x01).id, 66, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOSCF(956,F67_956, (RTCW(tr1)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R543[Dtype(RTCW(tr1))-34])(tr1, arg1);
	RTLE;
}

/* {EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F35_555 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(66, 0x01).id, 66, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOSCF(956,F67_956, (RTCW(tr1)));
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R549[Dtype(RTCW(tr1))-34])(tr1, arg1);
	RTLE;
	return Result;
}

/* {EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F35_558 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

void EIF_Minit23 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
