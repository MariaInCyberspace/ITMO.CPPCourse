#include "triangle.h"
#include <iostream>

Triangle::Triangle(double s1, double s2, double s3)
{
    bool isIllegal = false;
    double side;
    if (s1 > s2 + s3) { side = s1; isIllegal = true; };
    if (s2 > s1 + s3) { side = s2; isIllegal = true; };
    if (s3 > s2 + s1) { side = s3; isIllegal = true; };
    if (isIllegal) throw ExTriangle("Triangle()", side);
    side01 = s1;
    side02 = s2;
    side03 = s3;
}

double Triangle::calculateArea()
{
    double halfPerim = (side01 + side02 + side03) / 2;
    return sqrt((halfPerim * (halfPerim - side01) * (halfPerim - side02) * (halfPerim - side03)));
}

double Triangle::getSide01()
{
    return side01;
}

double Triangle::getSide02()
{
    return side02;
}

double Triangle::getSide03()
{
    return side03;
}

Triangle::ExTriangle::ExTriangle(std::string _origin, double _sideValue)
{
    Triangle::ExTriangle::ExTriangle::origin = _origin;
    Triangle::ExTriangle::ExTriangle::sideValue = _sideValue;
}
