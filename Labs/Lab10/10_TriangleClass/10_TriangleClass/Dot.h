#pragma once
#include <iostream>
class Dot
{
private:
	double x;
	double y;
public:
	Dot();
	~Dot();
	Dot(double x, double y);
	double distanceTo(Dot point);
};

