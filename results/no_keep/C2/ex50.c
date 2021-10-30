/*
 * Code for class EXCEPTIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex50.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTIONS}.raise */
void F68_975 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(69, 0x01).id, 69, _OBJSIZ_5_1_0_1_0_0_0_0_);
	F69_998(RTCW(loc1), arg1);
	F69_983(RTCW(loc1));
	RTLE;
}

/* {EXCEPTIONS}.raise_retrieval_exception */
void F68_976 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tr1 = RTOSCF(956,F67_956, (Current));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R552[Dtype(RTCW(tr1))-34])(tr1, ((EIF_INTEGER_32) 31L));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F69_998(loc1, arg1);
		F69_983(loc1);
	}
	RTLE;
}

void EIF_Minit50 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
