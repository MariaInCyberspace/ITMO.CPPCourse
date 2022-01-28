#include "Point.h"
#include <math.h>
#include <iostream>


Point::Point(double _x, double _y) : x(_x), y(_y)
{
}

Point::~Point()
{
}

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

double Point::distanceToCentre()
{
	return sqrt(pow(x - 0, 2) + pow(y - 0, 2));
}

bool Point::operator<(Point& p)
{
	return distanceToCentre() < p.distanceToCentre();
}

std::ostream& operator<<(std::ostream& out, Point& p)
{
	out << p.getX() << ", " << p.getY();
	return out;
}
