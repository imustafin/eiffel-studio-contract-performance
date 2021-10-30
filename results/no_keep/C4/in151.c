/*
 * Code for class INTEGER_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in151.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_8_REF}.hash_code */
EIF_INTEGER_32 F702_3715 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_INTEGER_32) ti1_1;
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.is_less */
EIF_BOOLEAN F702_3722 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	ti1_2 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti1_1 < ti1_2);
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.is_equal */
EIF_BOOLEAN F702_3723 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	ti1_2 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti1_1 == ti1_2);
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.set_item */
void F702_3724 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_) = (EIF_INTEGER_8) arg1;
}

/* {INTEGER_8_REF}.plus */
EIF_REFERENCE F702_3732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti1_1 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	F702_3724(RTCW(Result), (EIF_INTEGER_8) (*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_) + ti1_1));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.opposite */
EIF_REFERENCE F702_3737 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	F702_3724(RTCW(Result), (EIF_INTEGER_8) -*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.integer_quotient */
EIF_REFERENCE F702_3738 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti1_1 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	F702_3724(RTCW(Result), (EIF_INTEGER_8) (*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_) / ti1_1));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.integer_remainder */
EIF_REFERENCE F702_3739 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti1_1 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	F702_3724(RTCW(Result), (EIF_INTEGER_8) (*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_) % ti1_1));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.as_natural_64 */
EIF_NATURAL_64 F702_3748 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_NATURAL_64) ti1_1;
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.as_integer_32 */
EIF_INTEGER_32 F702_3751 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_INTEGER_32) ti1_1;
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.to_natural_64 */
EIF_NATURAL_64 F702_3756 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R2902[Dtype(Current)-701])(Current);
}

/* {INTEGER_8_REF}.to_integer */
EIF_INTEGER_32 F702_3759 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2905[Dtype(Current)-701])(Current);
}

/* {INTEGER_8_REF}.to_character_8 */
EIF_CHARACTER_8 F702_3767 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_8) ti1_1;
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.out */
EIF_REFERENCE F702_3779 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F776_4789(RTCW(Result), ((EIF_INTEGER_32) 4L));
	F778_4905(RTCW(Result), *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit151 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
