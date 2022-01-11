// LeapYear.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        std::cout << year << " is a leap year!\n";
    }
    else if (year % 400 == 0) {
        std::cout << year << " is a leap year!\n";
    }
    else {
        std::cout << year << " is not a leap year\n";
    }
}

int main()
{
    std::cout << "Input a year, please:\n";
    int year;
    std::cin >> year;
    isLeapYear(year);
}

