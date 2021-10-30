/*
 * Code for class INFINITE [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in690.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INFINITE}.is_empty */
EIF_BOOLEAN F341_2118 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {INFINITE}.full */
EIF_BOOLEAN F341_2119 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {INFINITE}._invariant */
void F341_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 689, Current, 0, 0);
	RTLE;
	RTEE;
}

void EIF_Minit690 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
