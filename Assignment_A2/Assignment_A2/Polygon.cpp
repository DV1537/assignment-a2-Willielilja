#include "Polygon.h"
#include <iostream>
#include <fstream>

using namespace std;

Polygon::Polygon()
{

	ifstream inFile("../coordinates.txt");

}

Polygon::~Polygon()
{
}

string Polygon::getType()
{
	cout << "This shape's type is a Polygon." << endl;


}
int Polygon::circumference()
{

}