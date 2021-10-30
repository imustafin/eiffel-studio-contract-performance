/*
 * Code for class STD_FILES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st12.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STD_FILES}.output */
static EIF_REFERENCE F24_385_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOSP (385);
#define Result RTOSR(385)
	RTOC_NEW(Result);
	tr1 = RTLNS(eif_new_type(778, 0x01).id, 778, _OBJSIZ_3_7_2_4_1_1_2_1_);
	tr2 = RTMS_EX_H("stdout",6,1912016244);
	F779_4953(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (385);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F24_385 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(385,F24_385_body,(Current));
}

/* {STD_FILES}.standard_default */
EIF_REFERENCE F24_388 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		Result = RTOSCF(385,F24_385, (Current));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {STD_FILES}.set_output_default */
void F24_410 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOSCF(385,F24_385, (Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STD_FILES}.put_string */
void F24_413 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = F24_388(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1152[Dtype(RTCW(tr1))-470])(tr1, arg1);
	RTLE;
}

void EIF_Minit12 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
