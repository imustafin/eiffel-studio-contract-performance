/*
 * Code for class CELL [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce883.h"

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
EIF_BOOLEAN F119_1933 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O1718[Dtype(Current)-116]);
}


/* {CELL}.put */
void F119_1934 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O1718[Dtype(Current)-116]) = (EIF_BOOLEAN) arg1;
}

void EIF_Minit883 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
