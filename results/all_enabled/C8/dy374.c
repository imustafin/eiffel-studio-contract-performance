/*
 * Code for class DYNAMIC_CHAIN [NATURAL_16]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy374.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DYNAMIC_CHAIN}.extendible */
EIF_BOOLEAN F524_2666 (EIF_REFERENCE Current)
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
	
	RTEAA("extendible", 523, Current, 0, 0, 4847);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DYNAMIC_CHAIN}.prunable */
EIF_BOOLEAN F524_2667 (EIF_REFERENCE Current)
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
	
	RTEAA("prunable", 523, Current, 0, 0, 4848);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DYNAMIC_CHAIN}.prune */
void F524_2673 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune", 523, Current, 0, 1, 4849);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F564_2799(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F564_2811(Current, arg1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) !(nstcall = 0, F309_2103(Current))) {
		RTHOOK(4);
		(nstcall = 0, F564_2828(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DYNAMIC_CHAIN}.prune_all */
void F524_2676 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune_all", 523, Current, 0, 1, 4850);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F564_2799(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F564_2805(Current));
	RTHOOK(3);
	(nstcall = 0, F564_2811(Current, arg1));
	for (;;) {
		RTHOOK(4);
		if ((nstcall = 0, F309_2103(Current))) break;
		RTHOOK(5);
		(nstcall = 0, F564_2828(Current));
		RTHOOK(6);
		(nstcall = 0, F564_2811(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("no_more_occurrences", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F564_2786(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_exhausted", EX_POST);
		if ((nstcall = 0, F309_2103(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {DYNAMIC_CHAIN}.wipe_out */
void F524_2677 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wipe_out", 523, Current, 0, 0, 4851);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F564_2799(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F564_2805(Current));
	for (;;) {
		RTHOOK(3);
		if ((nstcall = 0, F347_2122(Current))) break;
		RTHOOK(4);
		(nstcall = 0, F564_2828(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, F347_2122(Current))) {
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

/* {DYNAMIC_CHAIN}.duplicate */
EIF_REFERENCE F524_2678 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("duplicate", 523, Current, 2, 1, 4852);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off_unless_after", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F512_2649(Current))) {
			tb1 = (nstcall = 0, F536_2681(Current));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_subchain", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F564_2835(Current));
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current + O1839[dtype-280])) {
		RTHOOK(5);
		(nstcall = 1, F285_2086(RTCW(Result)));
	}
	RTHOOK(6);
	loc1 = (nstcall = 0, F564_2785(Current));
	for (;;) {
		RTHOOK(7);
		tb1 = '\01';
		if (!((EIF_BOOLEAN)(loc2 == arg1))) {
			tb1 = (nstcall = 0, F309_2103(Current));
		}
		if (tb1) break;
		RTHOOK(8);
		tu2_1 = (nstcall = 0, F564_2779(Current));
		(nstcall = 1, F564_2815(RTCW(Result), tu2_1));
		RTHOOK(9);
		(nstcall = 0, F564_2807(Current));
		RTHOOK(10);
		loc2++;
	}
	RTHOOK(11);
	(nstcall = 0, F564_2810(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit374 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
