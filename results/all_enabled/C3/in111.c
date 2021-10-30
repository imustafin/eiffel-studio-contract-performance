/*
 * Code for class INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in111.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTERNAL}.is_instance_of */
EIF_BOOLEAN F132_1655 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_instance_of", 131, Current, 0, 2, 1640);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_id_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F132_1663(Current, tr1));
	Result = (nstcall = 0, F131_1622(Current, ti4_1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_of */
EIF_REFERENCE F132_1656 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("type_of", 131, Current, 0, 1, 1641);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F1_5(arg1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		tr1 = RTLNTY2(eif_new_type(65534, 0x00), 0x00);
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
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

/* {INTERNAL}.is_special */
EIF_BOOLEAN F132_1657 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_special", 131, Current, 0, 1, 1642);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F132_1663(Current, tr1));
	Result = (nstcall = 0, F131_1631(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_tuple */
EIF_BOOLEAN F132_1658 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_tuple", 131, Current, 1, 1, 1643);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,691,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTRV(typres0,loc1);
	}
	Result = (EIF_BOOLEAN) EIF_TEST(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_field_transient */
EIF_BOOLEAN F132_1659 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_field_transient", 131, Current, 0, 2, 1644);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F132_1663(Current, tr1));
	Result = (nstcall = 0, F131_1634(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_field_expanded */
EIF_BOOLEAN F132_1660 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_field_expanded", 131, Current, 0, 2, 1645);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F132_1663(Current, tr1));
	Result = (nstcall = 0, F131_1635(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.class_name */
EIF_REFERENCE F132_1661 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("class_name", 131, Current, 0, 1, 1646);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1_4(arg1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_name */
EIF_REFERENCE F132_1662 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("type_name", 131, Current, 0, 1, 1647);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1_5(arg1));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2582[Dtype(RTCW(tr1))-646])(tr1));
	tr1 = (nstcall = 1, F770_4551(RTCW(tr2)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.dynamic_type */
EIF_INTEGER_32 F132_1663 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("dynamic_type", 131, Current, 0, 1, 1648);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(1715,(nstcall = 0, F132_1715), (Current)))+ _LNGOFF_1_0_0_0_);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {INTERNAL}.generic_count */
EIF_INTEGER_32 F132_1664 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("generic_count", 131, Current, 0, 1, 1649);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F130_1559(RTCV(RTOSCF(1715,(nstcall = 0, F132_1715), (Current)))));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.generic_dynamic_type */
EIF_INTEGER_32 F132_1665 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("generic_dynamic_type", 131, Current, 0, 2, 1650);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("obj_generic", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, F132_1664(Current, tr1)) > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("i_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = RTCCL(arg1);
			tb1 = (EIF_BOOLEAN) (arg2 <= (nstcall = 0, F132_1664(Current, tr1)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	ti4_1 = (nstcall = 1, F130_1560(RTCW(tr1), arg2));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {INTERNAL}.field */
EIF_REFERENCE F132_1666 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("field", 131, Current, 0, 2, 1651);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F132_1657(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = (nstcall = 1, F130_1561(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.reference_field */
EIF_REFERENCE F132_1667 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("reference_field", 131, Current, 0, 2, 1652);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F132_1657(Current, tr1)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_type", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(7);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = (nstcall = 1, F130_1562(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.field_name */
EIF_REFERENCE F132_1668 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("field_name", 131, Current, 0, 2, 1653);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F132_1657(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F132_1663(Current, tr1));
	Result = (nstcall = 0, F131_1643(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {INTERNAL}.field_offset */
EIF_INTEGER_32 F132_1669 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("field_offset", 131, Current, 0, 2, 1654);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F132_1657(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	ti4_1 = (nstcall = 1, F130_1576(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.field_type */
EIF_INTEGER_32 F132_1670 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("field_type", 131, Current, 0, 2, 1655);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F132_1663(Current, tr1));
	Result = (nstcall = 0, F131_1644(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("field_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {INTERNAL}.expanded_field_type */
EIF_REFERENCE F132_1671 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("expanded_field_type", 131, Current, 0, 2, 1656);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("is_expanded", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 7L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F132_1663(Current, tr1));
	ti4_1 = (nstcall = 0, F131_1645(Current, arg1, ti4_1));
	Result = (nstcall = 0, F131_1636(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {INTERNAL}.character_8_field */
EIF_CHARACTER_8 F132_1672 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_8_field", 131, Current, 0, 2, 1657);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tc1 = (nstcall = 1, F130_1582(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.character_field */
EIF_CHARACTER_8 F132_1673 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_field", 131, Current, 0, 2, 1658);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tc1 = (nstcall = 1, F130_1582(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.character_32_field */
EIF_CHARACTER_32 F132_1674 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_32_field", 131, Current, 0, 2, 1659);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tw1 = (nstcall = 1, F130_1583(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.boolean_field */
EIF_BOOLEAN F132_1675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("boolean_field", 131, Current, 0, 2, 1660);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("boolean_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tb1 = (nstcall = 1, F130_1584(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_8_field */
EIF_NATURAL_8 F132_1676 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_8_field", 131, Current, 0, 2, 1661);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tu1_1 = (nstcall = 1, F130_1585(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_16_field */
EIF_NATURAL_16 F132_1677 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_16_field", 131, Current, 0, 2, 1662);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tu2_1 = (nstcall = 1, F130_1586(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_32_field */
EIF_NATURAL_32 F132_1678 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_32_field", 131, Current, 0, 2, 1663);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tu4_1 = (nstcall = 1, F130_1587(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_64_field */
EIF_NATURAL_64 F132_1679 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_64_field", 131, Current, 0, 2, 1664);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tu8_1 = (nstcall = 1, F130_1588(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_8_field */
EIF_INTEGER_8 F132_1680 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_8_field", 131, Current, 0, 2, 1665);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	ti1_1 = (nstcall = 1, F130_1589(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_16_field */
EIF_INTEGER_16 F132_1681 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_16_field", 131, Current, 0, 2, 1666);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	ti2_1 = (nstcall = 1, F130_1590(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_field */
EIF_INTEGER_32 F132_1682 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_field", 131, Current, 0, 2, 1667);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	ti4_1 = (nstcall = 1, F130_1591(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_32_field */
EIF_INTEGER_32 F132_1683 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_32_field", 131, Current, 0, 2, 1668);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	ti4_1 = (nstcall = 1, F130_1591(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_64_field */
EIF_INTEGER_64 F132_1684 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_64_field", 131, Current, 0, 2, 1669);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	ti8_1 = (nstcall = 1, F130_1592(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_32_field */
EIF_REAL_32 F132_1685 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_32_field", 131, Current, 0, 2, 1670);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr4_1 = (nstcall = 1, F130_1593(RTCW(tr1), arg1));
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_field */
EIF_REAL_32 F132_1686 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_field", 131, Current, 0, 2, 1671);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr4_1 = (nstcall = 1, F130_1593(RTCW(tr1), arg1));
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.pointer_field */
EIF_POINTER F132_1687 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("pointer_field", 131, Current, 0, 2, 1672);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pointer_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tp1 = (nstcall = 1, F130_1594(RTCW(tr1), arg1));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_64_field */
EIF_REAL_64 F132_1688 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_64_field", 131, Current, 0, 2, 1673);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr8_1 = (nstcall = 1, F130_1595(RTCW(tr1), arg1));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.double_field */
EIF_REAL_64 F132_1689 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("double_field", 131, Current, 0, 2, 1674);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr8_1 = (nstcall = 1, F130_1595(RTCW(tr1), arg1));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.set_reference_field */
void F132_1690 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,arg3);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("set_reference_field", 131, Current, 0, 3, 1675);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("reference_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_value", EX_PRE);
		tb1 = '\01';
		tr1 = RTCCL(arg2);
		ti4_1 = (nstcall = 0, F132_1663(Current, tr1));
		ti4_1 = (nstcall = 0, F131_1645(Current, arg1, ti4_1));
		if ((nstcall = 0, F131_1633(Current, ti4_1))) {
			tb1 = (EIF_BOOLEAN)(arg3 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("value_conforms_to_field_static_type", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tr1 = RTCCL(arg3);
			ti4_1 = (nstcall = 0, F132_1663(Current, tr1));
			tr1 = RTCCL(arg2);
			ti4_2 = (nstcall = 0, F132_1663(Current, tr1));
			ti4_2 = (nstcall = 0, F131_1645(Current, arg1, ti4_2));
			tb1 = (nstcall = 0, F131_1623(Current, ti4_1, ti4_2));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(8);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg3);
	(nstcall = 1, F130_1596(RTCW(tr1), arg1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_64_field */
void F132_1691 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_64_field", 131, Current, 0, 3, 1676);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1597(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_double_field */
void F132_1692 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_double_field", 131, Current, 0, 3, 1677);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1597(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_8_field */
void F132_1693 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_8_field", 131, Current, 0, 3, 1678);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1599(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_field */
void F132_1694 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_field", 131, Current, 0, 3, 1679);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1599(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_32_field */
void F132_1695 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_32_field", 131, Current, 0, 3, 1680);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1601(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_boolean_field */
void F132_1696 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_boolean_field", 131, Current, 0, 3, 1681);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("boolean_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1602(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_8_field */
void F132_1697 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_8_field", 131, Current, 0, 3, 1682);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1603(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_16_field */
void F132_1698 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_16 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_16_field", 131, Current, 0, 3, 1683);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1604(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_32_field */
void F132_1699 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_32_field", 131, Current, 0, 3, 1684);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1605(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_64_field */
void F132_1700 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_64_field", 131, Current, 0, 3, 1685);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1606(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_8_field */
void F132_1701 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_8_field", 131, Current, 0, 3, 1686);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1607(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_16_field */
void F132_1702 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_16 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_16_field", 131, Current, 0, 3, 1687);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1608(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_field */
void F132_1703 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_field", 131, Current, 0, 3, 1688);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1610(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_32_field */
void F132_1704 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_32_field", 131, Current, 0, 3, 1689);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1610(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_64_field */
void F132_1705 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_64_field", 131, Current, 0, 3, 1690);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1611(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_32_field */
void F132_1706 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_32_field", 131, Current, 0, 3, 1691);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1612(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_field */
void F132_1707 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_field", 131, Current, 0, 3, 1692);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1612(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_pointer_field */
void F132_1708 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_POINTER arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_pointer_field", 131, Current, 0, 3, 1693);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F132_1709(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pointer_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F132_1670(Current, arg1, tr1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	(nstcall = 1, F130_1614(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.field_count */
EIF_INTEGER_32 F132_1709 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("field_count", 131, Current, 0, 1, 1694);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOSCF(1715,(nstcall = 0, F132_1715), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F130_1615(RTCV(RTOSCF(1715,(nstcall = 0, F132_1715), (Current)))));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.persistent_field_count */
EIF_INTEGER_32 F132_1710 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("persistent_field_count", 131, Current, 0, 1, 1695);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F132_1663(Current, tr1));
	Result = (nstcall = 0, F131_1648(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("count_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {INTERNAL}.physical_size */
EIF_INTEGER_32 F132_1711 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("physical_size", 131, Current, 1, 1, 1696);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F10_301(Current, arg1));
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_1 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.deep_physical_size */
EIF_INTEGER_32 F132_1712 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("deep_physical_size", 131, Current, 1, 1, 1697);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	loc1 = (nstcall = 0, F132_1714(Current, tr1));
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_1 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.physical_size_64 */
EIF_NATURAL_64 F132_1713 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("physical_size_64", 131, Current, 0, 1, 1698);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F10_301(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.deep_physical_size_64 */
EIF_NATURAL_64 F132_1714 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("deep_physical_size_64", 131, Current, 2, 1, 1699);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(27, 0x01).id, 27, _OBJSIZ_6_6_0_0_0_0_0_0_);
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F27_489(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F27_493(RTCW(loc1), (EIF_BOOLEAN) 0));
	RTHOOK(5);
	(nstcall = 1, F27_497(RTCW(loc1)));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1847[Dtype(loc2)-444])(loc2));
		for (;;) {
			RTHOOK(8);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1858[Dtype(loc2)-444])(loc2));
			if (tb1) break;
			RTHOOK(9);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1891[Dtype(loc2)-444])(loc2));
			tr2 = RTCCL(tr1);
			Result += (nstcall = 0, F132_1713(Current, tr2));
			RTHOOK(10);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1860[Dtype(loc2)-444])(loc2));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.reflected_object */
static EIF_REFERENCE F132_1715_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("reflected_object", 131, Current, 0, 0, 1700);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1715);
#define Result RTOSR(1715)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(135, 0x01).id, 135, _OBJSIZ_1_0_0_2_0_0_0_0_);
	tr2 = RTMS_EX_H("",0,0);
	(nstcall = -1, F136_1819(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1715);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F132_1715 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1715,F132_1715_body,(Current));
}

void EIF_Minit111 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
