#ifndef _BOX_H_
#define _BOX_H_

class Box
{
	public:
		Box(int xx, int yy, int ww, int hh);
		Box();
		~Box();

		int getX();
		int getY();
		int getW();
		int getH();

		void setX(int);	
		void setY(int);	
		void setW(int);	
		void setH(int);	

	private:
		int x,y,w,h;

};
#endif
