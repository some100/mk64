#include <PR/ultratypes.h>
#include "course_offsets.h"
#include "course_data.h"
#include "asset_types.h"

extern u8 gTextureCheckerboardYellowPink[];
extern u8 gTexture64619C[];
extern u8 gTextureGrass1[];
extern u8 gTexture64BB60[];
extern u8 gTextureGrass7[];
extern u8 gTextureGrass5[];
extern u8 gTextureFlagRed[];
extern u8 gTexture663F90[];
extern u8 gTexture6642A4[];
extern u8 gTexture6640B4[];
extern u8 gTextureGrass10[];
extern u8 gTexture6684F8[];
extern u8 gTextureSignLuigis0[];
extern u8 gTextureSignLuigis1[];
extern u8 gTextureSignMarioStar0[];
extern u8 gTextureSignMarioStar1[];
extern u8 gTexture66C8F4[];
extern u8 gTextureSignNintendoRed0[];
extern u8 gTextureSignNintendoRed1[];
extern u8 gTexture670AC8[];
extern u8 gTexture674354[];
extern u8 gTextureRoad0[];
extern u8 gTextureRoadFinish0[];
extern u8 gTexture67B9B0[];
extern u8 gTextureSignYoshi[];
extern u8 gTextureCheckerboardBlueGray[];
extern u8 gTextureSignShellShot0[];
extern u8 gTextureSignShellShot1[];
extern u8 gTextureSignKoopaAir0[];
extern u8 gTextureSignKoopaAir1[];

const course_texture mario_raceway_textures[] = {
    { gTextureCheckerboardYellowPink, 0x0149, 0x0800, 0x0 },
    { gTexture64619C, 0x0124, 0x0800, 0x0 },
    { gTextureGrass1, 0x0125, 0x0800, 0x0 },
    { gTexture64BB60, 0x0169, 0x0800, 0x0 },
    { gTextureGrass7, 0x05DE, 0x0800, 0x0 },
    { gTextureGrass5, 0x023F, 0x0800, 0x0 },
    { gTextureFlagRed, 0x019E, 0x0800, 0x0 },
    { gTexture663F90, 0x0122, 0x0800, 0x0 },
    { gTexture6642A4, 0x0162, 0x0800, 0x0 },
    { gTexture6640B4, 0x01EF, 0x0800, 0x0 },
    { gTextureGrass10, 0x01F8, 0x0800, 0x0 },
    { gTexture6684F8, 0x010D, 0x0800, 0x0 },
    { gTextureSignLuigis0, 0x0287, 0x1000, 0x0 },
    { gTextureSignLuigis1, 0x02AF, 0x1000, 0x0 },
    { gTextureSignMarioStar0, 0x02D2, 0x1000, 0x0 },
    { gTextureSignMarioStar1, 0x02B1, 0x1000, 0x0 },
    { gTexture66C8F4, 0x01A1, 0x0800, 0x0 },
    { gTextureSignNintendoRed0, 0x02A6, 0x1000, 0x0 },
    { gTextureSignNintendoRed1, 0x02F7, 0x1000, 0x0 },
    { gTexture670AC8, 0x0FBF, 0x1000, 0x0 },
    { gTexture674354, 0x046F, 0x0800, 0x0 },
    { gTextureRoad0, 0x0300, 0x1000, 0x0 },
    { gTextureRoadFinish0, 0x0338, 0x1000, 0x0 },
    { gTexture67B9B0, 0x0225, 0x0800, 0x0 },
    { gTextureSignYoshi, 0x04DF, 0x1000, 0x0 },
    { gTextureCheckerboardBlueGray, 0x04A1, 0x1000, 0x0 },
    { gTextureSignShellShot0, 0x038C, 0x1000, 0x0 },
    { gTextureSignShellShot1, 0x0247, 0x1000, 0x0 },
    { gTextureSignKoopaAir0, 0x0360, 0x1000, 0x0 },
    { gTextureSignKoopaAir1, 0x0304, 0x1000, 0x0 },
    { 0x00000000, 0x0000, 0x0000, 0x0 },
};

const GfxAsset mario_raceway_dls[] = {
    d_course_mario_raceway_dl_0,    d_course_mario_raceway_dl_1D0,  d_course_mario_raceway_dl_E8,
    d_course_mario_raceway_dl_2C8,  d_course_mario_raceway_dl_3A8,  d_course_mario_raceway_dl_568,
    d_course_mario_raceway_dl_478,  d_course_mario_raceway_dl_668,  d_course_mario_raceway_dl_750,
    d_course_mario_raceway_dl_928,  d_course_mario_raceway_dl_828,  d_course_mario_raceway_dl_A00,
    d_course_mario_raceway_dl_B08,  d_course_mario_raceway_dl_DC8,  d_course_mario_raceway_dl_C20,
    d_course_mario_raceway_dl_F60,  d_course_mario_raceway_dl_10A8, d_course_mario_raceway_dl_1408,
    d_course_mario_raceway_dl_1210, d_course_mario_raceway_dl_15C8, d_course_mario_raceway_dl_1740,
    d_course_mario_raceway_dl_1A30, d_course_mario_raceway_dl_1850, d_course_mario_raceway_dl_1B70,
    d_course_mario_raceway_dl_1CF8, d_course_mario_raceway_dl_1F68, d_course_mario_raceway_dl_1DE0,
    d_course_mario_raceway_dl_20A0, d_course_mario_raceway_dl_21E8, d_course_mario_raceway_dl_2418,
    d_course_mario_raceway_dl_22E0, d_course_mario_raceway_dl_2558, d_course_mario_raceway_dl_2680,
    d_course_mario_raceway_dl_28B0, d_course_mario_raceway_dl_2790, d_course_mario_raceway_dl_2A10,
    d_course_mario_raceway_dl_2B40, d_course_mario_raceway_dl_2DC0, d_course_mario_raceway_dl_2C98,
    d_course_mario_raceway_dl_2EF8, d_course_mario_raceway_dl_3038, d_course_mario_raceway_dl_32D8,
    d_course_mario_raceway_dl_31F0, d_course_mario_raceway_dl_3458, d_course_mario_raceway_dl_35D0,
    d_course_mario_raceway_dl_3830, d_course_mario_raceway_dl_3748, d_course_mario_raceway_dl_3960,
    d_course_mario_raceway_dl_3AA0, d_course_mario_raceway_dl_3D68, d_course_mario_raceway_dl_3C08,
    d_course_mario_raceway_dl_3EB8, d_course_mario_raceway_dl_4038, d_course_mario_raceway_dl_42A0,
    d_course_mario_raceway_dl_4150, d_course_mario_raceway_dl_43D8, d_course_mario_raceway_dl_44F8,
    d_course_mario_raceway_dl_4738, d_course_mario_raceway_dl_4610, d_course_mario_raceway_dl_4840,
    d_course_mario_raceway_dl_4910, d_course_mario_raceway_dl_4B78, d_course_mario_raceway_dl_4A60,
    d_course_mario_raceway_dl_4CD8, d_course_mario_raceway_dl_4DC8, d_course_mario_raceway_dl_4FF0,
    d_course_mario_raceway_dl_4ED0, d_course_mario_raceway_dl_5150,
};
