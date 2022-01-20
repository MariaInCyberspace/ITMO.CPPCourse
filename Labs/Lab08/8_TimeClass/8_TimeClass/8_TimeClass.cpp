// 8_TimeClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "time.h"

Time convert(std::string input) {
    return { stoi(input.substr(0, 2)), stoi(input.substr(3, 5)), stoi(input.substr(6, 7)) };
}

int main()
{
    Time t(23, 45, 54);
    t.display();
    t.displayHalf();
    Time t1(11, 15, 45);
    Time t2(17, 10, 50);
    Time t3 = Time::addTimeIntervals(t1, t2);
    Time t4 = Time::subtractTimeIntervals(t3, t1);
    t3.display();
    t4.display();
}
