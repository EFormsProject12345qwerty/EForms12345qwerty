/*
 * Class HTTPD_STREAM_SOCKET
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_3 [] = {0xFF01,296,0xFFFF};
static const EIF_TYPE_INDEX egt_1_3 [] = {0xFF01,324,2,0xFFFF};
static const EIF_TYPE_INDEX egt_2_3 [] = {0xFF01,2,0xFFFF};
static const EIF_TYPE_INDEX egt_3_3 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_3 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_3 [] = {0xFF01,2,0xFFFF};
static const EIF_TYPE_INDEX egt_6_3 [] = {0xFF01,2,0xFFFF};
static const EIF_TYPE_INDEX egt_7_3 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_3 [] = {0xFF01,20,0xFFFF};
static const EIF_TYPE_INDEX egt_9_3 [] = {0xFF01,296,0xFFFF};
static const EIF_TYPE_INDEX egt_10_3 [] = {0xFF01,296,0xFFFF};
static const EIF_TYPE_INDEX egt_11_3 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_12_3 [] = {0xFF01,2,0xFFFF};
static const EIF_TYPE_INDEX egt_13_3 [] = {0xFF01,296,0xFFFF};
static const EIF_TYPE_INDEX egt_14_3 [] = {0xFF01,194,0xFFFF};


static const struct desc_info desc_3[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_3), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_3), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_3), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_3), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_3), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_3), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_3), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_3), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_3), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_3), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_3), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_3), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x05 /*2*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x023D /*286*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_3), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 62, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 63, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 64, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 65, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01EF /*247*/), 66, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 67, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 68, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 69, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_3), 70, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x022B /*277*/), 71, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0137 /*155*/), 72, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 73, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 74, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 75, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 76, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01EF /*247*/), 77, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 78, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 79, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 80, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 81, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 82, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01EF /*247*/), 83, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01EF /*247*/), 84, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 85, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 86, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 87, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 43, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 44, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 45, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 46, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 47, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 48, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 49, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 50, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 51, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 52, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 53, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 54, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 55, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 56, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0231 /*280*/), 57, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x05 /*2*/), 58, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 59, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_3), 60, 0},
	{EIF_NON_GENERIC(0x0189 /*196*/), 61, 0xFFFFFFFF},
};
void Init3(void)
{
	IDSC(desc_3, 0, 2);
	IDSC(desc_3 + 1, 2, 2);
	IDSC(desc_3 + 32, 340, 2);
}


#ifdef __cplusplus
}
#endif
