/*
 * Code for class LIST [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li516.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LIST}.is_equal */
EIF_BOOLEAN F540_2680 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		Result = '\0';
		tb1 = '\0';
		tb2 = F351_2122(RTCW(arg1));
		if ((EIF_BOOLEAN)(F351_2122(Current) == tb2)) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(arg1) + O1839[Dtype(arg1)-280]);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O1839[dtype-280]) == tb2);
		}
		if (tb1) {
			ti4_1 = F568_2795(RTCW(arg1));
			Result = (EIF_BOOLEAN)(F568_2795(Current) == ti4_1);
		}
		tb1 = '\0';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !F351_2122(Current);
		}
		if (tb1) {
			tb1 = '\0';
			tr1 = F568_2785(Current);
			loc1 = tr1;
			if ((EIF_TRUE)) {
				tr1 = F568_2785(RTCW(arg1));
				loc2 = tr1;
				tb1 = (EIF_TRUE);
			}
			if (tb1) {
				F568_2805(Current);
				F568_2805(RTCW(arg1));
				for (;;) {
					tb1 = '\01';
					if (!F540_2681(Current)) {
						tb1 = (EIF_BOOLEAN) !Result;
					}
					if (tb1) break;
					if (*(EIF_BOOLEAN *)(Current + O1839[dtype-280])) {
						tr8_1 = F568_2779(Current);
						tr8_2 = F568_2779(RTCW(arg1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, tr8_2);
					} else {
						tr8_1 = F568_2779(Current);
						tr8_2 = F568_2779(RTCW(arg1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, tr8_2);
					}
					F568_2807(Current);
					F568_2807(RTCW(arg1));
				}
				F568_2810(Current, loc1);
				F568_2810(RTCW(arg1), loc2);
			} else {
			}
		} else {
			tb2 = '\0';
			tb3 = '\0';
			if (F351_2122(Current)) {
				tb4 = F351_2122(RTCW(arg1));
				tb3 = tb4;
			}
			if (tb3) {
				tb3 = *(EIF_BOOLEAN *)(RTCW(arg1) + O1839[Dtype(arg1)-280]);
				tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O1839[dtype-280]) == tb3);
			}
			if (tb2) {
				RTLE;
				return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTLE;
	return Result;
}

/* {LIST}.after */
EIF_BOOLEAN F540_2681 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_2 = F568_2795(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

void EIF_Minit516 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
