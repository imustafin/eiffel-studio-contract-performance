/*
 * Code for class BILINEAR [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi646.h"
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

/* {BILINEAR}.off */
EIF_BOOLEAN F389_2710 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("off", 388, Current, 0, 0, 3815);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(nstcall = 0, F496_3333(Current))) {
		Result = (nstcall = 0, F496_3332(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BILINEAR}.search */
void F389_2713 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("search", 388, Current, 0, 1, 3816);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((nstcall = 0, F496_3333(Current))) {
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, F296_2537(Current));
	}
	if (tb1) {
		RTHOOK(2);
		(nstcall = 0, F611_4106(Current));
	}
	RTHOOK(3);
	(nstcall = 0, F375_2604(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("object_found", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, F375_2608(Current))) {
			tb2 = *(EIF_BOOLEAN *)(Current + O2212[dtype-176]);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) eif_is_equal_real_64 (arg1, (nstcall = 0, F611_4078(Current)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("item_found", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, F375_2608(Current))) {
			tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O2212[dtype-176]);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) eif_is_equal_real_64 (arg1, (nstcall = 0, F611_4078(Current)));
		}
		if (tb1) {
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

/* {BILINEAR}._invariant */
void F389_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 645, Current, 0, 0);
	RTIT("not_both", Current);
	tb1 = '\0';
	if ((nstcall = 0, F496_3332(Current))) {
		tb1 = (nstcall = 0, F496_3333(Current));
	}
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("before_constraint", Current);
	tb1 = '\01';
	if ((nstcall = 0, F496_3333(Current))) {
		tb1 = (nstcall = 0, F466_3270(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit646 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
