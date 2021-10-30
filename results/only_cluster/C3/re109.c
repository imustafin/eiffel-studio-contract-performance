/*
 * Code for class REFLECTED_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re109.h"
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

/* {REFLECTED_OBJECT}.class_name */
EIF_REFERENCE F130_1556 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("class_name", 129, Current, 0, 0, 1544);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_276(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.type_name */
EIF_REFERENCE F130_1557 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("type_name", 129, Current, 0, 0, 1545);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_278(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.dynamic_type */
EIF_INTEGER_32 F130_1558 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
}


/* {REFLECTED_OBJECT}.generic_count */
EIF_INTEGER_32 F130_1559 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("generic_count", 129, Current, 0, 0, 1547);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_370(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.generic_dynamic_type */
EIF_INTEGER_32 F130_1560 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("generic_dynamic_type", 129, Current, 0, 1, 1548);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_generic", EX_PRE);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, F130_1559(Current)) > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1559(Current)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_371(Current, ti4_1, arg1));
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

/* {REFLECTED_OBJECT}.field */
EIF_REFERENCE F130_1561 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("field", 129, Current, 0, 1, 1549);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F130_1564(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	switch ((nstcall = 0, F130_1577(Current, arg1))) {
		case 9L:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(703, 0x00).id, 703, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F130_1589(Current, arg1));
			break;
		case 10L:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(700, 0x00).id, 700, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F130_1590(Current, arg1));
			break;
		case 4L:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F130_1591(Current, arg1));
			break;
		case 11L:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(694, 0x00).id, 694, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F130_1592(Current, arg1));
			break;
		case 13L:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(715, 0x00).id, 715, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F130_1585(Current, arg1));
			break;
		case 14L:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(712, 0x00).id, 712, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F130_1586(Current, arg1));
			break;
		case 15L:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(709, 0x00).id, 709, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F130_1587(Current, arg1));
			break;
		case 16L:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(706, 0x00).id, 706, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F130_1588(Current, arg1));
			break;
		case 5L:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(718, 0x00).id, 718, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F130_1593(Current, arg1));
			break;
		case 6L:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F130_1595(Current, arg1));
			break;
		case 2L:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(727, 0x00).id, 727, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F130_1582(Current, arg1));
			break;
		case 12L:
			RTHOOK(16);
			Result = RTLNS(eif_new_type(724, 0x00).id, 724, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F130_1583(Current, arg1));
			break;
		case 3L:
			RTHOOK(17);
			Result = RTLNS(eif_new_type(730, 0x00).id, 730, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F130_1584(Current, arg1));
			break;
		case 0L:
			RTHOOK(18);
			Result = RTLNS(eif_new_type(763, 0x00).id, 763, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F130_1594(Current, arg1));
			break;
		case 1L:
		case 7L:
			RTHOOK(19);
			Result = (nstcall = 0, F130_1562(Current, arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.reference_field */
EIF_REFERENCE F130_1562 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("reference_field", 129, Current, 0, 1, 1550);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F130_1564(Current)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("reference_field", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 1L))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 7L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_305(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_instance_of */
EIF_BOOLEAN F130_1563 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_instance_of", 129, Current, 0, 1, 1551);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1390[dtype-134])(Current)) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_id_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_281(Current, ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special */
EIF_BOOLEAN F130_1564 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special", 129, Current, 0, 0, 1552);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_335(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special_of_expanded */
EIF_BOOLEAN F130_1565 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special_of_expanded", 129, Current, 0, 0, 1553);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F130_1564(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_336(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special_of_reference */
EIF_BOOLEAN F130_1566 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special_of_reference", 129, Current, 0, 0, 1554);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F130_1564(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_337(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_expanded */
EIF_BOOLEAN F130_1567 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_expanded", 129, Current, 0, 0, 1555);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_338(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_tuple */
EIF_BOOLEAN F130_1568 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_tuple", 129, Current, 0, 0, 1556);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_339(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_field_transient */
EIF_BOOLEAN F130_1569 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_field_transient", 129, Current, 0, 1, 1557);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_289(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_field_statically_expanded */
EIF_BOOLEAN F130_1570 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_field_statically_expanded", 129, Current, 0, 1, 1558);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_290(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_copy_semantics_field */
EIF_BOOLEAN F130_1571 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_copy_semantics_field", 129, Current, 0, 1, 1559);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_reference_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_297(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special_copy_semantics_item */
EIF_BOOLEAN F130_1572 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_special_copy_semantics_item", 129, Current, 1, 1, 1560);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F130_1564(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_special_of_reference", EX_PRE);
		RTTE((nstcall = 0, F130_1566(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		tb1 = '\0';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1390[dtype-134])(Current));
		loc1 = RTCCL(tr1);
		loc1 = RTRV(eif_new_type(584, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2434[Dtype(loc1)-585])(loc1, arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_298(Current, arg1, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_field_statically_attached */
EIF_BOOLEAN F130_1573 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_field_statically_attached", 129, Current, 0, 1, 1561);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F130_1578(Current, arg1));
	Result = (nstcall = 0, F10_286(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.field_conforms_to */
EIF_BOOLEAN F130_1574 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_conforms_to", 129, Current, 0, 2, 1562);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_source_type_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_field_type_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F10_287(Current, arg2));
	Result = (nstcall = 0, F10_281(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.field_name */
EIF_REFERENCE F130_1575 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("field_name", 129, Current, 0, 1, 1563);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F130_1564(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	tp1 = (nstcall = 0, F10_302(Current, arg1, ti4_1));
	(nstcall = -1, F776_4792(RTCW(Result), tp1));
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

/* {REFLECTED_OBJECT}.field_offset */
EIF_INTEGER_32 F130_1576 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_offset", 129, Current, 0, 1, 1564);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F130_1564(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_300(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.field_type */
EIF_INTEGER_32 F130_1577 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_type", 129, Current, 0, 1, 1565);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_303(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("field_type_nonnegative", EX_POST);
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

/* {REFLECTED_OBJECT}.field_static_type */
EIF_INTEGER_32 F130_1578 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_static_type", 129, Current, 0, 1, 1566);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_304(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("field_type_nonnegative", EX_POST);
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

/* {REFLECTED_OBJECT}.special_copy_semantics_item */
EIF_REFERENCE F130_1580 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("special_copy_semantics_item", 129, Current, 1, 1, 1567);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F130_1564(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_special_reference", EX_PRE);
		RTTE((nstcall = 0, F130_1566(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		tb1 = '\0';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1390[dtype-134])(Current));
		loc1 = RTCCL(tr1);
		loc1 = RTRV(eif_new_type(584, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2434[Dtype(loc1)-585])(loc1, arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = RTLNS(eif_new_type(134, 0x01).id, 134, _OBJSIZ_1_0_0_3_0_0_0_0_);
	tr1 = (nstcall = 0, F1_14(Current));
	(nstcall = -1, F135_1808(RTCW(Result), tr1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.character_8_field */
EIF_CHARACTER_8 F130_1582 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_8_field", 129, Current, 0, 1, 1568);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("character_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_306(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.character_32_field */
EIF_CHARACTER_32 F130_1583 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_32_field", 129, Current, 0, 1, 1569);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("character_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_307(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.boolean_field */
EIF_BOOLEAN F130_1584 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("boolean_field", 129, Current, 0, 1, 1570);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("boolean_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_308(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_8_field */
EIF_NATURAL_8 F130_1585 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_8_field", 129, Current, 0, 1, 1571);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_309(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_16_field */
EIF_NATURAL_16 F130_1586 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_16_field", 129, Current, 0, 1, 1572);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_310(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_32_field */
EIF_NATURAL_32 F130_1587 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_field", 129, Current, 0, 1, 1573);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_311(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_64_field */
EIF_NATURAL_64 F130_1588 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_64_field", 129, Current, 0, 1, 1574);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_312(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_8_field */
EIF_INTEGER_8 F130_1589 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_8_field", 129, Current, 0, 1, 1575);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_313(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_16_field */
EIF_INTEGER_16 F130_1590 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_16_field", 129, Current, 0, 1, 1576);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_314(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_32_field */
EIF_INTEGER_32 F130_1591 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_32_field", 129, Current, 0, 1, 1577);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_315(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_64_field */
EIF_INTEGER_64 F130_1592 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_64_field", 129, Current, 0, 1, 1578);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_316(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.real_32_field */
EIF_REAL_32 F130_1593 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_32_field", 129, Current, 0, 1, 1579);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_317(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.pointer_field */
EIF_POINTER F130_1594 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("pointer_field", 129, Current, 0, 1, 1580);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("pointer_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_318(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.real_64_field */
EIF_REAL_64 F130_1595 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_64_field", 129, Current, 0, 1, 1581);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_319(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.set_reference_field */
void F130_1596 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("set_reference_field", 129, Current, 0, 2, 1582);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("reference_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_value", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F130_1573(Current, arg1))) {
			tb1 = (EIF_BOOLEAN)(arg2 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("value_conforms_to_field_static_type", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tr1 = (nstcall = 1, F1_5(arg2));
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2584[Dtype(RTCW(tr1))-646])(tr1));
			ti4_2 = (nstcall = 0, F130_1578(Current, arg1));
			tb1 = (nstcall = 0, F130_1574(Current, ti4_1, ti4_2));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	tr1 = RTCCL(arg2);
	(nstcall = 0, F10_340(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_real_64_field */
void F130_1597 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_64_field", 129, Current, 0, 2, 1583);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_341(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_double_field */
void F130_1598 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_double_field", 129, Current, 0, 2, 1584);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_341(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_character_8_field */
void F130_1599 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_8_field", 129, Current, 0, 2, 1585);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("character_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_342(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_character_field */
void F130_1600 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_field", 129, Current, 0, 2, 1586);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("character_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_342(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_character_32_field */
void F130_1601 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_CHARACTER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_32_field", 129, Current, 0, 2, 1587);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("character_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_343(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_boolean_field */
void F130_1602 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_boolean_field", 129, Current, 0, 2, 1588);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("boolean_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_344(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_8_field */
void F130_1603 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_8_field", 129, Current, 0, 2, 1589);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_345(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_16_field */
void F130_1604 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_16 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_16_field", 129, Current, 0, 2, 1590);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_346(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_32_field */
void F130_1605 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_32_field", 129, Current, 0, 2, 1591);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_347(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_64_field */
void F130_1606 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_64_field", 129, Current, 0, 2, 1592);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_348(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_8_field */
void F130_1607 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_8_field", 129, Current, 0, 2, 1593);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_349(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_16_field */
void F130_1608 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_16 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_16_field", 129, Current, 0, 2, 1594);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_350(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_field */
void F130_1609 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_field", 129, Current, 0, 2, 1595);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_351(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_32_field */
void F130_1610 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_32_field", 129, Current, 0, 2, 1596);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_351(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_64_field */
void F130_1611 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_64_field", 129, Current, 0, 2, 1597);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_352(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_real_32_field */
void F130_1612 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_32_field", 129, Current, 0, 2, 1598);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_353(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_real_field */
void F130_1613 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_field", 129, Current, 0, 2, 1599);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_353(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_pointer_field */
void F130_1614 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_pointer_field", 129, Current, 0, 2, 1600);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F130_1615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("pointer_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F130_1577(Current, arg1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	(nstcall = 0, F10_354(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.field_count */
EIF_INTEGER_32 F130_1615 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_count", 129, Current, 0, 0, 1601);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_299(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.persistent_field_count */
EIF_INTEGER_32 F130_1616 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("persistent_field_count", 129, Current, 0, 0, 1602);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F10_291(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_positive", EX_POST);
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

/* {REFLECTED_OBJECT}.physical_size */
EIF_INTEGER_32 F130_1617 (EIF_REFERENCE Current)
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
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("physical_size", 129, Current, 1, 0, 1603);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F130_1619(Current));
	RTHOOK(2);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_1 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.deep_physical_size */
EIF_INTEGER_32 F130_1618 (EIF_REFERENCE Current)
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
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("deep_physical_size", 129, Current, 1, 0, 1604);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F130_1620(Current));
	RTHOOK(2);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_1 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.physical_size_64 */
EIF_NATURAL_64 F130_1619 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("physical_size_64", 129, Current, 0, 0, 1605);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R1456[dtype-134])(Current));
	Result = (nstcall = 0, F10_301(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.deep_physical_size_64 */
EIF_NATURAL_64 F130_1620 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("deep_physical_size_64", 129, Current, 3, 0, 1606);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(27, 0x01).id, 27, _OBJSIZ_6_6_0_0_0_0_0_0_);
	RTHOOK(2);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1390[dtype-134])(Current));
	tr2 = RTCCL(tr1);
	(nstcall = 1, F27_489(RTCW(loc1), tr2));
	RTHOOK(3);
	(nstcall = 1, F27_493(RTCW(loc1), (EIF_BOOLEAN) 0));
	RTHOOK(4);
	(nstcall = 1, F27_497(RTCW(loc1)));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(6);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1847[Dtype(loc3)-444])(loc3));
		for (;;) {
			RTHOOK(7);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1858[Dtype(loc3)-444])(loc3));
			if (tb1) break;
			RTHOOK(8);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1891[Dtype(loc3)-444])(loc3));
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			Result += (nstcall = 0, F10_301(Current, loc2));
			RTHOOK(10);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1860[Dtype(loc3)-444])(loc3));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit109 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
