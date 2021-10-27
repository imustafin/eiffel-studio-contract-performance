/*
 * Code for class RT_DBG_INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt134.h"
#include "eif_eiffel.h"
#include "eif_internal.h"
#include "eif_macros.h"
#include "eif_debug.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F129_2147
static int inline_F129_2147 (EIF_POINTER arg1)
{
	return (int) (eif_is_expanded(HEADER(arg1)->ov_flags))
	;
}
#define INLINE_F129_2147
#endif
#ifndef INLINE_F129_2148
static EIF_INTEGER_32 inline_F129_2148 (EIF_NATURAL_32 arg1)
{
	return (EIF_INTEGER_32) (ei_eif_type((uint32) arg1))
	;
}
#define INLINE_F129_2148
#endif
#ifndef INLINE_F129_2149
static EIF_NATURAL_32 inline_F129_2149 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_NATURAL_32) (System(To_dtype(arg2)).cn_types[arg1])
	;
}
#define INLINE_F129_2149
#endif
#ifndef INLINE_F129_2152
static EIF_REFERENCE inline_F129_2152 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	return (EIF_REFERENCE) rt_dbg_stack_value((uint32)arg1, (uint32)arg2, (uint32)arg3, (uint32)arg4);
#else
	return NULL;
#endif
	;
}
#define INLINE_F129_2152
#endif
#ifndef INLINE_F129_2157
static EIF_INTEGER_32 inline_F129_2157 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_BOOL; a_val.it_bool = (EIF_BOOLEAN) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2157
#endif
#ifndef INLINE_F129_2158
static EIF_INTEGER_32 inline_F129_2158 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_CHAR; a_val.it_c1 = (EIF_CHARACTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2158
#endif
#ifndef INLINE_F129_2159
static EIF_INTEGER_32 inline_F129_2159 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_WCHAR; a_val.it_c4 = (EIF_WIDE_CHAR) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2159
#endif
#ifndef INLINE_F129_2160
static EIF_INTEGER_32 inline_F129_2160 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT8; a_val.it_n1 = (EIF_NATURAL_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2160
#endif
#ifndef INLINE_F129_2161
static EIF_INTEGER_32 inline_F129_2161 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT16; a_val.it_n2 = (EIF_NATURAL_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2161
#endif
#ifndef INLINE_F129_2162
static EIF_INTEGER_32 inline_F129_2162 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT32; a_val.it_n4 = (EIF_NATURAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2162
#endif
#ifndef INLINE_F129_2163
static EIF_INTEGER_32 inline_F129_2163 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT64; a_val.it_n8 = (EIF_NATURAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2163
#endif
#ifndef INLINE_F129_2164
static EIF_INTEGER_32 inline_F129_2164 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT8; a_val.it_i1 = (EIF_INTEGER_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2164
#endif
#ifndef INLINE_F129_2165
static EIF_INTEGER_32 inline_F129_2165 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT16; a_val.it_i2 = (EIF_INTEGER_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2165
#endif
#ifndef INLINE_F129_2166
static EIF_INTEGER_32 inline_F129_2166 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT32; a_val.it_i4 = (EIF_INTEGER_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2166
#endif
#ifndef INLINE_F129_2167
static EIF_INTEGER_32 inline_F129_2167 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT64; a_val.it_i8 = (EIF_INTEGER_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2167
#endif
#ifndef INLINE_F129_2168
static EIF_INTEGER_32 inline_F129_2168 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL32; a_val.it_r4 = (EIF_REAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2168
#endif
#ifndef INLINE_F129_2169
static EIF_INTEGER_32 inline_F129_2169 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL64; a_val.it_r8 = (EIF_REAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2169
#endif
#ifndef INLINE_F129_2170
static EIF_INTEGER_32 inline_F129_2170 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_POINTER; a_val.it_p = (EIF_POINTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2170
#endif
#ifndef INLINE_F129_2171
static EIF_INTEGER_32 inline_F129_2171 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_REF; 
	a_val.it_ref = (EIF_REFERENCE) &(arg4);
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2171
#endif
#ifndef INLINE_F129_2172
static EIF_INTEGER_32 inline_F129_2172 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_VOID; 
	a_val.it_ref = (char*) 0;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F129_2172
#endif
#ifndef INLINE_F129_2173
static void inline_F129_2173 (EIF_INTEGER_32 arg1)
{
	#ifdef WORKBENCH
	EIF_GET_CONTEXT; is_inside_rt_eiffel_code = arg1;
#endif
	;
}
#define INLINE_F129_2173
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_DBG_INTERNAL}.object_field_count */
EIF_INTEGER_32 F129_2135 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("object_field_count", 128, Current, 0, 1, 2067);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(160,(nstcall = 0, F129_2176), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F132_2247(RTCW(tr1), tr2));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F128_2128(RTCV(RTOUCR(160,(nstcall = 0, F129_2176), (Current)))));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_records */
EIF_REFERENCE F129_2136 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("object_records", 128, Current, 4, 1, 2068);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	loc2 = (nstcall = 0, F129_2135(Current, tr1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		{
			static EIF_TYPE_INDEX typarr0[] = {603,0xFF01,545,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc3 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F604_4073(RTCW(loc3), loc2));
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(7);
			tr1 = RTCCL(arg1);
			tr1 = (nstcall = 0, F129_2144(Current, loc1, tr1));
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				RTHOOK(8);
				(nstcall = 1, F604_4114(RTCW(loc3), loc4));
			}
			RTHOOK(9);
			loc1++;
		}
		RTHOOK(10);
		Result = (EIF_REFERENCE) loc3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_is_expanded */
EIF_BOOLEAN F129_2137 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("object_is_expanded", 128, Current, 0, 1, 2069);
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
	Result = EIF_TEST ((nstcall = 0, F129_2147(Current, arg1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_index_at */
EIF_INTEGER_32 F129_2138 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("field_index_at", 128, Current, 2, 2, 2070);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj /= Void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = RTOUCR(160,(nstcall = 0, F129_2176), (Current));
	RTHOOK(3);
	tr1 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(loc2), tr1));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F128_2128(RTCW(loc2)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L)))) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F128_2089(RTCW(loc2), loc1));
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			RTHOOK(7);
			Result = (EIF_INTEGER_32) loc1;
		}
		RTHOOK(8);
		loc1--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_name_at */
EIF_REFERENCE F129_2139 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	
	RTEAA("field_name_at", 128, Current, 1, 2, 2071);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj /= Void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	loc1 = (nstcall = 0, F129_2138(Current, arg1, tr1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = RTOUCR(160,(nstcall = 0, F129_2176), (Current));
		tr2 = RTCCL(arg2);
		(nstcall = 1, F132_2247(RTCW(tr1), tr2));
		RTHOOK(5);
		tr1 = RTOUCR(160,(nstcall = 0, F129_2176), (Current));
		tr2 = (nstcall = 1, F128_2088(RTCW(tr1), loc1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_at */
EIF_REFERENCE F129_2140 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("field_at", 128, Current, 1, 3, 2072);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (nstcall = 0, F129_2142(Current, arg2));
	RTHOOK(4);
	switch (loc1) {
		case 3L:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(829, 0x00).id, 829, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F26_571(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 2L:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(823, 0x00).id, 823, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F26_569(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 12L:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(820, 0x00).id, 820, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F26_570(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 13L:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(835, 0x00).id, 835, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F26_572(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 14L:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(841, 0x00).id, 841, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F26_573(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 15L:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(838, 0x00).id, 838, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F26_574(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 16L:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(850, 0x00).id, 850, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F26_575(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 9L:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(814, 0x00).id, 814, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F26_576(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 10L:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(847, 0x00).id, 847, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F26_577(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 4L:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(844, 0x00).id, 844, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F26_578(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 11L:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(826, 0x00).id, 826, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F26_579(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 5L:
			RTHOOK(16);
			Result = RTLNS(eif_new_type(817, 0x00).id, 817, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F26_580(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 6L:
			RTHOOK(17);
			Result = RTLNS(eif_new_type(832, 0x00).id, 832, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F26_582(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 0L:
			RTHOOK(18);
			Result = RTLNS(eif_new_type(883, 0x00).id, 883, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F26_581(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 1L:
			RTHOOK(19);
			Result = (nstcall = 0, F26_568(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.stack_value_at */
EIF_REFERENCE F129_2141 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("stack_value_at", 128, Current, 0, 4, 2073);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F129_2152(Current, arg1, arg2, arg3, arg4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.eif_type */
EIF_INTEGER_32 F129_2142 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_type", 128, Current, 0, 1, 2074);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F129_2148(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.rt_dynamic_type */
EIF_INTEGER_32 F129_2143 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("rt_dynamic_type", 128, Current, 0, 1, 2075);
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
	Result = (nstcall = 0, F129_2150(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("rt_dynamic_type_nonnegative", EX_POST);
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

/* {RT_DBG_INTERNAL}.object_record */
EIF_REFERENCE F129_2144 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("object_record", 128, Current, 2, 2, 2076);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = RTOUCR(160,(nstcall = 0, F129_2176), (Current));
	RTHOOK(3);
	tr1 = RTCCL(arg2);
	(nstcall = 1, F132_2247(RTCW(loc2), tr1));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F128_2090(RTCW(loc2), arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F128_2089(RTCW(loc2), arg1));
	tu4_1 = (nstcall = 0, F129_2149(Current, arg1, loc1));
	tr1 = RTCCL(arg2);
	Result = (nstcall = 0, F129_2145(Current, ti4_1, tu4_1, tr1));
	RTHOOK(6);
	switch (loc1) {
		case 9L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,569,814,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 569, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti1_1 = (nstcall = 1, F128_2102(RTCW(loc2), arg1));
			(nstcall = -1, F570_2340(RTCW(Result), tr1, arg1, loc1, ti1_1));
			break;
		case 10L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,563,847,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 563, _OBJSIZ_2_0_1_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti2_1 = (nstcall = 1, F128_2103(RTCW(loc2), arg1));
			(nstcall = -1, F564_2340(RTCW(Result), tr1, arg1, loc1, ti2_1));
			break;
		case 4L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,570,844,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 570, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti4_1 = (nstcall = 1, F128_2104(RTCW(loc2), arg1));
			(nstcall = -1, F571_2340(RTCW(Result), tr1, arg1, loc1, ti4_1));
			break;
		case 11L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,574,826,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 574, _OBJSIZ_2_0_0_2_0_0_1_0_);
			}
			tr1 = RTCCL(arg2);
			ti8_1 = (nstcall = 1, F128_2105(RTCW(loc2), arg1));
			(nstcall = -1, F575_2340(RTCW(Result), tr1, arg1, loc1, ti8_1));
			break;
		case 13L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,564,835,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 564, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu1_1 = (nstcall = 1, F128_2098(RTCW(loc2), arg1));
			(nstcall = -1, F565_2340(RTCW(Result), tr1, arg1, loc1, tu1_1));
			break;
		case 14L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,565,841,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 565, _OBJSIZ_2_0_1_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu2_1 = (nstcall = 1, F128_2099(RTCW(loc2), arg1));
			(nstcall = -1, F566_2340(RTCW(Result), tr1, arg1, loc1, tu2_1));
			break;
		case 15L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,572,838,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 572, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu4_1 = (nstcall = 1, F128_2100(RTCW(loc2), arg1));
			(nstcall = -1, F573_2340(RTCW(Result), tr1, arg1, loc1, tu4_1));
			break;
		case 16L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,562,850,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 562, _OBJSIZ_2_0_0_2_0_0_1_0_);
			}
			tr1 = RTCCL(arg2);
			tu8_1 = (nstcall = 1, F128_2101(RTCW(loc2), arg1));
			(nstcall = -1, F563_2340(RTCW(Result), tr1, arg1, loc1, tu8_1));
			break;
		case 0L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,567,883,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 567, _OBJSIZ_2_0_0_2_0_1_0_0_);
			}
			tr1 = RTCCL(arg2);
			tp1 = (nstcall = 1, F128_2107(RTCW(loc2), arg1));
			(nstcall = -1, F568_2340(RTCW(Result), tr1, arg1, loc1, tp1));
			break;
		case 1L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,561,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 561, _OBJSIZ_3_0_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr2 = (nstcall = 1, F128_2075(RTCW(loc2), arg1));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F562_2340(RTCW(Result), tr1, arg1, loc1, tr3));
			break;
		case 7L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,561,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 561, _OBJSIZ_3_0_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr2 = (nstcall = 1, F128_2074(RTCW(loc2), arg1));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F562_2340(RTCW(Result), tr1, arg1, loc1, tr3));
			break;
		case 3L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,568,829,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 568, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tb1 = (nstcall = 1, F128_2097(RTCW(loc2), arg1));
			(nstcall = -1, F569_2340(RTCW(Result), tr1, arg1, loc1, tb1));
			break;
		case 5L:
			RTHOOK(19);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,571,817,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 571, _OBJSIZ_2_0_0_2_1_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr4_1 = (nstcall = 1, F128_2106(RTCW(loc2), arg1));
			(nstcall = -1, F572_2340(RTCW(Result), tr1, arg1, loc1, tr4_1));
			break;
		case 6L:
			RTHOOK(20);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,573,832,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 573, _OBJSIZ_2_0_0_2_0_0_0_1_);
			}
			tr1 = RTCCL(arg2);
			tr8_1 = (nstcall = 1, F128_2108(RTCW(loc2), arg1));
			(nstcall = -1, F574_2340(RTCW(Result), tr1, arg1, loc1, tr8_1));
			break;
		case 2L:
			RTHOOK(21);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,575,823,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 575, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tc1 = (nstcall = 1, F128_2095(RTCW(loc2), arg1));
			(nstcall = -1, F576_2340(RTCW(Result), tr1, arg1, loc1, tc1));
			break;
		case 12L:
			RTHOOK(22);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,566,820,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 566, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tw1 = (nstcall = 1, F128_2096(RTCW(loc2), arg1));
			(nstcall = -1, F567_2340(RTCW(Result), tr1, arg1, loc1, tw1));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_attribute_record */
EIF_REFERENCE F129_2145 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("object_attribute_record", 128, Current, 2, 3, 2077);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F129_2142(Current, arg2));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,581,829,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 581, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tb1 = (nstcall = 0, F26_571(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F582_2354(RTCW(Result), tr1, arg1, loc1, arg2, tb1));
			break;
		case 2L:
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,580,823,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 580, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tc1 = (nstcall = 0, F26_569(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F581_2354(RTCW(Result), tr1, arg1, loc1, arg2, tc1));
			break;
		case 12L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,586,820,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 586, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tw1 = (nstcall = 0, F26_570(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F587_2354(RTCW(Result), tr1, arg1, loc1, arg2, tw1));
			break;
		case 9L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,583,814,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 583, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti1_1 = (nstcall = 0, F26_576(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F584_2354(RTCW(Result), tr1, arg1, loc1, arg2, ti1_1));
			break;
		case 10L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,588,847,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 588, _OBJSIZ_2_0_1_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti2_1 = (nstcall = 0, F26_577(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F589_2354(RTCW(Result), tr1, arg1, loc1, arg2, ti2_1));
			break;
		case 4L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,578,844,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 578, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti4_1 = (nstcall = 0, F26_578(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F579_2354(RTCW(Result), tr1, arg1, loc1, arg2, ti4_1));
			break;
		case 11L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,579,826,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 579, _OBJSIZ_2_0_0_3_0_0_1_0_);
			}
			tr1 = RTCCL(arg3);
			ti8_1 = (nstcall = 0, F26_579(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F580_2354(RTCW(Result), tr1, arg1, loc1, arg2, ti8_1));
			break;
		case 13L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,589,835,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 589, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F26_572(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F590_2354(RTCW(Result), tr1, arg1, loc1, arg2, tu1_1));
			break;
		case 14L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,584,841,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 584, _OBJSIZ_2_0_1_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu2_1 = (nstcall = 0, F26_573(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F585_2354(RTCW(Result), tr1, arg1, loc1, arg2, tu2_1));
			break;
		case 15L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,590,838,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 590, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F26_572(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tu4_1 = (EIF_NATURAL_32) tu1_1;
			(nstcall = -1, F591_2354(RTCW(Result), tr1, arg1, loc1, arg2, tu4_1));
			break;
		case 16L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,587,850,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 587, _OBJSIZ_2_0_0_3_0_0_1_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F26_572(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tu8_1 = (EIF_NATURAL_64) tu1_1;
			(nstcall = -1, F588_2354(RTCW(Result), tr1, arg1, loc1, arg2, tu8_1));
			break;
		case 5L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,582,817,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 582, _OBJSIZ_2_0_0_3_1_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr4_1 = (nstcall = 0, F26_580(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F583_2354(RTCW(Result), tr1, arg1, loc1, arg2, tr4_1));
			break;
		case 6L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,585,832,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 585, _OBJSIZ_2_0_0_3_0_0_0_1_);
			}
			tr1 = RTCCL(arg3);
			tr8_1 = (nstcall = 0, F26_582(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F586_2354(RTCW(Result), tr1, arg1, loc1, arg2, tr8_1));
			break;
		case 0L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,577,883,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 577, _OBJSIZ_2_0_0_3_0_1_0_0_);
			}
			tr1 = RTCCL(arg3);
			tp1 = (nstcall = 0, F26_581(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F578_2354(RTCW(Result), tr1, arg1, loc1, arg2, tp1));
			break;
		case 1L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,576,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 576, _OBJSIZ_3_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr2 = (nstcall = 0, F26_568(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F577_2354(RTCW(Result), tr1, arg1, loc1, arg2, tr3));
			break;
		case 7L:
			RTHOOK(19);
			loc2 = RTLNS(eif_new_type(131, 0x01).id, 131, _OBJSIZ_1_0_0_2_0_0_0_0_);
			tr1 = RTCCL(arg3);
			(nstcall = -1, F132_2240(RTCW(loc2), tr1, arg1));
			RTHOOK(20);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,576,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 576, _OBJSIZ_3_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr2 = (nstcall = 1, F132_2241(RTCW(loc2)));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F577_2354(RTCW(Result), tr1, arg1, loc1, arg2, tr3));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_local_record */
EIF_REFERENCE F129_2146 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("object_local_record", 128, Current, 1, 3, 2078);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F129_2142(Current, arg3));
	RTHOOK(2);
	switch (loc1) {
		case 3L:
			RTHOOK(3);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,551,829,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 551, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F552_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 2L:
			RTHOOK(4);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,560,823,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 560, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F561_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 12L:
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,556,820,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 556, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F557_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 13L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,549,835,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 549, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F550_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 14L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,557,841,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 557, _OBJSIZ_1_0_1_4_0_0_0_0_);
			}
			(nstcall = -1, F558_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 15L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,558,838,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 558, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F559_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 16L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,553,850,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 553, _OBJSIZ_1_0_0_4_0_0_1_0_);
			}
			(nstcall = -1, F554_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 9L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,554,814,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 554, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F555_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 10L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,552,847,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 552, _OBJSIZ_1_0_1_4_0_0_0_0_);
			}
			(nstcall = -1, F553_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 4L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,547,844,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 547, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F548_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 11L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,550,826,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 550, _OBJSIZ_1_0_0_4_0_0_1_0_);
			}
			(nstcall = -1, F551_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 5L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,555,817,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 555, _OBJSIZ_1_0_0_4_1_0_0_0_);
			}
			(nstcall = -1, F556_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 6L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,559,832,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 559, _OBJSIZ_1_0_0_4_0_0_0_1_);
			}
			(nstcall = -1, F560_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 0L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,548,883,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 548, _OBJSIZ_1_0_0_4_0_1_0_0_);
			}
			(nstcall = -1, F549_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 1L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,546,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 546, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			(nstcall = -1, F547_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 7L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,546,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 546, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			(nstcall = -1, F547_2322(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case -2L:
			break;
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(20);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2091[Dtype(RTCW(Result))-546])(Result));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_object_is_expanded */
EIF_BOOLEAN F129_2147 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_object_is_expanded", 128, Current, 0, 1, 2079);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F129_2147 ((EIF_POINTER) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_eif_type */
EIF_INTEGER_32 F129_2148 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_eif_type", 128, Current, 0, 1, 2080);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2148 ((EIF_NATURAL_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_field_type */
EIF_NATURAL_32 F129_2149 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_rt_field_type", 128, Current, 0, 2, 2081);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2149 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_dynamic_type */
EIF_INTEGER_32 F129_2150 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_rt_dynamic_type", 128, Current, 0, 1, 2082);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) Dtype(((EIF_REFERENCE) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.set_field_at */
void F129_2151 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLIU(4);
	
	RTEAA("set_field_at", 128, Current, 15, 4, 2083);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F129_2142(Current, arg2));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(829, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(5);
				(nstcall = 0, F26_607(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc2));
			}
			break;
		case 2L:
			RTHOOK(6);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(823, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(7);
				(nstcall = 0, F26_605(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc3));
			}
			break;
		case 12L:
			RTHOOK(8);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(820, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(9);
				(nstcall = 0, F26_606(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc4));
			}
			break;
		case 13L:
			RTHOOK(10);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(835, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(11);
				(nstcall = 0, F26_608(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc5));
			}
			break;
		case 14L:
			RTHOOK(12);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(841, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(13);
				(nstcall = 0, F26_609(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc6));
			}
			break;
		case 15L:
			RTHOOK(14);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(838, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(15);
				(nstcall = 0, F26_610(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc7));
			}
			break;
		case 16L:
			RTHOOK(16);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(850, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(17);
				(nstcall = 0, F26_611(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc8));
			}
			break;
		case 9L:
			RTHOOK(18);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(814, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(19);
				(nstcall = 0, F26_612(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc9));
			}
			break;
		case 10L:
			RTHOOK(20);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(847, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(21);
				(nstcall = 0, F26_613(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc10));
			}
			break;
		case 4L:
			RTHOOK(22);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(844, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(23);
				(nstcall = 0, F26_614(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc11));
			}
			break;
		case 11L:
			RTHOOK(24);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(826, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(25);
				(nstcall = 0, F26_615(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc12));
			}
			break;
		case 5L:
			RTHOOK(26);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_32 *), eif_new_type(817, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(27);
				(nstcall = 0, F26_616(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc13));
			}
			break;
		case 6L:
			RTHOOK(28);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_64 *), eif_new_type(832, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(29);
				(nstcall = 0, F26_604(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc14));
			}
			break;
		case 0L:
			RTHOOK(30);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_POINTER *), eif_new_type(883, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(31);
				(nstcall = 0, F26_617(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc15));
			}
			break;
		case 1L:
			RTHOOK(32);
			tr1 = RTCCL(arg3);
			(nstcall = 0, F26_603(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), tr1));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
}

/* {RT_DBG_INTERNAL}.c_stack_value_at */
EIF_REFERENCE F129_2152 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("c_stack_value_at", 128, Current, 0, 4, 2084);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2152 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.set_stack_value_at */
EIF_INTEGER_32 F129_2156 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg5);
	RTLIU(3);
	
	RTEAA("set_stack_value_at", 128, Current, 16, 5, 2088);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_loc_type_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F129_2142(Current, arg4));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(829, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(5);
				Result = (nstcall = 0, F129_2157(Current, arg1, arg2, arg3, loc2));
			}
			break;
		case 2L:
			RTHOOK(6);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(823, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(7);
				Result = (nstcall = 0, F129_2158(Current, arg1, arg2, arg3, loc3));
			}
			break;
		case 12L:
			RTHOOK(8);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(820, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(9);
				Result = (nstcall = 0, F129_2159(Current, arg1, arg2, arg3, loc4));
			}
			break;
		case 13L:
			RTHOOK(10);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(835, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(11);
				Result = (nstcall = 0, F129_2160(Current, arg1, arg2, arg3, loc5));
			}
			break;
		case 14L:
			RTHOOK(12);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(841, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(13);
				Result = (nstcall = 0, F129_2161(Current, arg1, arg2, arg3, loc6));
			}
			break;
		case 15L:
			RTHOOK(14);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(838, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(15);
				Result = (nstcall = 0, F129_2162(Current, arg1, arg2, arg3, loc7));
			}
			break;
		case 16L:
			RTHOOK(16);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(850, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(17);
				Result = (nstcall = 0, F129_2163(Current, arg1, arg2, arg3, loc8));
			}
			break;
		case 9L:
			RTHOOK(18);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(814, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(19);
				Result = (nstcall = 0, F129_2164(Current, arg1, arg2, arg3, loc9));
			}
			break;
		case 10L:
			RTHOOK(20);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(847, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(21);
				Result = (nstcall = 0, F129_2165(Current, arg1, arg2, arg3, loc10));
			}
			break;
		case 4L:
			RTHOOK(22);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(844, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(23);
				Result = (nstcall = 0, F129_2166(Current, arg1, arg2, arg3, loc11));
			}
			break;
		case 11L:
			RTHOOK(24);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(826, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(25);
				Result = (nstcall = 0, F129_2167(Current, arg1, arg2, arg3, loc12));
			}
			break;
		case 5L:
			RTHOOK(26);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_32 *), eif_new_type(817, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(27);
				Result = (nstcall = 0, F129_2168(Current, arg1, arg2, arg3, loc13));
			}
			break;
		case 6L:
			RTHOOK(28);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_64 *), eif_new_type(832, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(29);
				Result = (nstcall = 0, F129_2169(Current, arg1, arg2, arg3, loc14));
			}
			break;
		case 0L:
			RTHOOK(30);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_POINTER *), eif_new_type(883, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(31);
				Result = (nstcall = 0, F129_2170(Current, arg1, arg2, arg3, loc15));
			}
			break;
		case 1L:
			RTHOOK(32);
			if ((EIF_BOOLEAN)(arg5 != NULL)) {
				RTHOOK(33);
				Result = (nstcall = 0, F129_2171(Current, arg1, arg2, arg3, arg5));
			} else {
				RTHOOK(34);
				Result = (nstcall = 0, F129_2172(Current, arg1, arg2, arg3));
			}
			break;
		default:
			RTHOOK(35);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_boolean_stack_value */
EIF_INTEGER_32 F129_2157 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_boolean_stack_value", 128, Current, 0, 4, 2089);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2157 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_BOOLEAN) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_character_8_stack_value */
EIF_INTEGER_32 F129_2158 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_character_8_stack_value", 128, Current, 0, 4, 2090);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2158 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_character_32_stack_value */
EIF_INTEGER_32 F129_2159 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_character_32_stack_value", 128, Current, 0, 4, 2091);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2159 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_8_stack_value */
EIF_INTEGER_32 F129_2160 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_natural_8_stack_value", 128, Current, 0, 4, 2092);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2160 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_16_stack_value */
EIF_INTEGER_32 F129_2161 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_natural_16_stack_value", 128, Current, 0, 4, 2093);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2161 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_32_stack_value */
EIF_INTEGER_32 F129_2162 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_natural_32_stack_value", 128, Current, 0, 4, 2094);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2162 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_64_stack_value */
EIF_INTEGER_32 F129_2163 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_natural_64_stack_value", 128, Current, 0, 4, 2095);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2163 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_8_stack_value */
EIF_INTEGER_32 F129_2164 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_integer_8_stack_value", 128, Current, 0, 4, 2096);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2164 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_16_stack_value */
EIF_INTEGER_32 F129_2165 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_integer_16_stack_value", 128, Current, 0, 4, 2097);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2165 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_32_stack_value */
EIF_INTEGER_32 F129_2166 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_integer_32_stack_value", 128, Current, 0, 4, 2098);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2166 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_64_stack_value */
EIF_INTEGER_32 F129_2167 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_integer_64_stack_value", 128, Current, 0, 4, 2099);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2167 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_real_32_stack_value */
EIF_INTEGER_32 F129_2168 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_real_32_stack_value", 128, Current, 0, 4, 2100);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2168 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_real_64_stack_value */
EIF_INTEGER_32 F129_2169 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_real_64_stack_value", 128, Current, 0, 4, 2101);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2169 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_pointer_stack_value */
EIF_INTEGER_32 F129_2170 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_pointer_stack_value", 128, Current, 0, 4, 2102);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2170 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_reference_stack_value */
EIF_INTEGER_32 F129_2171 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_reference_stack_value", 128, Current, 0, 4, 2103);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ref_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F129_2171 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_void_stack_value */
EIF_INTEGER_32 F129_2172 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_void_stack_value", 128, Current, 0, 3, 2104);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F129_2172 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_set_is_inside_rt_eiffel_code */
void F129_2173 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_rt_set_is_inside_rt_eiffel_code", 128, Current, 0, 1, 2105);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F129_2173 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {RT_DBG_INTERNAL}.test_locals */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F129_2174 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg3);
	RTLR(5,tr3);
	RTLR(6,loc3);
	RTLR(7,saved_except);
	RTLIU(8);
	RTXSLS;
	
	RTEAA("test_locals", 128, Current, 3, 4, 2106);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc2) {
		RTHOOK(2);
		(nstcall = 0, F129_2173(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		loc1 = RTMS_EX_H("----------------------------------\012",35,1470523914);
		RTHOOK(4);
		tr1 = RTMS_EX_H("Loc #",5,1869350947);
		tr2 = c_outi(arg2);
		tr2 = (nstcall = 1, F893_6733(tr1, tr2));
		tr1 = RTMS_EX_H("(stack depth=",13,1888178493);
		tr1 = (nstcall = 1, F893_6733(RTCW(tr2), tr1));
		tr2 = c_outi(arg1);
		tr2 = (nstcall = 1, F893_6733(RTCW(tr1), tr2));
		tr1 = RTMS_EX_H(")",1,41);
		tr1 = (nstcall = 1, F893_6733(RTCW(tr2), tr1));
		(nstcall = 1, F893_6731(RTCW(loc1), tr1));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTMS_EX_H(": should be ",12,282022432);
			tr2 = (nstcall = 1, F1_5(arg3));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3875[Dtype(RTCW(tr2))-765])(tr2));
			tr2 = (nstcall = 1, F893_6733(tr1, tr3));
			(nstcall = 1, F893_6731(RTCW(loc1), tr2));
		}
		RTHOOK(7);
		tr1 = RTMS_EX_H("\012",1,10);
		(nstcall = 1, F893_6731(RTCW(loc1), tr1));
		RTHOOK(8);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(9);
		tr1 = RTMS_EX_H(" -> ",4,539835936);
		(nstcall = 1, F893_6731(RTCW(loc1), tr1));
		RTHOOK(10);
		tr1 = (nstcall = 0, F129_2141(Current, arg1, ((EIF_INTEGER_32) 1L), arg2, arg4));
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(11);
			tr1 = (nstcall = 1, F1_5(loc3));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3875[Dtype(RTCW(tr1))-765])(tr1));
			tr1 = RTMS_EX_H("=",1,61);
			tr1 = (nstcall = 1, F897_6998(RTCW(tr2), tr1));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc3)-0])(loc3));
			tr2 = (nstcall = 1, F897_6998(RTCW(tr1), tr2));
			(nstcall = 1, F893_6731(RTCW(loc1), tr2));
		} else {
			RTHOOK(12);
			tr1 = RTMS_EX_H("Void object",11,160638836);
			(nstcall = 1, F893_6731(RTCW(loc1), tr1));
		}
		RTHOOK(13);
		tr1 = RTMS_EX_H("\012",1,10);
		(nstcall = 1, F893_6731(RTCW(loc1), tr1));
		RTHOOK(14);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(15);
		(nstcall = 0, F129_2173(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(17);
		(nstcall = 0, F129_2173(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(18);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.test_set_local */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F129_2175 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg3);
	RTLR(5,tr3);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	
	RTEAA("test_set_local", 128, Current, 3, 4, 2107);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc3) {
		RTHOOK(2);
		(nstcall = 0, F129_2173(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		loc1 = RTMS_EX_H("----------------------------------\012",35,1470523914);
		RTHOOK(4);
		tr1 = RTMS_EX_H("SetLoc #",8,1411988515);
		tr2 = c_outi(arg2);
		tr2 = (nstcall = 1, F893_6733(tr1, tr2));
		tr1 = RTMS_EX_H("(stack depth=",13,1888178493);
		tr1 = (nstcall = 1, F893_6733(RTCW(tr2), tr1));
		tr2 = c_outi(arg1);
		tr2 = (nstcall = 1, F893_6733(RTCW(tr1), tr2));
		tr1 = RTMS_EX_H(")",1,41);
		tr1 = (nstcall = 1, F893_6733(RTCW(tr2), tr1));
		(nstcall = 1, F893_6731(RTCW(loc1), tr1));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTMS_EX_H(": value ",8,992027424);
			tr2 = (nstcall = 1, F1_5(arg3));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3875[Dtype(RTCW(tr2))-765])(tr2));
			tr2 = (nstcall = 1, F893_6733(tr1, tr3));
			(nstcall = 1, F893_6731(RTCW(loc1), tr2));
		} else {
			RTHOOK(7);
			tr1 = RTMS_EX_H(": value Void",12,962399588);
			(nstcall = 1, F893_6731(RTCW(loc1), tr1));
		}
		RTHOOK(8);
		tr1 = RTMS_EX_H("\012",1,10);
		(nstcall = 1, F893_6731(RTCW(loc1), tr1));
		RTHOOK(9);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(10);
		tr1 = RTCCL(arg3);
		loc2 = (nstcall = 0, F129_2156(Current, arg1, ((EIF_INTEGER_32) 1L), arg2, arg4, tr1));
		RTHOOK(11);
		tr1 = RTMS_EX_H(" -> ",4,539835936);
		(nstcall = 1, F893_6731(RTCW(loc1), tr1));
		RTHOOK(12);
		tr1 = RTMS_EX_H("Result = ",9,495958816);
		tr2 = c_outi(loc2);
		tr2 = (nstcall = 1, F893_6733(tr1, tr2));
		(nstcall = 1, F893_6731(RTCW(loc1), tr2));
		RTHOOK(13);
		tr1 = RTMS_EX_H("\012",1,10);
		(nstcall = 1, F893_6731(RTCW(loc1), tr1));
		RTHOOK(14);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(15);
		(nstcall = 0, F129_2173(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(17);
		(nstcall = 0, F129_2173(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(18);
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.reflected_object */
static EIF_REFERENCE F129_2176_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(160)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("reflected_object", 128, Current, 0, 0, 2108);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(131, 0x01).id, 131, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F132_2238(RTCW(tr1), Current));
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

EIF_REFERENCE F129_2176 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(160,F129_2176_body,(Current));
}

/* {RT_DBG_INTERNAL}.reflector */
static EIF_REFERENCE F129_2177_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(181)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("reflector", 128, Current, 0, 0, 2109);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(125, 0x01).id, 125, _OBJSIZ_0_0_0_0_0_0_0_0_);
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

EIF_REFERENCE F129_2177 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(181,F129_2177_body,(Current));
}

void EIF_Minit134 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
