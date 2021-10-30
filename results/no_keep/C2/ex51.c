/*
 * Code for class EXCEPTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex51.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTION}.raise */
void F69_983 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOSCF(956,F67_956, (Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R543[Dtype(RTCW(tr1))-34])(tr1, Current);
	RTLE;
}

/* {EXCEPTION}.trace */
EIF_REFERENCE F69_989 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_5 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(6, 0x00).id);
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = F7_220(RTCW(loc1), loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EXCEPTION}.code */
EIF_INTEGER_32 F69_990 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EXCEPTION}.original */
EIF_REFERENCE F69_991 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == Current) || (EIF_BOOLEAN)(loc1 == NULL))) {
		RTLE;
		return (EIF_REFERENCE) Current;
	} else {
		loc2 = Current;
		loc2 = RTRV(eif_new_type(90, 0x01),loc2);
		loc3 = Current;
		loc3 = RTRV(eif_new_type(79, 0x01),loc3);
		if ((EIF_BOOLEAN) ((EIF_TEST(loc2)) || (EIF_TEST(loc3)))) {
			tr1 = F69_991(RTCW(loc1));
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			RTLE;
			return (EIF_REFERENCE) Current;
		}
	}/* NOTREACHED */
	
}

/* {EXCEPTION}.set_description */
void F69_998 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	struct eif_ex_5 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(6, 0x00).id);
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc3 = RTLNSMART(eif_new_type(110, 0).id);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3388[Dtype(RTCW(arg1))-773])(arg1);
		F111_1201(RTCW(loc3), ti4_1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,38,697,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc2 = RTLNS(typres0.id, 38, _OBJSIZ_0_0_0_1_0_0_0_0_);
		}
		F39_620(RTCW(loc2), ((EIF_INTEGER_32) 0L));
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
		F7_213(RTCW(loc1), arg1, tr1, ((EIF_INTEGER_32) 0L), loc2);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2) + O602[Dtype(loc2)-37]);
		F111_1227(RTCW(loc3), ti4_1);
		RTAR(Current, loc3);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc3;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EXCEPTION}.is_ignored */
EIF_BOOLEAN F69_1001 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOSCF(956,F67_956, (Current));
	tr2 = F1_5(Current);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R549[Dtype(RTCW(tr1))-34])(tr1, tr2);
	RTLE;
	return Result;
}

/* {EXCEPTION}.out */
EIF_REFERENCE F69_1003 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = F647_3273(RTCV(F1_5(Current)));
	Result = F770_4551(RTCW(tr1));
	loc1 = F69_989(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F778_4914(RTCW(Result), (EIF_CHARACTER_8) '\012');
		tr1 = F770_4551(RTCW(loc1));
		F778_4903(RTCW(Result), tr1);
	}
	RTLE;
	return Result;
}

/* {EXCEPTION}.set_throwing_exception */
void F69_1005 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.set_recipient_name */
void F69_1006 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.set_type_name */
void F69_1010 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.set_exception_trace */
void F69_1012 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
}

void EIF_Minit51 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
