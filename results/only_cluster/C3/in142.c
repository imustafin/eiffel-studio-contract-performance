/*
 * Code for class INTEGER_64_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in142.h"
#include <math.h>
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_64_REF}.item */
EIF_INTEGER_64 F693_3430 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
}


/* {INTEGER_64_REF}.hash_code */
EIF_INTEGER_32 F693_3431 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code", 692, Current, 0, 0, 9401);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = eif_bit_and(ti8_1,(EIF_INTEGER_64) ((EIF_INTEGER_32) 2147483647L));
	ti4_1 = (EIF_INTEGER_32) ti8_2;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.sign */
EIF_INTEGER_32 F693_3432 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("sign", 692, Current, 0, 0, 9402);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) > (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) < (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("three_way", EX_POST);
		tr1 = (nstcall = 0, F693_3434(Current));
		tr2 = RTCCL(tr1);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, F124_1462(Current, tr2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.one */
EIF_REFERENCE F693_3433 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("one", 692, Current, 0, 0, 9403);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F693_3440(RTCW(Result), (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.zero */
EIF_REFERENCE F693_3434 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("zero", 692, Current, 0, 0, 9404);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F693_3440(RTCW(Result), (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.ascii_char */
EIF_CHARACTER_8 F693_3435 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("ascii_char", 692, Current, 0, 0, 9405);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character_code", EX_PRE);
		RTTE((nstcall = 0, F693_3445(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tc1 = (EIF_CHARACTER_8) ti8_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.is_less */
EIF_BOOLEAN F693_3438 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_less", 692, Current, 0, 1, 9408);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti8_1 < ti8_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1212[Dtype(RTCW(arg1))-118])(arg1, tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.is_equal */
EIF_BOOLEAN F693_3439 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_equal", 692, Current, 0, 1, 9409);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti8_1 == ti8_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, F1_9(Current, tr1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		tr1 = RTCCL(arg1);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1212[Dtype(Current)-118])(Current, tr1));
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1212[Dtype(RTCW(arg1))-118])(arg1, tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.set_item */
void F693_3440 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_item", 692, Current, 0, 1, 9410);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) = (EIF_INTEGER_64) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {INTEGER_64_REF}.divisible */
EIF_BOOLEAN F693_3441 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("divisible", 692, Current, 0, 1, 9411);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value", EX_POST);
		ti8_1 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
		if ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.exponentiable */
EIF_BOOLEAN F693_3442 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("exponentiable", 692, Current, 3, 1, 9412);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(695, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		Result = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_0_0_0_0_);
		if (!(EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			Result = (EIF_BOOLEAN)(*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
		}
	} else {
		RTHOOK(4);
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(716, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			Result = '\01';
			tr4_1 = *(EIF_REAL_32 *)(loc2+ _R32OFF_0_0_0_0_0_);
			if (!((EIF_BOOLEAN) eif_is_greater_equal_real_32 (tr4_1, (EIF_REAL_32) (EIF_REAL_64) 0.0))) {
				Result = (EIF_BOOLEAN)(*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
			}
		} else {
			RTHOOK(6);
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(719, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				RTHOOK(7);
				Result = '\01';
				tr8_1 = *(EIF_REAL_64 *)(loc3+ _R64OFF_0_0_0_0_0_0_0_0_);
				if (!(EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
					Result = (EIF_BOOLEAN)(*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("safe_values", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\0';
		tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 0L);
		tb4 = (nstcall = 1, F1_6(arg1, tr1));
		if (tb4) {
			tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
		}
		if (!(tb3)) {
			tb3 = '\0';
			tr1 = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) 0.0;
			tb4 = (nstcall = 1, F1_6(arg1, tr1));
			if (tb4) {
				tb3 = (EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) > (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
			}
			tb2 = tb3;
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.is_hashable */
EIF_BOOLEAN F693_3443 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_hashable", 692, Current, 0, 0, 9413);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.is_valid_character_code */
EIF_BOOLEAN F693_3444 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_valid_character_code", 692, Current, 0, 0, 9414);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F693_3445(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.is_valid_character_8_code */
EIF_BOOLEAN F693_3445 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_valid_character_8_code", 692, Current, 0, 0, 9415);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= ti8_1)) {
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 255L);
		Result = (EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) <= ti8_1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("in_bounds", EX_POST);
		tb1 = '\0';
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= ti8_1)) {
			ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 255L);
			tb1 = (EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) <= ti8_1);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.is_valid_character_32_code */
EIF_BOOLEAN F693_3446 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_valid_character_32_code", 692, Current, 0, 0, 9416);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
		tu8_1 = (EIF_NATURAL_64) ti8_1;
		tu8_2 = (EIF_NATURAL_64) ((EIF_NATURAL_32) 4294967295U);
		Result = (EIF_BOOLEAN) (tu8_1 <= tu8_2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("in_bounds", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
			tu8_1 = (EIF_NATURAL_64) ti8_1;
			tu8_2 = (EIF_NATURAL_64) ((EIF_NATURAL_32) 0U);
			tb2 = (EIF_BOOLEAN) (tu8_1 >= tu8_2);
		}
		if (tb2) {
			ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
			tu8_1 = (EIF_NATURAL_64) ti8_1;
			tu8_2 = (EIF_NATURAL_64) ((EIF_NATURAL_32) 4294967295U);
			tb1 = (EIF_BOOLEAN) (tu8_1 <= tu8_2);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.abs */
EIF_INTEGER_64 F693_3447 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("abs", 692, Current, 0, 0, 9417);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(RTCV((nstcall = 0, F693_3495(Current)))+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_INTEGER_64) ti8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_absolute_value", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_)) || (EIF_BOOLEAN)(Result == (EIF_INTEGER_64) -*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.plus */
EIF_REFERENCE F693_3448 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("plus", 692, Current, 0, 1, 9418);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	(nstcall = 1, F693_3440(RTCW(Result), (EIF_INTEGER_64) (ti8_1 + ti8_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("commutative", EX_POST);
		tr1 = RTCCL(Current);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2517[Dtype(RTCW(arg1))-692])(arg1, tr1));
		if (RTEQ(Result, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.minus */
EIF_REFERENCE F693_3449 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("minus", 692, Current, 0, 1, 9419);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	(nstcall = 1, F693_3440(RTCW(Result), (EIF_INTEGER_64) (ti8_1 - ti8_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.product */
EIF_REFERENCE F693_3450 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("product", 692, Current, 0, 1, 9420);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	(nstcall = 1, F693_3440(RTCW(Result), (EIF_INTEGER_64) (ti8_1 * ti8_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.quotient */
EIF_REAL_64 F693_3451 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("quotient", 692, Current, 0, 1, 9421);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F693_3441(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (ti8_1) /  (EIF_REAL_64) (ti8_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.identity */
EIF_REFERENCE F693_3452 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("identity", 692, Current, 0, 0, 9422);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F693_3440(RTCW(Result), (EIF_INTEGER_64) *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.opposite */
EIF_REFERENCE F693_3453 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("opposite", 692, Current, 0, 0, 9423);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F693_3440(RTCW(Result), (EIF_INTEGER_64) -*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.integer_quotient */
EIF_REFERENCE F693_3454 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("integer_quotient", 692, Current, 0, 1, 9424);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F693_3441(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(4);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	(nstcall = 1, F693_3440(RTCW(Result), (EIF_INTEGER_64) (ti8_1 / ti8_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.integer_remainder */
EIF_REFERENCE F693_3455 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("integer_remainder", 692, Current, 0, 1, 9425);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F693_3441(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(4);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	(nstcall = 1, F693_3440(RTCW(Result), (EIF_INTEGER_64) (ti8_1 % ti8_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.power */
EIF_REAL_64 F693_3456 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("power", 692, Current, 0, 1, 9426);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (ti8_1), (EIF_REAL_64) (arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.make_from_reference */
void F693_3457 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_reference", 692, Current, 0, 1, 9427);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	(nstcall = 0, F693_3440(Current, ti8_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		ti8_1 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) == ti8_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {INTEGER_64_REF}.to_reference */
EIF_REFERENCE F693_3458 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("to_reference", 692, Current, 0, 0, 9428);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(692, 0x01).id, 692, _OBJSIZ_0_0_0_0_0_0_1_0_);
	RTHOOK(2);
	(nstcall = 1, F693_3440(RTCW(Result), *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_reference_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_boolean */
EIF_BOOLEAN F693_3459 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_boolean", 692, Current, 0, 0, 9429);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.as_natural_8 */
EIF_NATURAL_8 F693_3460 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_8", 692, Current, 0, 0, 9430);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu1_1 = (EIF_NATURAL_8) ti8_1;
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.as_natural_16 */
EIF_NATURAL_16 F693_3461 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_16", 692, Current, 0, 0, 9431);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu2_1 = (EIF_NATURAL_16) ti8_1;
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.as_natural_32 */
EIF_NATURAL_32 F693_3462 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_32", 692, Current, 0, 0, 9432);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu4_1 = (EIF_NATURAL_32) ti8_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.as_natural_64 */
EIF_NATURAL_64 F693_3463 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_64", 692, Current, 0, 0, 9433);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tu8_1 = (EIF_NATURAL_64) ti8_1;
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.as_integer_8 */
EIF_INTEGER_8 F693_3464 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_8", 692, Current, 0, 0, 9434);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti1_1 = (EIF_INTEGER_8) ti8_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.as_integer_16 */
EIF_INTEGER_16 F693_3465 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_16", 692, Current, 0, 0, 9435);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti2_1 = (EIF_INTEGER_16) ti8_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.as_integer_32 */
EIF_INTEGER_32 F693_3466 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_32", 692, Current, 0, 0, 9436);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.as_integer_64 */
EIF_INTEGER_64 F693_3467 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_64", 692, Current, 0, 0, 9437);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = (EIF_INTEGER_64) ti8_1;
	Result = (EIF_INTEGER_64) ti8_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_natural_8 */
EIF_NATURAL_8 F693_3468 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_8", 692, Current, 0, 0, 9438);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_NATURAL_8) 255U);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) <= ti8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R2743[dtype-692])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_natural_16 */
EIF_NATURAL_16 F693_3469 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_16", 692, Current, 0, 0, 9439);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_NATURAL_16) 65535U);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) <= ti8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_16, (EIF_REFERENCE)) R2744[dtype-692])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_natural_32 */
EIF_NATURAL_32 F693_3470 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_32", 692, Current, 0, 0, 9440);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_NATURAL_32) 4294967295U);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) <= ti8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R2745[dtype-692])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_natural_64 */
EIF_NATURAL_64 F693_3471 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_64", 692, Current, 0, 0, 9441);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R2746[dtype-692])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_integer_8 */
EIF_INTEGER_8 F693_3472 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_8", 692, Current, 0, 0, 9442);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_small", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_8) -128L);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= ti8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_8) 127L);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) <= ti8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_8, (EIF_REFERENCE)) R2747[dtype-692])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_integer_16 */
EIF_INTEGER_16 F693_3473 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_16", 692, Current, 0, 0, 9443);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_small", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_16) -32768L);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= ti8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_16) 32767L);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) <= ti8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_16, (EIF_REFERENCE)) R2748[dtype-692])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_integer */
EIF_INTEGER_32 F693_3474 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer", 692, Current, 0, 0, 9444);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_small", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0x80000000L);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= ti8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 2147483647L);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) <= ti8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2749[dtype-692])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_integer_32 */
EIF_INTEGER_32 F693_3475 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_32", 692, Current, 0, 0, 9445);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_small", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0x80000000L);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= ti8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 2147483647L);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) <= ti8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2749[dtype-692])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_integer_64 */
EIF_INTEGER_64 F693_3476 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_64", 692, Current, 0, 0, 9446);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_real */
EIF_REAL_32 F693_3477 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_real", 692, Current, 0, 0, 9447);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tr4_1 = (EIF_REAL_32) (ti8_1);
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_double */
EIF_REAL_64 F693_3478 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_double", 692, Current, 0, 0, 9448);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tr8_1 = (EIF_REAL_64) (ti8_1);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_hex_string */
EIF_REFERENCE F693_3479 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc2 = (EIF_INTEGER_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("to_hex_string", 692, Current, 2, 0, 9449);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 64L) / ((EIF_INTEGER_32) 4L));
	RTHOOK(2);
	Result = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F776_4790(RTCW(Result), (EIF_CHARACTER_8) '0', loc1));
	RTHOOK(3);
	loc2 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		ti8_1 = eif_bit_and(loc2,(EIF_INTEGER_64) ((EIF_INTEGER_32) 15L));
		tr1 = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)tr1 = ti8_1;
		tc1 = (nstcall = 1, F693_3480(RTCW(tr1)));
		(nstcall = 1, F778_4887(RTCW(Result), tc1, loc1));
		RTHOOK(6);
		ti8_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 4L));
		loc2 = (EIF_INTEGER_64) ti8_1;
		RTHOOK(7);
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (((EIF_INTEGER_32) 64L) / ((EIF_INTEGER_32) 4L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_hex_character */
EIF_CHARACTER_8 F693_3480 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("to_hex_character", 692, Current, 1, 0, 9450);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 0L) <= *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_)) && (EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 15L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 9L))) {
		RTHOOK(4);
		tc1 = (EIF_CHARACTER_8) '0';
	} else {
		RTHOOK(5);
		tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) 'A') - ((EIF_INTEGER_32) 10L));
		tc1 = tc2;
	}
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) + loc1);
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("valid_character", EX_POST);
		tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
		tb1 = (nstcall = 1, F776_4823(tr1, Result));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_character */
EIF_CHARACTER_8 F693_3481 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character", 692, Current, 0, 0, 9451);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		RTTE((nstcall = 0, F693_3445(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tc1 = (EIF_CHARACTER_8) ti8_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_character_8 */
EIF_CHARACTER_8 F693_3482 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_8", 692, Current, 0, 0, 9452);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		RTTE((nstcall = 0, F693_3445(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tc1 = (EIF_CHARACTER_8) ti8_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.to_character_32 */
EIF_CHARACTER_32 F693_3483 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_32", 692, Current, 0, 0, 9453);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		RTTE((nstcall = 0, F693_3446(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	tw1 = (EIF_CHARACTER_32) ti8_1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.bit_and */
EIF_REFERENCE F693_3484 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("bit_and", 692, Current, 0, 1, 9454);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = eif_bit_and(ti8_1,ti8_2);
	(nstcall = 1, F693_3440(RTCW(Result), ti8_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_and_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.bit_or */
EIF_REFERENCE F693_3485 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("bit_or", 692, Current, 0, 1, 9455);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = eif_bit_or(ti8_1,ti8_2);
	(nstcall = 1, F693_3440(RTCW(Result), ti8_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_or_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.bit_xor */
EIF_REFERENCE F693_3486 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("bit_xor", 692, Current, 0, 1, 9456);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = eif_bit_xor(ti8_1,ti8_2);
	(nstcall = 1, F693_3440(RTCW(Result), ti8_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_xor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.bit_not */
EIF_REFERENCE F693_3487 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("bit_not", 692, Current, 0, 0, 9457);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = eif_bit_not(ti8_1);
	(nstcall = 1, F693_3440(RTCW(Result), ti8_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("bit_not_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.bit_shift */
EIF_INTEGER_64 F693_3488 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("bit_shift", 692, Current, 0, 1, 9458);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_less_or_equal_to_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_greater_or_equal_to_minus_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) -64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2773[dtype-692])(Current, arg1));
		ti8_1 = *(EIF_INTEGER_64 *)(RTCW(tr1)+ _I64OFF_0_0_0_0_0_0_0_);
		Result = (EIF_INTEGER_64) ti8_1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2772[dtype-692])(Current, (EIF_INTEGER_32) -arg1));
		ti8_1 = *(EIF_INTEGER_64 *)(RTCW(tr1)+ _I64OFF_0_0_0_0_0_0_0_);
		Result = (EIF_INTEGER_64) ti8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.bit_shift_left */
EIF_REFERENCE F693_3489 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("bit_shift_left", 692, Current, 0, 1, 9459);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_or_equal_to_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(4);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = eif_bit_shift_left(ti8_1,arg1);
	(nstcall = 1, F693_3440(RTCW(Result), ti8_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("bit_shift_left_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.bit_shift_right */
EIF_REFERENCE F693_3490 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("bit_shift_right", 692, Current, 0, 1, 9460);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_or_equal_to_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(4);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = eif_bit_shift_right(ti8_1,arg1);
	(nstcall = 1, F693_3440(RTCW(Result), ti8_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("bit_shift_right_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.bit_test */
EIF_BOOLEAN F693_3491 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("bit_test", 692, Current, 0, 1, 9461);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
	ti8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ti8_3 = eif_bit_shift_left(ti8_2,arg1);
	ti8_2 = eif_bit_and(ti8_1,ti8_3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti8_2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.set_bit */
EIF_INTEGER_64 F693_3492 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_bit", 692, Current, 0, 2, 9462);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (arg1) {
		RTHOOK(4);
		ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
		ti8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
		ti8_3 = eif_bit_shift_left(ti8_2,arg2);
		ti8_2 = eif_bit_or(ti8_1,ti8_3);
		Result = (EIF_INTEGER_64) ti8_2;
	} else {
		RTHOOK(5);
		ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
		ti8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
		ti8_3 = eif_bit_shift_left(ti8_2,arg2);
		ti8_2 = eif_bit_not(ti8_3);
		ti8_2 = eif_bit_and(ti8_1,ti8_2);
		Result = (EIF_INTEGER_64) ti8_2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.set_bit_with_mask */
EIF_INTEGER_64 F693_3493 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_64 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_bit_with_mask", 692, Current, 0, 2, 9463);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
		ti8_2 = eif_bit_or(ti8_1,arg2);
		Result = (EIF_INTEGER_64) ti8_2;
	} else {
		RTHOOK(3);
		ti8_1 = *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_);
		ti8_2 = eif_bit_not(arg2);
		ti8_2 = eif_bit_and(ti8_1,ti8_2);
		Result = (EIF_INTEGER_64) ti8_2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.out */
EIF_REFERENCE F693_3494 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("out", 692, Current, 0, 0, 9464);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F776_4789(RTCW(Result), ((EIF_INTEGER_32) 20L)));
	RTHOOK(2);
	(nstcall = 1, F778_4907(RTCW(Result), *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}.abs_ref */
EIF_REFERENCE F693_3495 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("abs_ref", 692, Current, 0, 0, 9465);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) RTCCL(Current);
	} else {
		RTHOOK(3);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2522[Dtype(Current)-692])(Current));
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_absolute_value", EX_POST);
		tb1 = '\01';
		if (!(RTEQ(Result, Current))) {
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2522[Dtype(Current)-692])(Current));
			tb1 = RTEQ(Result, tr1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_64_REF}._invariant */
void F693_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 141, Current, 0, 0);
	RTIT("sign_times_abs", Current);
	ti4_1 = (nstcall = 0, F693_3432(Current));
	ti8_1 = (EIF_INTEGER_64) ti4_1;
	if ((EIF_BOOLEAN)((EIF_INTEGER_64) (ti8_1 * (nstcall = 0, F693_3447(Current))) == *(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit142 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
