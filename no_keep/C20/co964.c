/*
 * Code for class CODE_VALIDITY_CHECKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co964.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CODE_VALIDITY_CHECKER}.is_day */
EIF_BOOLEAN F36_7258 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("dd",2,25700);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_day0 */
EIF_BOOLEAN F36_7259 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]dd",5,812125796);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_day_text */
EIF_BOOLEAN F36_7260 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("ddd",3,6579300);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_year4 */
EIF_BOOLEAN F36_7261 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("yyyy",4,2038004089);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_year2 */
EIF_BOOLEAN F36_7262 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("yy",2,31097);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month */
EIF_BOOLEAN F36_7263 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("mm",2,28013);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month0 */
EIF_BOOLEAN F36_7264 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]mm",5,812128109);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month_text */
EIF_BOOLEAN F36_7265 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("mmm",3,7171437);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour */
EIF_BOOLEAN F36_7266 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("hh",2,26728);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour0 */
EIF_BOOLEAN F36_7267 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]hh",5,812126824);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour12 */
EIF_BOOLEAN F36_7268 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("hh12",4,1751658802);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minute */
EIF_BOOLEAN F36_7270 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("mi",2,28009);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minute0 */
EIF_BOOLEAN F36_7271 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]mi",5,812128105);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_second */
EIF_BOOLEAN F36_7272 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("ss",2,29555);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_second0 */
EIF_BOOLEAN F36_7273 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]ss",5,812129651);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_fractional_second */
EIF_BOOLEAN F36_7274 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
		Result = '\0';
		tr1 = F893_6777(RTCW(arg1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 2L));
		tr2 = RTMS_EX_H("ff",2,26214);
		tb1 = F891_6632(RTCW(tr1), tr2);
		if (tb1) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tr1 = F893_6777(RTCW(arg1), ((EIF_INTEGER_32) 3L), ti4_1);
			tb1 = F890_6541(RTCW(tr1));
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_colon */
EIF_BOOLEAN F36_7275 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H(":",1,58);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_slash */
EIF_BOOLEAN F36_7276 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("/",1,47);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minus */
EIF_BOOLEAN F36_7277 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("-",1,45);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_comma */
EIF_BOOLEAN F36_7278 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H(",",1,44);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_space */
EIF_BOOLEAN F36_7279 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H(" ",1,32);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_dot */
EIF_BOOLEAN F36_7280 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H(".",1,46);
	Result = F891_6632(RTCW(arg1), tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_meridiem */
EIF_BOOLEAN F36_7282 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = F893_6766(RTCW(arg1));
	Result = '\01';
	tr1 = RTMS_EX_H("AM",2,16717);
	tb1 = F891_6632(RTCW(loc1), tr1);
	if (!tb1) {
		tr1 = RTMS_EX_H("PM",2,20557);
		tb1 = F891_6632(RTCW(loc1), tr1);
		Result = tb1;
	}
	RTLE;
	return Result;
}

void EIF_Minit964 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
