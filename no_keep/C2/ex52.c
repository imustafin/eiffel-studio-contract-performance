/*
 * Code for class EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex52.h"

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
void F51_1210 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(59, 0x01).id, 59, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOUCR(10,F60_1381, (RTCW(tr1)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1135[Dtype(RTCW(tr1))-50])(tr1, arg1);
	RTLE;
}

/* {EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F51_1216 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = RTLNS(eif_new_type(59, 0x01).id, 59, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOUCR(10,F60_1381, (RTCW(tr1)));
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1141[Dtype(RTCW(tr1))-50])(tr1, arg1);
	RTLE;
	return Result;
}

/* {EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F51_1219 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

void EIF_Minit52 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
