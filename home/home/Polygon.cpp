#include "Polygon.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Polygon::Polygon()
{
	cap = 10;
	vertices = new int[cap];

	ifstream inFile;
	inFile.open("coordinates.txt");
	if (inFile.good())
	{
		int i = 0;

		while (!inFile.eof())
		{
			inFile >> vertices[i];
			cout << vertices[i] << " ";

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