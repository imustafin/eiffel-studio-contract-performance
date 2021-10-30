/*
 * Code for class MANAGED_POINTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ma91.h"
#include <string.h>
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

/* {MANAGED_POINTER}.make */
void F109_1105 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make", 108, Current, 0, 1, 1217);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F109_1199(Current));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 1L));
	tp2 = calloc((size_t)ti4_1, (size_t) ((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(5);
		tr1 = RTLNS(eif_new_type(67, 0x01).id, 67, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		(nstcall = 1, F68_975(RTCW(tr1), tr2));
	}
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg1;
	RTHOOK(7);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) != (nstcall = 0, F1_33(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("is_shared_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.make_from_array */
void F109_1106 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_from_array", 108, Current, 0, 1, 1218);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("data_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F109_1199(Current));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F501_2588(RTCW(arg1)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
	ti4_2 = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 1L));
	tp2 = malloc((size_t)ti4_2);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(67, 0x01).id, 67, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		(nstcall = 1, F68_975(RTCW(tr1), tr2));
	}
	RTHOOK(7);
	(nstcall = 0, F109_1151(Current, arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(8);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) != (nstcall = 0, F1_33(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("count_set", EX_POST);
		ti4_1 = (nstcall = 1, F501_2588(RTCW(arg1)));
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("is_shared_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.make_from_pointer */
void F109_1107 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make_from_pointer", 108, Current, 0, 2, 1219);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ptr_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F109_1199(Current));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = eif_max_int32 (arg2,((EIF_INTEGER_32) 1L));
	tp2 = malloc((size_t)ti4_1);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(67, 0x01).id, 67, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		(nstcall = 1, F68_975(RTCW(tr1), tr2));
	}
	RTHOOK(7);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	memcpy((void *)tp1, (const void *) arg1, (size_t) arg2);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(9);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) != (nstcall = 0, F1_33(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("is_shared_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.share_from_pointer */
void F109_1108 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("share_from_pointer", 108, Current, 0, 2, 1220);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ptr_valid", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F1_33(Current)))) {
			tb1 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F109_1199(Current));
	RTHOOK(4);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) arg1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_shared_set", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
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
}

/* {MANAGED_POINTER}.own_from_pointer */
void F109_1109 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("own_from_pointer", 108, Current, 0, 2, 1221);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ptr_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F109_1199(Current));
	RTHOOK(4);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) arg1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_shared_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
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
}

/* {MANAGED_POINTER}.set_from_pointer */
void F109_1110 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_from_pointer", 108, Current, 0, 2, 1222);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_shared", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_ptr_not_null", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F1_33(Current)))) {
			tb1 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) arg1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_shared_unchanged", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
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
}

/* {MANAGED_POINTER}.item */
static EIF_POINTER F109_1111_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("item", 108, Current, 0, 0, 1223);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_POINTER) 0;
}

EIF_POINTER F109_1111 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
}


/* {MANAGED_POINTER}.count */
EIF_INTEGER_32 F109_1112 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
}


/* {MANAGED_POINTER}.is_shared */
EIF_BOOLEAN F109_1113 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
}


/* {MANAGED_POINTER}.is_equal */
EIF_BOOLEAN F109_1114 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_equal", 108, Current, 0, 1, 1226);
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == ti4_1)) {
		RTHOOK(3);
		Result = '\01';
		tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
		if (!((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1))) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
			tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
			tr1 = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)tr1 = tp1;
			tb1 = (nstcall = 1, F732_4414(RTCW(tr1), tp2, ti4_1));
			Result = tb1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
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
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.copy */
void F109_1115 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("copy", 108, Current, 0, 1, 1227);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		RTTE((nstcall = 0, F1_7(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		tb2 = '\01';
		tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
		if (!(EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
			tb2 = *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
		}
		if (tb2) {
			RTHOOK(5);
			tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
			(nstcall = 0, F109_1107(Current, tp1, ti4_1));
		} else {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
			(nstcall = 0, F109_1195(Current, ti4_1));
			RTHOOK(7);
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
			tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
			memcpy((void *)tp1, (const void *) tp2, (size_t) ti4_1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("sharing_status_not_preserved", EX_POST);
		if ((!((EIF_BOOLEAN)(arg1 != Current)) || ((!(tb1) || ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("count_preserved", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.read_natural_8 */
EIF_NATURAL_8 F109_1116 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_8", 108, Current, 0, 1, 1228);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_8 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_16 */
EIF_NATURAL_16 F109_1117 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_16", 108, Current, 0, 1, 1229);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_16 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_32 */
EIF_NATURAL_32 F109_1118 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_32", 108, Current, 0, 1, 1230);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_32 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_64 */
EIF_NATURAL_64 F109_1119 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_64", 108, Current, 0, 1, 1231);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_64 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_8 */
EIF_INTEGER_8 F109_1120 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_8", 108, Current, 0, 1, 1232);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (nstcall = 0, F109_1116(Current, arg1));
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_16 */
EIF_INTEGER_16 F109_1121 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_16", 108, Current, 0, 1, 1233);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (nstcall = 0, F109_1117(Current, arg1));
	ti2_1 = (EIF_INTEGER_16) tu2_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_32 */
EIF_INTEGER_32 F109_1122 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_32", 108, Current, 0, 1, 1234);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (nstcall = 0, F109_1118(Current, arg1));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_64 */
EIF_INTEGER_64 F109_1123 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_64", 108, Current, 0, 1, 1235);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (nstcall = 0, F109_1119(Current, arg1));
	ti8_1 = (EIF_INTEGER_64) tu8_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_pointer */
EIF_POINTER F109_1124 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_pointer", 108, Current, 0, 1, 1236);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + (nstcall = 0, F44_648(Current))) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	ti4_1 = (nstcall = 0, F44_648(Current));
	memcpy((void *)(EIF_POINTER *) &(Result), (const void *) tp2, (size_t) ti4_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_boolean */
EIF_BOOLEAN F109_1125 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_boolean", 108, Current, 0, 1, 1237);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + (nstcall = 0, F44_635(Current))) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	ti4_1 = (nstcall = 0, F44_635(Current));
	memcpy((void *)(EIF_BOOLEAN *) &(Result), (const void *) tp2, (size_t) ti4_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_character */
EIF_CHARACTER_8 F109_1126 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_character", 108, Current, 0, 1, 1238);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_CHARACTER_8 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real */
EIF_REAL_32 F109_1127 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real", 108, Current, 0, 1, 1239);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_REAL_32 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_32 */
EIF_REAL_32 F109_1128 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_32", 108, Current, 0, 1, 1240);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_REAL_32 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_double */
EIF_REAL_64 F109_1129 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_double", 108, Current, 0, 1, 1241);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_REAL_64 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_64 */
EIF_REAL_64 F109_1130 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_64", 108, Current, 0, 1, 1242);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_REAL_64 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_array */
EIF_REFERENCE F109_1131 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("read_array", 108, Current, 1, 2, 1243);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("count_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + arg2) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,588,715,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,arg2,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(nstcall = -1, F589_3089(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), arg2));
	RTHOOK(5);
	(nstcall = 0, F109_1134(Current, loc1, arg1, ((EIF_INTEGER_32) 0L), arg2));
	RTHOOK(6);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,500,715,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 500, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F501_2579(RTCW(Result), loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("read_array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("read_array_valid_count", EX_POST);
		ti4_1 = (nstcall = 1, F501_2588(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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

/* {MANAGED_POINTER}.read_special_natural_8 */
EIF_REFERENCE F109_1132 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("read_special_natural_8", 108, Current, 0, 2, 1244);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + arg2) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,588,715,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNSP2(typres0.id,0,arg2,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(nstcall = -1, F589_3089(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), arg2));
	RTHOOK(5);
	(nstcall = 0, F109_1134(Current, Result, arg1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_special_character_8 */
EIF_REFERENCE F109_1133 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("read_special_character_8", 108, Current, 0, 2, 1245);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + arg2) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,592,727,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNSP2(typres0.id,0,arg2,sizeof(EIF_CHARACTER_8), EIF_TRUE);
	}
	(nstcall = -1, F593_3089(RTCW(Result), (EIF_CHARACTER_8) '\000', arg2));
	RTHOOK(5);
	(nstcall = 0, F109_1135(Current, Result, arg1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_into_special_natural_8 */
void F109_1134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_into_special_natural_8", 108, Current, 0, 4, 1246);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("destination_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("destination_index_in_bound", EX_PRE);
		ti4_1 = (nstcall = 1, F589_3101(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg4) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("n_is_small_enough_for_destination", EX_PRE);
		ti4_1 = (nstcall = 1, F589_3101(arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg3 + arg4) <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(8);
	tp1 = (nstcall = 1, F589_3094(RTCW(arg1), arg3));
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp3 = RTPOF(tp2,arg2);
	memcpy((void *)tp1, (const void *) tp3, (size_t) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.read_into_special_character_8 */
void F109_1135 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_into_special_character_8", 108, Current, 0, 4, 1247);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("destination_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("destination_index_in_bound", EX_PRE);
		ti4_1 = (nstcall = 1, F593_3101(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg4) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("n_is_small_enough_for_destination", EX_PRE);
		ti4_1 = (nstcall = 1, F593_3101(arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg3 + arg4) <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(8);
	tp1 = (nstcall = 1, F593_3094(RTCW(arg1), arg3));
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp3 = RTPOF(tp2,arg2);
	memcpy((void *)tp1, (const void *) tp3, (size_t) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.put_natural_8 */
void F109_1136 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_8", 108, Current, 0, 2, 1248);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_8 *) &(arg1), (size_t) ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1116(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_16 */
void F109_1137 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_16", 108, Current, 0, 2, 1249);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_16 *) &(arg1), (size_t) ((EIF_INTEGER_32) 2L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1117(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_32 */
void F109_1138 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_32", 108, Current, 0, 2, 1250);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_32 *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1118(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_64 */
void F109_1139 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_64", 108, Current, 0, 2, 1251);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_64 *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1119(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_8 */
void F109_1140 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_8", 108, Current, 0, 2, 1252);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (EIF_NATURAL_8) arg1;
	(nstcall = 0, F109_1136(Current, tu1_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1120(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_16 */
void F109_1141 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_16", 108, Current, 0, 2, 1157);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (EIF_NATURAL_16) arg1;
	(nstcall = 0, F109_1137(Current, tu2_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1121(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_32 */
void F109_1142 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_32", 108, Current, 0, 2, 1158);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (EIF_NATURAL_32) arg1;
	(nstcall = 0, F109_1138(Current, tu4_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1122(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_64 */
void F109_1143 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_64", 108, Current, 0, 2, 1159);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) arg1;
	(nstcall = 0, F109_1139(Current, tu8_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1123(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_pointer */
void F109_1144 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_pointer", 108, Current, 0, 2, 1160);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + (nstcall = 0, F44_648(Current))) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	ti4_1 = (nstcall = 0, F44_648(Current));
	memcpy((void *)tp2, (const void *) (EIF_POINTER *) &(arg1), (size_t) ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1124(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_boolean */
void F109_1145 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_boolean", 108, Current, 0, 2, 1161);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + (nstcall = 0, F44_635(Current))) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	ti4_1 = (nstcall = 0, F44_635(Current));
	memcpy((void *)tp2, (const void *) (EIF_BOOLEAN *) &(arg1), (size_t) ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1125(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_character */
void F109_1146 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_character", 108, Current, 0, 2, 1162);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_CHARACTER_8 *) &(arg1), (size_t) ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1126(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real */
void F109_1147 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real", 108, Current, 0, 2, 1163);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_REAL_32 *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_32 (arg1, (nstcall = 0, F109_1128(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real_32 */
void F109_1148 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_32", 108, Current, 0, 2, 1164);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_REAL_32 *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_32 (arg1, (nstcall = 0, F109_1128(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_double */
void F109_1149 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_double", 108, Current, 0, 2, 1165);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_REAL_64 *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (arg1, (nstcall = 0, F109_1130(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real_64 */
void F109_1150 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_64", 108, Current, 0, 2, 1166);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_REAL_64 *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (arg1, (nstcall = 0, F109_1130(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_array */
void F109_1151 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("put_array", 108, Current, 1, 2, 1167);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("data_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_position", EX_PRE);
		ti4_1 = (nstcall = 1, F501_2588(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ti4_1) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	ti4_1 = (nstcall = 1, F501_2588(RTCW(arg1)));
	memcpy((void *)tp2, (const void *) loc1, (size_t) ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("inserted", EX_POST);
		ti4_1 = (nstcall = 1, F501_2588(RTCW(arg1)));
		if (RTEQ((nstcall = 0, F109_1131(Current, arg2, ti4_1)), arg1)) {
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
}

/* {MANAGED_POINTER}.put_special_natural_8 */
void F109_1152 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("put_special_natural_8", 108, Current, 0, 4, 1168);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("destination_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("destination_index_in_bound", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		ti4_1 = (nstcall = 1, F589_3101(arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg4) <= ti4_1), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("n_is_small_enough_for_destination", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg3 + arg4) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(8);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg3);
	tp1 = (nstcall = 1, F589_3094(RTCW(arg1), arg2));
	memcpy((void *)tp2, (const void *) tp1, (size_t) arg4);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("inserted", EX_POST);
		tr1 = (nstcall = 0, F109_1132(Current, arg3, arg4));
		tb1 = (nstcall = 1, F589_3104(RTCW(arg1), tr1, ((EIF_INTEGER_32) 0L), arg2, arg4));
		if (tb1) {
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
}

/* {MANAGED_POINTER}.put_special_character_8 */
void F109_1153 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("put_special_character_8", 108, Current, 0, 4, 1169);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("destination_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("destination_index_in_bound", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		ti4_1 = (nstcall = 1, F593_3101(arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg4) <= ti4_1), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("n_is_small_enough_for_destination", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg3 + arg4) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(8);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg3);
	tp1 = (nstcall = 1, F593_3094(RTCW(arg1), arg2));
	memcpy((void *)tp2, (const void *) tp1, (size_t) arg4);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("inserted", EX_POST);
		tr1 = (nstcall = 0, F109_1133(Current, arg3, arg4));
		tb1 = (nstcall = 1, F593_3104(RTCW(arg1), tr1, ((EIF_INTEGER_32) 0L), arg2, arg4));
		if (tb1) {
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
}

/* {MANAGED_POINTER}.read_natural_8_le */
EIF_NATURAL_8 F109_1154 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_8_le", 108, Current, 0, 1, 1170);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_8 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_16_le */
EIF_NATURAL_16 F109_1155 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_16_le", 108, Current, 1, 1, 1171);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		Result = (nstcall = 0, F109_1117(Current, arg1));
	} else {
		RTHOOK(5);
		tu1_1 = (nstcall = 0, F109_1116(Current, arg1));
		tu2_1 = (EIF_NATURAL_16) tu1_1;
		tu2_1 = eif_bit_and(((EIF_NATURAL_16) 255U),tu2_1);
		loc1 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(6);
		tu1_1 = (nstcall = 0, F109_1116(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
		tu2_1 = (EIF_NATURAL_16) tu1_1;
		tu2_2 = eif_bit_shift_left(tu2_1,((EIF_INTEGER_32) 8L));
		tu2_1 = eif_bit_or((tu2_2),loc1);
		Result = (EIF_NATURAL_16) tu2_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_32_le */
EIF_NATURAL_32 F109_1156 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_32_le", 108, Current, 2, 1, 1172);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		Result = (nstcall = 0, F109_1118(Current, arg1));
	} else {
		RTHOOK(5);
		tu2_1 = (nstcall = 0, F109_1155(Current, arg1));
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		tu4_1 = eif_bit_and(((EIF_NATURAL_32) 65535U),tu4_1);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		tu2_1 = (nstcall = 0, F109_1155(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L))));
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		tu4_1 = (EIF_NATURAL_32) loc1;
		tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 16L));
		tu4_1 = eif_bit_or((tu4_2),loc2);
		Result = (EIF_NATURAL_32) tu4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_64_le */
EIF_NATURAL_64 F109_1157 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_64_le", 108, Current, 2, 1, 1173);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		Result = (nstcall = 0, F109_1119(Current, arg1));
	} else {
		RTHOOK(5);
		tu4_1 = (nstcall = 0, F109_1156(Current, arg1));
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		tu8_1 = eif_bit_and(((EIF_NATURAL_64) RTU64C(4294967295)),tu8_1);
		loc2 = (EIF_NATURAL_64) tu8_1;
		RTHOOK(6);
		tu4_1 = (nstcall = 0, F109_1156(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L))));
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		loc1 = (EIF_NATURAL_64) tu8_1;
		RTHOOK(7);
		tu8_1 = (EIF_NATURAL_64) loc1;
		tu8_2 = eif_bit_shift_left(tu8_1,((EIF_INTEGER_32) 32L));
		tu8_1 = eif_bit_or((tu8_2),loc2);
		Result = (EIF_NATURAL_64) tu8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_8_le */
EIF_INTEGER_8 F109_1158 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_8_le", 108, Current, 0, 1, 1174);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (nstcall = 0, F109_1154(Current, arg1));
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_16_le */
EIF_INTEGER_16 F109_1159 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_16_le", 108, Current, 0, 1, 1175);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (nstcall = 0, F109_1155(Current, arg1));
	ti2_1 = (EIF_INTEGER_16) tu2_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_32_le */
EIF_INTEGER_32 F109_1160 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_32_le", 108, Current, 0, 1, 1176);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (nstcall = 0, F109_1156(Current, arg1));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_64_le */
EIF_INTEGER_64 F109_1161 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_64_le", 108, Current, 0, 1, 1177);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (nstcall = 0, F109_1157(Current, arg1));
	ti8_1 = (EIF_INTEGER_64) tu8_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_32_le */
EIF_REAL_32 F109_1162 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_32_le", 108, Current, 1, 1, 1178);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	loc1 = (nstcall = 0, F109_1156(Current, arg1));
	RTHOOK(4);
	memcpy((void *)(EIF_REAL_32 *) &(Result), (const void *) (EIF_NATURAL_32 *) &(loc1), (size_t) ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_64_le */
EIF_REAL_64 F109_1163 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_64_le", 108, Current, 1, 1, 1179);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	loc1 = (nstcall = 0, F109_1157(Current, arg1));
	RTHOOK(4);
	memcpy((void *)(EIF_REAL_64 *) &(Result), (const void *) (EIF_NATURAL_64 *) &(loc1), (size_t) ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.put_natural_8_le */
void F109_1164 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_8_le", 108, Current, 0, 2, 1180);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_8 *) &(arg1), (size_t) ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1154(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_16_le */
void F109_1165 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_16_le", 108, Current, 0, 2, 1181);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		(nstcall = 0, F109_1137(Current, arg1, arg2));
	} else {
		RTHOOK(5);
		tu2_1 = eif_bit_and(arg1,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
		tu1_1 = (EIF_NATURAL_8) tu2_1;
		(nstcall = 0, F109_1136(Current, tu1_1, arg2));
		RTHOOK(6);
		tu2_1 = eif_bit_and(arg1,(EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L));
		tu2_2 = eif_bit_shift_right((tu2_1),((EIF_INTEGER_32) 8L));
		tu2_1 = eif_bit_and((tu2_2),(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
		tu1_1 = (EIF_NATURAL_8) tu2_1;
		(nstcall = 0, F109_1136(Current, tu1_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1155(Current, arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.put_natural_32_le */
void F109_1166 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_32_le", 108, Current, 0, 2, 1182);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		(nstcall = 0, F109_1138(Current, arg1, arg2));
	} else {
		RTHOOK(5);
		tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L));
		tu2_1 = (EIF_NATURAL_16) tu4_1;
		(nstcall = 0, F109_1165(Current, tu2_1, arg2));
		RTHOOK(6);
		tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4294901760)));
		tu4_2 = eif_bit_shift_right((tu4_1),((EIF_INTEGER_32) 16L));
		tu4_1 = eif_bit_and((tu4_2),(EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L));
		tu2_1 = (EIF_NATURAL_16) tu4_1;
		(nstcall = 0, F109_1165(Current, tu2_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1156(Current, arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.put_natural_64_le */
void F109_1167 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_64_le", 108, Current, 0, 2, 1183);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		(nstcall = 0, F109_1139(Current, arg1, arg2));
	} else {
		RTHOOK(5);
		tu8_1 = eif_bit_and(arg1,(EIF_NATURAL_64) ((EIF_INTEGER_64) RTI64C(4294967295)));
		tu4_1 = (EIF_NATURAL_32) tu8_1;
		(nstcall = 0, F109_1166(Current, tu4_1, arg2));
		RTHOOK(6);
		tu8_1 = eif_bit_and(arg1,((EIF_NATURAL_64) RTU64C(18446744069414584320)));
		tu8_2 = eif_bit_shift_right((tu8_1),((EIF_INTEGER_32) 32L));
		tu8_1 = eif_bit_and((tu8_2),(EIF_NATURAL_64) ((EIF_INTEGER_64) RTI64C(4294967295)));
		tu4_1 = (EIF_NATURAL_32) tu8_1;
		(nstcall = 0, F109_1166(Current, tu4_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1157(Current, arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.put_integer_8_le */
void F109_1168 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_8_le", 108, Current, 0, 2, 1184);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (EIF_NATURAL_8) arg1;
	(nstcall = 0, F109_1164(Current, tu1_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1158(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_16_le */
void F109_1169 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_16_le", 108, Current, 0, 2, 1185);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (EIF_NATURAL_16) arg1;
	(nstcall = 0, F109_1165(Current, tu2_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1159(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_32_le */
void F109_1170 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_32_le", 108, Current, 0, 2, 1186);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (EIF_NATURAL_32) arg1;
	(nstcall = 0, F109_1166(Current, tu4_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1160(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_64_le */
void F109_1171 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_64_le", 108, Current, 0, 2, 1187);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) arg1;
	(nstcall = 0, F109_1167(Current, tu8_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1161(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real_32_le */
void F109_1172 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_32_le", 108, Current, 1, 2, 1188);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	memcpy((void *)(EIF_NATURAL_32 *) &(loc1), (const void *) (EIF_REAL_32 *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
	RTHOOK(4);
	(nstcall = 0, F109_1166(Current, loc1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_32 (arg1, (nstcall = 0, F109_1162(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real_64_le */
void F109_1173 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_64_le", 108, Current, 1, 2, 1189);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	memcpy((void *)(EIF_NATURAL_64 *) &(loc1), (const void *) (EIF_REAL_64 *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
	RTHOOK(4);
	(nstcall = 0, F109_1167(Current, loc1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (arg1, (nstcall = 0, F109_1163(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.read_natural_8_be */
EIF_NATURAL_8 F109_1174 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_8_be", 108, Current, 0, 1, 1190);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_8 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_16_be */
EIF_NATURAL_16 F109_1175 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_16_be", 108, Current, 2, 1, 1191);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		tu1_1 = (nstcall = 0, F109_1116(Current, arg1));
		tu2_1 = (EIF_NATURAL_16) tu1_1;
		loc1 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(5);
		tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 255L);
		tu1_1 = (nstcall = 0, F109_1116(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
		tu2_2 = (EIF_NATURAL_16) tu1_1;
		tu2_2 = eif_bit_and(tu2_1,tu2_2);
		loc2 = (EIF_NATURAL_16) tu2_2;
		RTHOOK(6);
		tu2_1 = (EIF_NATURAL_16) loc1;
		tu2_2 = eif_bit_shift_left(tu2_1,((EIF_INTEGER_32) 8L));
		tu2_1 = eif_bit_or((tu2_2),loc2);
		Result = (EIF_NATURAL_16) tu2_1;
	} else {
		RTHOOK(7);
		Result = (nstcall = 0, F109_1117(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_32_be */
EIF_NATURAL_32 F109_1176 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_32_be", 108, Current, 2, 1, 1192);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		tu2_1 = (nstcall = 0, F109_1175(Current, arg1));
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(5);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
		tu2_1 = (nstcall = 0, F109_1175(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L))));
		tu4_2 = (EIF_NATURAL_32) tu2_1;
		tu4_2 = eif_bit_and(tu4_1,tu4_2);
		loc2 = (EIF_NATURAL_32) tu4_2;
		RTHOOK(6);
		tu4_1 = (EIF_NATURAL_32) loc1;
		tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 16L));
		tu4_1 = eif_bit_or((tu4_2),loc2);
		Result = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(7);
		Result = (nstcall = 0, F109_1118(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_64_be */
EIF_NATURAL_64 F109_1177 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_64_be", 108, Current, 2, 1, 1193);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		tu4_1 = (nstcall = 0, F109_1176(Current, arg1));
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		loc1 = (EIF_NATURAL_64) tu8_1;
		RTHOOK(5);
		tu4_1 = (nstcall = 0, F109_1176(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L))));
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		tu8_1 = eif_bit_and(((EIF_NATURAL_64) RTU64C(4294967295)),tu8_1);
		loc2 = (EIF_NATURAL_64) tu8_1;
		RTHOOK(6);
		tu8_1 = (EIF_NATURAL_64) loc1;
		tu8_2 = eif_bit_shift_left(tu8_1,((EIF_INTEGER_32) 32L));
		tu8_1 = eif_bit_or((tu8_2),loc2);
		Result = (EIF_NATURAL_64) tu8_1;
	} else {
		RTHOOK(7);
		Result = (nstcall = 0, F109_1119(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_8_be */
EIF_INTEGER_8 F109_1178 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_8_be", 108, Current, 0, 1, 1194);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (nstcall = 0, F109_1174(Current, arg1));
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_16_be */
EIF_INTEGER_16 F109_1179 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_16_be", 108, Current, 0, 1, 1195);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (nstcall = 0, F109_1175(Current, arg1));
	ti2_1 = (EIF_INTEGER_16) tu2_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_32_be */
EIF_INTEGER_32 F109_1180 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_32_be", 108, Current, 0, 1, 1196);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (nstcall = 0, F109_1176(Current, arg1));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_64_be */
EIF_INTEGER_64 F109_1181 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_64_be", 108, Current, 0, 1, 1197);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (nstcall = 0, F109_1177(Current, arg1));
	ti8_1 = (EIF_INTEGER_64) tu8_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_32_be */
EIF_REAL_32 F109_1182 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_32_be", 108, Current, 1, 1, 1198);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	loc1 = (nstcall = 0, F109_1176(Current, arg1));
	RTHOOK(4);
	memcpy((void *)(EIF_REAL_32 *) &(Result), (const void *) (EIF_NATURAL_32 *) &(loc1), (size_t) ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_64_be */
EIF_REAL_64 F109_1183 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_64_be", 108, Current, 1, 1, 1199);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	loc1 = (nstcall = 0, F109_1177(Current, arg1));
	RTHOOK(4);
	memcpy((void *)(EIF_REAL_64 *) &(Result), (const void *) (EIF_NATURAL_64 *) &(loc1), (size_t) ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.put_natural_8_be */
void F109_1184 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_8_be", 108, Current, 0, 2, 1200);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_8 *) &(arg1), (size_t) ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1174(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_16_be */
void F109_1185 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_16_be", 108, Current, 0, 2, 1201);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		tu2_1 = eif_bit_and(arg1,(EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L));
		tu2_2 = eif_bit_shift_right((tu2_1),((EIF_INTEGER_32) 8L));
		tu2_1 = eif_bit_and((tu2_2),(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
		tu1_1 = (EIF_NATURAL_8) tu2_1;
		(nstcall = 0, F109_1136(Current, tu1_1, arg2));
		RTHOOK(5);
		tu2_1 = eif_bit_and(arg1,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
		tu1_1 = (EIF_NATURAL_8) tu2_1;
		(nstcall = 0, F109_1136(Current, tu1_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(6);
		(nstcall = 0, F109_1137(Current, arg1, arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1175(Current, arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.put_natural_32_be */
void F109_1186 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_32_be", 108, Current, 0, 2, 1202);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4294901760)));
		tu4_2 = eif_bit_shift_right((tu4_1),((EIF_INTEGER_32) 16L));
		tu4_1 = eif_bit_and((tu4_2),(EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L));
		tu2_1 = (EIF_NATURAL_16) tu4_1;
		(nstcall = 0, F109_1185(Current, tu2_1, arg2));
		RTHOOK(5);
		tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L));
		tu2_1 = (EIF_NATURAL_16) tu4_1;
		(nstcall = 0, F109_1185(Current, tu2_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L))));
	} else {
		RTHOOK(6);
		(nstcall = 0, F109_1138(Current, arg1, arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1176(Current, arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.put_natural_64_be */
void F109_1187 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_64_be", 108, Current, 0, 2, 1203);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOSCF(633,(nstcall = 0, F44_633), (Current))) {
		RTHOOK(4);
		tu8_1 = eif_bit_and(arg1,((EIF_NATURAL_64) RTU64C(18446744069414584320)));
		tu8_2 = eif_bit_shift_right((tu8_1),((EIF_INTEGER_32) 32L));
		tu8_1 = eif_bit_and((tu8_2),(EIF_NATURAL_64) ((EIF_INTEGER_64) RTI64C(4294967295)));
		tu4_1 = (EIF_NATURAL_32) tu8_1;
		(nstcall = 0, F109_1186(Current, tu4_1, arg2));
		RTHOOK(5);
		tu8_1 = eif_bit_and(arg1,(EIF_NATURAL_64) ((EIF_INTEGER_64) RTI64C(4294967295)));
		tu4_1 = (EIF_NATURAL_32) tu8_1;
		(nstcall = 0, F109_1186(Current, tu4_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L))));
	} else {
		RTHOOK(6);
		(nstcall = 0, F109_1139(Current, arg1, arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1177(Current, arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.put_integer_8_be */
void F109_1188 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_8_be", 108, Current, 0, 2, 1204);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (EIF_NATURAL_8) arg1;
	(nstcall = 0, F109_1184(Current, tu1_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1178(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_16_be */
void F109_1189 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_16_be", 108, Current, 0, 2, 1205);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (EIF_NATURAL_16) arg1;
	(nstcall = 0, F109_1185(Current, tu2_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1179(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_32_be */
void F109_1190 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_32_be", 108, Current, 0, 2, 1206);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (EIF_NATURAL_32) arg1;
	(nstcall = 0, F109_1186(Current, tu4_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1180(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_64_be */
void F109_1191 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_64_be", 108, Current, 0, 2, 1207);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) arg1;
	(nstcall = 0, F109_1187(Current, tu8_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F109_1181(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real_32_be */
void F109_1192 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_32_be", 108, Current, 1, 2, 1208);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	memcpy((void *)(EIF_NATURAL_32 *) &(loc1), (const void *) (EIF_REAL_32 *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
	RTHOOK(4);
	(nstcall = 0, F109_1186(Current, loc1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_32 (arg1, (nstcall = 0, F109_1182(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real_64_be */
void F109_1193 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_64_be", 108, Current, 1, 2, 1209);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	memcpy((void *)(EIF_NATURAL_64 *) &(loc1), (const void *) (EIF_REAL_64 *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
	RTHOOK(4);
	(nstcall = 0, F109_1187(Current, loc1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (arg1, (nstcall = 0, F109_1183(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.append */
void F109_1194 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("append", 108, Current, 1, 1, 1210);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_shared", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = eif_max_int32 (loc1,((EIF_INTEGER_32) 1L));
	tr1 = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
	*(EIF_POINTER *)tr1 = tp1;
	tp2 = (nstcall = 1, F732_4426(RTCW(tr1), ti4_1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(67, 0x01).id, 67, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		(nstcall = 1, F68_975(RTCW(tr1), tr2));
	}
	RTHOOK(7);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_));
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	memcpy((void *)tp2, (const void *) tp1, (size_t) ti4_1);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.resize */
void F109_1195 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("resize", 108, Current, 0, 1, 1211);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_shared", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_))) {
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 1L));
		tr1 = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)tr1 = tp1;
		tp2 = (nstcall = 1, F732_4426(RTCW(tr1), ti4_1));
		*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
		RTHOOK(5);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
			RTHOOK(6);
			tr1 = RTLNS(eif_new_type(67, 0x01).id, 67, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("No more memory",14,904766585);
			(nstcall = 1, F68_975(RTCW(tr1), tr2));
		}
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (arg1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_))) {
		RTHOOK(8);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		tp2 = RTPOF(tp1,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_));
		memset((void *)tp2, (int) ((EIF_INTEGER_32) 0L), (size_t) (EIF_INTEGER_32) (arg1 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)));
	}
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.dispose */
void F109_1196 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 108, Current, 1, 0, 1212);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		free(tp1);
	}
	RTHOOK(3);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) loc1;
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("shared_reset", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
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
}

/* {MANAGED_POINTER}.allocation_counter */
static EIF_REFERENCE F109_1197_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("allocation_counter", 108, Current, 0, 0, 1213);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (1197);
#define Result RTOSR(1197)
	RTOC_NEW(Result);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,40,706,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 40, _OBJSIZ_0_0_0_0_0_0_1_0_);
	}
	(nstcall = -1, F41_620(RTCW(tr1), (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (1197);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F109_1197 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1197,F109_1197_body,(Current));
}

/* {MANAGED_POINTER}.counter */
static EIF_NATURAL_64 F109_1198_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("counter", 108, Current, 0, 0, 1214);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_NATURAL_64) 0;
}

EIF_NATURAL_64 F109_1198 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_1_0_1_0_1_0_);
}


/* {MANAGED_POINTER}.increment_counter */
void F109_1199 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("increment_counter", 108, Current, 0, 0, 1215);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}._invariant */
void F109_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 90, Current, 0, 0);
	RTIT("item_not_null", Current);
	tb1 = '\01';
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
		tb1 = (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == ((EIF_INTEGER_32) 0L)) && *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_count", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit91 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
