#include "room.h"
#include <SDL.h>
#include <SDL_image.h>
#include "player.h"
#include "roommap.h"

Room::Room()
{

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


