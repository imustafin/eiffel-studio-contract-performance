/*
 * Code for class PATH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pa140.h"
#include "eif_built_in.h"
#include "eif_path_name.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PATH}.hash_code */
EIF_INTEGER_32 F646_3234 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
		tr1 = *(EIF_REFERENCE *)(Current);
		Result = F770_4504(RTCW(tr1));
	} else {
		Result = F770_4505(RTCV(F646_3251(Current)));
	}
	RTLE;
	return Result;
}

/* {PATH}.same_as */
EIF_BOOLEAN F646_3243 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
	} else {
		if ((EIF_BOOLEAN)(arg1 == Current)) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
				RTLE;
				return (EIF_BOOLEAN) F646_3246(Current, arg1);
			} else {
				RTLE;
				return (EIF_BOOLEAN) F646_3247(Current, arg1);
			}
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {PATH}.is_less */
EIF_BOOLEAN F646_3244 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		Result = F776_4818(RTCW(tr1), tr2);
	} else {
		tr1 = F774_4688(RTCV(F646_3251(Current)));
		tr2 = F646_3251(RTCW(arg1));
		tr2 = F774_4688(RTCW(tr2));
		Result = F773_4653(RTCW(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.is_equal */
EIF_BOOLEAN F646_3245 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F646_3243(Current, arg1);
}

/* {PATH}.is_case_sensitive_equal */
EIF_BOOLEAN F646_3246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		Result = F776_4813(RTCW(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.is_case_insensitive_equal */
EIF_BOOLEAN F646_3247 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tr1 = F646_3251(Current);
		tr2 = F646_3251(RTCW(arg1));
		Result = F773_4649(RTCW(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.copy */
void F646_3248 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr1 = F1_14(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {PATH}.out */
EIF_REFERENCE F646_3249 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F646_3250(Current);
}

/* {PATH}.utf_8_name */
EIF_REFERENCE F646_3250 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_5 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(6, 0x00).id);
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = F646_3251(Current);
	Result = F7_207(RTCW(loc1), tr1);
	RTLE;
	return Result;
}

/* {PATH}.name */
EIF_REFERENCE F646_3251 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_5 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(6, 0x00).id);
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTLE;
		return (EIF_REFERENCE) loc2;
	} else {
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			Result = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr1 = F7_249(RTCW(loc1), *(EIF_REFERENCE *)(Current));
			F773_4627(RTCW(Result), tr1);
		} else {
			Result = RTLNS(eif_new_type(773, 0x01).id, 773, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr1 = F7_222(RTCW(loc1), *(EIF_REFERENCE *)(Current));
			F773_4627(RTCW(Result), tr1);
		}
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

void EIF_Minit140 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
