/*
 * Code for class SPECIAL_ITERATION_CURSOR [NATURAL_16]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sp340.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SPECIAL_ITERATION_CURSOR}.make */
void F740_5198 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make", 739, Current, 0, 1, 9940);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("t_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F532_3094(RTCW(arg1)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("target_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_valid", EX_POST);
		if ((nstcall = 0, F693_5165(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTHOOK(7);
		RTHOOK(8);
		RTCT("first_index_set", EX_POST);
		ti4_1 = ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(((EIF_INTEGER_32) 0L) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("last_index_set", EX_POST);
		ti4_1 = (nstcall = 1, F532_3094(RTCW(arg1)));
		if ((EIF_BOOLEAN)((nstcall = 0, F693_5157(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {SPECIAL_ITERATION_CURSOR}.first_index */
EIF_INTEGER_32 F740_5199 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

/* {SPECIAL_ITERATION_CURSOR}.new_cursor */
EIF_REFERENCE F740_5200 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("new_cursor", 739, Current, 0, 0, 9942);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,739,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3713,Y3713_gen_type,Dftype(Current),624);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 739, _OBJSIZ_1_0_0_2_0_0_0_0_);
	}
	(nstcall = -1, F740_5198(RTCW(Result), *(EIF_REFERENCE *)(Current)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SPECIAL_ITERATION_CURSOR}.area_first_index */
EIF_INTEGER_32 F740_5201 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

void EIF_Minit340 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
