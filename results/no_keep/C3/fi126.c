/*
 * Code for class FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi126.h"
#include "eif_file.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE}.make_with_name */
void F470_2208 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F470_2369(Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O2066[dtype-469]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O1927[dtype-469]) = (EIF_POINTER) tp2;
	tr1 = RTLNSMART(eif_new_type(777, 1).id);
	F770_4495(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.descriptor_available */
EIF_BOOLEAN F470_2223 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O2075[Dtype(Current)-469]);
}


/* {FILE}.count */
EIF_INTEGER_32 F470_2238 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1139[dtype-470])(Current)) {
		if ((EIF_BOOLEAN) !F470_2269(Current)) {
			F470_2377(Current);
			Result = F149_1841(RTCV(RTOSCF(2375,F470_2375, (Current))));
		} else {
			tp1 = *(EIF_POINTER *)(Current + O1927[dtype-469]);
			Result = (EIF_INTEGER_32) eif_file_size((FILE*) tp1);
			RTLE;
			return (EIF_INTEGER_32) Result;
		}
	}
	RTLE;
	return Result;
}

/* {FILE}.exists */
EIF_BOOLEAN F470_2243 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F470_2267(Current)) {
		tp1 = *(EIF_POINTER *)(RTCV(F470_2367(Current))+ _PTROFF_0_1_0_1_0_0_);
		Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) tp1));
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {FILE}.is_closed */
EIF_BOOLEAN F470_2267 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2066[Dtype(Current)-469]) == ((EIF_INTEGER_32) 0L));
}

/* {FILE}.is_open_write */
EIF_BOOLEAN F470_2269 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2066[dtype-469]) == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2066[dtype-469]) == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2066[dtype-469]) == ((EIF_INTEGER_32) 5L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2066[dtype-469]) == ((EIF_INTEGER_32) 3L)));
}

/* {FILE}.close */
void F470_2295 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R2009[dtype-470])(Current, *(EIF_POINTER *)(Current + O1927[dtype-469]));
	*(EIF_INTEGER_32 *)(Current + O2066[dtype-469]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O1927[dtype-469]) = (EIF_POINTER) tp2;
	*(EIF_BOOLEAN *)(Current + O2075[dtype-469]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {FILE}.put_string */
void F470_2317 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tp1 = *(EIF_POINTER *)(Current + O1927[Dtype(Current)-469]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		eif_file_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {FILE}.file_close */
void F470_2365 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_close((FILE*) arg1);
	
}

/* {FILE}.internal_name_pointer */
EIF_REFERENCE F470_2367 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTCT0("internal_name_pointer_set", EX_CHECK);
			RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {FILE}.set_name */
void F470_2369 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTOSCF(2375,F470_2375, (Current));
	tr1 = F149_1854(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current + _REFACS_2_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.buffered_file_info */
static EIF_REFERENCE F470_2375_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOSP (2375);
#define Result RTOSR(2375)
	RTOC_NEW(Result);
	tr1 = RTLNS(eif_new_type(148, 0x01).id, 148, _OBJSIZ_3_2_0_0_0_0_0_0_);
	F149_1837(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (2375);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F470_2375 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2375,F470_2375_body,(Current));
}

/* {FILE}.set_buffer */
void F470_2377 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	tr1 = RTOSCF(2375,F470_2375, (Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = F470_2367(Current);
	F149_1884(RTCW(tr1), tr2, tr3);
	RTLE;
}

/* {FILE}.file_size */
EIF_INTEGER_32 F470_2392 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_size((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_ps */
void F470_2404 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	eif_file_ps((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
}

/* {FILE}.file_exists */
EIF_BOOLEAN F470_2410 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) arg1));
	
	return Result;
}

/* {FILE}.set_write_mode */
void F470_2433 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O2066[Dtype(Current)-469]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

void EIF_Minit126 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
