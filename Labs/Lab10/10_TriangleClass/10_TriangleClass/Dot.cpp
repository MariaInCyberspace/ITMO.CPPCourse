#include "Dot.h"
#include <cmath>
#include <math.h>
#include <iostream>
using namespace std;

Dot::Dot()
{
	x = 0; 
	y = 0;
}

Dot::~Dot()
{
	std::cout << "Dot destructor: x - " << x << ", y - " << y << std::endl;
}

Dot::Dot(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Dot::distanceTo(Dot point)
{
	return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
}
