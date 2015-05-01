#ifndef _FIELDSROOM_H_
#define _FIELDSROOM_H_

#include "tileroom.h"

class Player;

class FieldsRoom : public TileRoom
{
	public:
		FieldsRoom();
		~FieldsRoom();

		void draw(SDL_Surface *);
		void collide(Player &);

		void loadRoomFields();
	private:
};

#endif
