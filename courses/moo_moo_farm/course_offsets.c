#include <PR/ultratypes.h>
#include "course_offsets.h"
#include "course_data.h"
#include "asset_types.h"

extern u8 gTextureWoodDoor0[];
extern u8 gTextureGrass2[];
extern u8 gTexture64AF50[];
extern u8 gTexture64B090[];
extern u8 gTexture64B54C[];
extern u8 gTexture64B3F8[];
extern u8 gTextureSignNintendo0[];
extern u8 gTextureSignNintendo1[];
extern u8 gTexture6684F8[];
extern u8 gTextureSignLuigis0[];
extern u8 gTextureSignLuigis1[];
extern u8 gTextureSignMarioStar0[];
extern u8 gTextureSignMarioStar1[];
extern u8 gTexture674D58[];
extern u8 gTexture675064[];
extern u8 gTexture675220[];
extern u8 gTexture6775EC[];
extern u8 gTexture683314[];
extern u8 gTexture68CDA0[];
extern u8 gTexture6442D4[];
extern u8 gTexture64440C[];
extern u8 gTexture6446AC[];
extern u8 gTextureMooMooFarmSignLeft[];
extern u8 gTextureMooMooFarmSignRight[];
extern u8 gTexture64ACAC[];
extern u8 gTexture66D698[];
extern u8 gTexture66EBF0[];
extern u8 gTextureWheelSteamEngineReal[];

const course_texture moo_moo_farm_textures[] = {
    { gTextureWoodDoor0, 0x0294, 0x1000, 0x0 },
    { gTextureGrass2, 0x0415, 0x0800, 0x0 },
    { gTexture64AF50, 0x0140, 0x0800, 0x0 },
    { gTexture64B090, 0x0365, 0x0800, 0x0 },
    { gTexture64B54C, 0x038C, 0x0800, 0x0 },
    { gTexture64B3F8, 0x0153, 0x0800, 0x0 },
    { gTextureSignNintendo0, 0x0541, 0x1000, 0x0 },
    { gTextureSignNintendo1, 0x0512, 0x1000, 0x0 },
    { gTexture6684F8, 0x010D, 0x0800, 0x0 },
    { gTextureSignLuigis0, 0x0287, 0x1000, 0x0 },
    { gTextureSignLuigis1, 0x02AF, 0x1000, 0x0 },
    { gTextureSignMarioStar0, 0x02D2, 0x1000, 0x0 },
    { gTextureSignMarioStar1, 0x02B1, 0x1000, 0x0 },
    { gTexture674D58, 0x030C, 0x1000, 0x0 },
    { gTexture675064, 0x01BB, 0x0800, 0x0 },
    { gTexture675220, 0x0212, 0x0800, 0x0 },
    { gTexture6775EC, 0x0233, 0x1000, 0x0 },
    { gTexture683314, 0x02DC, 0x1000, 0x0 },
    { gTexture68CDA0, 0x0110, 0x0800, 0x0 },
    { gTexture6442D4, 0x0138, 0x0800, 0x0 },
    { gTexture64440C, 0x029D, 0x1000, 0x0 },
    { gTexture6446AC, 0x0116, 0x0800, 0x0 },
    { gTextureMooMooFarmSignLeft, 0x0A66, 0x1000, 0x0 },
    { gTextureMooMooFarmSignRight, 0x0A64, 0x1000, 0x0 },
    { gTexture64ACAC, 0x02A3, 0x0800, 0x0 },
    { gTexture66D698, 0x0370, 0x0800, 0x0 },
    { gTexture66EBF0, 0x0146, 0x0800, 0x0 },
    { gTextureWheelSteamEngineReal, 0x022F, 0x1000, 0x0 },
    { 0x00000000, 0x0000, 0x0000, 0x0 },
};

const GfxAsset moo_moo_farm_dls[] = {
    d_course_moo_moo_farm_dl_88,   d_course_moo_moo_farm_dl_598,  d_course_moo_moo_farm_dl_338,
    d_course_moo_moo_farm_dl_8A0,  d_course_moo_moo_farm_dl_B00,  d_course_moo_moo_farm_dl_FE0,
    d_course_moo_moo_farm_dl_D70,  d_course_moo_moo_farm_dl_12B8, d_course_moo_moo_farm_dl_1530,
    d_course_moo_moo_farm_dl_1A20, d_course_moo_moo_farm_dl_1790, d_course_moo_moo_farm_dl_1D00,
    d_course_moo_moo_farm_dl_1F58, d_course_moo_moo_farm_dl_2470, d_course_moo_moo_farm_dl_2190,
    d_course_moo_moo_farm_dl_27A8, d_course_moo_moo_farm_dl_2A10, d_course_moo_moo_farm_dl_2F20,
    d_course_moo_moo_farm_dl_2C38, d_course_moo_moo_farm_dl_3238, d_course_moo_moo_farm_dl_34A0,
    d_course_moo_moo_farm_dl_39F8, d_course_moo_moo_farm_dl_36B8, d_course_moo_moo_farm_dl_3CB0,
    d_course_moo_moo_farm_dl_3EB8, d_course_moo_moo_farm_dl_4428, d_course_moo_moo_farm_dl_4098,
    d_course_moo_moo_farm_dl_46D8, d_course_moo_moo_farm_dl_4910, d_course_moo_moo_farm_dl_4E00,
    d_course_moo_moo_farm_dl_4AD0, d_course_moo_moo_farm_dl_5040, d_course_moo_moo_farm_dl_5290,
    d_course_moo_moo_farm_dl_5758, d_course_moo_moo_farm_dl_5458, d_course_moo_moo_farm_dl_5990,
    d_course_moo_moo_farm_dl_5BF8, d_course_moo_moo_farm_dl_60A8, d_course_moo_moo_farm_dl_5DF0,
    d_course_moo_moo_farm_dl_62D0, d_course_moo_moo_farm_dl_6548, d_course_moo_moo_farm_dl_6A70,
    d_course_moo_moo_farm_dl_6778, d_course_moo_moo_farm_dl_6CB8, d_course_moo_moo_farm_dl_6FF0,
    d_course_moo_moo_farm_dl_74C8, d_course_moo_moo_farm_dl_7218, d_course_moo_moo_farm_dl_7718,
    d_course_moo_moo_farm_dl_7A80, d_course_moo_moo_farm_dl_7F78, d_course_moo_moo_farm_dl_7CD8,
    d_course_moo_moo_farm_dl_81E8, d_course_moo_moo_farm_dl_84D0, d_course_moo_moo_farm_dl_89A0,
    d_course_moo_moo_farm_dl_8728, d_course_moo_moo_farm_dl_8C00, d_course_moo_moo_farm_dl_8F18,
    d_course_moo_moo_farm_dl_93D0, d_course_moo_moo_farm_dl_9178, d_course_moo_moo_farm_dl_9640,
    d_course_moo_moo_farm_dl_9938, d_course_moo_moo_farm_dl_9DF8, d_course_moo_moo_farm_dl_9BB0,
    d_course_moo_moo_farm_dl_A010, d_course_moo_moo_farm_dl_A2C0, d_course_moo_moo_farm_dl_A7B0,
    d_course_moo_moo_farm_dl_A568, d_course_moo_moo_farm_dl_A9C8, d_course_moo_moo_farm_dl_ACB0,
    d_course_moo_moo_farm_dl_B230, d_course_moo_moo_farm_dl_B020, d_course_moo_moo_farm_dl_B478,
    d_course_moo_moo_farm_dl_B798, d_course_moo_moo_farm_dl_BCE8, d_course_moo_moo_farm_dl_BB00,
    d_course_moo_moo_farm_dl_BF10, d_course_moo_moo_farm_dl_C180, d_course_moo_moo_farm_dl_C6D8,
    d_course_moo_moo_farm_dl_C4F8, d_course_moo_moo_farm_dl_C950, d_course_moo_moo_farm_dl_CBC8,
    d_course_moo_moo_farm_dl_D140, d_course_moo_moo_farm_dl_CF58, d_course_moo_moo_farm_dl_D408,
    d_course_moo_moo_farm_dl_D6B0, d_course_moo_moo_farm_dl_DC70, d_course_moo_moo_farm_dl_DA50,
    d_course_moo_moo_farm_dl_DF60, d_course_moo_moo_farm_dl_E1D8, d_course_moo_moo_farm_dl_E708,
    d_course_moo_moo_farm_dl_E4B0, d_course_moo_moo_farm_dl_EA18,
};
