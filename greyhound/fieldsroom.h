#ifndef _FIELDSROOM_H_
#define _FIELDSROOM_H_

#include "tileroom.h"

class FieldsRoom : public TileRoom
{
	public:
		FieldsRoom();
		~FieldsRoom();

		void draw(SDL_Surface *);

		void loadRoomFields();
	private:
};

#endif
