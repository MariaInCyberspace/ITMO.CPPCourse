#include "Triangle.h"
#include <tuple>

Triangle::Triangle(Dot& a, Dot& b, Dot& c) //: d1(a), d2(b), d3(c)
{
    d1 = new Dot(a);
    d2 = new Dot(b);
    d3 = new Dot(c);
    side1 = a.distanceTo(b);
    side2 = b.distanceTo(c);
    side3 = c.distanceTo(a);
}

Triangle::Triangle(Dot* a, Dot* b, Dot* c) : d1(a), d2(b), d3(c) { }

Triangle::~Triangle()
{
    if (d1) delete d1;
    if (d2) delete d2;
    if (d3) delete d3;
    std::cout << "Triangle destructor\n";
}

std::tuple<double, double, double> Triangle::getSides()
{
    return std::make_tuple(side1, side2, side3);
}


double Triangle::calculatePerimeter()
{
    return side1 + side2 + side3;
}

double Triangle::calculateArea()
{
    double halfPerim = (side1 + side2 + side3) / 2;
    return sqrt((halfPerim * (halfPerim - side1) * (halfPerim - side2) * (halfPerim - side3)));
}
