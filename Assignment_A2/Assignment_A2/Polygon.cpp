#include "Polygon.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Polygon::Polygon()
{
	ifstream inFile;
	inFile.open("coordinates.txt");
	if (inFile.good())
	{
		while (!inFile.eof())
		{
			int i = 0;
			inFile >> vertices[i];
			i++;
		}
	}
	else
	{
		cout << "ERROR!" << endl;
	}
	inFile.close();
}

Polygon::~Polygon()
{
}

string Polygon::getType()
{
	type = "Polygon";
	return type;	
}
int Polygon::circumference()
{
	return 0;
}
int Polygon::position()
{
	return 0;
}