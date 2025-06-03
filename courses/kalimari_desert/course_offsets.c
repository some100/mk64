#include <PR/ultratypes.h>
#include "course_offsets.h"
#include "course_data.h"
#include "asset_types.h"

extern u8 gTexture6684F8[];
extern u8 gTextureSignLuigis0[];
extern u8 gTextureSignLuigis1[];
extern u8 gTextureSignMarioStar0[];
extern u8 gTextureSignMarioStar1[];
extern u8 gTextureSignNintendoRed0[];
extern u8 gTextureSignNintendoRed1[];
extern u8 gTexture67490C[];
extern u8 gTextureSignYoshi[];
extern u8 gTextureCheckerboardBlueGray[];
extern u8 gTexture646CA8[];
extern u8 gTexture6473E4[];
extern u8 gTexture647994[];
extern u8 gTexture668920[];
extern u8 gTextureRailroadTrack[];
extern u8 gTextureRailroadCrossingTrack[];
extern u8 gTexture67291C[];
extern u8 gTextureFenceBarbedWire[];
extern u8 gTexture67D304[];
extern u8 gTexture67E010[];
extern u8 gTexture67EEAC[];
extern u8 gTextureSignShellShot0[];
extern u8 gTextureSignShellShot1[];
extern u8 gTextureSignKoopaAir0[];
extern u8 gTextureSignKoopaAir1[];

const course_texture kalimari_desert_textures[] = {
    { gTexture6684F8, 0x010D, 0x0800, 0x0 },           { gTextureSignLuigis0, 0x0287, 0x1000, 0x0 },
    { gTextureSignLuigis1, 0x02AF, 0x1000, 0x0 },      { gTextureSignMarioStar0, 0x02D2, 0x1000, 0x0 },
    { gTextureSignMarioStar1, 0x02B1, 0x1000, 0x0 },   { gTextureSignNintendoRed0, 0x02A6, 0x1000, 0x0 },
    { gTextureSignNintendoRed1, 0x02F7, 0x1000, 0x0 }, { gTexture67490C, 0x021C, 0x0800, 0x0 },
    { gTextureSignYoshi, 0x04DF, 0x1000, 0x0 },        { gTextureCheckerboardBlueGray, 0x04A1, 0x1000, 0x0 },
    { gTexture646CA8, 0x073A, 0x1000, 0x0 },           { gTexture6473E4, 0x05AD, 0x1000, 0x0 },
    { gTexture647994, 0x05B5, 0x1000, 0x0 },           { gTexture668920, 0x03D9, 0x0800, 0x0 },
    { gTextureRailroadTrack, 0x0B5B, 0x1000, 0x0 },    { gTextureRailroadCrossingTrack, 0x0208, 0x1000, 0x0 },
    { gTexture67291C, 0x059C, 0x0800, 0x0 },           { gTextureFenceBarbedWire, 0x021E, 0x1000, 0x0 },
    { gTexture67D304, 0x091C, 0x1000, 0x0 },           { gTexture67E010, 0x0415, 0x0800, 0x0 },
    { gTexture67EEAC, 0x0140, 0x0800, 0x0 },           { gTextureSignShellShot0, 0x038C, 0x1000, 0x0 },
    { gTextureSignShellShot1, 0x0247, 0x1000, 0x0 },   { gTextureSignKoopaAir0, 0x0360, 0x1000, 0x0 },
    { gTextureSignKoopaAir1, 0x0304, 0x1000, 0x0 },    { 0x00000000, 0x0000, 0x0000, 0x0 },
};

const GfxAsset kalimari_desert_dls[] = {
    d_course_kalimari_desert_dl_0,    d_course_kalimari_desert_dl_258,  d_course_kalimari_desert_dl_100,
    d_course_kalimari_desert_dl_310,  d_course_kalimari_desert_dl_4A0,  d_course_kalimari_desert_dl_778,
    d_course_kalimari_desert_dl_5C0,  d_course_kalimari_desert_dl_858,  d_course_kalimari_desert_dl_A58,
    d_course_kalimari_desert_dl_CD0,  d_course_kalimari_desert_dl_B38,  d_course_kalimari_desert_dl_DD0,
    d_course_kalimari_desert_dl_F68,  d_course_kalimari_desert_dl_1258, d_course_kalimari_desert_dl_1030,
    d_course_kalimari_desert_dl_1350, d_course_kalimari_desert_dl_14C0, d_course_kalimari_desert_dl_17C8,
    d_course_kalimari_desert_dl_1588, d_course_kalimari_desert_dl_18C8, d_course_kalimari_desert_dl_1A58,
    d_course_kalimari_desert_dl_1D48, d_course_kalimari_desert_dl_1B38, d_course_kalimari_desert_dl_1E80,
    d_course_kalimari_desert_dl_2000, d_course_kalimari_desert_dl_22D8, d_course_kalimari_desert_dl_20E0,
    d_course_kalimari_desert_dl_2458, d_course_kalimari_desert_dl_25D0, d_course_kalimari_desert_dl_2868,
    d_course_kalimari_desert_dl_26E8, d_course_kalimari_desert_dl_29C0, d_course_kalimari_desert_dl_2B40,
    d_course_kalimari_desert_dl_2DE8, d_course_kalimari_desert_dl_2C88, d_course_kalimari_desert_dl_2F30,
    d_course_kalimari_desert_dl_3068, d_course_kalimari_desert_dl_32F8, d_course_kalimari_desert_dl_31C0,
    d_course_kalimari_desert_dl_3460, d_course_kalimari_desert_dl_3590, d_course_kalimari_desert_dl_3818,
    d_course_kalimari_desert_dl_3718, d_course_kalimari_desert_dl_3998, d_course_kalimari_desert_dl_3AC0,
    d_course_kalimari_desert_dl_3DB8, d_course_kalimari_desert_dl_3CA0, d_course_kalimari_desert_dl_3FB0,
    d_course_kalimari_desert_dl_40A8, d_course_kalimari_desert_dl_4358, d_course_kalimari_desert_dl_4280,
    d_course_kalimari_desert_dl_4538, d_course_kalimari_desert_dl_4630, d_course_kalimari_desert_dl_49E0,
    d_course_kalimari_desert_dl_4908, d_course_kalimari_desert_dl_4BA0, d_course_kalimari_desert_dl_4CF0,
    d_course_kalimari_desert_dl_4FB0, d_course_kalimari_desert_dl_4EF8, d_course_kalimari_desert_dl_5100,
    d_course_kalimari_desert_dl_5208, d_course_kalimari_desert_dl_5470, d_course_kalimari_desert_dl_53A0,
    d_course_kalimari_desert_dl_55C8, d_course_kalimari_desert_dl_5730, d_course_kalimari_desert_dl_5978,
    d_course_kalimari_desert_dl_5898, d_course_kalimari_desert_dl_5AD0, d_course_kalimari_desert_dl_5BE8,
    d_course_kalimari_desert_dl_5DF8, d_course_kalimari_desert_dl_5D20, d_course_kalimari_desert_dl_5F20,
    d_course_kalimari_desert_dl_6028, d_course_kalimari_desert_dl_62F8, d_course_kalimari_desert_dl_61B0,
    d_course_kalimari_desert_dl_63E0, d_course_kalimari_desert_dl_65B0, d_course_kalimari_desert_dl_6838,
    d_course_kalimari_desert_dl_66F0, d_course_kalimari_desert_dl_6940,
};
