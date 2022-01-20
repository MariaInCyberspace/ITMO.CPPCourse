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
    //Time t4 = t3.subtractTimeIntervals(t3, t1);
    t3.display();
    t4.display();

    char input[9];
    std::cout << "\nInput time: (hh:mm:ss)\n";
    std::cin.getline(input, 9);
    std::string s = &input[0];

    Time tt = convert(s);

    std::cout << tt.getHours() << ":" << tt.getMinutes() << ":" << tt.getSeconds() << std::endl;
    Time to_add(21, 44, 50);
    Time ttt = Time::addTimeIntervals(tt, to_add);
    std::cout << ttt.getHours() << ":" << ttt.getMinutes() << ":" << ttt.getSeconds() << std::endl;

    Time ti{ 21, 10, 38 };
    Time ti2{ 24, 10, 38 };
    Time ti3 = Time::addTimeIntervals(ti, ti2);
    std::cout << ti3.getHours() << ":" << ti3.getMinutes() << ":" << ti3.getSeconds() << std::endl;
    Time tti(15, 32, 64);
    std::cout << tti.getHours() << ":" << tti.getMinutes() << ":" << tti.getSeconds() << std::endl;
    
}
