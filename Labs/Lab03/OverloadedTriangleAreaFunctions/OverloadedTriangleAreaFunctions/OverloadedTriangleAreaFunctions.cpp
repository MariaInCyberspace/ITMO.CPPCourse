// OverloadedTriangleAreaFunctions.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

double calculateTriangleArea(double side) { // Equilateral
    double halfPerim = (side * 3) / 2;
    return sqrt((halfPerim * (halfPerim - side) * (halfPerim - side) * (halfPerim - side)));
}

double calculateTriangleArea(double side, double side2, double side3) { // Scalene
    double halfPerim = (side + side2 + side3) / 2;
    return sqrt((halfPerim * (halfPerim - side) * (halfPerim - side2) * (halfPerim - side3)));
}

double getArea(bool isEquilateral) {
    double side, side2, side3, area;
    if (isEquilateral) {
        std::cout << "Please input side value of this equilateral triangle:\n";
        std::cin >> side;
        area = calculateTriangleArea(side);
    }
    else {
        std::cout << "Please input all three sides of this scalene triangle:\nFirst side: ";
        std::cin >> side;
        std::cout << "\nSecond side: ";
        std::cin >> side2;
        std::cout << "\nThird side: ";
        std::cin >> side3;
        area = calculateTriangleArea(side, side2, side3);
    }
    return area;
}

bool chooseTriangle() {
    char wish;
    std::cout << "Is the triangle you wish to know the area of equilateral or scalene?\n '1' - equilateral, '0' - scalene\n";
    std::cin >> wish;
    bool isEquilateral = (wish == '1') ? true : false;
    return isEquilateral;
}

int main()
{
    double area = getArea(chooseTriangle());
    std::cout << "This triangle's area is: '" << area << "'\n";
}

