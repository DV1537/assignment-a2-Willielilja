#pragma once
#include <iostream>

using namespace std;

class Shape
{
private:
	static int vertices[];
	string type;

public:

	virtual string getType(); // returns type of shape (line, triangle)
	virtual int area(); //returns area of object, or -1 if the chape is conclave, intersecting or does not have an area.
	virtual int circumference(); //returns circumference of object
	virtual int position(); //returns center coordinates of the object
	bool isConvex(); //returns true if object is convex
	int distance(Shape s); //returns distance to center of another shape

 
};