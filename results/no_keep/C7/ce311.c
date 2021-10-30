/*
 * Code for class CELL [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce311.h"

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
EIF_INTEGER_32 F39_619 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O602[Dtype(Current)-37]);
}


/* {CELL}.put */
void F39_620 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O602[Dtype(Current)-37]) = (EIF_INTEGER_32) arg1;
}

void EIF_Minit311 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
