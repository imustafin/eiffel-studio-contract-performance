/*
 * Code for class GENERAL_SPECIAL_ITERATION_CURSOR [INTEGER_32, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ge584.h"

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
EIF_BOOLEAN F697_5163 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3796[dtype-691]) > *(EIF_INTEGER_32 *)(Current + O3798[dtype-691]));
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.forth */
void F697_5169 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O3796[dtype-691]))++;
}

void EIF_Minit584 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
