// 7_1_TimeStruct.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

struct Time {
    int hours = 0;
    int minutes = 0;
    int seconds = 0;  
public:
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
        if (s >= 60) {
            seconds = s - 60;
            minutes += 1;
        }
        if (m >= 60) {
            minutes = m - 60;
            hours += 1;
        }
        if (h >= 24) {
            hours = h - 24;
        }

    }
    Time addTimeInterval(Time timeToAdd) {
        
        int h = hours + timeToAdd.hours, 
            m = minutes + timeToAdd.minutes, 
            s = seconds + timeToAdd.seconds;
        if (seconds + timeToAdd.seconds >= 60) {
            s = (seconds + timeToAdd.seconds) - 60;
            m += 1;
        }
        if (minutes + timeToAdd.minutes >= 60) {
            m = (minutes + timeToAdd.minutes) - 60;
            h += 1;
        }
        if (hours + timeToAdd.hours >= 24) {
            h = (hours + timeToAdd.hours) - 24;
        }
        return {h, m, s};
    }

    Time subtractTimeInterval(Time timeToSubtract) {
        int h = hours - timeToSubtract.hours,
            m = minutes - timeToSubtract.minutes,
            s = seconds - timeToSubtract.seconds;
        if (seconds - timeToSubtract.seconds < 0) {
            s = 60 + (seconds - timeToSubtract.seconds);
            m -= 1;
        }
        if (minutes - timeToSubtract.minutes < 0) {
            m = 60 + (minutes + timeToSubtract.minutes);
            h -= 1;
        }
        if (hours - timeToSubtract.hours < 0) {
            h = 24 + (hours - timeToSubtract.hours);
        }
        
        return { h, m, s };
    }
};

Time convert(std::string input) {
    return { stoi(input.substr(0, 2)), stoi(input.substr(3, 5)), stoi(input.substr(6, 7)) };
}

void ex1() {
    char input[9];
    std::cout << "Input time: (hh:mm:ss)\n";
    std::cin.getline(input, 9);
    std::string s = &input[0];

    Time tt = convert(s);

    std::cout << tt.hours << ":" << tt.minutes << ":" << tt.seconds << std::endl;
}

void test() {
    Time t{ 21, 10, 38 };
    Time t2{ 24, 10, 38 };
    Time t3 = t.subtractTimeInterval(t2);
    std::cout << t3.hours << ":" << t3.minutes << ":" << t3.seconds << std::endl;
    Time tt(15, 32, 64);
    std::cout << tt.hours << ":" << tt.minutes << ":" << tt.seconds << std::endl;
}

int main()
{
    ex1();
    test();
}

