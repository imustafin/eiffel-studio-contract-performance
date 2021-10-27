/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ap978.h"
#include "eif_helpers.h"
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
void F176_7486 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("make", 175, Current, 4, 0, 13751);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100000000L);
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(904, 0x01).id, 904, _OBJSIZ_0_0_0_1_0_0_0_1_);
	(nstcall = -1, F905_7629(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc3 >= loc4)) break;
		RTHOOK(5);
		(nstcall = 0, F176_7488(Current));
		RTHOOK(6);
		loc3++;
	}
	RTHOOK(7);
	tr1 = RTLNS(eif_new_type(904, 0x01).id, 904, _OBJSIZ_0_0_0_1_0_0_0_1_);
	(nstcall = -1, F905_7629(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr8_1 = (nstcall = 1, F905_7640(RTCW(loc2)));
	tr8_2 = (nstcall = 1, F905_7640(RTCW(loc1)));
	tr1 = c_outr64((EIF_REAL_64) (tr8_1 - tr8_2));
	tr2 = RTMS_EX_H(" sec, ",6,1764795936);
	tr2 = (nstcall = 1, F893_6733(RTCW(tr1), tr2));
	tr1 = c_outi(loc4);
	tr1 = (nstcall = 1, F893_6733(RTCW(tr2), tr1));
	tr2 = RTMS_EX_H(" iters\012",7,835617546);
	tr2 = (nstcall = 1, F893_6733(RTCW(tr1), tr2));
	(nstcall = 0, F1_27(Current, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {APPLICATION}.x */
EIF_INTEGER_32 F176_7487 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
}


/* {APPLICATION}.work */
void F176_7488 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("work", 175, Current, 0, 0, 13753);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("x.abs <= 200", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
		ti4_2 = eif_abs_int32 (ti4_1);
		RTTE((EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 200L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_))++;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 200L))) {
		RTHOOK(4);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -200L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("x.abs <= 200", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
		ti4_2 = eif_abs_int32 (ti4_1);
		if ((EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 200L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

void EIF_Minit978 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
