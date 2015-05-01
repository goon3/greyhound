#include "fieldsroom.h"
#include <SDL.h>
#include <SDL_image.h>
#include "fieldsroommap.h"

FieldsRoom::FieldsRoom()
{

	SDL_Surface *s = IMG_Load("./pics/tile-grass1-25x25.png");
	Tile t;
	t.id = 10;
	t.surface = s;	
	addTile(t);

}

FieldsRoom::~FieldsRoom()
{}

void FieldsRoom::draw(SDL_Surface *screen)
{
	SDL_Rect dest;

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 24; j++) {
			dest.x = j*25;
			dest.y = i*25;


			switch (fieldsroommap[j+i*25]) {
			case 10:
				SDL_BlitSurface(getTile(0).surface , NULL, screen, &dest);
			default:
				SDL_BlitSurface(getTile(0).surface , NULL, screen, &dest);
			}
		}
	}	
}

void FieldsRoom::loadRoomFields()
{
	
}


