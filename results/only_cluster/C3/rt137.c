/*
 * Code for class RT_DBG_VALUE_RECORD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt137.h"
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

/* {RT_DBG_VALUE_RECORD}.position */
EIF_INTEGER_32 F598_3137 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2476[Dtype(Current)-597]);
}


/* {RT_DBG_VALUE_RECORD}.type */
EIF_INTEGER_32 F598_3138 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2477[Dtype(Current)-597]);
}


/* {RT_DBG_VALUE_RECORD}.breakable_info */
EIF_REFERENCE F598_3139 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {RT_DBG_VALUE_RECORD}.debug_output */
EIF_REFERENCE F598_3141 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("debug_output", 597, Current, 0, 0, 7121);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F647_3273(RTCV((nstcall = 0, F1_5(Current)))));
	tr2 = RTMS_EX_H(": #",3,3809315);
	tr2 = (nstcall = 1, F777_4849(RTCW(tr1), tr2));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2476[dtype-597]);
	tr1 = c_outi(ti4_1);
	tr1 = (nstcall = 1, F777_4849(RTCW(tr2), tr1));
	tr2 = RTMS_EX_H(" = ",3,2112800);
	tr2 = (nstcall = 1, F777_4849(RTCW(tr1), tr2));
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2483[dtype-598])(Current));
	tr1 = (nstcall = 1, F777_4849(RTCW(tr2), tr1));
	tr2 = (nstcall = 1, F770_4551(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* {RT_DBG_VALUE_RECORD}.set_breakable_info */
void F598_3146 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("set_breakable_info", 597, Current, 0, 1, 7122);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

void EIF_Minit137 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
