/*
 * Code for class RT_DBG_INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt112.h"
#include "eif_debug.h"
#include "eif_internal.h"
#include "eif_eiffel.h"
#include "eif_macros.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F133_1728
static int inline_F133_1728 (EIF_POINTER arg1)
{
	return (int) (eif_is_expanded(HEADER(arg1)->ov_flags))
	;
}
#define INLINE_F133_1728
#endif
#ifndef INLINE_F133_1729
static EIF_INTEGER_32 inline_F133_1729 (EIF_NATURAL_32 arg1)
{
	return (EIF_INTEGER_32) (ei_eif_type((uint32) arg1))
	;
}
#define INLINE_F133_1729
#endif
#ifndef INLINE_F133_1730
static EIF_NATURAL_32 inline_F133_1730 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_NATURAL_32) (System(To_dtype(arg2)).cn_types[arg1])
	;
}
#define INLINE_F133_1730
#endif
#ifndef INLINE_F133_1733
static EIF_REFERENCE inline_F133_1733 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	return (EIF_REFERENCE) rt_dbg_stack_value((uint32)arg1, (uint32)arg2, (uint32)arg3, (uint32)arg4);
#else
	return NULL;
#endif
	;
}
#define INLINE_F133_1733
#endif
#ifndef INLINE_F133_1738
static EIF_INTEGER_32 inline_F133_1738 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_BOOL; a_val.it_bool = (EIF_BOOLEAN) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1738
#endif
#ifndef INLINE_F133_1739
static EIF_INTEGER_32 inline_F133_1739 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_CHAR; a_val.it_c1 = (EIF_CHARACTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1739
#endif
#ifndef INLINE_F133_1740
static EIF_INTEGER_32 inline_F133_1740 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_WCHAR; a_val.it_c4 = (EIF_WIDE_CHAR) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1740
#endif
#ifndef INLINE_F133_1741
static EIF_INTEGER_32 inline_F133_1741 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT8; a_val.it_n1 = (EIF_NATURAL_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1741
#endif
#ifndef INLINE_F133_1742
static EIF_INTEGER_32 inline_F133_1742 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT16; a_val.it_n2 = (EIF_NATURAL_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1742
#endif
#ifndef INLINE_F133_1743
static EIF_INTEGER_32 inline_F133_1743 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT32; a_val.it_n4 = (EIF_NATURAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1743
#endif
#ifndef INLINE_F133_1744
static EIF_INTEGER_32 inline_F133_1744 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT64; a_val.it_n8 = (EIF_NATURAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1744
#endif
#ifndef INLINE_F133_1745
static EIF_INTEGER_32 inline_F133_1745 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT8; a_val.it_i1 = (EIF_INTEGER_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1745
#endif
#ifndef INLINE_F133_1746
static EIF_INTEGER_32 inline_F133_1746 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT16; a_val.it_i2 = (EIF_INTEGER_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1746
#endif
#ifndef INLINE_F133_1747
static EIF_INTEGER_32 inline_F133_1747 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT32; a_val.it_i4 = (EIF_INTEGER_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1747
#endif
#ifndef INLINE_F133_1748
static EIF_INTEGER_32 inline_F133_1748 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT64; a_val.it_i8 = (EIF_INTEGER_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1748
#endif
#ifndef INLINE_F133_1749
static EIF_INTEGER_32 inline_F133_1749 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL32; a_val.it_r4 = (EIF_REAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1749
#endif
#ifndef INLINE_F133_1750
static EIF_INTEGER_32 inline_F133_1750 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL64; a_val.it_r8 = (EIF_REAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1750
#endif
#ifndef INLINE_F133_1751
static EIF_INTEGER_32 inline_F133_1751 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_POINTER; a_val.it_p = (EIF_POINTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F133_1751
#endif
#ifndef INLINE_F133_1752
static EIF_INTEGER_32 inline_F133_1752 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
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
#define INLINE_F133_1752
#endif
#ifndef INLINE_F133_1753
static EIF_INTEGER_32 inline_F133_1753 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
#define INLINE_F133_1753
#endif
#ifndef INLINE_F133_1754
static void inline_F133_1754 (EIF_INTEGER_32 arg1)
{
	#ifdef WORKBENCH
	EIF_GET_CONTEXT; is_inside_rt_eiffel_code = arg1;
#endif
	;
}
#define INLINE_F133_1754
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_DBG_INTERNAL}.object_field_count */
EIF_INTEGER_32 F133_1716 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("object_field_count", 132, Current, 0, 1, 1701);
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
	tr1 = RTOSCF(1757,(nstcall = 0, F133_1757), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F136_1828(RTCW(tr1), tr2));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F130_1615(RTCV(RTOSCF(1757,(nstcall = 0, F133_1757), (Current)))));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_records */
EIF_REFERENCE F133_1717 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("object_records", 132, Current, 4, 1, 1702);
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
	loc2 = (nstcall = 0, F133_1716(Current, tr1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		{
			static EIF_TYPE_INDEX typarr0[] = {561,0xFF01,597,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc3 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F562_2774(RTCW(loc3), loc2));
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(7);
			tr1 = RTCCL(arg1);
			tr1 = (nstcall = 0, F133_1725(Current, loc1, tr1));
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				RTHOOK(8);
				(nstcall = 1, F562_2815(RTCW(loc3), loc4));
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
EIF_BOOLEAN F133_1718 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("object_is_expanded", 132, Current, 0, 1, 1703);
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
	Result = EIF_TEST ((nstcall = 0, F133_1728(Current, arg1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_index_at */
EIF_INTEGER_32 F133_1719 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("field_index_at", 132, Current, 2, 2, 1704);
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
	loc2 = RTOSCF(1757,(nstcall = 0, F133_1757), (Current));
	RTHOOK(3);
	tr1 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(loc2), tr1));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F130_1615(RTCW(loc2)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L)))) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F130_1576(RTCW(loc2), loc1));
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
EIF_REFERENCE F133_1720 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("field_name_at", 132, Current, 1, 2, 1705);
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
	loc1 = (nstcall = 0, F133_1719(Current, arg1, tr1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = RTOSCF(1757,(nstcall = 0, F133_1757), (Current));
		tr2 = RTCCL(arg2);
		(nstcall = 1, F136_1828(RTCW(tr1), tr2));
		RTHOOK(5);
		tr1 = RTOSCF(1757,(nstcall = 0, F133_1757), (Current));
		tr2 = (nstcall = 1, F130_1575(RTCW(tr1), loc1));
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
EIF_REFERENCE F133_1721 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
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
	
	RTEAA("field_at", 132, Current, 1, 3, 1706);
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
	loc1 = (nstcall = 0, F133_1723(Current, arg2));
	RTHOOK(4);
	switch (loc1) {
		case 3L:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F10_323(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 2L:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F10_321(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 12L:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F10_322(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 13L:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F10_324(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 14L:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F10_325(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 15L:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F10_326(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 16L:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F10_327(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 9L:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F10_328(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 10L:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F10_329(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 4L:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F10_330(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 11L:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F10_331(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 5L:
			RTHOOK(16);
			Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F10_332(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 6L:
			RTHOOK(17);
			Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F10_334(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 0L:
			RTHOOK(18);
			Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F10_333(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 1L:
			RTHOOK(19);
			Result = (nstcall = 0, F10_320(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
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
EIF_REFERENCE F133_1722 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("stack_value_at", 132, Current, 0, 4, 1707);
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
	Result = (nstcall = 0, F133_1733(Current, arg1, arg2, arg3, arg4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.eif_type */
EIF_INTEGER_32 F133_1723 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("eif_type", 132, Current, 0, 1, 1708);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F133_1729(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.rt_dynamic_type */
EIF_INTEGER_32 F133_1724 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("rt_dynamic_type", 132, Current, 0, 1, 1709);
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
	Result = (nstcall = 0, F133_1731(Current, arg1));
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
EIF_REFERENCE F133_1725 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("object_record", 132, Current, 2, 2, 1710);
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
	loc2 = RTOSCF(1757,(nstcall = 0, F133_1757), (Current));
	RTHOOK(3);
	tr1 = RTCCL(arg2);
	(nstcall = 1, F136_1828(RTCW(loc2), tr1));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F130_1577(RTCW(loc2), arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F130_1576(RTCW(loc2), arg1));
	tu4_1 = (nstcall = 0, F133_1730(Current, arg1, loc1));
	tr1 = RTCCL(arg2);
	Result = (nstcall = 0, F133_1726(Current, ti4_1, tu4_1, tr1));
	RTHOOK(6);
	switch (loc1) {
		case 9L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,605,703,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 605, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti1_1 = (nstcall = 1, F130_1589(RTCW(loc2), arg1));
			(nstcall = -1, F606_3150(RTCW(Result), tr1, arg1, loc1, ti1_1));
			break;
		case 10L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,610,700,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 610, _OBJSIZ_2_0_1_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti2_1 = (nstcall = 1, F130_1590(RTCW(loc2), arg1));
			(nstcall = -1, F611_3150(RTCW(Result), tr1, arg1, loc1, ti2_1));
			break;
		case 4L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,603,697,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 603, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti4_1 = (nstcall = 1, F130_1591(RTCW(loc2), arg1));
			(nstcall = -1, F604_3150(RTCW(Result), tr1, arg1, loc1, ti4_1));
			break;
		case 11L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,606,694,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 606, _OBJSIZ_2_0_0_2_0_0_1_0_);
			}
			tr1 = RTCCL(arg2);
			ti8_1 = (nstcall = 1, F130_1592(RTCW(loc2), arg1));
			(nstcall = -1, F607_3150(RTCW(Result), tr1, arg1, loc1, ti8_1));
			break;
		case 13L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,602,715,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 602, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu1_1 = (nstcall = 1, F130_1585(RTCW(loc2), arg1));
			(nstcall = -1, F603_3150(RTCW(Result), tr1, arg1, loc1, tu1_1));
			break;
		case 14L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,608,712,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 608, _OBJSIZ_2_0_1_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu2_1 = (nstcall = 1, F130_1586(RTCW(loc2), arg1));
			(nstcall = -1, F609_3150(RTCW(Result), tr1, arg1, loc1, tu2_1));
			break;
		case 15L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,601,709,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 601, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu4_1 = (nstcall = 1, F130_1587(RTCW(loc2), arg1));
			(nstcall = -1, F602_3150(RTCW(Result), tr1, arg1, loc1, tu4_1));
			break;
		case 16L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,604,706,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 604, _OBJSIZ_2_0_0_2_0_0_1_0_);
			}
			tr1 = RTCCL(arg2);
			tu8_1 = (nstcall = 1, F130_1588(RTCW(loc2), arg1));
			(nstcall = -1, F605_3150(RTCW(Result), tr1, arg1, loc1, tu8_1));
			break;
		case 0L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,612,763,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 612, _OBJSIZ_2_0_0_2_0_1_0_0_);
			}
			tr1 = RTCCL(arg2);
			tp1 = (nstcall = 1, F130_1594(RTCW(loc2), arg1));
			(nstcall = -1, F613_3150(RTCW(Result), tr1, arg1, loc1, tp1));
			break;
		case 1L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,598,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 598, _OBJSIZ_3_0_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr2 = (nstcall = 1, F130_1562(RTCW(loc2), arg1));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F599_3150(RTCW(Result), tr1, arg1, loc1, tr3));
			break;
		case 7L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,598,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 598, _OBJSIZ_3_0_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr2 = (nstcall = 1, F130_1561(RTCW(loc2), arg1));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F599_3150(RTCW(Result), tr1, arg1, loc1, tr3));
			break;
		case 3L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,600,730,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 600, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tb1 = (nstcall = 1, F130_1584(RTCW(loc2), arg1));
			(nstcall = -1, F601_3150(RTCW(Result), tr1, arg1, loc1, tb1));
			break;
		case 5L:
			RTHOOK(19);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,609,718,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 609, _OBJSIZ_2_0_0_2_1_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr4_1 = (nstcall = 1, F130_1593(RTCW(loc2), arg1));
			(nstcall = -1, F610_3150(RTCW(Result), tr1, arg1, loc1, tr4_1));
			break;
		case 6L:
			RTHOOK(20);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,611,721,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 611, _OBJSIZ_2_0_0_2_0_0_0_1_);
			}
			tr1 = RTCCL(arg2);
			tr8_1 = (nstcall = 1, F130_1595(RTCW(loc2), arg1));
			(nstcall = -1, F612_3150(RTCW(Result), tr1, arg1, loc1, tr8_1));
			break;
		case 2L:
			RTHOOK(21);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,607,727,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 607, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tc1 = (nstcall = 1, F130_1582(RTCW(loc2), arg1));
			(nstcall = -1, F608_3150(RTCW(Result), tr1, arg1, loc1, tc1));
			break;
		case 12L:
			RTHOOK(22);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,599,724,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 599, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tw1 = (nstcall = 1, F130_1583(RTCW(loc2), arg1));
			(nstcall = -1, F600_3150(RTCW(Result), tr1, arg1, loc1, tw1));
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
EIF_REFERENCE F133_1726 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
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
	
	RTEAA("object_attribute_record", 132, Current, 2, 3, 1711);
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
	loc1 = (nstcall = 0, F133_1723(Current, arg2));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,616,730,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 616, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tb1 = (nstcall = 0, F10_323(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F617_3164(RTCW(Result), tr1, arg1, loc1, arg2, tb1));
			break;
		case 2L:
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,614,727,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 614, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tc1 = (nstcall = 0, F10_321(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F615_3164(RTCW(Result), tr1, arg1, loc1, arg2, tc1));
			break;
		case 12L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,617,724,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 617, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tw1 = (nstcall = 0, F10_322(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F618_3164(RTCW(Result), tr1, arg1, loc1, arg2, tw1));
			break;
		case 9L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,627,703,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 627, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti1_1 = (nstcall = 0, F10_328(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F628_3164(RTCW(Result), tr1, arg1, loc1, arg2, ti1_1));
			break;
		case 10L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,622,700,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 622, _OBJSIZ_2_0_1_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti2_1 = (nstcall = 0, F10_329(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F623_3164(RTCW(Result), tr1, arg1, loc1, arg2, ti2_1));
			break;
		case 4L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,621,697,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 621, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti4_1 = (nstcall = 0, F10_330(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F622_3164(RTCW(Result), tr1, arg1, loc1, arg2, ti4_1));
			break;
		case 11L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,615,694,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 615, _OBJSIZ_2_0_0_3_0_0_1_0_);
			}
			tr1 = RTCCL(arg3);
			ti8_1 = (nstcall = 0, F10_331(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F616_3164(RTCW(Result), tr1, arg1, loc1, arg2, ti8_1));
			break;
		case 13L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,625,715,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 625, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F10_324(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F626_3164(RTCW(Result), tr1, arg1, loc1, arg2, tu1_1));
			break;
		case 14L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,619,712,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 619, _OBJSIZ_2_0_1_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu2_1 = (nstcall = 0, F10_325(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F620_3164(RTCW(Result), tr1, arg1, loc1, arg2, tu2_1));
			break;
		case 15L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,626,709,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 626, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F10_324(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tu4_1 = (EIF_NATURAL_32) tu1_1;
			(nstcall = -1, F627_3164(RTCW(Result), tr1, arg1, loc1, arg2, tu4_1));
			break;
		case 16L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,620,706,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 620, _OBJSIZ_2_0_0_3_0_0_1_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F10_324(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tu8_1 = (EIF_NATURAL_64) tu1_1;
			(nstcall = -1, F621_3164(RTCW(Result), tr1, arg1, loc1, arg2, tu8_1));
			break;
		case 5L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,618,718,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 618, _OBJSIZ_2_0_0_3_1_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr4_1 = (nstcall = 0, F10_332(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F619_3164(RTCW(Result), tr1, arg1, loc1, arg2, tr4_1));
			break;
		case 6L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,623,721,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 623, _OBJSIZ_2_0_0_3_0_0_0_1_);
			}
			tr1 = RTCCL(arg3);
			tr8_1 = (nstcall = 0, F10_334(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F624_3164(RTCW(Result), tr1, arg1, loc1, arg2, tr8_1));
			break;
		case 0L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,624,763,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 624, _OBJSIZ_2_0_0_3_0_1_0_0_);
			}
			tr1 = RTCCL(arg3);
			tp1 = (nstcall = 0, F10_333(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F625_3164(RTCW(Result), tr1, arg1, loc1, arg2, tp1));
			break;
		case 1L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,613,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 613, _OBJSIZ_3_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr2 = (nstcall = 0, F10_320(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F614_3164(RTCW(Result), tr1, arg1, loc1, arg2, tr3));
			break;
		case 7L:
			RTHOOK(19);
			loc2 = RTLNS(eif_new_type(135, 0x01).id, 135, _OBJSIZ_1_0_0_2_0_0_0_0_);
			tr1 = RTCCL(arg3);
			(nstcall = -1, F136_1821(RTCW(loc2), tr1, arg1));
			RTHOOK(20);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,613,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 613, _OBJSIZ_3_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr2 = (nstcall = 1, F136_1822(RTCW(loc2)));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F614_3164(RTCW(Result), tr1, arg1, loc1, arg2, tr3));
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
EIF_REFERENCE F133_1727 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3)
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
	
	RTEAA("object_local_record", 132, Current, 1, 3, 1712);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F133_1723(Current, arg3));
	RTHOOK(2);
	switch (loc1) {
		case 3L:
			RTHOOK(3);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,631,730,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 631, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F632_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 2L:
			RTHOOK(4);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,638,727,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 638, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F639_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 12L:
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,630,724,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 630, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F631_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 13L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,633,715,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 633, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F634_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 14L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,639,712,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 639, _OBJSIZ_1_0_1_4_0_0_0_0_);
			}
			(nstcall = -1, F640_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 15L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,640,709,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 640, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F641_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 16L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,706,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 634, _OBJSIZ_1_0_0_4_0_0_1_0_);
			}
			(nstcall = -1, F635_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 9L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,635,703,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 635, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F636_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 10L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,641,700,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 641, _OBJSIZ_1_0_1_4_0_0_0_0_);
			}
			(nstcall = -1, F642_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 4L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,642,697,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 642, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F643_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 11L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,629,694,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 629, _OBJSIZ_1_0_0_4_0_0_1_0_);
			}
			(nstcall = -1, F630_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 5L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,632,718,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 632, _OBJSIZ_1_0_0_4_1_0_0_0_);
			}
			(nstcall = -1, F633_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 6L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,636,721,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 636, _OBJSIZ_1_0_0_4_0_0_0_1_);
			}
			(nstcall = -1, F637_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 0L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,637,763,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 637, _OBJSIZ_1_0_0_4_0_1_0_0_);
			}
			(nstcall = -1, F638_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 1L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,628,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 628, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			(nstcall = -1, F629_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 7L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,628,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 628, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			(nstcall = -1, F629_3180(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case -2L:
			break;
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(20);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2485[Dtype(RTCW(Result))-598])(Result));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_object_is_expanded */
EIF_BOOLEAN F133_1728 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_object_is_expanded", 132, Current, 0, 1, 1713);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F133_1728 ((EIF_POINTER) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_eif_type */
EIF_INTEGER_32 F133_1729 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("c_eif_type", 132, Current, 0, 1, 1714);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1729 ((EIF_NATURAL_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_field_type */
EIF_NATURAL_32 F133_1730 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("c_rt_field_type", 132, Current, 0, 2, 1715);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1730 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_dynamic_type */
EIF_INTEGER_32 F133_1731 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_rt_dynamic_type", 132, Current, 0, 1, 1716);
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
void F133_1732 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
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
	
	RTEAA("set_field_at", 132, Current, 15, 4, 1717);
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
	loc1 = (nstcall = 0, F133_1723(Current, arg2));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(730, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(5);
				(nstcall = 0, F10_359(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc2));
			}
			break;
		case 2L:
			RTHOOK(6);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(727, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(7);
				(nstcall = 0, F10_357(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc3));
			}
			break;
		case 12L:
			RTHOOK(8);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(724, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(9);
				(nstcall = 0, F10_358(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc4));
			}
			break;
		case 13L:
			RTHOOK(10);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(715, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(11);
				(nstcall = 0, F10_360(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc5));
			}
			break;
		case 14L:
			RTHOOK(12);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(712, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(13);
				(nstcall = 0, F10_361(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc6));
			}
			break;
		case 15L:
			RTHOOK(14);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(709, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(15);
				(nstcall = 0, F10_362(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc7));
			}
			break;
		case 16L:
			RTHOOK(16);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(706, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(17);
				(nstcall = 0, F10_363(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc8));
			}
			break;
		case 9L:
			RTHOOK(18);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(703, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(19);
				(nstcall = 0, F10_364(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc9));
			}
			break;
		case 10L:
			RTHOOK(20);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(700, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(21);
				(nstcall = 0, F10_365(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc10));
			}
			break;
		case 4L:
			RTHOOK(22);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(697, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(23);
				(nstcall = 0, F10_366(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc11));
			}
			break;
		case 11L:
			RTHOOK(24);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(694, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(25);
				(nstcall = 0, F10_367(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc12));
			}
			break;
		case 5L:
			RTHOOK(26);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_32 *), eif_new_type(718, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(27);
				(nstcall = 0, F10_368(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc13));
			}
			break;
		case 6L:
			RTHOOK(28);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_64 *), eif_new_type(721, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(29);
				(nstcall = 0, F10_356(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc14));
			}
			break;
		case 0L:
			RTHOOK(30);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_POINTER *), eif_new_type(763, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(31);
				(nstcall = 0, F10_369(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc15));
			}
			break;
		case 1L:
			RTHOOK(32);
			tr1 = RTCCL(arg3);
			(nstcall = 0, F10_355(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), tr1));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
}

/* {RT_DBG_INTERNAL}.c_stack_value_at */
EIF_REFERENCE F133_1733 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("c_stack_value_at", 132, Current, 0, 4, 1718);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1733 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.set_stack_value_at */
EIF_INTEGER_32 F133_1737 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4, EIF_REFERENCE arg5)
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
	
	RTEAA("set_stack_value_at", 132, Current, 16, 5, 1722);
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
	loc1 = (nstcall = 0, F133_1723(Current, arg4));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(730, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(5);
				Result = (nstcall = 0, F133_1738(Current, arg1, arg2, arg3, loc2));
			}
			break;
		case 2L:
			RTHOOK(6);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(727, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(7);
				Result = (nstcall = 0, F133_1739(Current, arg1, arg2, arg3, loc3));
			}
			break;
		case 12L:
			RTHOOK(8);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(724, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(9);
				Result = (nstcall = 0, F133_1740(Current, arg1, arg2, arg3, loc4));
			}
			break;
		case 13L:
			RTHOOK(10);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(715, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(11);
				Result = (nstcall = 0, F133_1741(Current, arg1, arg2, arg3, loc5));
			}
			break;
		case 14L:
			RTHOOK(12);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(712, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(13);
				Result = (nstcall = 0, F133_1742(Current, arg1, arg2, arg3, loc6));
			}
			break;
		case 15L:
			RTHOOK(14);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(709, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(15);
				Result = (nstcall = 0, F133_1743(Current, arg1, arg2, arg3, loc7));
			}
			break;
		case 16L:
			RTHOOK(16);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(706, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(17);
				Result = (nstcall = 0, F133_1744(Current, arg1, arg2, arg3, loc8));
			}
			break;
		case 9L:
			RTHOOK(18);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(703, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(19);
				Result = (nstcall = 0, F133_1745(Current, arg1, arg2, arg3, loc9));
			}
			break;
		case 10L:
			RTHOOK(20);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(700, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(21);
				Result = (nstcall = 0, F133_1746(Current, arg1, arg2, arg3, loc10));
			}
			break;
		case 4L:
			RTHOOK(22);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(697, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(23);
				Result = (nstcall = 0, F133_1747(Current, arg1, arg2, arg3, loc11));
			}
			break;
		case 11L:
			RTHOOK(24);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(694, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(25);
				Result = (nstcall = 0, F133_1748(Current, arg1, arg2, arg3, loc12));
			}
			break;
		case 5L:
			RTHOOK(26);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_32 *), eif_new_type(718, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(27);
				Result = (nstcall = 0, F133_1749(Current, arg1, arg2, arg3, loc13));
			}
			break;
		case 6L:
			RTHOOK(28);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_64 *), eif_new_type(721, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(29);
				Result = (nstcall = 0, F133_1750(Current, arg1, arg2, arg3, loc14));
			}
			break;
		case 0L:
			RTHOOK(30);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_POINTER *), eif_new_type(763, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(31);
				Result = (nstcall = 0, F133_1751(Current, arg1, arg2, arg3, loc15));
			}
			break;
		case 1L:
			RTHOOK(32);
			if ((EIF_BOOLEAN)(arg5 != NULL)) {
				RTHOOK(33);
				Result = (nstcall = 0, F133_1752(Current, arg1, arg2, arg3, arg5));
			} else {
				RTHOOK(34);
				Result = (nstcall = 0, F133_1753(Current, arg1, arg2, arg3));
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
EIF_INTEGER_32 F133_1738 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
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
	
	RTEAA("c_set_boolean_stack_value", 132, Current, 0, 4, 1723);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1738 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_BOOLEAN) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_character_8_stack_value */
EIF_INTEGER_32 F133_1739 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
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
	
	RTEAA("c_set_character_8_stack_value", 132, Current, 0, 4, 1724);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1739 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_character_32_stack_value */
EIF_INTEGER_32 F133_1740 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
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
	
	RTEAA("c_set_character_32_stack_value", 132, Current, 0, 4, 1725);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1740 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_8_stack_value */
EIF_INTEGER_32 F133_1741 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
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
	
	RTEAA("c_set_natural_8_stack_value", 132, Current, 0, 4, 1726);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1741 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_16_stack_value */
EIF_INTEGER_32 F133_1742 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
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
	
	RTEAA("c_set_natural_16_stack_value", 132, Current, 0, 4, 1727);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1742 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_32_stack_value */
EIF_INTEGER_32 F133_1743 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("c_set_natural_32_stack_value", 132, Current, 0, 4, 1728);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1743 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_64_stack_value */
EIF_INTEGER_32 F133_1744 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
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
	
	RTEAA("c_set_natural_64_stack_value", 132, Current, 0, 4, 1729);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1744 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_8_stack_value */
EIF_INTEGER_32 F133_1745 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
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
	
	RTEAA("c_set_integer_8_stack_value", 132, Current, 0, 4, 1730);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1745 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_16_stack_value */
EIF_INTEGER_32 F133_1746 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
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
	
	RTEAA("c_set_integer_16_stack_value", 132, Current, 0, 4, 1731);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1746 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_32_stack_value */
EIF_INTEGER_32 F133_1747 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("c_set_integer_32_stack_value", 132, Current, 0, 4, 1732);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1747 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_64_stack_value */
EIF_INTEGER_32 F133_1748 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
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
	
	RTEAA("c_set_integer_64_stack_value", 132, Current, 0, 4, 1733);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1748 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_real_32_stack_value */
EIF_INTEGER_32 F133_1749 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
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
	
	RTEAA("c_set_real_32_stack_value", 132, Current, 0, 4, 1734);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1749 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_real_64_stack_value */
EIF_INTEGER_32 F133_1750 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
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
	
	RTEAA("c_set_real_64_stack_value", 132, Current, 0, 4, 1735);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1750 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_pointer_stack_value */
EIF_INTEGER_32 F133_1751 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
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
	
	RTEAA("c_set_pointer_stack_value", 132, Current, 0, 4, 1736);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1751 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_reference_stack_value */
EIF_INTEGER_32 F133_1752 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
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
	
	RTEAA("c_set_reference_stack_value", 132, Current, 0, 4, 1737);
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
	Result = inline_F133_1752 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_void_stack_value */
EIF_INTEGER_32 F133_1753 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("c_set_void_stack_value", 132, Current, 0, 3, 1738);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F133_1753 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_set_is_inside_rt_eiffel_code */
void F133_1754 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_rt_set_is_inside_rt_eiffel_code", 132, Current, 0, 1, 1739);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F133_1754 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {RT_DBG_INTERNAL}.test_locals */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F133_1755 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
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
	
	RTEAA("test_locals", 132, Current, 3, 4, 1740);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc2) {
		RTHOOK(2);
		(nstcall = 0, F133_1754(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		loc1 = RTMS_EX_H("----------------------------------\012",35,1470523914);
		RTHOOK(4);
		tr1 = RTMS_EX_H("Loc #",5,1869350947);
		tr2 = c_outi(arg2);
		tr2 = (nstcall = 1, F778_4902(tr1, tr2));
		tr1 = RTMS_EX_H("(stack depth=",13,1888178493);
		tr1 = (nstcall = 1, F778_4902(RTCW(tr2), tr1));
		tr2 = c_outi(arg1);
		tr2 = (nstcall = 1, F778_4902(RTCW(tr1), tr2));
		tr1 = RTMS_EX_H(")",1,41);
		tr1 = (nstcall = 1, F778_4902(RTCW(tr2), tr1));
		(nstcall = 1, F778_4900(RTCW(loc1), tr1));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTMS_EX_H(": should be ",12,282022432);
			tr2 = (nstcall = 1, F1_5(arg3));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2582[Dtype(RTCW(tr2))-646])(tr2));
			tr2 = (nstcall = 1, F778_4902(tr1, tr3));
			(nstcall = 1, F778_4900(RTCW(loc1), tr2));
		}
		RTHOOK(7);
		tr1 = RTMS_EX_H("\012",1,10);
		(nstcall = 1, F778_4900(RTCW(loc1), tr1));
		RTHOOK(8);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(9);
		tr1 = RTMS_EX_H(" -> ",4,539835936);
		(nstcall = 1, F778_4900(RTCW(loc1), tr1));
		RTHOOK(10);
		tr1 = (nstcall = 0, F133_1722(Current, arg1, ((EIF_INTEGER_32) 1L), arg2, arg4));
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(11);
			tr1 = (nstcall = 1, F1_5(loc3));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2582[Dtype(RTCW(tr1))-646])(tr1));
			tr1 = RTMS_EX_H("=",1,61);
			tr1 = (nstcall = 1, F777_4849(RTCW(tr2), tr1));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc3)-0])(loc3));
			tr2 = (nstcall = 1, F777_4849(RTCW(tr1), tr2));
			(nstcall = 1, F778_4900(RTCW(loc1), tr2));
		} else {
			RTHOOK(12);
			tr1 = RTMS_EX_H("Void object",11,160638836);
			(nstcall = 1, F778_4900(RTCW(loc1), tr1));
		}
		RTHOOK(13);
		tr1 = RTMS_EX_H("\012",1,10);
		(nstcall = 1, F778_4900(RTCW(loc1), tr1));
		RTHOOK(14);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(15);
		(nstcall = 0, F133_1754(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(17);
		(nstcall = 0, F133_1754(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
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
void F133_1756 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
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
	
	RTEAA("test_set_local", 132, Current, 3, 4, 1741);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc3) {
		RTHOOK(2);
		(nstcall = 0, F133_1754(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		loc1 = RTMS_EX_H("----------------------------------\012",35,1470523914);
		RTHOOK(4);
		tr1 = RTMS_EX_H("SetLoc #",8,1411988515);
		tr2 = c_outi(arg2);
		tr2 = (nstcall = 1, F778_4902(tr1, tr2));
		tr1 = RTMS_EX_H("(stack depth=",13,1888178493);
		tr1 = (nstcall = 1, F778_4902(RTCW(tr2), tr1));
		tr2 = c_outi(arg1);
		tr2 = (nstcall = 1, F778_4902(RTCW(tr1), tr2));
		tr1 = RTMS_EX_H(")",1,41);
		tr1 = (nstcall = 1, F778_4902(RTCW(tr2), tr1));
		(nstcall = 1, F778_4900(RTCW(loc1), tr1));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTMS_EX_H(": value ",8,992027424);
			tr2 = (nstcall = 1, F1_5(arg3));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2582[Dtype(RTCW(tr2))-646])(tr2));
			tr2 = (nstcall = 1, F778_4902(tr1, tr3));
			(nstcall = 1, F778_4900(RTCW(loc1), tr2));
		} else {
			RTHOOK(7);
			tr1 = RTMS_EX_H(": value Void",12,962399588);
			(nstcall = 1, F778_4900(RTCW(loc1), tr1));
		}
		RTHOOK(8);
		tr1 = RTMS_EX_H("\012",1,10);
		(nstcall = 1, F778_4900(RTCW(loc1), tr1));
		RTHOOK(9);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(10);
		tr1 = RTCCL(arg3);
		loc2 = (nstcall = 0, F133_1737(Current, arg1, ((EIF_INTEGER_32) 1L), arg2, arg4, tr1));
		RTHOOK(11);
		tr1 = RTMS_EX_H(" -> ",4,539835936);
		(nstcall = 1, F778_4900(RTCW(loc1), tr1));
		RTHOOK(12);
		tr1 = RTMS_EX_H("Result = ",9,495958816);
		tr2 = c_outi(loc2);
		tr2 = (nstcall = 1, F778_4902(tr1, tr2));
		(nstcall = 1, F778_4900(RTCW(loc1), tr2));
		RTHOOK(13);
		tr1 = RTMS_EX_H("\012",1,10);
		(nstcall = 1, F778_4900(RTCW(loc1), tr1));
		RTHOOK(14);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(15);
		(nstcall = 0, F133_1754(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(17);
		(nstcall = 0, F133_1754(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
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
static EIF_REFERENCE F133_1757_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("reflected_object", 132, Current, 0, 0, 1742);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1757);
#define Result RTOSR(1757)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(135, 0x01).id, 135, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F136_1819(RTCW(tr1), Current));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1757);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F133_1757 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1757,F133_1757_body,(Current));
}

/* {RT_DBG_INTERNAL}.reflector */
static EIF_REFERENCE F133_1758_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("reflector", 132, Current, 0, 0, 1743);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1758);
#define Result RTOSR(1758)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(130, 0x01).id, 130, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1758);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F133_1758 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1758,F133_1758_body,(Current));
}

void EIF_Minit112 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
