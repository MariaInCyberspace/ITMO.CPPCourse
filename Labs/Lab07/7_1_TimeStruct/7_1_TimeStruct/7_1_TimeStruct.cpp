// 7_1_TimeStruct.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <tuple>

struct Time {
    int hours = 0;
    int minutes = 0;
    int seconds = 0;  
public:
    Time() { }
    Time(int h, int m, int s) {
        int hh, mm, ss;
        std::tie(hh, mm, ss) = convertToTime_tuple(h, m, s);
        hours = hh;
        minutes = mm;
        seconds = ss;   
    }
    Time& convertToTime() {
        int h, m, s;
        std::tie(h, m, s) = convertToTime_tuple(hours, minutes, seconds);
        Time tt(h, m, s);
        return tt;
    }
    Time addTimeInterval(const Time& timeToAdd) {
        Time t;
        t.hours = hours + timeToAdd.hours;
        t.minutes = minutes + timeToAdd.minutes;
        t.seconds = seconds + timeToAdd.seconds;
        /*std::cout << 1 << ": " << hours << ": " << minutes << ": " << seconds << std::endl;
        std::cout << 2 << ": " << timeToAdd.hours << ": " << timeToAdd.minutes << ": " << timeToAdd.seconds << std::endl;
        std::cout << 3 << ": " << h << ": " << m << ": " << s << std::endl;
        std::cout << 4 << ": " << t.hours << ": " << t.minutes << ": " << t.seconds << std::endl;*/
        return t;
    }

    Time subtractTimeInterval(const Time& timeToSubtract) {
        Time t;
        t.hours = hours - timeToSubtract.hours;
        t.minutes = minutes - timeToSubtract.minutes;
        t.seconds = seconds - timeToSubtract.seconds;
        return t;
    }

private:
    std::tuple<int, int, int> convertToTime_tuple(int h, int m, int s) {
        int hh = h, mm = m, ss = s;
        const int min_sec = (h > 0 && m > 0 && s > 0) ? 60 : -60;
        const int hrs = (h > 0 && m > 0 && s > 0) ? 24 : -24;
        const int one = (h > 0 && m > 0 && s > 0) ? 1 : -1;
        if (s >= 60 || s < 0) {
            while (ss < 0 || ss >= 60) {
                ss -= min_sec;
                mm += one;
            }
        }
        if (m >= 60 || m < 0) {
            while (mm < 0 || mm >= 60) {
                mm -= min_sec;
                hh += one;
            }
        }
        if (h >= 24 || h < 0) {
            while (hh >= 24 || hh < 0) {
                hh -= hrs;
            }
        }
    
        return std::make_tuple(hh, mm, ss);
    }
};

Time& convert(std::string& input) {
    Time t(stoi(input.substr(0, 2)), stoi(input.substr(3, 5)), stoi(input.substr(6, 7)));
    return t;
}

//void ex1() {
//    char input[9];
//    std::cout << "Input time: (hh:mm:ss)\n";
//    std::cin.getline(input, 9);
//    std::string s = &input[0];
//
//    Time tt = convert(s);
//
//    std::cout << tt.hours << ":" << tt.minutes << ":" << tt.seconds << std::endl;
//}
//
//void test() {
//    Time t{ 15, 55, 32 };
//    Time t2{ 21, 44, 50 };
//    Time t3 = t.addTimeInterval(t2);
//    std::cout << t3.hours << ":" << t3.minutes << ":" << t3.seconds << std::endl;
//    Time tt(15, 55 + 44, 64);
//    std::cout << tt.hours << ":" << tt.minutes << ":" << tt.seconds << std::endl;
//}

void test2() {
    Time t{ -15, -55, -32 };
    std::cout << t.hours << ":" << t.minutes << ":" << t.seconds << std::endl;
    Time t1{ 12, 34, 10 };
    Time t2{ 10, 10, 10 };
    Time tt = t.addTimeInterval(t1).addTimeInterval(t2).convertToTime();
    std::cout << tt.hours << ":" << tt.minutes << ":" << tt.seconds << std::endl;
}

int main()
{
   //ex1();
   //test();
    test2();
}

