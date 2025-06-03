#include <PR/ultratypes.h>
#include "course_offsets.h"
#include "course_data.h"
#include "asset_types.h"

extern u8 gTexture64619C[];
extern u8 gTexture645134[];
extern u8 gTextureWoodDoor1[];
extern u8 gTexture64BB60[];
extern u8 gTextureGrass3[];
extern u8 gTexture64F9E8[];
extern u8 gTextureFlagRed[];
extern u8 gTextureCrownJewelBlue[];
extern u8 gTextureCrown[];
extern u8 gTextureCrownJewelPink[];
extern u8 gTextureSignKoopaAir0[];
extern u8 gTextureSignKoopaAir1[];
extern u8 gTexture6684F8[];
extern u8 gTextureSignLuigis0[];
extern u8 gTextureSignLuigis1[];
extern u8 gTextureSignMarioStar0[];
extern u8 gTextureSignMarioStar1[];
extern u8 gTexture66CA98[];
extern u8 gTextureCheckerboardPink[];
extern u8 gTexture670AC8[];
extern u8 gTextureRoad0[];
extern u8 gTextureRoadFinish0[];
extern u8 gTextureSignYoshi[];
extern u8 gTextureCheckerboardBlueGray[];
extern u8 gTextureCastleBricks[];
extern u8 gTextureCastleBridge[];
extern u8 gTextureGrass8[];
extern u8 gTextureGrass9[];
extern u8 gTexture6646B8[];
extern u8 gTexture664408[];
extern u8 gTextureBricksRed[];
extern u8 gTexture665C0C[];
extern u8 gTexture6661AC[];
extern u8 gTexture6663A4[];
extern u8 gTexture667BAC[];
extern u8 gTextureFlagRed2[];
extern u8 gTexture66DB60[];
extern u8 gTextureStainglassPeach0[];
extern u8 gTextureStainglassPeach1[];
extern u8 gTextureFencePostWooden[];
extern u8 gTexture648508[];
extern u8 gTexture6449D4[];
extern u8 gTexture67FE0C[];

const course_texture royal_raceway_textures[] = {
    { gTexture64619C, 0x0124, 0x0800, 0x0 },
    { gTexture645134, 0x052C, 0x0800, 0x0 },
    { gTextureWoodDoor1, 0x0903, 0x1000, 0x0 },
    { gTexture64BB60, 0x0169, 0x0800, 0x0 },
    { gTextureGrass3, 0x0372, 0x0800, 0x0 },
    { gTexture64F9E8, 0x020B, 0x1000, 0x0 },
    { gTextureFlagRed, 0x019E, 0x0800, 0x0 },
    { gTextureCrownJewelBlue, 0x0301, 0x0800, 0x0 },
    { gTextureCrown, 0x0106, 0x0800, 0x0 },
    { gTextureCrownJewelPink, 0x0313, 0x0800, 0x0 },
    { gTextureSignKoopaAir0, 0x0360, 0x1000, 0x0 },
    { gTextureSignKoopaAir1, 0x0304, 0x1000, 0x0 },
    { gTexture6684F8, 0x010D, 0x0800, 0x0 },
    { gTextureSignLuigis0, 0x0287, 0x1000, 0x0 },
    { gTextureSignLuigis1, 0x02AF, 0x1000, 0x0 },
    { gTextureSignMarioStar0, 0x02D2, 0x1000, 0x0 },
    { gTextureSignMarioStar1, 0x02B1, 0x1000, 0x0 },
    { gTexture66CA98, 0x02C9, 0x0800, 0x0 },
    { gTextureCheckerboardPink, 0x0157, 0x0800, 0x0 },
    { gTexture670AC8, 0x0FBF, 0x1000, 0x0 },
    { gTextureRoad0, 0x0300, 0x1000, 0x0 },
    { gTextureRoadFinish0, 0x0338, 0x1000, 0x0 },
    { gTextureSignYoshi, 0x04DF, 0x1000, 0x0 },
    { gTextureCheckerboardBlueGray, 0x04A1, 0x1000, 0x0 },
    { gTextureCastleBricks, 0x0B33, 0x1000, 0x0 },
    { gTextureCastleBridge, 0x0428, 0x0800, 0x0 },
    { gTextureGrass8, 0x02CB, 0x0800, 0x0 },
    { gTextureGrass9, 0x0421, 0x0800, 0x0 },
    { gTexture6646B8, 0x0298, 0x1000, 0x0 },
    { gTexture664408, 0x02AE, 0x1000, 0x0 },
    { gTextureBricksRed, 0x0C55, 0x1000, 0x0 },
    { gTexture665C0C, 0x059D, 0x0800, 0x0 },
    { gTexture6661AC, 0x01F7, 0x0800, 0x0 },
    { gTexture6663A4, 0x05F6, 0x0800, 0x0 },
    { gTexture667BAC, 0x067A, 0x0800, 0x0 },
    { gTextureFlagRed2, 0x0186, 0x0800, 0x0 },
    { gTexture66DB60, 0x01D6, 0x0800, 0x0 },
    { gTextureStainglassPeach0, 0x0ED1, 0x1000, 0x0 },
    { gTextureStainglassPeach1, 0x0DA9, 0x1000, 0x0 },
    { gTextureFencePostWooden, 0x083D, 0x1000, 0x0 },
    { gTexture648508, 0x01FE, 0x1000, 0x0 },
    { gTexture6449D4, 0x075D, 0x0800, 0x0 },
    { gTexture67FE0C, 0x02DE, 0x0800, 0x0 },
    { 0x00000000, 0x0000, 0x0000, 0x0 },
};

const GfxAsset royal_raceway_dls[] = {
    d_course_royal_raceway_dl_0,    d_course_royal_raceway_dl_360,  d_course_royal_raceway_dl_258,
    d_course_royal_raceway_dl_470,  d_course_royal_raceway_dl_6D0,  d_course_royal_raceway_dl_A48,
    d_course_royal_raceway_dl_8E0,  d_course_royal_raceway_dl_B40,  d_course_royal_raceway_dl_DA0,
    d_course_royal_raceway_dl_1180, d_course_royal_raceway_dl_F40,  d_course_royal_raceway_dl_12C0,
    d_course_royal_raceway_dl_1538, d_course_royal_raceway_dl_1850, d_course_royal_raceway_dl_1610,
    d_course_royal_raceway_dl_19B0, d_course_royal_raceway_dl_1BB8, d_course_royal_raceway_dl_1E88,
    d_course_royal_raceway_dl_1C40, d_course_royal_raceway_dl_2018, d_course_royal_raceway_dl_21A8,
    d_course_royal_raceway_dl_2428, d_course_royal_raceway_dl_2210, d_course_royal_raceway_dl_25F0,
    d_course_royal_raceway_dl_26F0, d_course_royal_raceway_dl_29A0, d_course_royal_raceway_dl_27B8,
    d_course_royal_raceway_dl_2B78, d_course_royal_raceway_dl_2C20, d_course_royal_raceway_dl_2FE0,
    d_course_royal_raceway_dl_2DD0, d_course_royal_raceway_dl_31F8, d_course_royal_raceway_dl_33B0,
    d_course_royal_raceway_dl_3748, d_course_royal_raceway_dl_3580, d_course_royal_raceway_dl_3960,
    d_course_royal_raceway_dl_3AD8, d_course_royal_raceway_dl_3D38, d_course_royal_raceway_dl_3BA8,
    d_course_royal_raceway_dl_3ED8, d_course_royal_raceway_dl_3FA0, d_course_royal_raceway_dl_41D8,
    d_course_royal_raceway_dl_4048, d_course_royal_raceway_dl_4380, d_course_royal_raceway_dl_4438,
    d_course_royal_raceway_dl_45A0, d_course_royal_raceway_dl_44C0, d_course_royal_raceway_dl_46A0,
    d_course_royal_raceway_dl_4750, d_course_royal_raceway_dl_4930, d_course_royal_raceway_dl_4800,
    d_course_royal_raceway_dl_4A38, d_course_royal_raceway_dl_4AE0, d_course_royal_raceway_dl_4D00,
    d_course_royal_raceway_dl_4BA8, d_course_royal_raceway_dl_4DF8, d_course_royal_raceway_dl_4EC0,
    d_course_royal_raceway_dl_50F0, d_course_royal_raceway_dl_4F80, d_course_royal_raceway_dl_51D0,
    d_course_royal_raceway_dl_52F0, d_course_royal_raceway_dl_54F8, d_course_royal_raceway_dl_53B8,
    d_course_royal_raceway_dl_5598, d_course_royal_raceway_dl_56C0, d_course_royal_raceway_dl_5890,
    d_course_royal_raceway_dl_5758, d_course_royal_raceway_dl_5900, d_course_royal_raceway_dl_5A40,
    d_course_royal_raceway_dl_5CA0, d_course_royal_raceway_dl_5B28, d_course_royal_raceway_dl_5D08,
    d_course_royal_raceway_dl_5EB8, d_course_royal_raceway_dl_6118, d_course_royal_raceway_dl_5FD8,
    d_course_royal_raceway_dl_61B0, d_course_royal_raceway_dl_6378, d_course_royal_raceway_dl_6780,
    d_course_royal_raceway_dl_6538, d_course_royal_raceway_dl_68C8, d_course_royal_raceway_dl_6BC0,
    d_course_royal_raceway_dl_70C0, d_course_royal_raceway_dl_6E20, d_course_royal_raceway_dl_72B8,
    d_course_royal_raceway_dl_75C0, d_course_royal_raceway_dl_78E8, d_course_royal_raceway_dl_7778,
    d_course_royal_raceway_dl_7AD0, d_course_royal_raceway_dl_7BD8, d_course_royal_raceway_dl_7ED8,
    d_course_royal_raceway_dl_7DB0, d_course_royal_raceway_dl_8068, d_course_royal_raceway_dl_81C0,
    d_course_royal_raceway_dl_84A0, d_course_royal_raceway_dl_8398, d_course_royal_raceway_dl_8620,
    d_course_royal_raceway_dl_8770, d_course_royal_raceway_dl_88B0, d_course_royal_raceway_dl_8838,
    d_course_royal_raceway_dl_8930, d_course_royal_raceway_dl_89F0, d_course_royal_raceway_dl_8CD8,
    d_course_royal_raceway_dl_8C58, d_course_royal_raceway_dl_8EB8, d_course_royal_raceway_dl_8FA8,
    d_course_royal_raceway_dl_92D0, d_course_royal_raceway_dl_9218, d_course_royal_raceway_dl_94E8,
    d_course_royal_raceway_dl_9678, d_course_royal_raceway_dl_99A0, d_course_royal_raceway_dl_9900,
    d_course_royal_raceway_dl_9B30, d_course_royal_raceway_dl_9D58, d_course_royal_raceway_dl_A0A8,
    d_course_royal_raceway_dl_9FE8, d_course_royal_raceway_dl_A200, d_course_royal_raceway_dl_A478,
    d_course_royal_raceway_dl_A728, d_course_royal_raceway_dl_A600, d_course_royal_raceway_dl_A8A8,
    d_course_royal_raceway_dl_A9D0, d_course_royal_raceway_dl_AC28, d_course_royal_raceway_dl_AB28,
    d_course_royal_raceway_dl_AD90, d_course_royal_raceway_dl_AE70, d_course_royal_raceway_dl_B040,
    d_course_royal_raceway_dl_AFB0, d_course_royal_raceway_dl_B188, d_course_royal_raceway_dl_B230,
    d_course_royal_raceway_dl_B3E8, d_course_royal_raceway_dl_B2E0, d_course_royal_raceway_dl_B508,
};
