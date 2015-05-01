#include "player.h"
#include <SDL_image.h>

Player::Player(int xx, int yy)
{
	x = xx;
	y = yy;
	index = 0;
	
	SDL_Surface *img = IMG_Load("./pics/player1-35x50.png");
	//SDL_SetColorKey(img, SDL_TRUE, 0x0);
	SDL_Surface *img2 = SDL_DisplayFormat(img);
	SDL_FreeSurface(img);
	_images.push_back(img2);

}

Player::~Player()
{}

void Player::moveLeft(Room const& r)
{
	dx = -1;
	x += dx;
	dy = 0;
}

void Player::moveRight(Room const& r)
{
	dx = 1;
	x += dx;
	dy = 0;
}

void Player::moveUp(Room const& r)
{
	dy = -1;
	y += dy;
	dx = 0;
}

void Player::moveDown(Room const& r)
{
	dy = 1;
	y += dy;
	dx = 0;
}

void Player::undoMove(Room& room)
{
	if (dx == 0) 
		y -= dy;
	else if (dy == 0)
		x -= dx;
}
void Player::draw(SDL_Surface *screen)
{
	SDL_Rect dest;
	dest.x = x;
	dest.y = y;

	SDL_BlitSurface(_images[index++], NULL, screen, &dest);

	if (index >= 1)
		index = 0;
}

int Player::getMove()
{
	return dx;
}

bool Player::movedToMiddle()
{
	if (dx < 0)
		return x >= 320;
	else if (dx > 0)
		return x <= 320;
}

int Player::getX()
{
	return x;
}

int Player::getY()
{
	return y;
}
 
