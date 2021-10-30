/*
 * Code for class GENERAL_SPECIAL_ITERATION_CURSOR [POINTER, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ge762.h"

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
EIF_BOOLEAN F240_2018 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O1798[dtype-228]) > *(EIF_INTEGER_32 *)(Current + O1800[dtype-228]));
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.forth */
void F240_2024 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O1798[dtype-228]))++;
}

void EIF_Minit762 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
