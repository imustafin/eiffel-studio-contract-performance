/*
 * Generated by ISE 19.05.10.3187 GPL Edition - linux-x86-64
 */

#include "eif_eiffel.h"
#include "eif_project.h"
#include "egc_include.h"
#include "eoffsets.h"

#ifdef __cplusplus
extern "C" {
#endif
extern void F1_23();
extern EIF_REFERENCE F1_14();
extern void F776_4789();
extern void F773_4625();
extern void F498_2577();
extern void F765_4472();
extern void F36_572();
extern EIF_REFERENCE F36_559();
extern EIF_BOOLEAN F36_571();
extern EIF_BOOLEAN F36_579();
extern void F36_581();
extern void F36_582();
extern void F36_583();
extern void egc_routine_tables_init (void);

long *eif_area_table = (long *)0;
long *eif_lower_table = (long *)0;
extern char *(*R2[])();
extern char *(*R6[])();
extern char *(*R3[])();

extern char *(*R4[])();

extern char *(*R5[])();



extern void egc_init_plug (void); 
void egc_init_plug (void)
{
	egc_prof_enabled = (EIF_INTEGER) 0;
	egc_correct_mismatch = (void (*)(EIF_REFERENCE)) F1_23;
	egc_twin = (EIF_REFERENCE (*)(EIF_REFERENCE)) F1_14;
	egc_strmake = (void (*)(EIF_REFERENCE, EIF_INTEGER)) F776_4789;
	egc_str32make = (void (*)(EIF_REFERENCE, EIF_INTEGER)) F773_4625;
	egc_arrmake = (void (*)(EIF_REFERENCE, EIF_INTEGER, EIF_INTEGER)) F498_2577;
	egc_str_count_offset = + _LNGOFF_1_1_0_2_;
	egc_str_hash_offset = + _LNGOFF_1_1_0_0_;
	egc_str32_count_offset = + _LNGOFF_1_1_0_2_;
	egc_str32_hash_offset = + _LNGOFF_1_1_0_0_;
	egc_routdisp_fl = (void (*)(EIF_REFERENCE, EIF_POINTER, EIF_POINTER, EIF_POINTER, EIF_REFERENCE, EIF_BOOLEAN, EIF_INTEGER)) F765_4472;
	egc_is_scoop_capable = 0;
	egc_set_exception_data = (void (*)(EIF_REFERENCE, EIF_INTEGER, EIF_BOOLEAN, EIF_INTEGER, EIF_INTEGER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER, EIF_BOOLEAN)) F36_572;
	egc_set_last_exception = (void (*)(EIF_REFERENCE, EIF_REFERENCE)) F36_571;
	egc_last_exception = (EIF_REFERENCE (*)(EIF_REFERENCE)) F36_559;
	egc_is_code_ignored = (EIF_BOOLEAN (*)(EIF_REFERENCE, EIF_INTEGER)) F36_579;
	egc_once_raise = (void (*)(EIF_REFERENCE, EIF_REFERENCE)) F36_581;
	egc_init_exception_manager = (void (*)(EIF_REFERENCE)) F36_582;
	egc_free_preallocated_trace = (void (*)(EIF_REFERENCE)) F36_583;

	egc_str_dtype = 777;

	egc_str32_dtype = 774;
	egc_arr_dtype = 497;
	egc_tup_dtype = 691;
	egc_disp_rout_id = 991;
	egc_copy_rout_id = 18;
	egc_is_equal_rout_id = 11;

	egc_sp_char = 0x0250;
	egc_sp_wchar = 0x0253;
	egc_sp_bool = 0x0251;
	egc_sp_uint8 = 0x024C;
	egc_sp_uint16 = 0x024B;
	egc_sp_uint32 = 0x024D;
	egc_sp_uint64 = 0x0252;
	egc_sp_int8 = 0xFFFF;
	egc_sp_int16 = 0xFFFF;
	egc_sp_int32 = 0x024A;
	egc_sp_int64 = 0xFFFF;
	egc_sp_real32 = 0x024E;
	egc_sp_real64 = 0x024F;
	egc_sp_pointer = 0x0254;
	egc_sp_ref = 0x0249;

	egc_uint8_dtype = 715;
	egc_uint16_dtype = 712;
	egc_uint32_dtype = 709;
	egc_uint64_dtype = 706;
	egc_int8_dtype = 703;
	egc_int16_dtype = 700;
	egc_int32_dtype = 697;
	egc_int64_dtype = 694;
	egc_bool_dtype = 730;
	egc_real32_dtype = 718;
	egc_char_dtype = 727;
	egc_wchar_dtype = 724;
	egc_real64_dtype = 721;
	egc_point_dtype = 763;

	egc_exception_dtype = 68;
	egc_except_emnger_dtype = 35;

	egc_ce_type = egc_ce_type_init;

	egc_ce_exp_type = egc_ce_exp_type_init;
	egc_fsystem = egc_fsystem_init;
	egc_system_mod_init = egc_system_mod_init_init;
	egc_partab = egc_partab_init;
	egc_partab_size = egc_partab_size_init;
	exception_stack_managed = (EIF_BOOLEAN) 0;
	egc_ecreate = (void (**)(EIF_REFERENCE, EIF_REFERENCE)) R2;
	egc_exp_create = (void (**)(EIF_REFERENCE)) R6;
	egc_edispose = (void (**)(void)) R3;
	egc_copy = (void (**)(EIF_REFERENCE, EIF_REFERENCE)) R4;
	egc_is_equal = (EIF_BOOLEAN (**)(EIF_REFERENCE, EIF_REFERENCE)) R5;
	egc_ce_rname = egc_ce_rname_init;
	egc_fnbref = egc_fnbref_init;
	egc_fsize = egc_fsize_init;

	egc_system_name = "eiffel-studio-contract-timing";
	egc_system_location = "/home/ilgiz/eiffel-studio-contract-performance/EIFGENs/eiffel-studio-contract-timing/F_code";
	egc_compiler_tag = 38;
	egc_project_version = 1635588353;
	egc_has_old_special_semantic = 0;
	scount = 788;

	egc_rcount = 1;
	egc_ridx = 0;
	egc_rlist = (char**) eif_malloc (sizeof(char*)*egc_rcount);
	egc_rcdt = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rlist[0] = "APPLICATION.make";
	egc_rcdt[0] = 0;
	
	
	egc_platform_level = 0x00000D00;
	egc_routine_tables_init();
}

void egc_rcdt_init (void)
{
	if (egc_rcdt[0] == 0) {
		egc_rcdt[0] = 279; /* APPLICATION */
	}
}

#ifdef __cplusplus
}
#endif
