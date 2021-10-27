/*
 * Code for class reference REAL_64
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re208.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_64}.is_less */
EIF_BOOLEAN F832_5849 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	Result = F831_5819(Current, tr1);
	RTLE;
	return Result;
}

/* {REAL_64}.truncated_to_integer */
EIF_INTEGER_32 F832_5853 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F831_5830(Current);
}

/* {REAL_64}.floor_real_64 */
EIF_REAL_64 F832_5857 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_64) F831_5837(Current);
}

/* {REAL_64}.plus */
EIF_REAL_64 F832_5858 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	tr1 = F831_5840(Current, tr1);
	Result = *(EIF_REAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_64}.minus */
EIF_REAL_64 F832_5859 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	tr1 = F831_5841(Current, tr1);
	Result = *(EIF_REAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_64}.product */
EIF_REAL_64 F832_5860 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	tr1 = F831_5842(Current, tr1);
	Result = *(EIF_REAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_64}.quotient */
EIF_REAL_64 F832_5861 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	tr1 = F831_5843(Current, tr1);
	Result = *(EIF_REAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_64}.opposite */
EIF_REAL_64 F832_5864 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_REAL_64 *)F831_5846(Current);
}

/* {REAL_64}.out */
EIF_REFERENCE F832_5872 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F831_5847(Current);
}

void EIF_Minit208 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
