/*
 * Code for class COM_FAILURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co58.h"
#include "eif_com_exception.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F76_1033
static EIF_INTEGER_32 inline_F76_1033 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
			char *stopstring = NULL;
			long result = 0, high_bits = 0, low_bits = 0;
			char high_str [7];
			char *exception_code = (char *)(arg1);
			  
			if (NULL != exception_code)
			{
				strncpy (high_str, exception_code, 6);
				high_str [6] = '\0';

				high_bits = strtol (high_str, &stopstring, 16);
				low_bits = strtol (exception_code + 6, &stopstring, 16);
				result = (high_bits << 16) + low_bits;
			}
			return (EIF_INTEGER)result;
		#else
			return 0;
		#endif
	;
}
#define INLINE_F76_1033
#endif
#ifndef INLINE_F76_1034
static EIF_INTEGER_32 inline_F76_1034 (EIF_INTEGER_32 arg1)
{
	#ifdef EIF_WINDOWS
	return HRESULT_CODE(arg1);
#else
	return 0;
#endif
	;
}
#define INLINE_F76_1034
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COM_FAILURE}.code */
EIF_INTEGER_32 F76_1024 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
}

/* {COM_FAILURE}.set_hresult_code */
void F76_1026 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) arg1;
}

/* {COM_FAILURE}.set_exception_information */
void F76_1031 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
		loc1 = RTLNS(eif_new_type(110, 0x01).id, 110, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr1 = F76_1032(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_));
		F111_1200(RTCW(loc1), tr1);
		tp1 = F111_1219(RTCW(loc1));
		ti4_1 = inline_F76_1033(tp1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	} else {
		loc1 = RTLNS(eif_new_type(110, 0x01).id, 110, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F111_1200(RTCW(loc1), arg1);
		tp1 = F111_1219(RTCW(loc1));
		ti4_1 = inline_F76_1033(tp1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_);
		ti4_1 = inline_F76_1034(ti4_1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {COM_FAILURE}.ccom_hresult_to_string */
EIF_REFERENCE F76_1032 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(697, 0x00).id, 697, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	Result = F696_3574(RTCW(tr1));
	tr1 = RTMS_EX_H("0x",2,12408);
	tr1 = F778_4902(tr1, Result);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {COM_FAILURE}.ccom_hresult */
EIF_INTEGER_32 F76_1033 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F76_1033 ((EIF_POINTER) arg1);
	return Result;
}

/* {COM_FAILURE}.ccom_hresult_code */
EIF_INTEGER_32 F76_1034 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F76_1034 ((EIF_INTEGER_32) arg1);
	return Result;
}

void EIF_Minit58 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
