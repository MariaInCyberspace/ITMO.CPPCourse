// 7_3_RootsTuple.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <tuple>

std::tuple<int, double, double> findRootsOfAQuadraticEquation_internal(double a, double b, double c)
{
    double res1, res2;
    double determinant = pow(b, 2) - 4 * a * c;
    double x, x1, x2, imag;
    if (determinant > 0)
    {
        x1 = (-b + sqrt(determinant)) / (2 * a);
        x2 = (-b - sqrt(determinant)) / (2 * a);
        res1 = std::ceil(x1 * 100.0) / 100.0;
        res2 = std::ceil(x2 * 100.0) / 100.0;
        return std::make_tuple(1, res1, res2);
    }
    else if (determinant < 0)
    {
        x = -b / (2 * a);
        imag = sqrt(-determinant) / (2 * a);
        res1 = std::ceil(x * 100.0) / 100.0;
        res2 = std::ceil(imag * 100.0) / 100.0;
        return std::make_tuple(-1, res1, res2);
    }
    else
    {
        x = (-b + sqrt(determinant)) / (2 * a);
        res1 = std::ceil(x * 100.0) / 100.0;
        res2 = res1;
        return std::make_tuple(0, res1, res2);
    }
}

 void findRootsOfAQuadraticEquation(double a, double b, double c) {
    int flag;
    double res1, res2;
    std::tie(flag, res1, res2) = findRootsOfAQuadraticEquation_internal(a, b, c);
    if (flag == 1) {
        std::cout << res1 << ", " << res2 << std::endl;    
    }
    else if (flag == -1) {
        std::cout << "No real solutions" << std::endl;   
    }
    else {
        std::cout << res1 << std::endl;    
    }
}


int main()
{
    findRootsOfAQuadraticEquation(3, 8, 1);
}
