/*
 * Code for class NATIVE_ARRAY [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na265.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATIVE_ARRAY}._invariant */
void F4_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 264, Current, 0, 0);
	RTIT("is_dotnet", Current);
	if ((nstcall = 0, F106_1814(Current))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit265 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
