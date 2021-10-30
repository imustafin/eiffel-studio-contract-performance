/*
 * Code for class reference INTEGER_16
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in150.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_16}.is_less */
EIF_BOOLEAN F700_3686 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
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
	tr1 = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	Result = F699_3627(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.plus */
EIF_INTEGER_16 F700_3687 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F699_3637(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.opposite */
EIF_INTEGER_16 F700_3692 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_16 *)F699_3642(Current);
}

/* {INTEGER_16}.integer_quotient */
EIF_INTEGER_16 F700_3693 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F699_3643(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.integer_remainder */
EIF_INTEGER_16 F700_3694 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F699_3644(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.as_natural_64 */
EIF_NATURAL_64 F700_3699 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F699_3653(Current);
}

/* {INTEGER_16}.as_integer_32 */
EIF_INTEGER_32 F700_3702 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F699_3656(Current);
}

/* {INTEGER_16}.to_character_8 */
EIF_CHARACTER_8 F700_3706 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F699_3672(Current);
}

void EIF_Minit150 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
