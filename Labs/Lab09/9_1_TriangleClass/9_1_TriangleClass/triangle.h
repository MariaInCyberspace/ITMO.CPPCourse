#pragma once
#include <iostream>
class Triangle
{
private:
	double side01;
	double side02;
	double side03;
public:
	Triangle(double, double, double);
	double getSide01();
	double getSide02();
	double getSide03();
	double calculateArea();
	class ExTriangle {
	public:
		std::string origin;
		double sideValue;
		ExTriangle(std::string, double);
	};
};

