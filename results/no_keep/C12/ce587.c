/*
 * Code for class CELL [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce587.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CELL}.item */
EIF_REFERENCE F38_619 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O602[Dtype(Current)-37]);
}


/* {CELL}.put */
void F38_620 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O602[Dtype(Current)-37]) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit587 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
