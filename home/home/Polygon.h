#pragma once
#include "Point.h"
#include "Shape.h"


class Polygon : public Shape
{
public:
	Polygon();
	~Polygon();

	string getType();
	int circumference();
	int position();

private:
	int *vertices;
	string type;
	int cap;

};
