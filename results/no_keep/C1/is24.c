/*
 * Code for class ISE_EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is24.h"
#include "eif_built_in.h"
#include "eif_except.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_EXCEPTION_MANAGER}.last_exception */
EIF_REFERENCE F36_559 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOSCF(577,F36_577, (Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.raise */
void F36_560 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTGC;
	tb1 = F69_1001(RTCW(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F36_559(Current);
			F69_1005(RTCW(arg1), tr1);
		}
		F36_571(Current, arg1);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F111_1219(loc3);
		} else {
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R933[Dtype(RTCW(arg1))-68])(arg1);
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F36_566 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOSCF(573,F36_573, (Current));
	ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (arg1);
	Result = F578_2866(RTCW(tr1), ti4_1);
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.type_of_code */
EIF_REFERENCE F36_568 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTLNTY2(eif_new_type(91, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			tr1 = RTLNTY2(eif_new_type(82, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 3L:
			tr1 = RTLNTY2(eif_new_type(106, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			tr1 = RTLNTY2(eif_new_type(105, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			tr1 = RTLNTY2(eif_new_type(72, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			tr1 = RTLNTY2(eif_new_type(104, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			tr1 = RTLNTY2(eif_new_type(103, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			tr1 = RTLNTY2(eif_new_type(90, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			tr1 = RTLNTY2(eif_new_type(89, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			tr1 = RTLNTY2(eif_new_type(102, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			tr1 = RTLNTY2(eif_new_type(101, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			tr1 = RTLNTY2(eif_new_type(74, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			tr1 = RTLNTY2(eif_new_type(78, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 14L:
			tr1 = RTLNTY2(eif_new_type(99, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			tr1 = RTLNTY2(eif_new_type(82, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 16L:
			tr1 = RTLNTY2(eif_new_type(98, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			tr1 = RTLNTY2(eif_new_type(94, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			tr1 = RTLNTY2(eif_new_type(83, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			tr1 = RTLNTY2(eif_new_type(92, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			tr1 = RTLNTY2(eif_new_type(97, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			tr1 = RTLNTY2(eif_new_type(87, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 22L:
			tr1 = RTLNTY2(eif_new_type(76, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			tr1 = RTLNTY2(eif_new_type(86, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			tr1 = RTLNTY2(eif_new_type(69, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			tr1 = RTLNTY2(eif_new_type(78, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 26L:
			tr1 = RTLNTY2(eif_new_type(95, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			tr1 = RTLNTY2(eif_new_type(87, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 28L:
			tr1 = RTLNTY2(eif_new_type(75, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			tr1 = RTLNTY2(eif_new_type(103, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			tr1 = RTLNTY2(eif_new_type(79, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			tr1 = RTLNTY2(eif_new_type(85, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F36_569 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	switch (arg1) {
		case 1L:
			Result = RTLNS(eif_new_type(91, 0x01).id, 91, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 2L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(578,F36_578, (Current))));
			F83_1053(RTCW(loc3), ((EIF_INTEGER_32) 2L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 3L:
			Result = RTLNS(eif_new_type(106, 0x01).id, 106, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 4L:
			Result = RTLNS(eif_new_type(105, 0x01).id, 105, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 5L:
			Result = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 6L:
			Result = RTLNS(eif_new_type(104, 0x01).id, 104, _OBJSIZ_5_2_0_1_0_0_0_0_);
			break;
		case 7L:
			Result = RTLNS(eif_new_type(103, 0x01).id, 103, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 8L:
			Result = RTLNS(eif_new_type(90, 0x01).id, 90, _OBJSIZ_7_1_0_1_0_0_0_0_);
			break;
		case 9L:
			Result = RTLNS(eif_new_type(89, 0x01).id, 89, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 10L:
			Result = RTLNS(eif_new_type(102, 0x01).id, 102, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 11L:
			Result = RTLNS(eif_new_type(101, 0x01).id, 101, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 12L:
			Result = RTLNS(eif_new_type(74, 0x01).id, 74, _OBJSIZ_5_1_0_2_0_0_0_0_);
			break;
		case 13L:
			loc1 = RTLNS(eif_new_type(78, 0x01).id, 78, _OBJSIZ_5_1_0_2_0_0_0_0_);
			F79_1047(RTCW(loc1), ((EIF_INTEGER_32) 13L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 14L:
			Result = RTLNS(eif_new_type(99, 0x01).id, 99, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 15L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(578,F36_578, (Current))));
			F83_1053(RTCW(loc3), ((EIF_INTEGER_32) 15L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 16L:
			Result = RTLNS(eif_new_type(98, 0x01).id, 98, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 17L:
			Result = RTLNS(eif_new_type(94, 0x01).id, 94, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 18L:
			Result = RTLNS(eif_new_type(83, 0x01).id, 83, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 19L:
			Result = RTLNS(eif_new_type(92, 0x01).id, 92, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 20L:
			Result = RTLNS(eif_new_type(97, 0x01).id, 97, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 21L:
			loc2 = RTLNS(eif_new_type(87, 0x01).id, 87, _OBJSIZ_5_1_0_3_0_0_0_0_);
			F88_1065(RTCW(loc2), ((EIF_INTEGER_32) 21L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 22L:
			Result = RTLNS(eif_new_type(76, 0x01).id, 76, _OBJSIZ_5_1_0_2_0_0_0_0_);
			break;
		case 23L:
			Result = RTLNS(eif_new_type(86, 0x01).id, 86, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 24L:
			Result = RTLNS(eif_new_type(69, 0x01).id, 69, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 25L:
			loc1 = RTLNS(eif_new_type(78, 0x01).id, 78, _OBJSIZ_5_1_0_2_0_0_0_0_);
			F79_1047(RTCW(loc1), ((EIF_INTEGER_32) 25L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 26L:
			Result = RTLNS(eif_new_type(95, 0x01).id, 95, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 27L:
			loc2 = RTLNS(eif_new_type(87, 0x01).id, 87, _OBJSIZ_5_1_0_3_0_0_0_0_);
			F88_1065(RTCW(loc2), ((EIF_INTEGER_32) 27L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 28L:
			Result = RTLNS(eif_new_type(75, 0x01).id, 75, _OBJSIZ_6_1_0_3_0_0_0_0_);
			break;
		case 29L:
			Result = RTLNS(eif_new_type(103, 0x01).id, 103, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 30L:
			Result = RTLNS(eif_new_type(79, 0x01).id, 79, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 31L:
			Result = RTLNS(eif_new_type(85, 0x01).id, 85, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_data */
EIF_REFERENCE F36_570 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOSCF(576,F36_576, (Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.set_last_exception */
void F36_571 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOSCF(577,F36_577, (Current));
	F38_620(RTCW(tr1), arg1);
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.set_exception_data */
void F36_572 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_REFERENCE arg8, EIF_REFERENCE arg9, EIF_REFERENCE arg10, EIF_INTEGER_32 arg11, EIF_BOOLEAN arg12)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg5);
	RTLR(4,arg6);
	RTLR(5,arg7);
	RTLR(6,arg8);
	RTLR(7,arg9);
	RTLR(8,arg10);
	RTLR(9,loc1);
	RTLR(10,loc2);
	RTLIU(11);
	
	RTGC;
	tr1 = RTOSCF(576,F36_576, (Current));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,11,691,697,697,697,0xFF01,777,0xFF01,777,0xFF01,777,0xFF01,777,0xFF01,777,0xFF01,777,697,730,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 12, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr2+4)->it_r = arg5;
	RTAR(tr2,arg5);
	((EIF_TYPED_VALUE *)tr2+5)->it_r = arg6;
	RTAR(tr2,arg6);
	((EIF_TYPED_VALUE *)tr2+6)->it_r = arg7;
	RTAR(tr2,arg7);
	((EIF_TYPED_VALUE *)tr2+7)->it_r = arg8;
	RTAR(tr2,arg8);
	((EIF_TYPED_VALUE *)tr2+8)->it_r = arg9;
	RTAR(tr2,arg9);
	((EIF_TYPED_VALUE *)tr2+9)->it_r = arg10;
	RTAR(tr2,arg10);
	((EIF_TYPED_VALUE *)tr2+10)->it_i4 = arg11;
	((EIF_TYPED_VALUE *)tr2+11)->it_b = arg12;
	F38_620(RTCW(tr1), tr2);
	if (arg2) {
		tr1 = F36_580(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F36_571(Current, loc1);
		}
	} else {
		RTCT0("last_exception_attached", EX_CHECK);
		tr1 = F36_559(Current);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F69_1012(loc2, arg10);
		F69_1006(loc2, arg6);
		F69_1010(loc2, arg7);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.ignored_exceptions */
static EIF_REFERENCE F36_573_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOSP (573);
#define Result RTOSR(573)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,577,697,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 577, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F578_2859(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (573);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F36_573 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(573,F36_573_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unignorable_exceptions */
static EIF_REFERENCE F36_574_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOSP (574);
#define Result RTOSR(574)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,577,697,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 577, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F578_2859(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY2(eif_new_type(91, 0x01), 0x01);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F578_2906(RTCW(Result), loc1, loc1);
	RTOSE (574);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F36_574 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(574,F36_574_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unraisable_exceptions */
static EIF_REFERENCE F36_575_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOSP (575);
#define Result RTOSR(575)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,577,697,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 577, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F578_2859(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY2(eif_new_type(90, 0x01), 0x01);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F578_2906(RTCW(Result), loc1, loc1);
	tr1 = RTLNTY2(eif_new_type(79, 0x01), 0x01);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F578_2906(RTCW(Result), loc1, loc1);
	RTOSE (575);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F36_575 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(575,F36_575_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.exception_data_cell */
static EIF_REFERENCE F36_576_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOSP (576);
#define Result RTOSR(576)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,37,0xFFF9,11,691,697,697,697,0xFF01,777,0xFF01,777,0xFF01,777,0xFF01,777,0xFF01,777,0xFF01,777,697,730,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 37, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F38_620(RTCW(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (576);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F36_576 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(576,F36_576_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.last_exception_cell */
static EIF_REFERENCE F36_577_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOSP (577);
#define Result RTOSR(577)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,37,68,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 37, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F38_620(RTCW(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (577);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F36_577 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(577,F36_577_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.no_memory_exception_object_cell */
static EIF_REFERENCE F36_578_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOSP (578);
#define Result RTOSR(578)
	RTOC_NEW(Result);
	loc1 = RTLNS(eif_new_type(82, 0x01).id, 82, _OBJSIZ_5_1_0_2_0_0_0_0_);
	tr1 = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F776_4789(RTCW(tr1), ((EIF_INTEGER_32) 4096L));
	F69_1012(RTCW(loc1), tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,37,0xFF01,82,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 37, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F38_620(RTCW(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (578);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F36_578 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(578,F36_578_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.is_code_ignored */
EIF_BOOLEAN F36_579 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F36_568(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_BOOLEAN) F36_566(Current, loc1);
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_data */
EIF_REFERENCE F36_580 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLIU(12);
	
	RTGC;
	tb1 = '\0';
	tr1 = F36_570(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ti4_1 = eif_integer_32_item(loc2,1);
		tr1 = F36_569(Current, ti4_1);
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		loc4 = loc3;
		loc4 = RTRV(eif_new_type(90, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			loc1 = F36_559(Current);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				F69_1005(loc3, loc1);
			}
			tr1 = eif_boxed_item(loc2,7);
			F91_1073(loc4, tr1);
			tr1 = eif_boxed_item(loc2,8);
			F91_1074(loc4, tr1);
		} else {
			loc5 = loc3;
			loc5 = RTRV(eif_new_type(79, 0x01),loc5);
			if (EIF_TEST(loc5)) {
				loc1 = F36_559(Current);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					F69_1005(loc3, loc1);
				}
			} else {
				loc6 = loc3;
				loc6 = RTRV(eif_new_type(104, 0x01),loc6);
				if (EIF_TEST(loc6)) {
					tb1 = eif_boolean_item(loc2,11);
					F105_1096(loc6, tb1);
				} else {
					loc7 = loc3;
					loc7 = RTRV(eif_new_type(74, 0x01),loc7);
					if (EIF_TEST(loc7)) {
						ti4_1 = eif_integer_32_item(loc2,2);
						F75_1021(loc7, ti4_1);
					} else {
						loc8 = loc3;
						loc8 = RTRV(eif_new_type(87, 0x01),loc8);
						if (EIF_TEST(loc8)) {
							ti4_1 = eif_integer_32_item(loc2,3);
							F88_1064(loc8, ti4_1);
						} else {
							loc9 = loc3;
							loc9 = RTRV(eif_new_type(76, 0x01),loc9);
							if (EIF_TEST(loc9)) {
								ti4_1 = eif_integer_32_item(loc2,3);
								F77_1044(loc9, ti4_1);
							} else {
								loc10 = loc3;
								loc10 = RTRV(eif_new_type(75, 0x01),loc10);
								if (EIF_TEST(loc10)) {
									ti4_1 = eif_integer_32_item(loc2,2);
									F76_1026(loc10, ti4_1);
									tr1 = eif_boxed_item(loc2,4);
									F76_1031(loc10, tr1);
								}
							}
						}
					}
				}
				if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
					loc1 = F36_559(Current);
				}
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					loc1 = (EIF_REFERENCE) loc3;
				}
				F69_1005(loc3, loc1);
			}
		}
		tr1 = eif_boxed_item(loc2,9);
		F69_1012(loc3, tr1);
		tr1 = eif_boxed_item(loc2,4);
		F69_998(loc3, tr1);
		tr1 = eif_boxed_item(loc2,5);
		F69_1006(loc3, tr1);
		tr1 = eif_boxed_item(loc2,6);
		F69_1010(loc3, tr1);
		RTLE;
		return (EIF_REFERENCE) loc3;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {ISE_EXCEPTION_MANAGER}.once_raise */
void F36_581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	tb1 = F69_1001(RTCW(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F69_991(RTCW(arg1));
			tr2 = F36_559(Current);
			F69_1005(RTCW(tr1), tr2);
		}
		F36_571(Current, arg1);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F111_1219(loc3);
		} else {
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R933[Dtype(RTCW(arg1))-68])(arg1);
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.init_exception_manager */
void F36_582 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOSCF(573,F36_573, (Current));
		/* END INLINED CODE */
	}
	;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOSCF(574,F36_574, (Current));
		/* END INLINED CODE */
	}
	;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOSCF(575,F36_575, (Current));
		/* END INLINED CODE */
	}
	;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOSCF(576,F36_576, (Current));
		/* END INLINED CODE */
	}
	;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOSCF(577,F36_577, (Current));
		/* END INLINED CODE */
	}
	;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOSCF(578,F36_578, (Current));
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.free_preallocated_trace */
void F36_583 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(578,F36_578, (Current))));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F69_998(RTCW(loc1), NULL);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.developer_raise */
void F36_584 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (arg1, arg2, arg3);
}

/* {ISE_EXCEPTION_MANAGER}.in_rescue */
EIF_BOOLEAN F36_585 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue());
	
	return Result;
}

void EIF_Minit24 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
