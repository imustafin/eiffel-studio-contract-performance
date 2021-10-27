/*
 * Code for class FIND_SEPARATOR_FACILITY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi981.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FIND_SEPARATOR_FACILITY}.separator_characters */

EIF_REFERENCE F900_7546 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (47,RTMS_EX_H(":/-, .",6,872260142));
}

/* {FIND_SEPARATOR_FACILITY}.find_separator */
EIF_INTEGER_32 F900_7547 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(47,F900_7546, (Current)))+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = RTOUCR(47,F900_7546, (Current));
		tc1 = F893_6697(RTCW(tr1), loc1);
		loc2 = F891_6617(RTCW(arg1), tc1, ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = RTOUCR(47,F900_7546, (Current));
			tc1 = F893_6697(RTCW(tr1), loc1);
			loc2 = F891_6617(RTCW(arg1), tc1, arg2);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 < Result))) {
				Result = (EIF_INTEGER_32) loc2;
			}
		}
		loc1++;
	}
	if ((EIF_BOOLEAN) !loc4) {
		loc1 = (EIF_INTEGER_32) arg2;
		tr1 = F893_6777(RTCW(arg1), loc1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
		tr2 = RTMS_EX_H("[0]",3,5976157);
		tb1 = F891_6632(RTCW(tr1), tr2);
		if (tb1) {
			loc1 += ((EIF_INTEGER_32) 3L);
		}
		loc3 = F893_6697(RTCW(arg1), loc1);
		for (;;) {
			tb1 = '\01';
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			if (!(EIF_BOOLEAN) (loc1 > ti4_2)) {
				tc1 = F893_6697(RTCW(arg1), loc1);
				tb1 = (EIF_BOOLEAN)(tc1 != loc3);
			}
			if (tb1) break;
			loc1++;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (loc1 <= ti4_2)) {
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) 'm')) {
					tc1 = F893_6697(RTCW(arg1), loc1);
					tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'i');
				}
				if (tb2) {
					loc3 = F893_6697(RTCW(arg1), loc1);
				} else {
					tb2 = '\0';
					tb3 = '\0';
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) 'h')) {
						tc1 = F893_6697(RTCW(arg1), loc1);
						tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '1');
					}
					if (tb3) {
						tb3 = '\0';
						tb4 = F890_6522(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
						if (tb4) {
							tc1 = F893_6696(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
							tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '2');
						}
						tb2 = tb3;
					}
					if (tb2) {
						loc1++;
						loc3 = F893_6697(RTCW(arg1), loc1);
					}
				}
			}
		}
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) -1L));
	}
	RTLE;
	return Result;
}

/* {FIND_SEPARATOR_FACILITY}.extracted_substrings */
EIF_REFERENCE F900_7548 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLIU(6);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L))) {
		loc1 = F893_6777(RTCW(arg1), arg2, (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L)));
		loc2 = F893_6777(RTCW(arg1), arg3, arg3);
	} else {
		loc1 = F893_6777(RTCW(arg1), arg2, (EIF_INTEGER_32) -arg3);
		loc2 = RTLNS(eif_new_type(892, 0x01).id, 892, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F891_6605(RTCW(loc2), ((EIF_INTEGER_32) 0L));
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,811,0xFF01,892,0xFF01,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = loc2;
	RTAR(tr1,loc2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

void EIF_Minit981 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
