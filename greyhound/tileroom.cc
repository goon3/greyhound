#include "tileroom.h"
#include <SDL.h>
#include <SDL_image.h>

TileRoom::TileRoom()
{
}

TileRoom::~TileRoom()
{}

void TileRoom::draw(SDL_Surface *screen)
{
}

void TileRoom::addTile(Tile t)
{
	_tiles.push_back(t);
}

Tile TileRoom::getTile(int i)
{
	return _tiles[i];
}

