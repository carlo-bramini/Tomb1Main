#ifndef T1M_GAME_TRAPS_H
#define T1M_GAME_TRAPS_H

#include "game/types.h"
#include <stdint.h>

// clang-format off
#define FallingBlockControl     ((void      (*)(int16_t item_num))0x0043A970)
#define FallingBlockFloor       ((void      (*)(ITEM_INFO *item, int32_t x, int32_t y, int32_t z, int16_t *height))0x0043AA70)
#define FallingBlockCeiling     ((void      (*)(ITEM_INFO *item, int32_t x, int32_t y, int32_t z, int16_t *height))0x0043AAB0)
#define TeethTrapControl        ((void      (*)(int16_t item_num))0x0043AAF0)
#define FallingCeilingControl   ((void      (*)(int16_t item_num))0x0043ABC0)
#define InitialiseDamoclesSword ((void      (*)(int16_t item_num))0x0043AC60)
#define DamoclesSwordControl    ((void      (*)(int16_t item_num))0x0043ACA0)
#define DamoclesSwordCollision  ((void      (*)(int16_t item_num, ITEM_INFO* litem, COLL_INFO* coll))0x0043ADD0)
#define DartEmitterControl      ((void      (*)(int16_t item_num))0x0043AEC0)
#define DartsControl            ((void      (*)(int16_t item_num))0x0043B060)
#define DartEffectControl       ((void      (*)(int16_t item_num))0x0043B1A0)
#define FlameEmitterControl     ((void      (*)(int16_t item_num))0x0043B1F0)
#define LavaEmitterControl      ((void      (*)(int16_t item_num))0x0043B520)
#define LavaControl             ((void      (*)(int16_t item_num))0x0043B5F0)
#define LavaWedgeControl        ((void      (*)(int16_t item_num))0x0043B710)
// clang-format on

void InitialiseRollingBall(int16_t item_num);
void RollingBallControl(int16_t item_num);
void RollingBallCollision(
    int16_t item_num, ITEM_INFO* lara_item, COLL_INFO* coll);
void SpikeCollision(int16_t item_num, ITEM_INFO* lara_item, COLL_INFO* coll);
void TrapDoorControl(int16_t item_num);
void TrapDoorFloor(
    ITEM_INFO* item, int32_t x, int32_t y, int32_t z, int16_t* height);
void TrapDoorCeiling(
    ITEM_INFO* item, int32_t x, int32_t y, int32_t z, int16_t* height);
int32_t OnTrapDoor(ITEM_INFO* item, int32_t x, int32_t z);
void PendulumControl(int16_t item_num);
void FlameControl(int16_t fx_num);
void LavaBurn(ITEM_INFO* item);

void T1MInjectGameTraps();

#endif
