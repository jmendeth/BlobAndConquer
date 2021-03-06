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
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USAf.

*/

#include "../headers.h"

extern Graphics *graphics;

Mouse::Mouse()
{
	for (int i = 0 ; i < MAX_MOUSE_BUTTONS ; i++)
	{
		buttonState[i] = 0;
	}
	
	busy = false;
	
	grab = false;
}

Mouse::~Mouse()
{
}

Mouse *Mouse::getInstance()
{
	return &instance;
}

void Mouse::setBusy(bool busy)
{
	this->busy = busy;

	if (busy)
	{
		SDL_ShowCursor(SDL_DISABLE);
		SDL_GetRelativeMouseState(NULL, NULL);
		
		SDL_SetWindowGrab(graphics->window, grab ? SDL_TRUE : SDL_FALSE);
		SDL_SetRelativeMouseMode(grab ? SDL_TRUE : SDL_FALSE);
	}
	else
	{
		SDL_ShowCursor(SDL_ENABLE);
		SDL_GetRelativeMouseState(NULL, NULL);

		SDL_SetWindowGrab(graphics->window, SDL_FALSE);
		SDL_SetRelativeMouseMode(SDL_FALSE);
	}
}

bool Mouse::isBusy()
{
	return busy;
}

void Mouse::set(int x, int y)
{
	SDL_WarpMouseInWindow(graphics->window, x, y);
}

void Mouse::move(int x, int y)
{
	SDL_WarpMouseInWindow(graphics->window, this->x + x, this->y + y);
}

void Mouse::clear()
{
	for (int i = 0 ; i < MAX_MOUSE_BUTTONS ; i++)
	{
		buttonState[i] = 0;
	}
}

const char *Mouse::translateMouseButton(int button)
{
	switch (button)
	{
		case SDL_BUTTON_LEFT:
			return _("left");
			break;
			
		case SDL_BUTTON_MIDDLE:
			return _("middle");
			break;
			
		case SDL_BUTTON_RIGHT:
			return _("right");
			break;
			
		case SDL_BUTTON_X1:
			return _("x1");
			break;

		case SDL_BUTTON_X2:
			return _("x2");
			break;
	}
	
	return _("unknown");
}


Mouse Mouse::instance;
