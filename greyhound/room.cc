#include "room.h"
#include <SDL.h>
#include <SDL_image.h>
#include "player.h"
#include "roommap.h"
#include "roommap1.h"

Room::Room()
{

	SDL_Surface *s = IMG_Load("./pics/tile-grass1-25x25.png");
	Tile t;
	t.id = 10;
	t.surface = s;	
	_tiles.push_back(t);

}

Room::~Room()
{}

void Room::collide(Box const& b)
{
	
}

void Room::update(Box const& b)
{
	
}

void Room::draw(SDL_Surface *screen)
{
	SDL_Rect dest;

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 24; j++) {
			dest.x = j*25;
			dest.y = i*25;
			SDL_BlitSurface(_tiles[0].surface , NULL, screen, &dest);
		}
	}	
}

void Room::updatePlayer(Player const& p)
{
	for (std::list<Box>::iterator vi = _boxes.begin();
		vi != _boxes.end();
		vi++) {

		if (const_cast<Player&>(p).movedToMiddle()) {
			(*vi).setX((*vi).getX()+const_cast<Player&>(p).getMove());
		}
	}	
}

void Room::loadRoomFields()
{
	
}


