/*
 * Code for class INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in131.h"
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
EIF_BOOLEAN F127_2006 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("is_instance_of", 126, Current, 0, 2, 1942);
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
	ti4_1 = (nstcall = 0, F127_2014(Current, tr1));
	Result = (nstcall = 0, F126_1973(Current, ti4_1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_of */
EIF_REFERENCE F127_2007 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("type_of", 126, Current, 0, 1, 1943);
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
EIF_BOOLEAN F127_2008 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("is_special", 126, Current, 0, 1, 1944);
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
	ti4_1 = (nstcall = 0, F127_2014(Current, tr1));
	Result = (nstcall = 0, F126_1982(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_tuple */
EIF_BOOLEAN F127_2009 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("is_tuple", 126, Current, 1, 1, 1945);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,811,0xFFFF};
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
EIF_BOOLEAN F127_2010 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("is_field_transient", 126, Current, 0, 2, 1946);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F127_2014(Current, tr1));
	Result = (nstcall = 0, F126_1985(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_field_expanded */
EIF_BOOLEAN F127_2011 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("is_field_expanded", 126, Current, 0, 2, 1947);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F127_2014(Current, tr1));
	Result = (nstcall = 0, F126_1986(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.class_name */
EIF_REFERENCE F127_2012 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("class_name", 126, Current, 0, 1, 1948);
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
EIF_REFERENCE F127_2013 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("type_name", 126, Current, 0, 1, 1949);
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
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3875[Dtype(RTCW(tr1))-765])(tr1));
	tr1 = (nstcall = 1, F890_6566(RTCW(tr2)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.dynamic_type */
EIF_INTEGER_32 F127_2014 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("dynamic_type", 126, Current, 0, 1, 1950);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
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
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(168,(nstcall = 0, F127_2066), (Current)))+ _LNGOFF_1_0_0_0_);
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
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.generic_count */
EIF_INTEGER_32 F127_2015 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("generic_count", 126, Current, 0, 1, 1951);
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
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F128_2072(RTCV(RTOUCR(168,(nstcall = 0, F127_2066), (Current)))));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.generic_dynamic_type */
EIF_INTEGER_32 F127_2016 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("generic_dynamic_type", 126, Current, 0, 2, 1952);
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
		RTTE((EIF_BOOLEAN) ((nstcall = 0, F127_2015(Current, tr1)) > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("i_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = RTCCL(arg1);
			tb1 = (EIF_BOOLEAN) (arg2 <= (nstcall = 0, F127_2015(Current, tr1)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	ti4_1 = (nstcall = 1, F128_2073(RTCW(tr1), arg2));
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
EIF_REFERENCE F127_2017 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("field", 126, Current, 0, 2, 1953);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F127_2008(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = (nstcall = 1, F128_2074(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.reference_field */
EIF_REFERENCE F127_2018 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("reference_field", 126, Current, 0, 2, 1954);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F127_2008(Current, tr1)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_type", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(7);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = (nstcall = 1, F128_2075(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.field_name */
EIF_REFERENCE F127_2019 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("field_name", 126, Current, 0, 2, 1955);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F127_2008(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F127_2014(Current, tr1));
	Result = (nstcall = 0, F126_1994(Current, arg1, ti4_1));
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
EIF_INTEGER_32 F127_2020 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("field_offset", 126, Current, 0, 2, 1956);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F127_2008(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	ti4_1 = (nstcall = 1, F128_2089(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.field_type */
EIF_INTEGER_32 F127_2021 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("field_type", 126, Current, 0, 2, 1957);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F127_2014(Current, tr1));
	Result = (nstcall = 0, F126_1995(Current, arg1, ti4_1));
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
EIF_REFERENCE F127_2022 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("expanded_field_type", 126, Current, 0, 2, 1958);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("is_expanded", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 7L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F127_2014(Current, tr1));
	ti4_1 = (nstcall = 0, F126_1996(Current, arg1, ti4_1));
	Result = (nstcall = 0, F126_1987(Current, ti4_1));
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
EIF_CHARACTER_8 F127_2023 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("character_8_field", 126, Current, 0, 2, 1959);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tc1 = (nstcall = 1, F128_2095(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.character_field */
EIF_CHARACTER_8 F127_2024 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("character_field", 126, Current, 0, 2, 1960);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tc1 = (nstcall = 1, F128_2095(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.character_32_field */
EIF_CHARACTER_32 F127_2025 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("character_32_field", 126, Current, 0, 2, 1961);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tw1 = (nstcall = 1, F128_2096(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.boolean_field */
EIF_BOOLEAN F127_2026 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("boolean_field", 126, Current, 0, 2, 1962);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("boolean_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tb1 = (nstcall = 1, F128_2097(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_8_field */
EIF_NATURAL_8 F127_2027 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("natural_8_field", 126, Current, 0, 2, 1963);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tu1_1 = (nstcall = 1, F128_2098(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_16_field */
EIF_NATURAL_16 F127_2028 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("natural_16_field", 126, Current, 0, 2, 1964);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tu2_1 = (nstcall = 1, F128_2099(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_32_field */
EIF_NATURAL_32 F127_2029 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("natural_32_field", 126, Current, 0, 2, 1965);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tu4_1 = (nstcall = 1, F128_2100(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_64_field */
EIF_NATURAL_64 F127_2030 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("natural_64_field", 126, Current, 0, 2, 1966);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tu8_1 = (nstcall = 1, F128_2101(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_8_field */
EIF_INTEGER_8 F127_2031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("integer_8_field", 126, Current, 0, 2, 1967);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	ti1_1 = (nstcall = 1, F128_2102(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_16_field */
EIF_INTEGER_16 F127_2032 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("integer_16_field", 126, Current, 0, 2, 1968);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	ti2_1 = (nstcall = 1, F128_2103(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_field */
EIF_INTEGER_32 F127_2033 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("integer_field", 126, Current, 0, 2, 1969);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	ti4_1 = (nstcall = 1, F128_2104(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_32_field */
EIF_INTEGER_32 F127_2034 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("integer_32_field", 126, Current, 0, 2, 1970);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	ti4_1 = (nstcall = 1, F128_2104(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_64_field */
EIF_INTEGER_64 F127_2035 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("integer_64_field", 126, Current, 0, 2, 1971);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	ti8_1 = (nstcall = 1, F128_2105(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_32_field */
EIF_REAL_32 F127_2036 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("real_32_field", 126, Current, 0, 2, 1972);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr4_1 = (nstcall = 1, F128_2106(RTCW(tr1), arg1));
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_field */
EIF_REAL_32 F127_2037 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("real_field", 126, Current, 0, 2, 1973);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr4_1 = (nstcall = 1, F128_2106(RTCW(tr1), arg1));
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.pointer_field */
EIF_POINTER F127_2038 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("pointer_field", 126, Current, 0, 2, 1974);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pointer_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tp1 = (nstcall = 1, F128_2107(RTCW(tr1), arg1));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_64_field */
EIF_REAL_64 F127_2039 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("real_64_field", 126, Current, 0, 2, 1975);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr8_1 = (nstcall = 1, F128_2108(RTCW(tr1), arg1));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.double_field */
EIF_REAL_64 F127_2040 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("double_field", 126, Current, 0, 2, 1976);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr8_1 = (nstcall = 1, F128_2108(RTCW(tr1), arg1));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.set_reference_field */
void F127_2041 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
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
	
	RTEAA("set_reference_field", 126, Current, 0, 3, 1977);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("reference_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_value", EX_PRE);
		tb1 = '\01';
		tr1 = RTCCL(arg2);
		ti4_1 = (nstcall = 0, F127_2014(Current, tr1));
		ti4_1 = (nstcall = 0, F126_1996(Current, arg1, ti4_1));
		if ((nstcall = 0, F126_1984(Current, ti4_1))) {
			tb1 = (EIF_BOOLEAN)(arg3 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("value_conforms_to_field_static_type", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tr1 = RTCCL(arg3);
			ti4_1 = (nstcall = 0, F127_2014(Current, tr1));
			tr1 = RTCCL(arg2);
			ti4_2 = (nstcall = 0, F127_2014(Current, tr1));
			ti4_2 = (nstcall = 0, F126_1996(Current, arg1, ti4_2));
			tb1 = (nstcall = 0, F126_1974(Current, ti4_1, ti4_2));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(8);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg3);
	(nstcall = 1, F128_2109(RTCW(tr1), arg1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_64_field */
void F127_2042 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_64 arg3)
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
	
	RTEAA("set_real_64_field", 126, Current, 0, 3, 1978);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2110(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_double_field */
void F127_2043 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_64 arg3)
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
	
	RTEAA("set_double_field", 126, Current, 0, 3, 1979);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2110(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_8_field */
void F127_2044 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
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
	
	RTEAA("set_character_8_field", 126, Current, 0, 3, 1980);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2112(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_field */
void F127_2045 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
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
	
	RTEAA("set_character_field", 126, Current, 0, 3, 1981);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2112(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_32_field */
void F127_2046 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_32 arg3)
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
	
	RTEAA("set_character_32_field", 126, Current, 0, 3, 1982);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2114(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_boolean_field */
void F127_2047 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
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
	
	RTEAA("set_boolean_field", 126, Current, 0, 3, 1983);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("boolean_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2115(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_8_field */
void F127_2048 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_8 arg3)
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
	
	RTEAA("set_natural_8_field", 126, Current, 0, 3, 1984);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2116(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_16_field */
void F127_2049 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_16 arg3)
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
	
	RTEAA("set_natural_16_field", 126, Current, 0, 3, 1985);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2117(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_32_field */
void F127_2050 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_32 arg3)
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
	
	RTEAA("set_natural_32_field", 126, Current, 0, 3, 1986);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2118(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_64_field */
void F127_2051 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_64 arg3)
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
	
	RTEAA("set_natural_64_field", 126, Current, 0, 3, 1987);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2119(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_8_field */
void F127_2052 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_8 arg3)
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
	
	RTEAA("set_integer_8_field", 126, Current, 0, 3, 1988);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2120(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_16_field */
void F127_2053 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_16 arg3)
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
	
	RTEAA("set_integer_16_field", 126, Current, 0, 3, 1989);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2121(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_field */
void F127_2054 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("set_integer_field", 126, Current, 0, 3, 1990);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2123(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_32_field */
void F127_2055 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("set_integer_32_field", 126, Current, 0, 3, 1991);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2123(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_64_field */
void F127_2056 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_64 arg3)
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
	
	RTEAA("set_integer_64_field", 126, Current, 0, 3, 1992);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2124(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_32_field */
void F127_2057 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_32 arg3)
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
	
	RTEAA("set_real_32_field", 126, Current, 0, 3, 1993);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2125(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_field */
void F127_2058 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_32 arg3)
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
	
	RTEAA("set_real_field", 126, Current, 0, 3, 1994);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2125(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_pointer_field */
void F127_2059 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_POINTER arg3)
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
	
	RTEAA("set_pointer_field", 126, Current, 0, 3, 1995);
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
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F127_2060(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pointer_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F127_2021(Current, arg1, tr1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	(nstcall = 1, F128_2127(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.field_count */
EIF_INTEGER_32 F127_2060 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("field_count", 126, Current, 0, 1, 1996);
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
	tr1 = RTOUCR(168,(nstcall = 0, F127_2066), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F128_2128(RTCV(RTOUCR(168,(nstcall = 0, F127_2066), (Current)))));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.persistent_field_count */
EIF_INTEGER_32 F127_2061 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("persistent_field_count", 126, Current, 0, 1, 1997);
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
	ti4_1 = (nstcall = 0, F127_2014(Current, tr1));
	Result = (nstcall = 0, F126_1999(Current, ti4_1));
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
EIF_INTEGER_32 F127_2062 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("physical_size", 126, Current, 1, 1, 1998);
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
	loc1 = (nstcall = 0, F26_549(Current, arg1));
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
EIF_INTEGER_32 F127_2063 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("deep_physical_size", 126, Current, 1, 1, 1999);
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
	loc1 = (nstcall = 0, F127_2065(Current, tr1));
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
EIF_NATURAL_64 F127_2064 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("physical_size_64", 126, Current, 0, 1, 2000);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
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
	Result = (nstcall = 0, F26_549(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.deep_physical_size_64 */
EIF_NATURAL_64 F127_2065 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("deep_physical_size_64", 126, Current, 2, 1, 2001);
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
	loc1 = RTLNS(eif_new_type(49, 0x01).id, 49, _OBJSIZ_6_6_0_0_0_0_0_0_);
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F49_1193(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F49_1197(RTCW(loc1), (EIF_BOOLEAN) 0));
	RTHOOK(5);
	(nstcall = 1, F49_1201(RTCW(loc1)));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(loc2)-518])(loc2));
		for (;;) {
			RTHOOK(8);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(loc2)-518])(loc2));
			if (tb1) break;
			RTHOOK(9);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc2)-518])(loc2));
			tr2 = RTCCL(tr1);
			Result += (nstcall = 0, F127_2064(Current, tr2));
			RTHOOK(10);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(loc2)-518])(loc2));
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
static EIF_REFERENCE F127_2066_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(168)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("reflected_object", 126, Current, 0, 0, 2002);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(131, 0x01).id, 131, _OBJSIZ_1_0_0_2_0_0_0_0_);
	tr2 = RTMS_EX_H("",0,0);
	(nstcall = -1, F132_2238(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F127_2066 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(168,F127_2066_body,(Current));
}

void EIF_Minit131 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
