#ifndef _TILEROOM_H_
#define _TILEROOM_H_

#include "room.h"

class TileRoom : public Room
{
	public:
		TileRoom();
		~TileRoom();

		void draw(SDL_Surface *);
		void addTile(Tile);
		Tile getTile(int);

	private:
		std::vector<Tile> _tiles;
};

#endif
