#pragma once
#include "Point.h"
#include "Shape.h"
#include "Polygon.h"
class Rectangle
{
public:
	Rectangle();
	~Rectangle();

private:
	int *vertices;
	string type;
	int cap;

};
