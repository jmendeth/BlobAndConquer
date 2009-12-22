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

extern void doGameObjects();
extern void drawWidgets();
extern void drawGameObjects();
extern bool loadGame();
extern void saveGame();
extern void doPlayer();
extern void drawInfoPanel();
extern Unit *findTeeka();

extern Audio *audio;
extern EntityManager *entityManager;
extern Game *game;
extern Graphics *graphics;
extern Engine *engine;
extern Mouse *mouse;
extern Pak *pak;
extern TextureManager *textureManager;
extern UIManager *uiManager;
extern Unit *player;
