#pragma once

#include <iostream>
class Point
{
private:
	double x;
	double y;
public:
	Point(double, double);
	~Point();
	double getX();
	double getY();
	double distanceToCentre();
	bool operator<(Point& p);
	friend std::ostream& operator<< (std::ostream& out, Point& p);
};

