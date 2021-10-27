/*
 * Code for class MISMATCH_INFORMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mi160.h"
#include "../C11/ha528.h"
#include "../C4/mi160.h"
#include <eif_retrieve.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MISMATCH_INFORMATION}.default_create */
void F603_4056 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F596_3924(Current, ((EIF_INTEGER_32) 5L));
	RTOUCP(11,F603_4066, (Current));
	RTLE;
}

/* {MISMATCH_INFORMATION}.class_name */
EIF_REFERENCE F603_4057 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	RTCT0("attached {STRING} item (type_name_key) as r", EX_CHECK);
	tr1 = RTOUCR(12,F603_4060, (Current));
	tr1 = F596_3929(Current, tr1);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(892, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTLE;
	return Result;
}

/* {MISMATCH_INFORMATION}.type_name_key */

EIF_REFERENCE F603_4060 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (12,RTMS_EX_H("_type_name",10,803527013));
}

/* {MISMATCH_INFORMATION}.out */
EIF_REFERENCE F603_4063 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	Result = RTLNS(eif_new_type(892, 0x01).id, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(F603_4057(Current))+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_);
	F891_6605(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 20L) + ti4_1) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 40L) * ti4_2)));
	tr1 = RTMS_EX_H("Attributes of original class ",29,488257824);
	F893_6731(RTCW(Result), tr1);
	tr1 = F603_4057(Current);
	F893_6731(RTCW(Result), tr1);
	tr1 = RTMS_EX_H(": ",2,14880);
	F893_6731(RTCW(Result), tr1);
	F893_6735(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_) - ((EIF_INTEGER_32) 1L)));
	tr1 = RTMS_EX_H(" item",5,1769481581);
	F893_6731(RTCW(Result), tr1);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_) - ((EIF_INTEGER_32) 1L)) != ((EIF_INTEGER_32) 1L))) {
		F893_6745(RTCW(Result), (EIF_CHARACTER_8) 's');
	}
	F893_6745(RTCW(Result), (EIF_CHARACTER_8) '\012');
	F596_3963(Current);
	for (;;) {
		if (F596_3958(Current)) break;
		loc2 = F596_3936(Current);
		if (!RTEQ(loc2, RTOUCR(12,F603_4060, (Current)))) {
			tr1 = RTMS_EX_H("  ",2,8224);
			F893_6731(RTCW(Result), tr1);
			if ((EIF_BOOLEAN)(loc2 == NULL)) {
				tr1 = RTMS_EX_H("Void",4,1450142052);
				F893_6731(RTCW(Result), tr1);
			} else {
				F893_6731(RTCW(Result), loc2);
			}
			tr1 = RTMS_EX_H(": ",2,14880);
			F893_6731(RTCW(Result), tr1);
			loc1 = F596_3935(Current);
			if ((EIF_BOOLEAN)(loc1 == NULL)) {
				tr1 = RTMS_EX_H("Void",4,1450142052);
				F893_6731(RTCW(Result), tr1);
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(loc1))-0])(loc1);
				F893_6731(RTCW(Result), tr1);
			}
			F893_6745(RTCW(Result), (EIF_CHARACTER_8) '\012');
		}
		F596_3964(Current);
	}
	RTLE;
	return Result;
}

/* {MISMATCH_INFORMATION}.internal_put */
void F603_4064 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	tr1 = RTCCL(arg1);
	tr2 = RTLNS(eif_new_type(892, 0x01).id, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F891_6608(RTCW(tr2), arg2);
	F596_3970(Current, tr1, tr2);
	RTLE;
}

/* {MISMATCH_INFORMATION}.set_string_versions */
void F603_4065 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(arg1 == tp1)) {
		*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) NULL;
	} else {
		loc1 = RTLNS(eif_new_type(896, 0x01).id, 896, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F891_6608(RTCW(loc1), arg1);
		tb1 = F897_7004(RTCW(loc1));
		if (tb1) {
			*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) NULL;
		} else {
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) loc1;
		}
	}
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(arg2 == tp1)) {
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) NULL;
	} else {
		loc1 = RTLNS(eif_new_type(896, 0x01).id, 896, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F891_6608(RTCW(loc1), arg2);
		tb1 = F897_7004(RTCW(loc1));
		if (tb1) {
			*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) NULL;
		} else {
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) loc1;
		}
	}
	RTLE;
}

/* {MISMATCH_INFORMATION}.set_callback_pointers */
static void F603_4066_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
	RTOUDV(11)

	
	RTEV;
	RTOTP;
	F603_4067(Current, Current, (EIF_POINTER) F596_3978, (EIF_POINTER) F603_4064, (EIF_POINTER) F603_4065);
	RTOTE;
	RTEE;
#undef Result
}

void F603_4066 (EIF_REFERENCE Current)
{
	GTCX
	RTOUCP(11,F603_4066_body,(Current));
}

/* {MISMATCH_INFORMATION}.set_mismatch_information_access */
void F603_4067 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	{
		EIF_OBJECT larg1 = &arg1;
		EIF_POINTER larg2 = arg2;
		EIF_POINTER larg3 = arg3;
		EIF_POINTER larg4 = arg4;set_mismatch_information_access((EIF_OBJECT) larg1, (EIF_PROCEDURE) larg2, (EIF_PROCEDURE) larg3, (EIF_PROCEDURE) larg4);
		
	}
	RTLE;
}

void EIF_Minit160 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
