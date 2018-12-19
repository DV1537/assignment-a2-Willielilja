#pragma once
class Point
{
public:
	Point();
	Point(int x, int y);
	~Point();

	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);

	void print() const;


private:
	int x, y;
};