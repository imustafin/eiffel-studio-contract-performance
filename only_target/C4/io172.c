/*
 * Code for class IO_MEDIUM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "io172.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IO_MEDIUM}.is_plain_text */
EIF_BOOLEAN F621_4530 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_plain_text", 620, Current, 0, 0, 8614);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_BOOLEAN) 0;
}

/* {IO_MEDIUM}.last_character */
EIF_CHARACTER_8 F621_4531 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current + O3428[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.last_string */
EIF_REFERENCE F621_4532 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {IO_MEDIUM}.last_integer */
EIF_INTEGER_32 F621_4533 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3430[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.last_integer_32 */
EIF_INTEGER_32 F621_4534 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_integer_32", 620, Current, 0, 0, 8598);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O3430[dtype-620]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_integer_64 */
EIF_INTEGER_64 F621_4535 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_64 *)(Current + O3432[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.last_integer_16 */
EIF_INTEGER_16 F621_4536 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_16 *)(Current + O3433[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.last_integer_8 */
EIF_INTEGER_8 F621_4537 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_8 *)(Current + O3434[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.last_natural_64 */
EIF_NATURAL_64 F621_4538 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current + O3435[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.last_natural */
EIF_NATURAL_32 F621_4539 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current + O3436[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.last_natural_32 */
EIF_NATURAL_32 F621_4540 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_natural_32", 620, Current, 0, 0, 8604);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_NATURAL_32 *)(Current + O3436[dtype-620]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_natural_16 */
EIF_NATURAL_16 F621_4541 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_16 *)(Current + O3438[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.last_natural_8 */
EIF_NATURAL_8 F621_4542 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_8 *)(Current + O3439[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.last_real */
EIF_REAL_32 F621_4543 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_32 *)(Current + O3440[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.last_double */
EIF_REAL_64 F621_4544 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current + O3441[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.bytes_read */
EIF_INTEGER_32 F621_4545 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3442[Dtype(Current)-620]);
}


/* {IO_MEDIUM}.dispose */
void F621_4557 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 620, Current, 0, 0, 8592);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, F622_4751(Current))) {
		RTHOOK(2);
		(nstcall = 0, F622_4779(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {IO_MEDIUM}.read_stream_thread_aware */
void F621_4601 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_stream_thread_aware", 620, Current, 0, 1, 8603);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F403_2749(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3495[dtype-622])(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {IO_MEDIUM}.read_line_thread_aware */
void F621_4604 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_line_thread_aware", 620, Current, 0, 0, 8606);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F403_2749(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3498[dtype-622])(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {IO_MEDIUM}.lastchar */
EIF_CHARACTER_8 F621_4606 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastchar", 620, Current, 0, 0, 8608);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_CHARACTER_8 *)(Current + O3428[dtype-620]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.laststring */
EIF_REFERENCE F621_4607 (EIF_REFERENCE Current)
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
	
	RTEAA("laststring", 620, Current, 0, 0, 8609);
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

/* {IO_MEDIUM}.lastint */
EIF_INTEGER_32 F621_4608 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastint", 620, Current, 0, 0, 8610);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O3430[dtype-620]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastreal */
EIF_REAL_32 F621_4609 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastreal", 620, Current, 0, 0, 8611);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_32 *)(Current + O3440[dtype-620]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastdouble */
EIF_REAL_64 F621_4610 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastdouble", 620, Current, 0, 0, 8612);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_64 *)(Current + O3441[dtype-620]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit172 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
