/*
 * Code for class SET [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F919_2239(EIF_REFERENCE);
extern void EIF_Minit919(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SET}.changeable_comparison_criterion */
EIF_TYPED_VALUE F919_2239 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "changeable_comparison_criterion";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 918, Current, 0, 0, 2592);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(918, Current, 2592);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1932, dtype))(Current)).it_b);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_on_empty", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1932, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

void EIF_Minit919 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
