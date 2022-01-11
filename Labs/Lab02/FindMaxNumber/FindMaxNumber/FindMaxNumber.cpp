// FindMaxNumber.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void findMaxNumber(int a, int b, int c) {
    if (a > b && a > c) {
        std::cout << a << " is the greatest of these numbers";
    }
    else if (b > c && b > a) {
        std::cout << b << " is the greatest of these numbers";
    }
    else {
        std::cout << c << " is the greatest of these numbers";
    }
}

int main()
{
    int a, b, c;
    std::cout << "Input first number\n";
    std::cin >> a;
    std::cout << "Input second number\n";
    std::cin >> b;
    std::cout << "Input third number\n";
    std::cin >> c;
    findMaxNumber(a, b, c);
}

