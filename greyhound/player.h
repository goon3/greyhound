#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <SDL.h>
#include <vector>

class Room;

class Player
{
	public:
		explicit Player(int xx, int yy);
		~Player();

		void moveLeft(Room const& r);
		void moveRight(Room const& r);
		void moveUp(Room const& r);
		void moveDown(Room const& r);
		bool movedToMiddle();
		int getMove();
		void undoMove(Room& room);

		void draw(SDL_Surface *screen);

		int getX();
		int getY();

	private:
		int x,y,dx,dy,index;
		std::vector<SDL_Surface *> _images;
};


#endif
