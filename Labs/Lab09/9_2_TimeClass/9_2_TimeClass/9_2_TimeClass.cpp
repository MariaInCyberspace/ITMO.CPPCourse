// 9_2_TimeClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Time.h"

int main()
{
    try {
        Time t1(11, 15, 45);
        Time t2(17, 10, 50);
        Time tt(10, 10, 10);
        Time t3 = (t1 + t2).convertToTime();
        Time t4 = ((t3 - t1) + tt + tt).convertToTime();
        Time ttt(24, 45, 10);
        t3.display();
        t4.display();
    }
    catch (Time::ExTime& ex) {
        std::cout << "Initialization fail: bad argument in " << ex.origin << std::endl;
        std::cout << "Value of " << ex.timeValue << " is not allowed\n";
    }
}
