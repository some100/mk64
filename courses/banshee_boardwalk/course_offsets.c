#include <PR/ultratypes.h>
#include <PR/gbi.h>
#include "course_offsets.h"
#include "courses/banshee_boardwalk/course_data.h"
#include <PR/gbi.h>
#include "asset_types.h"

extern u8 gTexture6447C4[];
extern u8 gTexture676FB0[];
extern u8 gTexture643B3C[];
extern u8 gTexture64BB60[];
extern u8 gTexture64BCCC[];
extern u8 gTexture64FBF4[];
extern u8 gTexture651B20[];
extern u8 gTexture66262C[];
extern u8 gTexture668728[];
extern u8 gTexture66A3DC[];
extern u8 gTexture66CA98[];
extern u8 gTexture66CD64[];
extern u8 gTexture66D698[];
extern u8 gTexture66E608[];
extern u8 gTexture67B388[];
extern u8 gTextureSignWelcome0[];
extern u8 gTextureSignWelcome1[];
extern u8 gTextureSignWoodenBack0[];
extern u8 gTextureSignWoodenBack1[];
extern u8 gTextureSignWoodRedArrow[];
extern u8 gTexture68D940[];
extern u8 gTexture685AC0[];

const course_texture banshee_boardwalk_textures[] = {
    { gTexture6447C4, 0x0106, 0x0800, 0x0 },
    { gTexture676FB0, 0x0525, 0x0800, 0x0 },
    { gTexture643B3C, 0x0798, 0x0800, 0x0 },
    { gTexture64BB60, 0x0169, 0x0800, 0x0 },
    { gTexture64BCCC, 0x0450, 0x0800, 0x0 },
    { gTexture64FBF4, 0x0274, 0x0800, 0x0 },
    { gTexture651B20, 0x041D, 0x0800, 0x0 },
    { gTexture66262C, 0x02F7, 0x0800, 0x0 },
    { gTexture668728, 0x01F5, 0x0800, 0x0 },
    { gTexture66A3DC, 0x07C5, 0x0800, 0x0 },
    { gTexture66CA98, 0x02C9, 0x0800, 0x0 },
    { gTexture66CD64, 0x02C0, 0x0800, 0x0 },
    { gTexture66D698, 0x0370, 0x0800, 0x0 },
    { gTexture66E608, 0x05E8, 0x0800, 0x0 },
    { gTexture67B388, 0x03D2, 0x0800, 0x0 },
    { gTextureSignWelcome0, 0x0A2E, 0x1000, 0x0 },
    { gTextureSignWelcome1, 0x0A0A, 0x1000, 0x0 },
    { gTextureSignWoodenBack0, 0x06EF, 0x1000, 0x0 },
    { gTextureSignWoodenBack1, 0x06D1, 0x1000, 0x0 },
    { gTextureSignWoodRedArrow, 0x04E1, 0x1000, 0x0 },
    { gTexture68D940, 0x057D, 0x0800, 0x0 },
    { gTexture685AC0, 0x07CC, 0x1000, 0x0 },
    { 0x00000000, 0x0000, 0x0000, 0x0 },
};

const GfxAsset banshee_boardwalk_dls[] = {
    d_course_banshee_boardwalk_dl_A0,   d_course_banshee_boardwalk_dl_210,  d_course_banshee_boardwalk_dl_160,
    d_course_banshee_boardwalk_dl_270,  d_course_banshee_boardwalk_dl_358,  d_course_banshee_boardwalk_dl_4F0,
    d_course_banshee_boardwalk_dl_408,  d_course_banshee_boardwalk_dl_540,  d_course_banshee_boardwalk_dl_620,
    d_course_banshee_boardwalk_dl_7C0,  d_course_banshee_boardwalk_dl_6D0,  d_course_banshee_boardwalk_dl_870,
    d_course_banshee_boardwalk_dl_940,  d_course_banshee_boardwalk_dl_AD0,  d_course_banshee_boardwalk_dl_9E0,
    d_course_banshee_boardwalk_dl_B80,  d_course_banshee_boardwalk_dl_C30,  d_course_banshee_boardwalk_dl_D80,
    d_course_banshee_boardwalk_dl_CD0,  d_course_banshee_boardwalk_dl_E10,  d_course_banshee_boardwalk_dl_EE0,
    d_course_banshee_boardwalk_dl_1000, d_course_banshee_boardwalk_dl_F50,  d_course_banshee_boardwalk_dl_1070,
    d_course_banshee_boardwalk_dl_1160, d_course_banshee_boardwalk_dl_12A8, d_course_banshee_boardwalk_dl_11C8,
    d_course_banshee_boardwalk_dl_12E8, d_course_banshee_boardwalk_dl_13F0, d_course_banshee_boardwalk_dl_1520,
    d_course_banshee_boardwalk_dl_1448, d_course_banshee_boardwalk_dl_1580, d_course_banshee_boardwalk_dl_1678,
    d_course_banshee_boardwalk_dl_17A0, d_course_banshee_boardwalk_dl_16B8, d_course_banshee_boardwalk_dl_1820,
    d_course_banshee_boardwalk_dl_18D8, d_course_banshee_boardwalk_dl_1A30, d_course_banshee_boardwalk_dl_1940,
    d_course_banshee_boardwalk_dl_1B00, d_course_banshee_boardwalk_dl_1BA0, d_course_banshee_boardwalk_dl_1CC8,
    d_course_banshee_boardwalk_dl_1C20, d_course_banshee_boardwalk_dl_1D90, d_course_banshee_boardwalk_dl_1E28,
    d_course_banshee_boardwalk_dl_1F40, d_course_banshee_boardwalk_dl_1EA0, d_course_banshee_boardwalk_dl_2028,
    d_course_banshee_boardwalk_dl_20A0, d_course_banshee_boardwalk_dl_21C8, d_course_banshee_boardwalk_dl_2138,
    d_course_banshee_boardwalk_dl_22D8, d_course_banshee_boardwalk_dl_2340, d_course_banshee_boardwalk_dl_24E8,
    d_course_banshee_boardwalk_dl_2448, d_course_banshee_boardwalk_dl_2610, d_course_banshee_boardwalk_dl_2650,
    d_course_banshee_boardwalk_dl_2790, d_course_banshee_boardwalk_dl_2718, d_course_banshee_boardwalk_dl_2868,
    d_course_banshee_boardwalk_dl_28A8, d_course_banshee_boardwalk_dl_2A18, d_course_banshee_boardwalk_dl_2980,
    d_course_banshee_boardwalk_dl_2AE0, d_course_banshee_boardwalk_dl_2B88, d_course_banshee_boardwalk_dl_2CE0,
    d_course_banshee_boardwalk_dl_2C30, d_course_banshee_boardwalk_dl_2DB0, d_course_banshee_boardwalk_dl_2E20,
    d_course_banshee_boardwalk_dl_2FA0, d_course_banshee_boardwalk_dl_2EE0, d_course_banshee_boardwalk_dl_3050,
    d_course_banshee_boardwalk_dl_3100, d_course_banshee_boardwalk_dl_32B0, d_course_banshee_boardwalk_dl_3200,
    d_course_banshee_boardwalk_dl_3390, d_course_banshee_boardwalk_dl_3468, d_course_banshee_boardwalk_dl_3660,
    d_course_banshee_boardwalk_dl_35A0, d_course_banshee_boardwalk_dl_3710, d_course_banshee_boardwalk_dl_37F0,
    d_course_banshee_boardwalk_dl_3980, d_course_banshee_boardwalk_dl_3920, d_course_banshee_boardwalk_dl_3A20,
    d_course_banshee_boardwalk_dl_3AF8, d_course_banshee_boardwalk_dl_3C40, d_course_banshee_boardwalk_dl_3C00,
    d_course_banshee_boardwalk_dl_3CD0, d_course_banshee_boardwalk_dl_3D98, d_course_banshee_boardwalk_dl_3EF0,
    d_course_banshee_boardwalk_dl_3EB0, d_course_banshee_boardwalk_dl_3F60, d_course_banshee_boardwalk_dl_4038,
    d_course_banshee_boardwalk_dl_4188, d_course_banshee_boardwalk_dl_4118, d_course_banshee_boardwalk_dl_41F0,
    d_course_banshee_boardwalk_dl_42D0, d_course_banshee_boardwalk_dl_4428, d_course_banshee_boardwalk_dl_43A8,
    d_course_banshee_boardwalk_dl_4480,
};
