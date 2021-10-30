/*
 * Code for class RT_EXTENSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt38.h"
#include "eif_main.h"
#include "eif_debug.h"
#include "eif_scoop.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F56_810
static void inline_F56_810 (void)
{
	#ifdef WORKBENCH
	EIF_GET_CONTEXT
	is_inside_rt_eiffel_code = 0;
	exec_recording_enabled = 1;
	set_debug_mode (1);
#endif
	;
}
#define INLINE_F56_810
#endif
#ifndef INLINE_F56_811
static EIF_INTEGER_32 inline_F56_811 (void)
{
	#ifdef WORKBENCH
	EIF_GET_CONTEXT
	return is_inside_rt_eiffel_code;
#else
	return 0;
#endif
	;
}
#define INLINE_F56_811
#endif
#ifndef INLINE_F56_812
static EIF_INTEGER_32 inline_F56_812 (EIF_OBJECT arg1)
{
	return (EIF_INTEGER_32) (RTS_PID(eif_access(arg1)))
	;
}
#define INLINE_F56_812
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_EXTENSION}.notify */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F56_789 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(11);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,tr1);
	RTLR(9,tr2);
	RTLR(10,saved_except);
	RTLIU(11);
	RTXSLS;
	
	RTEAA("notify", 55, Current, 7, 2, 859);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		switch (arg1) {
			case 10L:
				RTHOOK(4);
				loc2 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,691,0,697,697,697,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc2 = RTRV(typres0,loc2);
				}
				if (EIF_TEST(loc2)) {
					RTHOOK(5);
					(nstcall = 0, F56_796(Current, loc2));
				} else {
					
				}
				RTHOOK(6);
				(nstcall = 0, F56_794(Current, arg2));
				break;
			case 11L:
				RTHOOK(7);
				loc3 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,691,0,697,697,697,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc3 = RTRV(typres0,loc3);
				}
				if (EIF_TEST(loc3)) {
					RTHOOK(8);
					(nstcall = 0, F56_798(Current, loc3));
				} else {
					
				}
				RTHOOK(9);
				(nstcall = 0, F56_794(Current, arg2));
				break;
			case 12L:
				RTHOOK(10);
				loc4 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,691,0,697,697,697,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc4 = RTRV(typres0,loc4);
				}
				if (EIF_TEST(loc4)) {
					RTHOOK(11);
					(nstcall = 0, F56_797(Current, loc4));
				} else {
					
				}
				RTHOOK(12);
				(nstcall = 0, F56_794(Current, arg2));
				break;
			case 13L:
				RTHOOK(13);
				loc5 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,691,0,697,697,697,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc5 = RTRV(typres0,loc5);
				}
				if (EIF_TEST(loc5)) {
					RTHOOK(14);
					(nstcall = 0, F56_799(Current, loc5));
				} else {
					
				}
				RTHOOK(15);
				(nstcall = 0, F56_794(Current, arg2));
				break;
			case 14L:
				RTHOOK(16);
				loc6 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,5,691,0,697,697,697,697,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc6 = RTRV(typres0,loc6);
				}
				if (EIF_TEST(loc6)) {
					RTHOOK(17);
					(nstcall = 0, F56_800(Current, loc6));
				} else {
					
				}
				RTHOOK(18);
				(nstcall = 0, F56_795(Current, arg2));
				break;
			case 15L:
				RTHOOK(19);
				loc7 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,5,691,0,697,697,697,697,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc7 = RTRV(typres0,loc7);
				}
				if (EIF_TEST(loc7)) {
					RTHOOK(20);
					(nstcall = 0, F56_801(Current, loc7));
				} else {
					
				}
				RTHOOK(21);
				(nstcall = 0, F56_795(Current, arg2));
				break;
			default:
				break;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(22);
	tr1 = RTMS_EX_H("Error: Rescue -> RT_EXTENSION.notify (",38,524915496);
	tr2 = c_outi(arg1);
	tr2 = (nstcall = 1, F778_4902(tr1, tr2));
	tr1 = RTMS_EX_H(", a_data)\012",10,1141706250);
	tr1 = (nstcall = 1, F778_4902(RTCW(tr2), tr1));
	(nstcall = 0, F54_775(Current, tr1));
	RTHOOK(23);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(24);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(25);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_EXTENSION}.notify_argument */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_REFERENCE F56_790 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,saved_except);
	RTLIU(5);
	RTXSLS;
	
	RTEAA("notify_argument", 55, Current, 1, 1, 860);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		tr1 = RTOSCF(791,(nstcall = 0, F56_791), (Current));
		tr2 = (nstcall = 1, F498_2581(RTCW(tr1), arg1));
		Result = (EIF_REFERENCE) tr2;
		RTHOOK(3);
		if ((EIF_BOOLEAN)(Result == NULL)) {
			RTHOOK(4);
			switch (arg1) {
				case 10L:
				case 11L:
				case 12L:
				case 13L:
					RTHOOK(5);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,691,0,697,697,697,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						Result = RTLNSMART(typres0.id);
					}
					break;
				case 14L:
				case 15L:
					RTHOOK(6);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,5,691,0,697,697,697,697,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						Result = RTLNSMART(typres0.id);
					}
					break;
				default:
					break;
			}
			RTHOOK(7);
			tr1 = RTOSCF(791,(nstcall = 0, F56_791), (Current));
			(nstcall = 1, F498_2600(RTCW(tr1), Result, arg1));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTHOOK(8);
	tr1 = RTMS_EX_H("Error: Rescue -> RT_EXTENSION.notify_argument (",47,987824424);
	tr2 = c_outi(arg1);
	tr2 = (nstcall = 1, F778_4902(tr1, tr2));
	tr1 = RTMS_EX_H(")\012",2,10506);
	tr1 = (nstcall = 1, F778_4902(RTCW(tr2), tr1));
	(nstcall = 0, F54_775(Current, tr1));
	RTHOOK(9);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(10);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(11);
	RTEOK;
	RTLE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_EXTENSION}.cached_arguments */
static EIF_REFERENCE F56_791_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("cached_arguments", 55, Current, 0, 0, 861);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (791);
#define Result RTOSR(791)
	RTOC_NEW(Result);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,497,0xFFF9,0,691,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 497, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F498_2576(RTCW(tr1), NULL, ((EIF_INTEGER_32) 10L), ((EIF_INTEGER_32) 15L)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (791);
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F56_791 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(791,F56_791_body,(Current));
}

/* {RT_EXTENSION}.events_feature_argument */
EIF_REFERENCE F56_792 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("events_feature_argument", 55, Current, 0, 0, 862);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTCT0("False", EX_CHECK);
		RTCF0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("False", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

/* {RT_EXTENSION}.events_assign_argument */
EIF_REFERENCE F56_793 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("events_assign_argument", 55, Current, 0, 0, 863);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTCT0("False", EX_CHECK);
		RTCF0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("False", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

/* {RT_EXTENSION}.reset_events_feature_argument */
void F56_794 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("reset_events_feature_argument", 55, Current, 1, 1, 864);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("t_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,691,0,697,697,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTRV(typres0,loc1);
	}
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		
		eif_put_reference_item(loc1,1,NULL);
		RTHOOK(4);
		
		eif_put_integer_32_item(loc1,2,((EIF_INTEGER_32) 0L));
		RTHOOK(5);
		
		eif_put_integer_32_item(loc1,3,((EIF_INTEGER_32) 0L));
		RTHOOK(6);
		
		eif_put_integer_32_item(loc1,4,((EIF_INTEGER_32) 0L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.reset_events_assign_argument */
void F56_795 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("reset_events_assign_argument", 55, Current, 1, 1, 865);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("t_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,5,691,0,697,697,697,697,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTRV(typres0,loc1);
	}
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		
		eif_put_reference_item(loc1,1,NULL);
		RTHOOK(4);
		
		eif_put_integer_32_item(loc1,2,((EIF_INTEGER_32) 0L));
		RTHOOK(5);
		
		eif_put_integer_32_item(loc1,3,((EIF_INTEGER_32) 0L));
		RTHOOK(6);
		
		eif_put_integer_32_item(loc1,4,((EIF_INTEGER_32) 0L));
		RTHOOK(7);
		
		eif_put_integer_32_item(loc1,5,((EIF_INTEGER_32) 0L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_enter_feature */
void F56_796 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("process_enter_feature", 55, Current, 2, 1, 866);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F56_803(Current)) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F56_803(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = eif_boxed_item(arg1,1);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			tr1 = RTCCL(loc2);
			ti4_1 = eif_integer_32_item(RTCW(arg1),2);
			ti4_2 = eif_integer_32_item(RTCW(arg1),3);
			ti4_3 = eif_integer_32_item(RTCW(arg1),4);
			(nstcall = 1, F134_1777(loc1, tr1, ti4_1, ti4_2, ti4_3));
		} else {
			
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_rescue_feature */
void F56_797 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("process_rescue_feature", 55, Current, 2, 1, 867);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F56_803(Current)) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F56_803(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = eif_boxed_item(arg1,1);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			tr1 = RTCCL(loc2);
			ti4_1 = eif_integer_32_item(RTCW(arg1),2);
			ti4_2 = eif_integer_32_item(RTCW(arg1),3);
			ti4_3 = eif_integer_32_item(RTCW(arg1),4);
			(nstcall = 1, F134_1778(loc1, tr1, ti4_1, ti4_2, ti4_3));
		} else {
			
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_leave_feature */
void F56_798 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("process_leave_feature", 55, Current, 2, 1, 868);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F56_803(Current)) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F56_803(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = eif_boxed_item(arg1,1);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			tr1 = RTCCL(loc2);
			ti4_1 = eif_integer_32_item(RTCW(arg1),2);
			ti4_2 = eif_integer_32_item(RTCW(arg1),3);
			ti4_3 = eif_integer_32_item(RTCW(arg1),4);
			(nstcall = 1, F134_1779(loc1, tr1, ti4_1, ti4_2, ti4_3));
		} else {
			
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_rt_hook */
void F56_799 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("process_rt_hook", 55, Current, 1, 1, 869);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F56_803(Current)) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F56_803(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		ti4_1 = eif_integer_32_item(RTCW(arg1),2);
		ti4_2 = eif_integer_32_item(RTCW(arg1),3);
		ti4_3 = eif_integer_32_item(RTCW(arg1),4);
		(nstcall = 1, F134_1780(loc1, ti4_1, ti4_2, ti4_3));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_rt_assign_attrib */
void F56_800 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("process_rt_assign_attrib", 55, Current, 2, 1, 870);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F56_803(Current)) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tb2 = '\0';
	tr1 = (nstcall = 0, F56_803(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb3 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_4_2_);
		tb2 = tb3;
	}
	if (tb2) {
		tr1 = eif_boxed_item(arg1,1);
		loc2 = RTCCL(tr1);
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(4);
		ti4_1 = eif_integer_32_item(RTCW(arg1),2);
		tr1 = RTCCL(loc2);
		ti4_2 = eif_integer_32_item(RTCW(arg1),3);
		ti4_3 = eif_integer_32_item(RTCW(arg1),4);
		tu4_1 = (EIF_NATURAL_32) ti4_3;
		ti4_3 = eif_integer_32_item(RTCW(arg1),5);
		(nstcall = 1, F134_1781(loc1, ti4_1, tr1, ti4_2, tu4_1, ti4_3));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_rt_assign_local */
void F56_801 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("process_rt_assign_local", 55, Current, 1, 1, 871);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F56_803(Current)) != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("no_ref", EX_PRE);
		tr1 = eif_boxed_item(arg1,1);
		RTTE((EIF_BOOLEAN)(tr1 == NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tb1 = '\0';
	tr1 = (nstcall = 0, F56_803(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_4_2_);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		ti4_1 = eif_integer_32_item(RTCW(arg1),2);
		ti4_2 = eif_integer_32_item(RTCW(arg1),3);
		ti4_3 = eif_integer_32_item(RTCW(arg1),4);
		tu4_1 = (EIF_NATURAL_32) ti4_3;
		ti4_3 = eif_integer_32_item(RTCW(arg1),5);
		(nstcall = 1, F134_1782(loc1, ti4_1, ti4_2, tu4_1, ti4_3));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.new_execution_recorder */
EIF_REFERENCE F56_802 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("new_execution_recorder", 55, Current, 0, 0, 872);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(133, 0x01).id, 133, _OBJSIZ_4_5_0_2_0_0_0_0_);
	tr1 = RTOSCF(804,(nstcall = 0, F56_804), (Current));
	(nstcall = -1, F134_1759(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
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

/* {RT_EXTENSION}.execution_recorder */
EIF_REFERENCE F56_803 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("execution_recorder", 55, Current, 0, 0, 873);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(807,(nstcall = 0, F56_807), (Current))));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_EXTENSION}.execution_recorder_parameters */
static EIF_REFERENCE F56_804_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("execution_recorder_parameters", 55, Current, 0, 0, 874);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (804);
#define Result RTOSR(804)
	RTOC_NEW(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(8, 0x01).id, 8, _OBJSIZ_0_3_0_1_0_0_0_0_);
	(nstcall = -1, F9_267(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (804);
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F56_804 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(804,F56_804_body,(Current));
}

/* {RT_EXTENSION}.set_execution_recorder_parameters */
void F56_805 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("set_execution_recorder_parameters", 55, Current, 2, 4, 875);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOSCF(804,(nstcall = 0, F56_804), (Current));
	RTHOOK(2);
	(nstcall = 0, F56_806(Current, arg1, arg2, arg3, arg4, loc1));
	RTHOOK(3);
	tr1 = (nstcall = 0, F56_803(Current));
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		(nstcall = 1, F134_1760(loc2, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.set_execution_recorder_parameters_to */
void F56_806 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg5);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_execution_recorder_parameters_to", 55, Current, 0, 5, 851);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 1, F9_272(RTCW(arg5), arg1));
	RTHOOK(2);
	(nstcall = 1, F9_273(RTCW(arg5), arg2));
	RTHOOK(3);
	(nstcall = 1, F9_274(RTCW(arg5), arg3));
	RTHOOK(4);
	(nstcall = 1, F9_275(RTCW(arg5), arg4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.execution_recorder_cell */
static EIF_REFERENCE F56_807_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("execution_recorder_cell", 55, Current, 0, 0, 852);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOSP (807);
#define Result RTOSR(807)
	RTOC_NEW(Result);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,37,133,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 37, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F38_620(RTCW(tr1), NULL));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOSE (807);
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F56_807 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(807,F56_807_body,(Current));
}

/* {RT_EXTENSION}.activate_execution_replay_recording */
void F56_808 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("activate_execution_replay_recording", 55, Current, 1, 6, 853);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ref_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		
		RTHOOK(3);
		loc1 = (nstcall = 0, F56_802(Current));
		RTHOOK(4);
		tr1 = RTOSCF(807,(nstcall = 0, F56_807), (Current));
		(nstcall = 1, F38_621(RTCW(tr1), loc1));
		RTHOOK(5);
		tr1 = RTCCL(arg2);
		(nstcall = 1, F134_1761(RTCW(loc1), tr1, arg3, arg4, arg5, arg6));
	} else {
		RTHOOK(6);
		loc1 = (nstcall = 0, F56_803(Current));
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(8);
			(nstcall = 1, F134_1763(RTCW(loc1)));
		}
		RTHOOK(9);
		tr1 = RTOSCF(807,(nstcall = 0, F56_807), (Current));
		(nstcall = 1, F38_621(RTCW(tr1), NULL));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("recorder_if_on", EX_POST);
		tb1 = '\01';
		if (arg1) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F56_803(Current)) != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("no_recorder_if_off", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !arg1) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F56_803(Current)) == NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.test_activate_recording */
void F56_809 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("test_activate_recording", 55, Current, 0, 4, 854);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ref_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	tr2 = (nstcall = 1, F1_5(arg1));
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2584[Dtype(RTCW(tr2))-646])(tr2));
	(nstcall = 0, F56_808(Current, (EIF_BOOLEAN) 1, tr1, ti4_1, arg2, arg3, arg4));
	RTHOOK(3);
	(nstcall = 0, F56_810(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.c_activate_recording */
void F56_810 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_activate_recording", 55, Current, 0, 0, 855);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F56_810 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.c_is_inside_rt_eiffel_code */
EIF_INTEGER_32 F56_811 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_is_inside_rt_eiffel_code", 55, Current, 0, 0, 856);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F56_811 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_EXTENSION}.scoop_processor_id_from_object */
EIF_INTEGER_32 F56_812 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("scoop_processor_id_from_object", 55, Current, 0, 1, 857);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	{
		EIF_OBJECT larg1 = &arg1;
		Result = inline_F56_812 ((EIF_OBJECT) larg1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_EXTENSION}._invariant */
void F56_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTEAINV(l_feature_name, 37, Current, 0, 0);
	RTIT("no_attribute", Current);
	tr1 = RTLNS(eif_new_type(135, 0x01).id, 135, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F136_1819(RTCW(tr1), Current));
	ti4_1 = (nstcall = 1, F130_1615(RTCW(tr1)));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit38 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
