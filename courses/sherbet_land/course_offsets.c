#include <PR/ultratypes.h>
#include "course_offsets.h"
#include "course_data.h"
#include "asset_types.h"

extern u8 gTexture643B3C[];
extern u8 gTexture66D024[];
extern u8 gTexture678118[];
extern u8 gTextureSignWoodRedArrow[];
extern u8 gTexture678CC8[];
extern u8 gTexture67842C[];
extern u8 gTexture67893C[];
extern u8 gTexture651984[];
extern u8 gTexture651428[];
extern u8 gTexture662924[];

const course_texture sherbet_land_textures[] = {
    { gTexture643B3C, 0x0798, 0x0800, 0x0 }, { gTexture66D024, 0x04EA, 0x0800, 0x0 },
    { gTexture678118, 0x0314, 0x0800, 0x0 }, { gTextureSignWoodRedArrow, 0x04E1, 0x1000, 0x0 },
    { gTexture678CC8, 0x058E, 0x0800, 0x0 }, { gTexture67842C, 0x050E, 0x0800, 0x0 },
    { gTexture67893C, 0x038B, 0x0800, 0x0 }, { gTexture651984, 0x019C, 0x0800, 0x0 },
    { gTexture651428, 0x055B, 0x0800, 0x0 }, { gTexture662924, 0x0110, 0x0800, 0x0 },
    { 0x00000000, 0x0000, 0x0000, 0x0 },
};

const GfxAsset sherbet_land_dls[] = {
    d_course_sherbet_land_dl_0,    d_course_sherbet_land_dl_158,  d_course_sherbet_land_dl_C0,
    d_course_sherbet_land_dl_1A8,  d_course_sherbet_land_dl_280,  d_course_sherbet_land_dl_3B8,
    d_course_sherbet_land_dl_310,  d_course_sherbet_land_dl_400,  d_course_sherbet_land_dl_4E8,
    d_course_sherbet_land_dl_638,  d_course_sherbet_land_dl_560,  d_course_sherbet_land_dl_6A0,
    d_course_sherbet_land_dl_768,  d_course_sherbet_land_dl_880,  d_course_sherbet_land_dl_7A0,
    d_course_sherbet_land_dl_8E8,  d_course_sherbet_land_dl_9A0,  d_course_sherbet_land_dl_B08,
    d_course_sherbet_land_dl_A28,  d_course_sherbet_land_dl_BC0,  d_course_sherbet_land_dl_C88,
    d_course_sherbet_land_dl_DF0,  d_course_sherbet_land_dl_D10,  d_course_sherbet_land_dl_EC8,
    d_course_sherbet_land_dl_F68,  d_course_sherbet_land_dl_10D8, d_course_sherbet_land_dl_1028,
    d_course_sherbet_land_dl_11C8, d_course_sherbet_land_dl_1238, d_course_sherbet_land_dl_1368,
    d_course_sherbet_land_dl_12F0, d_course_sherbet_land_dl_1440, d_course_sherbet_land_dl_1480,
    d_course_sherbet_land_dl_1508, d_course_sherbet_land_dl_14C0, d_course_sherbet_land_dl_1570,
    d_course_sherbet_land_dl_1598, d_course_sherbet_land_dl_1638, d_course_sherbet_land_dl_15F0,
    d_course_sherbet_land_dl_1698, d_course_sherbet_land_dl_16C0, d_course_sherbet_land_dl_1778,
    d_course_sherbet_land_dl_1730, d_course_sherbet_land_dl_17D8, d_course_sherbet_land_dl_1828,
    d_course_sherbet_land_dl_18E8, d_course_sherbet_land_dl_18A0, d_course_sherbet_land_dl_1920,
    d_course_sherbet_land_dl_19A0, d_course_sherbet_land_dl_1A58, d_course_sherbet_land_dl_19F0,
    d_course_sherbet_land_dl_1A90, d_course_sherbet_land_dl_1AF8, d_course_sherbet_land_dl_1BA8,
    d_course_sherbet_land_dl_1B50, d_course_sherbet_land_dl_1C20, d_course_sherbet_land_dl_1C48,
    d_course_sherbet_land_dl_1D60, d_course_sherbet_land_dl_1D08, d_course_sherbet_land_dl_1E10,
    d_course_sherbet_land_dl_1E88, d_course_sherbet_land_dl_2010, d_course_sherbet_land_dl_1F70,
    d_course_sherbet_land_dl_20D0, d_course_sherbet_land_dl_2190, d_course_sherbet_land_dl_22F8,
    d_course_sherbet_land_dl_2288, d_course_sherbet_land_dl_2370, d_course_sherbet_land_dl_2438,
    d_course_sherbet_land_dl_25A0, d_course_sherbet_land_dl_2530, d_course_sherbet_land_dl_25F8,
};

const GfxAsset sherbet_land_dls_2[] = {
    d_course_sherbet_land_dl_26D0, d_course_sherbet_land_dl_28A0, d_course_sherbet_land_dl_27F0,
    d_course_sherbet_land_dl_2918, d_course_sherbet_land_dl_2A38, d_course_sherbet_land_dl_2BE0,
    d_course_sherbet_land_dl_2B08, d_course_sherbet_land_dl_2C58, d_course_sherbet_land_dl_2D78,
    d_course_sherbet_land_dl_2F48, d_course_sherbet_land_dl_2E28, d_course_sherbet_land_dl_2FE8,
    d_course_sherbet_land_dl_30E0, d_course_sherbet_land_dl_3260, d_course_sherbet_land_dl_3150,
    d_course_sherbet_land_dl_3320, d_course_sherbet_land_dl_33E0, d_course_sherbet_land_dl_35A8,
    d_course_sherbet_land_dl_3490, d_course_sherbet_land_dl_36A8, d_course_sherbet_land_dl_3770,
    d_course_sherbet_land_dl_3940, d_course_sherbet_land_dl_3840, d_course_sherbet_land_dl_3A50,
    d_course_sherbet_land_dl_3AE0, d_course_sherbet_land_dl_3C48, d_course_sherbet_land_dl_3BA8,
    d_course_sherbet_land_dl_3D40, d_course_sherbet_land_dl_3D98, d_course_sherbet_land_dl_3EB8,
    d_course_sherbet_land_dl_3E58, d_course_sherbet_land_dl_3FA0, d_course_sherbet_land_dl_3FC0,
    d_course_sherbet_land_dl_3FE8, d_course_sherbet_land_dl_3FD8, d_course_sherbet_land_dl_4000,
    d_course_sherbet_land_dl_4010, d_course_sherbet_land_dl_4020, d_course_sherbet_land_dl_4018,
    d_course_sherbet_land_dl_4028, d_course_sherbet_land_dl_4030, d_course_sherbet_land_dl_4040,
    d_course_sherbet_land_dl_4038, d_course_sherbet_land_dl_4048, d_course_sherbet_land_dl_4050,
    d_course_sherbet_land_dl_4060, d_course_sherbet_land_dl_4058, d_course_sherbet_land_dl_4068,
    d_course_sherbet_land_dl_4070, d_course_sherbet_land_dl_4080, d_course_sherbet_land_dl_4078,
    d_course_sherbet_land_dl_4088, d_course_sherbet_land_dl_4090, d_course_sherbet_land_dl_40A0,
    d_course_sherbet_land_dl_4098, d_course_sherbet_land_dl_40A8, d_course_sherbet_land_dl_40B0,
    d_course_sherbet_land_dl_41B8, d_course_sherbet_land_dl_4180, d_course_sherbet_land_dl_4280,
    d_course_sherbet_land_dl_42E0, d_course_sherbet_land_dl_4470, d_course_sherbet_land_dl_43C8,
    d_course_sherbet_land_dl_4570, d_course_sherbet_land_dl_4618, d_course_sherbet_land_dl_4798,
    d_course_sherbet_land_dl_4710, d_course_sherbet_land_dl_4868, d_course_sherbet_land_dl_4930,
    d_course_sherbet_land_dl_4A98, d_course_sherbet_land_dl_4A20, d_course_sherbet_land_dl_4B20,
};
