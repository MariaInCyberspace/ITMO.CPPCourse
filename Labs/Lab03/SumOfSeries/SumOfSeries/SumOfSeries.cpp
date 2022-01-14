// SumOfSeries.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

//int sumOfSeries(int num, int mul, int step) {
//    if (num > 0) {
//        return num * mul + sumOfSeries(num - step, mul, step);
//    }
//    else {
//        return num;
//    }
//}

int sumOfSeries(int start, int end, int mult, int step) {
    if (end >= start) {
        return start * mult + sumOfSeries(start + step, end, mult, step);
    }
    else {
        return 0;
    }
}


int main()
{
    int start, step, mult, end;
    std::cout << "Enter a positive number to start with:\n";
    std::cin >> start;
    std::cout << "Enter a positive number to end with:\n";
    std::cin >> end;
    std::cout << "Enter a positive number to multiply the members of this series by:\n";
    std::cin >> mult;
    std::cout << "Enter a positive number to step by:\n";
    std::cin >> step;
    int res = sumOfSeries(start, end, mult, step);
    std::cout << res << "\n";
}
