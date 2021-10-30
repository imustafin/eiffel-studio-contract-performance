/*
 * Code for class EXCEPTION_MANAGER_FACTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex49.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTION_MANAGER_FACTORY}.exception_manager */
static EIF_REFERENCE F67_956_body (EIF_REFERENCE Current)
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
	RTOSP (956);
#define Result RTOSR(956)
	RTOC_NEW(Result);
	tr1 = RTLNS(eif_new_type(35, 0x01).id, 35, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (956);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F67_956 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(956,F67_956_body,(Current));
}

void EIF_Minit49 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
