#pragma once
#include "Shape.h"

class Polygon : public Shape
{
public:
	Polygon();
	~Polygon();

	string getType(); //Overrides the Shape function with this local function.
					  //Easier to return the shape in a string that is attatched to function.
	int area();
	int circumference(); //Overrides the circumference function.
						 //This will make simple use of the array sent with the funciton
	int position();

private:
	static int vertices[];
	string type;

};
