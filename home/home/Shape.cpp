#include "Shape.h"
#include <iostream>

using namespace std;

string Shape::getType()
{
	return type;
}
int Shape::area()
{
	return 0;
}
int Shape::circumference()
{
	return 0;
}
int Shape::position()
{
	return 0;
}
bool Shape::isConvex()
{
	return true;
}
int Shape::distance(Shape s)
{
	return 0;
}