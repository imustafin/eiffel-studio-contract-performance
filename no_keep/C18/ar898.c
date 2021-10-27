/*
 * Code for class ARRAYED_QUEUE_ITERATION_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar898.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAYED_QUEUE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F643_5075 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + _REFACS_2_) == ((EIF_INTEGER_32) 0L));
}

/* {ARRAYED_QUEUE_ITERATION_CURSOR}.forth */
void F643_5076 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current + _REFACS_1_))++;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-530])(tr1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + _REFACS_1_) >= ti4_1)) {
		*(EIF_INTEGER_32 *)(Current + _REFACS_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	(*(EIF_INTEGER_32 *)(Current + _REFACS_2_))--;
	RTLE;
}

void EIF_Minit898 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
