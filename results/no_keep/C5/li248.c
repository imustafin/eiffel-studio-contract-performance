/*
 * Code for class LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li248.h"

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
EIF_BOOLEAN F534_2680 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		Result = '\0';
		tb1 = '\0';
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1837[Dtype(RTCW(arg1))-470])(arg1);
		if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1837[dtype-470])(Current) == tb2)) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(arg1) + O1839[Dtype(arg1)-280]);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O1839[dtype-280]) == tb2);
		}
		if (tb1) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1865[Dtype(RTCW(arg1))-470])(arg1);
			Result = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1865[dtype-470])(Current) == ti4_1);
		}
		tb1 = '\0';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1837[dtype-470])(Current);
		}
		if (tb1) {
			tb1 = '\0';
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1908[dtype-557])(Current);
			loc1 = tr1;
			if ((EIF_TRUE)) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1908[Dtype(RTCW(arg1))-557])(arg1);
				loc2 = tr1;
				tb1 = (EIF_TRUE);
			}
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R1847[dtype-557])(Current);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R1847[Dtype(RTCW(arg1))-557])(arg1);
				for (;;) {
					tb1 = '\01';
					if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1858[dtype-444])(Current)) {
						tb1 = (EIF_BOOLEAN) !Result;
					}
					if (tb1) break;
					if (*(EIF_BOOLEAN *)(Current + O1839[dtype-280])) {
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1891[dtype-557])(Current);
						tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1891[Dtype(RTCW(arg1))-557])(arg1);
						Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
					} else {
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1891[dtype-557])(Current);
						tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1891[Dtype(RTCW(arg1))-557])(arg1);
						Result = (EIF_BOOLEAN) RTCEQ(tr1, tr2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R1860[dtype-444])(Current);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R1860[Dtype(RTCW(arg1))-444])(arg1);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1910[dtype-557])(Current, loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1910[Dtype(RTCW(arg1))-557])(arg1, loc2);
			} else {
			}
		} else {
			tb2 = '\0';
			tb3 = '\0';
			if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1837[dtype-470])(Current)) {
				tb4 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1837[Dtype(RTCW(arg1))-470])(arg1);
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
EIF_BOOLEAN F534_2681 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1854[dtype-444])(Current);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1865[dtype-470])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

void EIF_Minit248 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
