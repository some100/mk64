#include <PR/ultratypes.h>
#include "course_offsets.h"
#include "course_data.h"
#include "asset_types.h"

extern u8 gTexture64313C[];
extern u8 gTexture6528DC[];
extern u8 gTexture66ED38[];
extern u8 gTexture676C6C[];
extern u8 gTexture676EA8[];
extern u8 gTexture679D34[];
extern u8 gTextureGrass6[];
extern u8 gTexture6522E0[];
extern u8 gTexture651F40[];
extern u8 gTextureRoofTile[];
extern u8 gTextureSignBowser0[];
extern u8 gTextureSignBowser1[];
extern u8 gTexture66ABA4[];
extern u8 gTexture66EBF0[];
extern u8 gTexture6733CC[];
extern u8 gTexture673118[];
extern u8 gTexture673FF8[];
extern u8 gTexture674B28[];
extern u8 gTextureSignGreenArrow[];
extern u8 gTexture68D834[];
extern u8 gTexture676D7C[];
extern u8 gTexture67ADF0[];
extern u8 gTexture67EFEC[];
extern u8 gTexture653DB0[];
extern u8 gTexture66CA98[];
extern u8 gTexture673990[];
extern u8 gTexture67A370[];
extern u8 gTexture67A91C[];

const course_texture bowsers_castle_textures[] = {
    { gTexture64313C, 0x01B8, 0x0800, 0x0 },
    { gTexture6528DC, 0x0278, 0x0800, 0x0 },
    { gTexture66ED38, 0x010E, 0x0800, 0x0 },
    { gTexture676C6C, 0x0110, 0x0800, 0x0 },
    { gTexture676EA8, 0x0108, 0x0800, 0x0 },
    { gTexture679D34, 0x0106, 0x0800, 0x0 },
    { gTextureGrass6, 0x023B, 0x0800, 0x0 },
    { gTexture6522E0, 0x05FC, 0x0800, 0x0 },
    { gTexture651F40, 0x039F, 0x0800, 0x0 },
    { gTextureRoofTile, 0x0129, 0x0800, 0x0 },
    { gTextureSignBowser0, 0x07D0, 0x1000, 0x0 },
    { gTextureSignBowser1, 0x064D, 0x1000, 0x0 },
    { gTexture66ABA4, 0x0312, 0x0800, 0x0 },
    { gTexture66EBF0, 0x0146, 0x0800, 0x0 },
    { gTexture6733CC, 0x020E, 0x0800, 0x0 },
    { gTexture673118, 0x02B1, 0x0800, 0x0 },
    { gTexture673FF8, 0x035B, 0x0800, 0x0 },
    { gTexture674B28, 0x0230, 0x0800, 0x0 },
    { gTextureSignGreenArrow, 0x025B, 0x1000, 0x0 },
    { gTexture68D834, 0x010A, 0x0800, 0x0 },
    { gTexture676D7C, 0x012C, 0x0800, 0x0 },
    { gTexture67ADF0, 0x0595, 0x0800, 0x0 },
    { gTexture67EFEC, 0x016F, 0x0800, 0x0 },
    { gTexture653DB0, 0x06AE, 0x0800, 0x0 },
    { gTexture66CA98, 0x02C9, 0x0800, 0x0 },
    { gTexture673990, 0x02D8, 0x0800, 0x0 },
    { gTexture67A370, 0x05AA, 0x0800, 0x0 },
    { gTexture67A91C, 0x04D1, 0x0800, 0x0 },
    { 0x00000000, 0x0000, 0x0000, 0x0 },
};

const GfxAsset bowsers_castle_dls[] = {
    d_course_bowsers_castle_dl_0,    d_course_bowsers_castle_dl_230,  d_course_bowsers_castle_dl_110,
    d_course_bowsers_castle_dl_398,  d_course_bowsers_castle_dl_428,  d_course_bowsers_castle_dl_640,
    d_course_bowsers_castle_dl_4F0,  d_course_bowsers_castle_dl_7A0,  d_course_bowsers_castle_dl_860,
    d_course_bowsers_castle_dl_9F8,  d_course_bowsers_castle_dl_8E8,  d_course_bowsers_castle_dl_AE0,
    d_course_bowsers_castle_dl_B88,  d_course_bowsers_castle_dl_D20,  d_course_bowsers_castle_dl_C08,
    d_course_bowsers_castle_dl_E00,  d_course_bowsers_castle_dl_EA8,  d_course_bowsers_castle_dl_1040,
    d_course_bowsers_castle_dl_F08,  d_course_bowsers_castle_dl_1138, d_course_bowsers_castle_dl_11F0,
    d_course_bowsers_castle_dl_1290, d_course_bowsers_castle_dl_1248, d_course_bowsers_castle_dl_12D0,
    d_course_bowsers_castle_dl_1330, d_course_bowsers_castle_dl_1370, d_course_bowsers_castle_dl_1350,
    d_course_bowsers_castle_dl_13A0, d_course_bowsers_castle_dl_13C0, d_course_bowsers_castle_dl_1448,
    d_course_bowsers_castle_dl_13E0, d_course_bowsers_castle_dl_1488, d_course_bowsers_castle_dl_14B0,
    d_course_bowsers_castle_dl_1590, d_course_bowsers_castle_dl_1520, d_course_bowsers_castle_dl_1608,
    d_course_bowsers_castle_dl_1690, d_course_bowsers_castle_dl_1788, d_course_bowsers_castle_dl_1710,
    d_course_bowsers_castle_dl_17D0, d_course_bowsers_castle_dl_1818, d_course_bowsers_castle_dl_18C0,
    d_course_bowsers_castle_dl_1860, d_course_bowsers_castle_dl_1928, d_course_bowsers_castle_dl_1960,
    d_course_bowsers_castle_dl_19F8, d_course_bowsers_castle_dl_19A8, d_course_bowsers_castle_dl_1A40,
    d_course_bowsers_castle_dl_1A90, d_course_bowsers_castle_dl_1B10, d_course_bowsers_castle_dl_1AD8,
    d_course_bowsers_castle_dl_1B58, d_course_bowsers_castle_dl_1BB0, d_course_bowsers_castle_dl_1C38,
    d_course_bowsers_castle_dl_1C10, d_course_bowsers_castle_dl_1C60, d_course_bowsers_castle_dl_1C98,
    d_course_bowsers_castle_dl_1DF8, d_course_bowsers_castle_dl_1CD0, d_course_bowsers_castle_dl_1EB0,
    d_course_bowsers_castle_dl_1FA0, d_course_bowsers_castle_dl_2130, d_course_bowsers_castle_dl_2008,
    d_course_bowsers_castle_dl_21F0, d_course_bowsers_castle_dl_22E8, d_course_bowsers_castle_dl_24B8,
    d_course_bowsers_castle_dl_2398, d_course_bowsers_castle_dl_2578, d_course_bowsers_castle_dl_2688,
    d_course_bowsers_castle_dl_2880, d_course_bowsers_castle_dl_2760, d_course_bowsers_castle_dl_2958,
    d_course_bowsers_castle_dl_2A60, d_course_bowsers_castle_dl_2C48, d_course_bowsers_castle_dl_2B80,
    d_course_bowsers_castle_dl_2D08, d_course_bowsers_castle_dl_2DF8, d_course_bowsers_castle_dl_2FB0,
    d_course_bowsers_castle_dl_2F30, d_course_bowsers_castle_dl_3050, d_course_bowsers_castle_dl_3158,
    d_course_bowsers_castle_dl_32C0, d_course_bowsers_castle_dl_3230, d_course_bowsers_castle_dl_3338,
    d_course_bowsers_castle_dl_3480, d_course_bowsers_castle_dl_35D0, d_course_bowsers_castle_dl_3508,
    d_course_bowsers_castle_dl_3678, d_course_bowsers_castle_dl_37D8, d_course_bowsers_castle_dl_39E0,
    d_course_bowsers_castle_dl_38F8, d_course_bowsers_castle_dl_3B00, d_course_bowsers_castle_dl_3C08,
    d_course_bowsers_castle_dl_3EA8, d_course_bowsers_castle_dl_3D78, d_course_bowsers_castle_dl_3FF0,
    d_course_bowsers_castle_dl_40F0, d_course_bowsers_castle_dl_4358, d_course_bowsers_castle_dl_4278,
    d_course_bowsers_castle_dl_4488, d_course_bowsers_castle_dl_45D8, d_course_bowsers_castle_dl_4820,
    d_course_bowsers_castle_dl_4748, d_course_bowsers_castle_dl_4998, d_course_bowsers_castle_dl_4A98,
    d_course_bowsers_castle_dl_4CE8, d_course_bowsers_castle_dl_4C00, d_course_bowsers_castle_dl_4EA8,
};
