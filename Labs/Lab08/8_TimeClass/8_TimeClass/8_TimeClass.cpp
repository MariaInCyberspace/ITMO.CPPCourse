// 8_TimeClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Time {
    int hours;
    int minutes;
    int seconds;
public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
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
        return { h, m, s };
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

    void displayHalf() {
        std::cout << hours - 12 << ":" << minutes << ":" << seconds << std::endl;
    }

    void display() {
        std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
    }

    static Time sumTimeIntervals(Time t1, Time t2) {
        return t1.addTimeInterval(t2);
    }
};

Time convert(std::string input) {
    return { stoi(input.substr(0, 2)), stoi(input.substr(3, 5)), stoi(input.substr(6, 7)) };
}

int main()
{
    Time t(23, 45, 54);
    t.displayHalf();
    Time t1(11, 15, 45);
    Time t2(17, 10, 50);
    Time t3 = Time::sumTimeIntervals(t1, t2);
    t3.display();
}
