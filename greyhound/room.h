#ifndef _ROOM_H_
#define _ROOM_H_

#include <SDL.h>
#include <list>
#include <vector>

class Player;
#include "box.h"
#include "roommap.h"

class Room
{
	public:
		Room();
		~Room();

		void collide(Box const&);
		void update(Box const&);
		void draw(SDL_Surface *screen);

		void updatePlayer(Player const&);


		void loadRoomFields();

	private:
		SDL_Surface *_bg;
		std::list<Box> _boxes;
		std::vector<Tile> _tiles;
};
#endif
