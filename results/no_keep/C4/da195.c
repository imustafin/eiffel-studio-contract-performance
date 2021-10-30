/*
 * Code for class DATE_TIME_CODE_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da195.h"
#include <math.h>
#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_CODE_STRING}.make */
void F781_5016 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,arg1);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,tr2);
	RTLR(7,loc7);
	RTLIU(8);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,576,0xFF01,582,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F577_2859(RTCW(tr1), ((EIF_INTEGER_32) 20L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc4 = RTLNS(eif_new_type(48, 0x01).id, 48, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = F49_721(RTCW(loc4));
	tr1 = F1_14(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = F49_722(RTCW(loc4));
	tr1 = F1_14(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc2 >= ti4_1)) break;
		loc3 = F780_5013(Current, arg1, loc2);
		loc5 = F780_5014(Current, arg1, loc2, loc3);
		ti4_2 = eif_abs_int32 (loc3);
		loc3 = (EIF_INTEGER_32) ti4_2;
		loc6 = eif_boxed_item(loc5,1);
		F778_4940(RTCW(loc6));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTLNS(eif_new_type(582, 0x01).id, 582, _OBJSIZ_2_2_0_5_0_0_0_0_);
			F583_2991(RTCW(tr2), loc6);
			F577_2905(RTCW(tr1), tr2, loc1);
			loc1++;
		}
		loc7 = eif_boxed_item(loc5,2);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTLNS(eif_new_type(582, 0x01).id, 582, _OBJSIZ_2_2_0_5_0_0_0_0_);
			F583_2991(RTCW(tr2), loc7);
			F577_2905(RTCW(tr1), tr2, loc1);
			loc1++;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
	}
	tr1 = RTLNS(eif_new_type(4, 0x01).id, 4, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F5_169(RTCW(tr1));
	ti4_2 = F5_173(RTCW(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 100L)) * ((EIF_INTEGER_32) -100L));
	RTLE;
}

/* {DATE_TIME_CODE_STRING}.create_string */
EIF_REFERENCE F781_5027 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,loc7);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,loc6);
	RTLIU(8);
	
	RTGC;
	Result = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F776_4789(RTCW(Result), ((EIF_INTEGER_32) 1L));
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc7 = F577_2864(RTCW(tr1), loc4);
	for (;;) {
		if ((EIF_BOOLEAN)(loc7 == NULL)) break;
		loc5 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_4_);
		switch (loc5) {
			case 1L:
				ti4_1 = F574_2839(RTCW(loc1));
				tr1 = c_outi(ti4_1);
				F778_4900(RTCW(Result), tr1);
				break;
			case 2L:
				loc3 = F574_2839(RTCW(loc1));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F778_4900(RTCW(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F778_4900(RTCW(Result), tr1);
				break;
			case 3L:
				loc3 = F783_5069(RTCW(loc1));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F498_2581(RTCW(tr1), loc3);
				F778_4900(RTCW(Result), tr1);
				break;
			case 4L:
				ti4_1 = F574_2841(RTCW(loc1));
				loc6 = c_outi(ti4_1);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					F778_4900(RTCW(Result), loc6);
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						tr1 = RTMS_EX_H("000",3,3158064);
						F778_4900(RTCW(Result), tr1);
						F778_4900(RTCW(Result), loc6);
					} else {
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
							tr1 = RTMS_EX_H("00",2,12336);
							F778_4900(RTCW(Result), tr1);
							F778_4900(RTCW(Result), loc6);
						} else {
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
							if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
								tr1 = RTMS_EX_H("0",1,48);
								F778_4900(RTCW(Result), tr1);
								F778_4900(RTCW(Result), loc6);
							}
						}
					}
				}
				break;
			case 5L:
				ti4_1 = F574_2841(RTCW(loc1));
				loc6 = c_outi(ti4_1);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
					F778_4883(RTCW(loc6), ((EIF_INTEGER_32) 2L));
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						F778_4914(RTCW(Result), (EIF_CHARACTER_8) '0');
					}
				}
				F778_4900(RTCW(Result), loc6);
				break;
			case 6L:
				ti4_1 = F574_2840(RTCW(loc1));
				tr1 = c_outi(ti4_1);
				F778_4900(RTCW(Result), tr1);
				break;
			case 7L:
				loc3 = F574_2840(RTCW(loc1));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F778_4900(RTCW(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F778_4900(RTCW(Result), tr1);
				break;
			case 8L:
				loc3 = F574_2840(RTCW(loc1));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tr1 = F498_2581(RTCW(tr1), loc3);
				F778_4900(RTCW(Result), tr1);
				break;
			case 9L:
				ti4_1 = F48_695(RTCW(loc2));
				tr1 = c_outi(ti4_1);
				F778_4900(RTCW(Result), tr1);
				break;
			case 10L:
				loc3 = F48_695(RTCW(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F778_4900(RTCW(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F778_4900(RTCW(Result), tr1);
				break;
			case 11L:
			case 12L:
				loc3 = F48_695(RTCW(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
					}
				} else {
					if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 12L))) {
						loc3 -= ((EIF_INTEGER_32) 12L);
					}
				}
				tb1 = '\0';
				ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 12U);
				if ((EIF_BOOLEAN)(loc5 == ti4_1)) {
					tb1 = (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L));
				}
				if (tb1) {
					tr1 = RTMS_EX_H("0",1,48);
					F778_4900(RTCW(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F778_4900(RTCW(Result), tr1);
				break;
			case 13L:
				ti4_1 = F48_696(RTCW(loc2));
				tr1 = c_outi(ti4_1);
				F778_4900(RTCW(Result), tr1);
				break;
			case 14L:
				loc3 = F48_696(RTCW(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F778_4900(RTCW(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F778_4900(RTCW(Result), tr1);
				break;
			case 15L:
				ti4_1 = F48_697(RTCW(loc2));
				tr1 = c_outi(ti4_1);
				F778_4900(RTCW(Result), tr1);
				break;
			case 16L:
				loc3 = F48_697(RTCW(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					F778_4900(RTCW(Result), tr1);
				}
				tr1 = c_outi(loc3);
				F778_4900(RTCW(Result), tr1);
				break;
			case 17L:
				tr8_1 = *(EIF_REAL_64 *)(RTCW(loc2)+ _R64OFF_0_0_0_1_0_0_0_0_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_0_);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr1 = RTLNS(eif_new_type(721, 0x00).id, 721, _OBJSIZ_0_0_0_0_0_0_0_1_);
				*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_2)));
				loc3 = F720_4265(RTCW(tr1));
				loc6 = c_outi(loc3);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_0_);
				if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
					tr1 = RTLNS(eif_new_type(777, 0x01).id, 777, _OBJSIZ_1_1_0_3_0_0_0_0_);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_0_);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
					F776_4790(RTCW(tr1), (EIF_CHARACTER_8) '0', (EIF_INTEGER_32) (ti4_1 - ti4_2));
					F778_4900(RTCW(Result), tr1);
				}
				F778_4900(RTCW(Result), loc6);
				break;
			case 24L:
				loc3 = F48_695(RTCW(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					tr1 = RTMS_EX_H("AM",2,16717);
					F778_4900(RTCW(Result), tr1);
				} else {
					tr1 = RTMS_EX_H("PM",2,20557);
					F778_4900(RTCW(Result), tr1);
				}
				break;
			default:
				tr1 = *(EIF_REFERENCE *)(RTCW(loc7));
				F778_4900(RTCW(Result), tr1);
				break;
		}
		loc4++;
		tr1 = *(EIF_REFERENCE *)(Current);
		loc7 = F577_2864(RTCW(tr1), loc4);
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.create_date_string */
EIF_REFERENCE F781_5028 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(786, 0x01).id, 786, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F787_5128(RTCW(tr1), arg1);
	Result = F781_5027(Current, tr1);
	RTLE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.create_time_string */
EIF_REFERENCE F781_5029 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(786, 0x01).id, 786, _OBJSIZ_2_0_0_2_0_0_0_1_);
	ti4_1 = F48_695(RTCW(arg1));
	ti4_2 = F48_696(RTCW(arg1));
	tr8_1 = F48_700(RTCW(arg1));
	F787_5126(RTCW(loc1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ti4_1, ti4_2, tr8_1);
	RTLE;
	return (EIF_REFERENCE) F781_5027(Current, loc1);
}

void EIF_Minit195 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
