/*
 * Code for class IO_MEDIUM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "io94.h"

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
EIF_BOOLEAN F112_1238 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_plain_text", 111, Current, 0, 0, 1303);
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
EIF_CHARACTER_8 F112_1239 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current + O1124[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.last_string */
EIF_REFERENCE F112_1240 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {IO_MEDIUM}.last_integer */
EIF_INTEGER_32 F112_1241 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O1126[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.last_integer_32 */
EIF_INTEGER_32 F112_1242 (EIF_REFERENCE Current)
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
	
	RTEAA("last_integer_32", 111, Current, 0, 0, 1287);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O1126[dtype-111]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_integer_64 */
EIF_INTEGER_64 F112_1243 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_64 *)(Current + O1128[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.last_integer_16 */
EIF_INTEGER_16 F112_1244 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_16 *)(Current + O1129[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.last_integer_8 */
EIF_INTEGER_8 F112_1245 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_8 *)(Current + O1130[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.last_natural_64 */
EIF_NATURAL_64 F112_1246 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current + O1131[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.last_natural */
EIF_NATURAL_32 F112_1247 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current + O1132[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.last_natural_32 */
EIF_NATURAL_32 F112_1248 (EIF_REFERENCE Current)
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
	
	RTEAA("last_natural_32", 111, Current, 0, 0, 1293);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_NATURAL_32 *)(Current + O1132[dtype-111]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_natural_16 */
EIF_NATURAL_16 F112_1249 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_16 *)(Current + O1134[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.last_natural_8 */
EIF_NATURAL_8 F112_1250 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_8 *)(Current + O1135[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.last_real */
EIF_REAL_32 F112_1251 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_32 *)(Current + O1136[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.last_double */
EIF_REAL_64 F112_1252 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current + O1137[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.bytes_read */
EIF_INTEGER_32 F112_1253 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O1138[Dtype(Current)-111]);
}


/* {IO_MEDIUM}.dispose */
void F112_1265 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 111, Current, 0, 0, 1306);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, F470_2267(Current))) {
		RTHOOK(2);
		(nstcall = 0, F470_2295(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {IO_MEDIUM}.read_stream_thread_aware */
void F112_1309 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("read_stream_thread_aware", 111, Current, 0, 1, 1292);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F465_2200(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R1191[dtype-470])(Current, arg1));
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
void F112_1312 (EIF_REFERENCE Current)
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
	
	RTEAA("read_line_thread_aware", 111, Current, 0, 0, 1295);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F465_2200(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1194[dtype-470])(Current));
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
EIF_CHARACTER_8 F112_1314 (EIF_REFERENCE Current)
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
	
	RTEAA("lastchar", 111, Current, 0, 0, 1297);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_CHARACTER_8 *)(Current + O1124[dtype-111]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.laststring */
EIF_REFERENCE F112_1315 (EIF_REFERENCE Current)
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
	
	RTEAA("laststring", 111, Current, 0, 0, 1298);
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
EIF_INTEGER_32 F112_1316 (EIF_REFERENCE Current)
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
	
	RTEAA("lastint", 111, Current, 0, 0, 1299);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O1126[dtype-111]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastreal */
EIF_REAL_32 F112_1317 (EIF_REFERENCE Current)
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
	
	RTEAA("lastreal", 111, Current, 0, 0, 1300);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_32 *)(Current + O1136[dtype-111]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastdouble */
EIF_REAL_64 F112_1318 (EIF_REFERENCE Current)
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
	
	RTEAA("lastdouble", 111, Current, 0, 0, 1301);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_64 *)(Current + O1137[dtype-111]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit94 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
