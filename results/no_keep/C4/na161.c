/*
 * Code for class NATURAL_16
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na161.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_16}.is_less */
EIF_BOOLEAN F713_4053 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
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
	tr1 = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	Result = F711_3997(Current, tr1);
	RTLE;
	return Result;
}

/* {NATURAL_16}.plus */
EIF_NATURAL_16 F713_4054 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = F711_4006(Current, tr1);
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_16}.integer_quotient */
EIF_NATURAL_16 F713_4059 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = F711_4012(Current, tr1);
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_16}.integer_remainder */
EIF_NATURAL_16 F713_4060 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = F711_4013(Current, tr1);
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_16}.as_natural_8 */
EIF_NATURAL_8 F713_4062 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) F711_4019(Current);
}

/* {NATURAL_16}.as_natural_32 */
EIF_NATURAL_32 F713_4064 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F711_4021(Current);
}

/* {NATURAL_16}.as_natural_64 */
EIF_NATURAL_64 F713_4065 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F711_4022(Current);
}

/* {NATURAL_16}.as_integer_32 */
EIF_INTEGER_32 F713_4068 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F711_4025(Current);
}

/* {NATURAL_16}.to_character_8 */
EIF_CHARACTER_8 F713_4072 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F711_4040(Current);
}

/* {NATURAL_16}.to_character_32 */
EIF_CHARACTER_32 F713_4073 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_32) F711_4041(Current);
}

void EIF_Minit161 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
