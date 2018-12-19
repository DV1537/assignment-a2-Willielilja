#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point()
{
	setX(0);
	setY(0);
}
Point::Point(int x, int y)
{
	setX(x);
	setY(y);
}
Point::~Point()
{
}

int Point::getX() const
{
	return x;
}

int Point::getY() const
{
	return y;
}

void Point::setX(int x)
{
	if (!floor(x) == ceil(x))
	{
		this->x = x;
	}
	else
	{
		cout << "wrong input, setting x to 0" << endl;
		this->x = 0;
	}
}

void Point::setY(int y)
{
	if (!floor(y) == ceil(y))
	{
		this->y = y;
	}
	else
	{
		cout << "wrong input, setting y to 0" << endl;
		this->y = 0;
	}
}

void Point::print() const
{
}