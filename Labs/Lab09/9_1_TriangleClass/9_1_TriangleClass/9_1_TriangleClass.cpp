// 9_1_TriangleClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "triangle.h"

int main()
{
    try {
        Triangle t(3, 4, 26);
        std::cout << "This triangle's area is " << t.calculateArea() << std::endl;
        std::cout<< t.getSide01();
    }
    catch (Triangle::ExTriangle& ex) {
        std::cout << "Initialization fail: bad argument in " << ex.origin;
        std::cout << "\nSide value of " << ex.sideValue << 
            " is not allowed since it's greater than the sum of the other two sides\n";
    }
}

