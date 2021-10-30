/*
 * Code for class INTEGER_64
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in143.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_64}.is_less */
EIF_BOOLEAN F695_3496 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	tr1 = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	Result = F693_3438(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.plus */
EIF_INTEGER_64 F695_3497 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F693_3448(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.opposite */
EIF_INTEGER_64 F695_3502 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_64 *)F693_3453(Current);
}

/* {INTEGER_64}.integer_quotient */
EIF_INTEGER_64 F695_3503 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F693_3454(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.integer_remainder */
EIF_INTEGER_64 F695_3504 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F693_3455(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.as_natural_64 */
EIF_NATURAL_64 F695_3509 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F693_3463(Current);
}

/* {INTEGER_64}.as_integer_32 */
EIF_INTEGER_32 F695_3512 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F693_3466(Current);
}

/* {INTEGER_64}.to_character_8 */
EIF_CHARACTER_8 F695_3516 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F693_3482(Current);
}

/* {INTEGER_64}.bit_and */
EIF_INTEGER_64 F695_3518 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F693_3484(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

void EIF_Minit143 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
