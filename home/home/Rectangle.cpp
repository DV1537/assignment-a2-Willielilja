#include "Rectangle.h"

#include <iostream>
#include <string>
#include <fstream>


Rectangle::Rectangle()
{
	cap = 10;
	vertices = new int[cap];

	ifstream inFile;
	inFile.open("coordinates_2.txt");
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

Rectangle::~Rectangle()
{
}