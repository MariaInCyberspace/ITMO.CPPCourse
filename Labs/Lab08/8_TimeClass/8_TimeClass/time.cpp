#include <iostream>
#include <string>
#include <tuple>
#include "time.h"

Time::Time() {
    Time::hours = 0;
    Time::minutes = 0;
    Time::seconds = 0;
}

Time::Time(int h, int m, int s) {
    int hh, mm, ss;
    std::tie(hh, mm, ss) = convertToTime_internal(h, m, s);
    hours = hh;
    minutes = mm;
    seconds = ss;
}

int Time::getHours() const {
    return Time::hours;
}
int Time::getMinutes() const {
    return Time::minutes;
};
int Time::getSeconds() const {
    return Time::seconds;
};

Time& Time::addTimeInterval(const Time& timeToAdd) const {
    static Time t;
    t.hours = hours + timeToAdd.hours;
    t.minutes = minutes + timeToAdd.minutes;
    t.seconds = seconds + timeToAdd.seconds;
    return t;
}

Time& Time::subtractTimeInterval(const Time& timeToSubtract) const {
    static Time t;
    t.hours = hours - timeToSubtract.hours;
    t.minutes = minutes - timeToSubtract.minutes;
    t.seconds = seconds - timeToSubtract.seconds;
    return t;
}

std::tuple<int, int, int> Time::convertToTime_internal(int h, int m, int s)
{
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

Time& Time::convertToTime() {
    int h, m, s;
    std::tie(h, m, s) = convertToTime_internal(hours, minutes, seconds);
    static Time t;
    t.hours = h;
    t.minutes = m;
    t.seconds = s;
    return t;
}

void Time::displayHalf() {
    std::cout << Time::hours - 12 << ":" << Time::minutes << ":" << Time::seconds << std::endl;
}
void Time::display() {
    std::cout << Time::hours << ":" << Time::minutes << ":" << Time::seconds << std::endl;
}



