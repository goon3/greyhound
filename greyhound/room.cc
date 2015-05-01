#include "room.h"
#include <SDL.h>
#include <SDL_image.h>
#include "player.h"

Room::Room()
{}

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
	dest.x = 0;
	dest.y = 0;

	SDL_BlitSurface(_bg, NULL, screen, &dest);
	
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

void Room::loadRoomCastle()
{
	_bg = IMG_Load("./pics/parapapalace-test.bmp");
	_boxes.push_back(Box(0,420,640,10));

}


