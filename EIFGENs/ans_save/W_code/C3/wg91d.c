/*
 * Class WGI_RESPONSE_STREAM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_91 [] = {0xFF01,296,0xFFFF};
static const EIF_TYPE_INDEX egt_1_91 [] = {0xFF01,324,90,0xFFFF};
static const EIF_TYPE_INDEX egt_2_91 [] = {0xFF01,90,0xFFFF};
static const EIF_TYPE_INDEX egt_3_91 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_91 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_91 [] = {0xFF01,90,0xFFFF};
static const EIF_TYPE_INDEX egt_6_91 [] = {0xFF01,90,0xFFFF};
static const EIF_TYPE_INDEX egt_7_91 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_91 [] = {0xFF01,20,0xFFFF};
static const EIF_TYPE_INDEX egt_9_91 [] = {0xFF01,296,0xFFFF};
static const EIF_TYPE_INDEX egt_10_91 [] = {0xFF01,296,0xFFFF};
static const EIF_TYPE_INDEX egt_11_91 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_12_91 [] = {0xFF01,90,0xFFFF};
static const EIF_TYPE_INDEX egt_13_91 [] = {335,0xFF01,0xFFF9,0,245,0xFFFF};
static const EIF_TYPE_INDEX egt_14_91 [] = {0xFF01,32,0xFFFF};


static const struct desc_info desc_91[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_91), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_91), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_91), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_91), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_91), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_91), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_91), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_91), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_91), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_91), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_91), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_91), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0xB5 /*90*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x023D /*286*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_91), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1395, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1399, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_91), 1396, 0},
	{EIF_GENERIC(NULL), 1397, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 1400, 34},
	{EIF_NON_GENERIC(0x0231 /*280*/), 1401, 33},
	{EIF_NON_GENERIC(0x0231 /*280*/), 1402, 32},
	{EIF_NON_GENERIC(0x0231 /*280*/), 1403, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 1404, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1405, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01EF /*247*/), 1406, 36},
	{EIF_NON_GENERIC(0x0249 /*292*/), 1407, 24},
	{EIF_GENERIC(NULL), 1408, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1409, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1410, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1411, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1412, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1413, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1398, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_91), 1414, 8},
	{EIF_NON_GENERIC(0x3D /*30*/), 1415, 16},
	{EIF_NON_GENERIC(0x0249 /*292*/), 1407, 24},
	{EIF_NON_GENERIC(0x01EF /*247*/), 1406, 36},
	{EIF_NON_GENERIC(0x0231 /*280*/), 1402, 32},
	{EIF_NON_GENERIC(0x0231 /*280*/), 1401, 33},
	{EIF_NON_GENERIC(0x0231 /*280*/), 1400, 34},
};
void Init91(void)
{
	IDSC(desc_91, 0, 90);
	IDSC(desc_91 + 1, 2, 90);
	IDSC(desc_91 + 32, 195, 90);
	IDSC(desc_91 + 50, 375, 90);
}


#ifdef __cplusplus
}
#endif
