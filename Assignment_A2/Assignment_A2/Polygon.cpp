#include "Polygon.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Polygon::Polygon()
{
	int max = 8;
	vertices[max];

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
int Polygon::area()
{
	int height = 0;
	int width = 0;
	int areaR;

	if (*vertices <= 4)
	{
		cout << "Shape is a line or point, it has no area" << endl;
	}
	else if (*vertices == 6)
	{
		width = vertices[3] - vertices[1];
		height = vertices[6] - vertices[4];

		areaR = (width * height) / 2;
	}
	else if (*vertices == 8)
	{
		int AB = (vertices[1] * vertices[4]) - (vertices[2] * vertices[3]);
		int BC = (vertices[3] * vertices[6]) - (vertices[4] * vertices[5]);
		int CD = (vertices[5] * vertices[8]) - (vertices[6] * vertices[7]);
		int DA = (vertices[7] * vertices[2]) - (vertices[8] * vertices[1]);

		areaR = (AB + BC + CD + DA) / 2;

		return areaR;
	}
}
int Polygon::circumference()
{
	return 0;
}
int Polygon::position()
{
	return 0;
}