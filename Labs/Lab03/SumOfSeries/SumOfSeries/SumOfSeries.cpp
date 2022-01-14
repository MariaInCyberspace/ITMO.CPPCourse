// SumOfSeries.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int sumOfSeries(int num, int mul, int step) {
    if (num > 0) {
        return num * mul + sumOfSeries(num - step, mul, step);
    }
    else {
        return num;
    }
}

int main()
{
    int start, step, mult;
    std::cout << "Please enter a positive number to start with:\n";
    std::cin >> start;
    std::cout << "Enter a positive number to multiply the members of this series by:\n";
    std::cin >> mult;
    std::cout << "Enter a positive number to decrease by:\n";
    std::cin >> step;
    int res = sumOfSeries(start, mult, step);
    std::cout << res << "\n";
}
