#pragma once
#include <iostream>
#include "Dot.h"

class Triangle
{
private:
	double side1;
	double side2;
	double side3;
public:
	Dot* d1;
	Dot* d2;
	Dot* d3;
	/*Dot& d1;
	Dot& d2;
	Dot& d3;*/

	Triangle(Dot&, Dot&, Dot&);
	Triangle(Dot*, Dot*, Dot*);
	~Triangle();
	std::tuple<double, double, double> getSides();
	double calculatePerimeter();
	double calculateArea();
};

