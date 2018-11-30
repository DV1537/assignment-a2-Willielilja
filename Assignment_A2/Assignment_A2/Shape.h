#pragma once
#include <iostream>

using namespace std;

class Shape
{
private:

public:

	string getType(); // returns type of shape (line, triangle)
	int area(); //returns area of object, or -1 if the chape is conclave, intersecting or does not have an area.
	int circumference(); //returns circumferenceof object
	int position(); //returns center coordinates of the object
	bool isConvex(); //returns true if object is convex
	int distance(Shape s); //returns distance to center of another shape

 
};