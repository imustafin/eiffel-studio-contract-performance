/*
 * Code for class OPERATING_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "op11.h"
#include "eif_path_name.h"
#include "eif_dir.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OPERATING_ENVIRONMENT}.directory_separator */
static EIF_CHARACTER_8 F23_377_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("directory_separator", 22, Current, 0, 0, 457);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (377);
#define Result RTOSR(377)
	RTHOOK(1);
	Result = (nstcall = 0, F23_382(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (377);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_CHARACTER_8 F23_377 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(377,F23_377_body,(Current));
}

/* {OPERATING_ENVIRONMENT}.current_directory_name_representation */
static EIF_REFERENCE F23_378_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("current_directory_name_representation", 22, Current, 0, 0, 458);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (378);
#define Result RTOSR(378)
	RTOC_NEW(Result);
	RTHOOK(1);
	Result = (nstcall = 0, F23_383(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (378);
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F23_378 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(378,F23_378_body,(Current));
}

/* {OPERATING_ENVIRONMENT}.home_directory_supported */
EIF_BOOLEAN F23_379 (EIF_REFERENCE Current)
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
	
	RTEAA("home_directory_supported", 22, Current, 0, 0, 459);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_home_dir_supported());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {OPERATING_ENVIRONMENT}.root_directory_supported */
EIF_BOOLEAN F23_380 (EIF_REFERENCE Current)
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
	
	RTEAA("root_directory_supported", 22, Current, 0, 0, 460);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_root_dir_supported());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {OPERATING_ENVIRONMENT}.case_sensitive_path_names */
EIF_BOOLEAN F23_381 (EIF_REFERENCE Current)
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
	
	RTEAA("case_sensitive_path_names", 22, Current, 0, 0, 461);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {OPERATING_ENVIRONMENT}.c_dir_separator */
EIF_CHARACTER_8 F23_382 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_dir_separator", 22, Current, 0, 0, 462);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_CHARACTER_8) eif_dir_separator();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {OPERATING_ENVIRONMENT}.eif_current_dir_representation */
EIF_REFERENCE F23_383 (EIF_REFERENCE Current)
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
	
	RTEAA("eif_current_dir_representation", 22, Current, 0, 0, 463);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_REFERENCE) eif_current_dir_representation();
	
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit11 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
