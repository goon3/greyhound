#include "box.h"

Box::Box(int xx, int yy ,int ww, int hh)
{
	x = xx;
	y = yy;
	w = ww;
	h = hh;
}

Box::Box()
{}

Box::~Box()
{}

int Box::getX()
{
	return x;
}

int Box::getY()
{
	return y;
}

int Box::getW()
{
	return w;
}

int Box::getH()
{
	return h;
}

void Box::setX(int xx)
{
	x = xx;
}

void Box::setY(int yy)
{
	y = yy;
}

void Box::setW(int ww)
{
	w = ww;
}

void Box::setH(int hh)
{
	h = hh;
}

