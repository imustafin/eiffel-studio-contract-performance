/*
 * Code for class CELL [CHARACTER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce625.h"

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
EIF_CHARACTER_32 F40_619 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
}


/* {CELL}.put */
void F40_620 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	
	
	*(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_CHARACTER_32) arg1;
}

void EIF_Minit625 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
