#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"
#include "eoffsets.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* MISMATCH_INFORMATION wipe_out */
void A132_97 (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F575_2913)(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A132_161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_POINTER)) F581_2986)(Current, arg1, arg2);
}

	/* MISMATCH_INFORMATION set_string_versions */
void A132_162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) F581_2987)(Current, arg1, arg2);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A135_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F584_5234)(closed [1].it_r, open [1].it_r);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void __A135_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	GTCX
	nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F584_5234)(closed [1].it_r, op_2);
}


#ifdef __cplusplus
}
#endif
