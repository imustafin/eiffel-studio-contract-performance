/*
 * Code for class INTEGER_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in146.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_32}.is_less */
EIF_BOOLEAN F698_3591 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	Result = F696_3532(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.plus */
EIF_INTEGER_32 F698_3592 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F696_3542(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.minus */
EIF_INTEGER_32 F698_3593 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F696_3543(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.product */
EIF_INTEGER_32 F698_3594 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F696_3544(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.quotient */
EIF_REAL_64 F698_3595 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	Result = F696_3545(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.opposite */
EIF_INTEGER_32 F698_3597 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F696_3547(Current);
}

/* {INTEGER_32}.integer_quotient */
EIF_INTEGER_32 F698_3598 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F696_3548(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.integer_remainder */
EIF_INTEGER_32 F698_3599 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F696_3549(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.power */
EIF_REAL_64 F698_3600 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	return (EIF_REAL_64) F696_3550(Current, arg1);
}

/* {INTEGER_32}.as_natural_32 */
EIF_NATURAL_32 F698_3603 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F696_3557(Current);
}

/* {INTEGER_32}.as_natural_64 */
EIF_NATURAL_64 F698_3604 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F696_3558(Current);
}

/* {INTEGER_32}.as_integer_64 */
EIF_INTEGER_64 F698_3608 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_64) F696_3562(Current);
}

/* {INTEGER_32}.to_double */
EIF_REAL_64 F698_3610 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_64) F696_3573(Current);
}

/* {INTEGER_32}.to_character_8 */
EIF_CHARACTER_8 F698_3611 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F696_3577(Current);
}

/* {INTEGER_32}.bit_and */
EIF_INTEGER_32 F698_3613 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F696_3579(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.bit_or */
EIF_INTEGER_32 F698_3614 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F696_3580(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.bit_xor */
EIF_INTEGER_32 F698_3615 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F696_3581(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.bit_not */
EIF_INTEGER_32 F698_3616 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F696_3582(Current);
}

/* {INTEGER_32}.bit_shift_left */
EIF_INTEGER_32 F698_3617 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F696_3584(Current, arg1);
}

/* {INTEGER_32}.bit_shift_right */
EIF_INTEGER_32 F698_3618 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F696_3585(Current, arg1);
}

void EIF_Minit146 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
