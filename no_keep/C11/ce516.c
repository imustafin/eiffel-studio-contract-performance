/*
 * Code for class CELL [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce516.h"

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
EIF_INTEGER_32 F118_1933 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O1718[Dtype(Current)-116]);
}


/* {CELL}.put */
void F118_1934 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O1718[Dtype(Current)-116]) = (EIF_INTEGER_32) arg1;
}

void EIF_Minit516 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
