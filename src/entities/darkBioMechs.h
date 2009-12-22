/*
Copyright (C) 2006 Parallel Realities

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#include "../headers.h"

extern void faceTarget(Unit *unit);
extern void attackTarget(Unit *unit);
extern void attackTargetLeading(Unit *unit);
extern bool enemySightTarget(Unit *unit, int range);
extern void enemyMoveToTarget(Unit *unit);
extern void throwSpawnedItem(Entity *item);
extern Weapon *addWeapon(Properties *props);
extern Item *addItem(Properties *props);
extern void generalEnemyLookAround();
extern void bioMechDodgeAroundTarget();
extern void bioMechStrafeAtTarget();
extern void bioMechJumpAndAttackTarget();
extern void generalBlobDeathSplat();
extern void generalMechDeathBoom();
extern int getAdjustedHealthChance(int in, int minimum);

extern Audio *audio;
extern Camera *camera;
extern EntityManager *entityManager;
extern Game *game;
extern Mission *mission;
extern Unit *player;

extern Entity *self;
