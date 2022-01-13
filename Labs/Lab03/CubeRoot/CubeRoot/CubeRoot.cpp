// CubeRoot.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

double calculateCubeRootEasy(double num) {
    return pow(num, 1.0 / 3);
}

double calculateCubeRootIter(double num) {
    double epsilon = 0.0000001;
    double x = num;
    while (x * x * x - num > epsilon) {
        x = (1.0 / 3) * (num / (x * x) + 2 * x);
    }

    return x;
}


int main()
{
    double root = calculateCubeRootIter(216);
    std::cout << root << "\n";
}

