#ifndef SPAWN_PLAYERS_H
#define SPAWN_PLAYERS_H

#include "camera.h"
#include <common_structs.h>

/* Function Prototypes */
/** @cond */
void spawn_player(Player*, s8, f32, f32, f32, f32, u16, s16);
void func_80039AE4(void);
void func_80039DA4(void);
void spawn_players_gp_one_player(f32*, f32*, f32);
void spawn_players_versus_one_player(f32*, f32*, f32);
void spawn_players_gp_two_player(f32* arg0, f32* arg1, f32);
void spawn_players_versus_two_player(f32*, f32*, f32);
void spawn_players_2p_battle(f32*, f32*, f32);
void func_8003B318(f32*, f32*, f32);
void spawn_players_3p_battle(f32*, f32*, f32);
void func_8003B870(f32*, f32*, f32);
void spawn_players_4p_battle(f32*, f32*, f32);
void func_8003BE30(void);
void func_8003C0F0(void);
void func_8003CD78(void);
void func_8003CD98(Player*, Camera*, s8, s8);
void func_8003D080(void);
void func_8003DB5C(void);

extern f32 D_80165210[];
extern f32 D_80165230[];
extern s16 D_80165270[];
extern f32 gPlayerCurrentSpeed[];
extern f32 D_801652A0[];
extern s32 D_801652C0[];
extern s32 D_801652E0[];
extern s16 D_80165300[];
extern u16 gCopyPathIndexByPlayerId[];
extern s16 gCopyNearestPathPointByPlayerId[];
extern s16 D_80165330[];
extern s16 D_80165340;
extern Player* D_801653C0[];
extern bool gPlayerIsThrottleActive[];
extern s32 D_80165400[];
extern s32 gFrameSinceLastACombo[];
extern s32 gCountASwitch[];
extern bool gIsPlayerTripleAButtonCombo[];
extern s32 gTimerBoostTripleACombo[];
extern bool gPlayerIsBrakeActive[];
extern s32 D_801654C0[];
extern s32 gFrameSinceLastBCombo[];
extern s32 gCountBChangement[];
extern bool gIsPlayerTripleBButtonCombo[];
extern s32 gTimerBoostTripleBCombo[];
extern s16 cpu_chooseCharacters[];
extern s16 D_8016556E;
extern s16 D_80165570;
extern s16 D_80165572;
extern s16 D_80165574;
extern s16 D_80165576;
extern s16 D_80165578;
extern s16 D_8016557A;
extern s16 D_8016557C;
extern s16 D_8016557E;
extern s16 D_80165580;
extern s16 D_80165582;
/** @endcond */

#endif
