/*
 * Code for class NATURAL_64
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na155.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_64}.is_less */
EIF_BOOLEAN F707_3872 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
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
	tr1 = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	Result = F705_3817(Current, tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.plus */
EIF_NATURAL_64 F707_3873 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	tr1 = F705_3826(Current, tr1);
	Result = *(EIF_NATURAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.product */
EIF_NATURAL_64 F707_3875 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	tr1 = F705_3828(Current, tr1);
	Result = *(EIF_NATURAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.integer_quotient */
EIF_NATURAL_64 F707_3878 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	tr1 = F705_3832(Current, tr1);
	Result = *(EIF_NATURAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.integer_remainder */
EIF_NATURAL_64 F707_3879 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	tr1 = F705_3833(Current, tr1);
	Result = *(EIF_NATURAL_64 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_64}.as_natural_32 */
EIF_NATURAL_32 F707_3883 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F705_3840(Current);
}

/* {NATURAL_64}.as_integer_32 */
EIF_INTEGER_32 F707_3887 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F705_3844(Current);
}

/* {NATURAL_64}.to_character_8 */
EIF_CHARACTER_8 F707_3891 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F705_3859(Current);
}

/* {NATURAL_64}.bit_and */
EIF_NATURAL_64 F707_3893 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_NATURAL_64 *)tr1 = arg1;
	tr1 = F705_3861(Current, tr1);
	Result = *(EIF_NATURAL_64 *)(tr1);
	RTLE;
	return Result;
}

void EIF_Minit155 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
