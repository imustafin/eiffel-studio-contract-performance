/*
 * Code for class reference INTEGER_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in153.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_8}.is_less */
EIF_BOOLEAN F703_3781 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
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
	tr1 = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	Result = F702_3722(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.plus */
EIF_INTEGER_8 F703_3782 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	tr1 = F702_3732(Current, tr1);
	Result = *(EIF_INTEGER_8 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.opposite */
EIF_INTEGER_8 F703_3787 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_8 *)F702_3737(Current);
}

/* {INTEGER_8}.integer_quotient */
EIF_INTEGER_8 F703_3788 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	tr1 = F702_3738(Current, tr1);
	Result = *(EIF_INTEGER_8 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.integer_remainder */
EIF_INTEGER_8 F703_3789 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	tr1 = F702_3739(Current, tr1);
	Result = *(EIF_INTEGER_8 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.as_natural_64 */
EIF_NATURAL_64 F703_3794 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F702_3748(Current);
}

/* {INTEGER_8}.as_integer_32 */
EIF_INTEGER_32 F703_3797 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F702_3751(Current);
}

/* {INTEGER_8}.to_character_8 */
EIF_CHARACTER_8 F703_3801 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F702_3767(Current);
}

void EIF_Minit153 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
