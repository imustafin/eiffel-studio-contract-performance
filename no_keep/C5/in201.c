/*
 * Code for class INTEGER_64
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in201.h"

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
EIF_BOOLEAN F827_5758 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	tr1 = RTLNS(eif_new_type(826, 0x00).id, 826, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	Result = F825_5700(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.plus */
EIF_INTEGER_64 F827_5759 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	tr1 = RTLNS(eif_new_type(826, 0x00).id, 826, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F825_5710(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.opposite */
EIF_INTEGER_64 F827_5764 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_64 *)F825_5715(Current);
}

/* {INTEGER_64}.integer_quotient */
EIF_INTEGER_64 F827_5765 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	tr1 = RTLNS(eif_new_type(826, 0x00).id, 826, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F825_5716(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.integer_remainder */
EIF_INTEGER_64 F827_5766 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	tr1 = RTLNS(eif_new_type(826, 0x00).id, 826, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F825_5717(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_64}.as_natural_64 */
EIF_NATURAL_64 F827_5771 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F825_5725(Current);
}

/* {INTEGER_64}.as_integer_32 */
EIF_INTEGER_32 F827_5774 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F825_5728(Current);
}

/* {INTEGER_64}.to_character_8 */
EIF_CHARACTER_8 F827_5778 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F825_5744(Current);
}

/* {INTEGER_64}.bit_and */
EIF_INTEGER_64 F827_5780 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	tr1 = RTLNS(eif_new_type(826, 0x00).id, 826, _OBJSIZ_0_0_0_0_0_0_1_0_);
	*(EIF_INTEGER_64 *)tr1 = arg1;
	tr1 = F825_5746(Current, tr1);
	Result = *(EIF_INTEGER_64 *)(tr1);
	RTLE;
	return Result;
}

void EIF_Minit201 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
