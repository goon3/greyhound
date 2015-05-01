#ifndef _ROOM_H_
#define _ROOM_H_

#include <SDL.h>
#include <list>

class Player;
#include "box.h"

class Room
{
	public:
		Room();
		~Room();

		void collide(Box const&);
		void update(Box const&);
		void draw(SDL_Surface *screen);

		void updatePlayer(Player const&);


		void loadRoomCastle();

	private:
		SDL_Surface *_bg;
		std::list<Box> _boxes;
};
#endif
