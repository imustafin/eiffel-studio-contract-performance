/*
 * Code for class GENERAL_SPECIAL_ITERATION_CURSOR [NATURAL_32, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ge546.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.after */
EIF_BOOLEAN F696_5163 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3796[dtype-691]) > *(EIF_INTEGER_32 *)(Current + O3798[dtype-691]));
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.forth */
void F696_5169 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O3796[dtype-691]))++;
}

void EIF_Minit546 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
