/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ap124.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {APPLICATION}.make */
void F280_2078 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 200000000L);
	loc1 = RTLNS(eif_new_type(784, 0x01).id, 784, _OBJSIZ_0_0_0_1_0_0_0_1_);
	F785_5095(RTCW(loc1));
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 >= loc4)) break;
		F280_2080(Current);
		loc3++;
	}
	loc2 = RTLNS(eif_new_type(784, 0x01).id, 784, _OBJSIZ_0_0_0_1_0_0_0_1_);
	F785_5095(RTCW(loc2));
	tr8_1 = F785_5106(RTCW(loc2));
	tr8_2 = F785_5106(RTCW(loc1));
	tr1 = c_outr64((EIF_REAL_64) (tr8_1 - tr8_2));
	tr2 = RTMS_EX_H(" sec, ",6,1764795936);
	tr1 = F778_4902(RTCW(tr1), tr2);
	tr2 = c_outi(loc4);
	tr1 = F778_4902(RTCW(tr1), tr2);
	tr2 = RTMS_EX_H(" iters\012",7,835617546);
	tr1 = F778_4902(RTCW(tr1), tr2);
	F1_27(Current, tr1);
	RTLE;
}

/* {APPLICATION}.work */
void F280_2080 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_))++;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) > ((EIF_INTEGER_32) 200L))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -200L);
	}
	RTLE;
}

void EIF_Minit124 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
