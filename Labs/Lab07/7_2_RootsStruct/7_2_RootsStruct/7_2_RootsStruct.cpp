// 7_2_RootsStruct.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct Roots {
    double one = NULL;
    double two = NULL;

    void display() {
        if (one == NULL && two == NULL) {
            std::cout << "No real solutions" << std::endl;
        }
        else if (two == NULL) {
            std::cout << "There's only one solution: " << one << std::endl;
        }
        else {
            std::cout << one << ", " << two << std::endl;
        }
    }
};

Roots findRootsOfAQuadraticEquation(double a, double b, double c)
{
    Roots roots;
    double determinant = pow(b, 2) - 4 * a * c;
    double x, x1, x2, imag;
    if (determinant > 0)
    {
        x1 = (-b + sqrt(determinant)) / (2 * a);
        x2 = (-b - sqrt(determinant)) / (2 * a);
        roots.one = std::ceil(x1 * 100.0) / 100.0;
        roots.two = std::ceil(x2 * 100.0) / 100.0;
    }
    else if (determinant == 0)
    {
        x = (-b + sqrt(determinant)) / (2 * a);
        roots.one = std::ceil(x * 100.0) / 100.0;
    }
    return roots;
}


int main()
{
    Roots roots = findRootsOfAQuadraticEquation(7, 0, 5);
    roots.display(); 
}

