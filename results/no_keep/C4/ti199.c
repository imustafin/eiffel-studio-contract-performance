/*
 * Code for class TIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti199.h"
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

/* {TIME}.make */
void F785_5093 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F48_704(Current, arg1);
	F48_705(Current, arg2);
	F48_706(Current, arg3);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	RTLE;
}

/* {TIME}.make_fine */
void F785_5094 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg3;
	F785_5093(Current, arg1, arg2, loc1);
	tr8_1 = (EIF_REAL_64) (loc1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) (arg3 - tr8_1);
	RTLE;
}

/* {TIME}.make_now */
void F785_5095 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(4, 0x01).id, 4, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F5_169(RTCW(loc1));
	ti4_1 = F5_176(RTCW(loc1));
	ti4_2 = F5_177(RTCW(loc1));
	ti4_3 = F5_178(RTCW(loc1));
	F785_5093(Current, ti4_1, ti4_2, ti4_3);
	ti4_1 = F5_179(RTCW(loc1));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L)));
	RTLE;
}

/* {TIME}.is_less */
EIF_BOOLEAN F785_5103 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	Result = '\01';
	if (!((EIF_BOOLEAN) (loc1 < loc2))) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 == loc2)) {
			tb2 = '\0';
			tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
			if ((EIF_BOOLEAN) eif_is_less_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_), tr8_1)) {
				tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
				tb2 = (EIF_BOOLEAN) eif_is_greater_real_64 ((EIF_REAL_64) (tr8_1 - *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_)), (EIF_REAL_64) 1.0e-10);
			}
			tb1 = tb2;
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {TIME}.fine_seconds */
EIF_REAL_64 F785_5106 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F48_695(Current);
	ti4_2 = F48_696(Current);
	Result = (EIF_REAL_64) (((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 3600L)) + (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 60L)))));
	tr8_1 = F48_700(Current);
	Result = (EIF_REAL_64) (EIF_REAL_64) (Result + tr8_1);
	RTLE;
	return Result;
}

/* {TIME}.out */
EIF_REFERENCE F785_5120 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = F46_685(Current);
	Result = F785_5121(Current, tr1);
	RTLE;
	return Result;
}

/* {TIME}.formatted_out */
EIF_REFERENCE F785_5121 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(780, 0x01).id, 780, _OBJSIZ_4_2_0_1_0_0_0_0_);
	F781_5016(RTCW(tr1), arg1);
	Result = F781_5029(RTCW(tr1), Current);
	RTLE;
	return Result;
}

void EIF_Minit199 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
