/*
 * Code for class ROUTINE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ro226.h"
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

/* {ROUTINE}.adapt */
void F765_4442 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("adapt", 764, Current, 0, 1, 10712);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("conforming", EX_PRE);
		RTTE((nstcall = 0, F1_6(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O3323[Dtype(arg1)-764]);
	*(EIF_POINTER *)(Current + O3323[dtype-764]) = (EIF_POINTER) tp1;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O3326[Dtype(arg1)-764]);
	*(EIF_POINTER *)(Current + O3326[dtype-764]) = (EIF_POINTER) tp1;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O3324[Dtype(arg1)-764]);
	*(EIF_POINTER *)(Current + O3324[dtype-764]) = (EIF_POINTER) tp1;
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3327[Dtype(arg1)-764]);
	*(EIF_INTEGER_32 *)(Current + O3327[dtype-764]) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O3328[Dtype(arg1)-764]);
	*(EIF_BOOLEAN *)(Current + O3328[dtype-764]) = (EIF_BOOLEAN) tb1;
	RTHOOK(10);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O3314[Dtype(arg1)-764]);
	*(EIF_BOOLEAN *)(Current + O3314[dtype-764]) = (EIF_BOOLEAN) tb1;
	RTHOOK(11);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3329[Dtype(arg1)-764]);
	*(EIF_INTEGER_32 *)(Current + O3329[dtype-764]) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3315[Dtype(arg1)-764]);
	*(EIF_INTEGER_32 *)(Current + O3315[dtype-764]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {ROUTINE}.operands */
EIF_REFERENCE F765_4443 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ROUTINE}.target */
EIF_REFERENCE F765_4444 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("target", 764, Current, 4, 0, 10714);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current + O3314[dtype-764])) {
		RTHOOK(2);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(3);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			ti4_1 = (nstcall = 1, F692_3331(loc1));
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = (nstcall = 1, F692_3302(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
			loc2 = RTCCL(tr1);
			tb1 = EIF_TEST(loc2);
		}
		if (tb1) {
			RTHOOK(4);
			Result = (EIF_REFERENCE) RTCCL(loc2);
		}
	} else {
		RTHOOK(5);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			ti4_1 = (nstcall = 1, F692_3331(loc3));
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = (nstcall = 1, F692_3302(loc3, ((EIF_INTEGER_32) 1L)));
			loc4 = RTCCL(tr1);
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(6);
			Result = (EIF_REFERENCE) RTCCL(loc4);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.hash_code */
EIF_INTEGER_32 F765_4445 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code", 764, Current, 0, 0, 10715);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + O3323[dtype-764]);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O3327[dtype-764]);
	ti4_3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_2)));
	ti4_2 = eif_bit_xor(ti4_1,ti4_3);
	Result = (EIF_INTEGER_32) ti4_2;
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

/* {ROUTINE}.precondition */
EIF_BOOLEAN F765_4446 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("precondition", 764, Current, 0, 1, 10716);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.postcondition */
EIF_BOOLEAN F765_4447 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("postcondition", 764, Current, 0, 1, 10717);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.empty_operands */
EIF_REFERENCE F765_4448 (EIF_REFERENCE Current)
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
	
	RTEAA("empty_operands", 764, Current, 0, 0, 10718);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(eif_gen_param(Dftype(Current), 1).id);
	(nstcall = -1, F1_29(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty_operands_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {ROUTINE}.is_equal */
EIF_BOOLEAN F765_4450 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_equal", 764, Current, 0, 1, 10720);
	RTSA(dtype);
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
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tb5 = '\0';
	tb6 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	if (RTEQ(tr1, tr2)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		tb6 = RTEQ(tr1, tr2);
	}
	if (tb6) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
		tb5 = RTEQ(tr1, tr2);
	}
	if (tb5) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O3323[Dtype(arg1)-764]);
		tb4 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O3323[dtype-764]) == tp1);
	}
	if (tb4) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3327[Dtype(arg1)-764]);
		tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3327[dtype-764]) == ti4_1);
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3329[Dtype(arg1)-764]);
		tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3329[dtype-764]) == ti4_1);
	}
	if (tb2) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O3326[Dtype(arg1)-764]);
		tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O3326[dtype-764]) == tp1);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O3324[Dtype(arg1)-764]);
		Result = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O3324[dtype-764]) == tp1);
	}
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.valid_operands */
EIF_BOOLEAN F765_4451 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("valid_operands", 764, Current, 4, 1, 10721);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3315[dtype-764]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	} else {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F692_3331(arg1));
		if ((EIF_BOOLEAN) (ti4_1 >= *(EIF_INTEGER_32 *)(Current + O3315[dtype-764]))) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(5);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(6);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current + O3315[dtype-764])) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(7);
				tu1_1 = (nstcall = 1, F692_3407(arg1, loc1));
				ti4_1 = (EIF_INTEGER_32) tu1_1;
				loc2 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(8);
				loc4 = (nstcall = 0, F765_4475(Current, loc1));
				RTHOOK(9);
				switch (loc2) {
					case 1L:
						RTHOOK(10);
						tr1 = RTLNTY2(eif_new_type(730, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F676_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 2L:
						RTHOOK(11);
						tr1 = RTLNTY2(eif_new_type(727, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F674_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 14L:
						RTHOOK(12);
						tr1 = RTLNTY2(eif_new_type(724, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F651_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 6L:
						RTHOOK(13);
						tr1 = RTLNTY2(eif_new_type(703, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F654_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 7L:
						RTHOOK(14);
						tr1 = RTLNTY2(eif_new_type(700, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F670_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 8L:
						RTHOOK(15);
						tr1 = RTLNTY2(eif_new_type(697, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F657_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 9L:
						RTHOOK(16);
						tr1 = RTLNTY2(eif_new_type(694, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F672_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 10L:
						RTHOOK(17);
						tr1 = RTLNTY2(eif_new_type(715, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F662_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 11L:
						RTHOOK(18);
						tr1 = RTLNTY2(eif_new_type(712, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F664_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 12L:
						RTHOOK(19);
						tr1 = RTLNTY2(eif_new_type(709, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F666_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 13L:
						RTHOOK(20);
						tr1 = RTLNTY2(eif_new_type(706, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F668_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 5L:
						RTHOOK(21);
						tr1 = RTLNTY2(eif_new_type(763, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F648_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 4L:
						RTHOOK(22);
						tr1 = RTLNTY2(eif_new_type(718, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F660_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 3L:
						RTHOOK(23);
						tr1 = RTLNTY2(eif_new_type(721, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F658_3275(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 0L:
						RTHOOK(24);
						tr1 = (nstcall = 1, F692_3302(RTCW(arg1), loc1));
						loc3 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(25);
						if ((nstcall = 0, F131_1633(Current, loc4))) {
							RTHOOK(26);
							Result = '\0';
							if ((EIF_BOOLEAN)(loc3 != NULL)) {
								tr1 = RTCCL(loc3);
								ti4_1 = (nstcall = 0, F10_283(Current, tr1));
								Result = (nstcall = 0, F131_1623(Current, ti4_1, loc4));
							}
						} else {
							RTHOOK(27);
							Result = '\01';
							if (!(EIF_BOOLEAN)(loc3 == NULL)) {
								tr1 = RTCCL(loc3);
								ti4_1 = (nstcall = 0, F10_283(Current, tr1));
								Result = (nstcall = 0, F131_1623(Current, ti4_1, loc4));
							}
						}
						break;
					default:
						RTHOOK(28);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						break;
				}
				RTHOOK(29);
				loc1++;
			}
		}
	}
	RTHOOK(30);
	if ((EIF_BOOLEAN) (Result && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3314[dtype-764]))) {
		RTHOOK(31);
		Result = '\0';
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (nstcall = 1, F692_3334(RTCW(arg1)));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			tr1 = (nstcall = 1, F692_3302(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN)(tr1 != NULL);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.valid_target */
EIF_BOOLEAN F765_4452 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("valid_target", 764, Current, 0, 1, 10722);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		ti4_1 = (nstcall = 1, F692_3331(arg1));
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(2);
		tb1 = (nstcall = 1, F692_3373(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
		if (tb1) {
			RTHOOK(3);
			tr1 = (nstcall = 1, F692_3304(arg1, ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
		} else {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.is_target_closed */
EIF_BOOLEAN F765_4453 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3314[Dtype(Current)-764]);
}


/* {ROUTINE}.open_count */
EIF_INTEGER_32 F765_4454 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3315[Dtype(Current)-764]);
}


/* {ROUTINE}.set_operands */
void F765_4455 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_operands", 764, Current, 0, 1, 10725);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		RTTE((nstcall = 0, F765_4451(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("operands_set", EX_POST);
		tb1 = '\01';
		if (!(((!((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) || (RTEQ(*(EIF_REFERENCE *)(Current), arg1)))))) {
			tb2 = '\01';
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
				tb3 = '\01';
				if (!(EIF_BOOLEAN)(arg1 == NULL)) {
					tb4 = (nstcall = 1, F692_3334(RTCW(arg1)));
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			tb1 = tb2;
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
}

/* {ROUTINE}.set_target */
void F765_4456 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("set_target", 764, Current, 2, 1, 10726);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_target_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_target_closed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current + O3314[dtype-764]), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("target_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F765_4444(Current)) != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("same_target_type", EX_PRE);
		tb1 = '\0';
		tr1 = (nstcall = 0, F765_4444(Current));
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			tr1 = RTCCL(arg1);
			tb2 = (nstcall = 1, F1_7(loc2, tr1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(7);
		tr1 = RTCCL(arg1);
		(nstcall = 1, F692_3335(RTCW(loc1), tr1, ((EIF_INTEGER_32) 1L)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("target_set", EX_POST);
		if (RTCEQ((nstcall = 0, F765_4444(Current)), arg1)) {
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

/* {ROUTINE}.copy */
void F765_4457 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("copy", 764, Current, 1, 1, 10727);
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
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		(nstcall = 0, F1_16(Current, arg1));
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTHOOK(6);
			tr1 = (nstcall = 1, F1_14(loc1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("same_call_status", EX_POST);
		tb1 = '\01';
		tb2 = EIF_TRUE;
		if (tb2) {
			tb1 = EIF_TRUE;
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
}

/* {ROUTINE}.flexible_call */
void F765_4460 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("flexible_call", 764, Current, 2, 1, 10728);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		RTTE((nstcall = 0, F765_4451(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3318[dtype-765])(Current, loc1));
	} else {
		RTHOOK(4);
		RTCT0("from_precondition", EX_CHECK);
		tr1 = RTLNTY2(eif_gen_param(dftype, 1), 0x00);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2584[Dtype(tr1)-646])(tr1));
		tr1 = (nstcall = 0, F131_1628(Current, ti4_1, arg1));
		loc2 = tr1;
		loc2 = RTRV(eif_gen_param(dftype, 1),loc2);
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3318[dtype-765])(Current, loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {ROUTINE}.correct_mismatch */
void F765_4461 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("correct_mismatch", 764, Current, 0, 0, 10729);
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

/* {ROUTINE}.closed_operands */
EIF_REFERENCE F765_4462 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ROUTINE}.closed_count */
EIF_INTEGER_32 F765_4463 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("closed_count", 764, Current, 1, 0, 10731);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F692_3331(loc1));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.rout_disp */
EIF_POINTER F765_4464 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O3323[Dtype(Current)-764]);
}


/* {ROUTINE}.calc_rout_addr */
EIF_POINTER F765_4465 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O3324[Dtype(Current)-764]);
}


/* {ROUTINE}.open_map */
EIF_REFERENCE F765_4466 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ROUTINE}.encaps_rout_disp */
EIF_POINTER F765_4467 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O3326[Dtype(Current)-764]);
}


/* {ROUTINE}.routine_id */
EIF_INTEGER_32 F765_4468 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3327[Dtype(Current)-764]);
}


/* {ROUTINE}.is_basic */
EIF_BOOLEAN F765_4469 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3328[Dtype(Current)-764]);
}


/* {ROUTINE}.written_type_id_inline_agent */
EIF_INTEGER_32 F765_4470 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3329[Dtype(Current)-764]);
}


/* {ROUTINE}.set_rout_disp */
void F765_4471 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7, EIF_INTEGER_32 arg8, EIF_REFERENCE arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg9);
	RTLR(1,Current);
	RTLR(2,arg5);
	RTLIU(3);
	
	RTEAA("set_rout_disp", 764, Current, 0, 10, 10739);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_routine_id_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) -1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg7) {
			tb1 = (nstcall = 0, F765_4452(Current, arg9));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F765_4473(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ROUTINE}.set_rout_disp_final */
void F765_4472 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_REFERENCE arg4, EIF_BOOLEAN arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg4);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_rout_disp_final", 764, Current, 0, 6, 10740);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg5) {
			tb1 = (nstcall = 0, F765_4452(Current, arg4));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_POINTER *)(Current + O3323[dtype-764]) = (EIF_POINTER) arg1;
	RTHOOK(3);
	*(EIF_POINTER *)(Current + O3326[dtype-764]) = (EIF_POINTER) arg2;
	RTHOOK(4);
	*(EIF_POINTER *)(Current + O3324[dtype-764]) = (EIF_POINTER) arg3;
	RTHOOK(5);
	RTAR(Current, arg4);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg4;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current + O3314[dtype-764]) = (EIF_BOOLEAN) arg5;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O3315[dtype-764]) = (EIF_INTEGER_32) arg6;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {ROUTINE}.set_rout_disp_int */
void F765_4473 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7, EIF_INTEGER_32 arg8, EIF_REFERENCE arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg9);
	RTLR(1,Current);
	RTLR(2,arg5);
	RTLIU(3);
	
	RTEAA("set_rout_disp_int", 764, Current, 0, 10, 10704);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_routine_id_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) -1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg7) {
			tb1 = (nstcall = 0, F765_4452(Current, arg9));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_POINTER *)(Current + O3323[dtype-764]) = (EIF_POINTER) arg1;
	RTHOOK(4);
	*(EIF_POINTER *)(Current + O3326[dtype-764]) = (EIF_POINTER) arg2;
	RTHOOK(5);
	*(EIF_POINTER *)(Current + O3324[dtype-764]) = (EIF_POINTER) arg3;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O3327[dtype-764]) = (EIF_INTEGER_32) arg4;
	RTHOOK(7);
	RTAR(Current, arg5);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg5;
	RTHOOK(8);
	*(EIF_BOOLEAN *)(Current + O3328[dtype-764]) = (EIF_BOOLEAN) arg6;
	RTHOOK(9);
	*(EIF_BOOLEAN *)(Current + O3314[dtype-764]) = (EIF_BOOLEAN) arg7;
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current + O3329[dtype-764]) = (EIF_INTEGER_32) arg8;
	RTHOOK(11);
	RTAR(Current, arg9);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg9;
	RTHOOK(12);
	*(EIF_INTEGER_32 *)(Current + O3315[dtype-764]) = (EIF_INTEGER_32) arg10;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("rout_disp_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O3323[dtype-764]) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("encaps_rout_disp_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O3326[dtype-764]) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("calc_rout_addr_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O3324[dtype-764]) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("routine_id_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3327[dtype-764]) == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("open_map_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("is_target_closed_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3314[dtype-764]) == arg7)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("is_basic_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3328[dtype-764]) == arg6)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("written_type_id_inline_agent_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3329[dtype-764]) == arg8)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("closed_operands_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg9)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("open_count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3315[dtype-764]) == arg10)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {ROUTINE}.open_types */
EIF_REFERENCE F765_4474 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {ROUTINE}.open_operand_type */
EIF_INTEGER_32 F765_4475 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("open_operand_type", 764, Current, 1, 1, 10706);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("within_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current + O3315[dtype-764])), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(5);
		{
			static EIF_TYPE_INDEX typarr0[] = {498,697,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F499_2576(RTCW(loc1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 1L), *(EIF_INTEGER_32 *)(Current + O3315[dtype-764])));
		RTHOOK(6);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc1;
	}
	RTHOOK(7);
	ti4_1 = (nstcall = 1, F499_2581(RTCW(loc1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(9);
		tr1 = RTLNTY2(eif_gen_param(dftype, 1), 0x00);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2583[Dtype(tr1)-646])(tr1, arg1));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2584[Dtype(RTCW(tr2))-646])(tr2));
		Result = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		(nstcall = 1, F499_2600(RTCW(loc1), Result, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.type_id_of */
EIF_INTEGER_32 F765_4476 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("type_id_of", 764, Current, 0, 1, 10707);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("False", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1_5(arg1));
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2584[Dtype(RTCW(tr1))-646])(tr1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.adapt_from */
void F765_4477 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("adapt_from", 764, Current, 0, 1, 10708);
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
		RTCT("conforming", EX_PRE);
		RTTE((nstcall = 0, F1_6(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F765_4442(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ROUTINE}.arguments */
EIF_REFERENCE F765_4478 (EIF_REFERENCE Current)
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
	
	RTEAA("arguments", 764, Current, 0, 0, 10709);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.set_arguments */
void F765_4479 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_arguments", 764, Current, 0, 1, 10710);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F765_4455(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ROUTINE}.valid_arguments */
EIF_BOOLEAN F765_4480 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("valid_arguments", 764, Current, 0, 1, 10711);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F765_4451(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit226 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
