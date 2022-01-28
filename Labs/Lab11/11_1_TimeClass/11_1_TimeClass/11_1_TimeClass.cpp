// 11_1_TimeClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Time.h"

int main()
{
    try {
        Time t(13, 15, 28);
        Time tt = ((Time)(10.40 + t)).convertToTime();
        tt = (tt - 10.40).convertToTime();
        
        std::cout << tt.toString() << std::endl;
        std::cout << (tt > t) << std::endl;
    }
    catch (Time::ExTime& ex) {
        std::cout << "Initialization fail: bad argument in " << ex.origin << std::endl;
        std::cout << "Value of " << ex.timeValue << " is not allowed" << std::endl;
    }
}