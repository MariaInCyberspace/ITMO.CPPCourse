#include <iostream>
#include <string>
#include "time.h"

Time::Time() {
    Time::hours = 0;
    Time::minutes = 0;
    Time::seconds = 0;
}

Time::Time(int h, int m, int s) {
    Time::hours = h;
    Time::minutes = m;
    Time::seconds = s;
    if (s >= 60) {
        Time::seconds -= 60;
        Time::minutes += 1;
    }
    if (m >= 60) {
        Time::minutes -= 60;
        Time::hours += 1;
    }
    if (h >= 24) {
        Time::hours -= 24;
    }
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
    int h = Time::hours + timeToAdd.hours,
        m = Time::minutes + timeToAdd.minutes,
        s = Time::seconds + timeToAdd.seconds;
    if (s >= 60) {
        s -= 60;
        m += 1;
    }
    if (m >= 60) {
        m -= 60;
        h += 1;
    }
    if (h >= 24) {
        h -= 24;
    }
    Time t(h, m, s);
    return t;
}

Time& Time::subtractTimeInterval(const Time& timeToSubtract) const {
    int h = Time::hours - timeToSubtract.hours,
        m = Time::minutes - timeToSubtract.minutes,
        s = Time::seconds - timeToSubtract.seconds;
    if (s < 0) {
        s += 60;
        m -= 1;
    }
    if (m < 0) {
        m += 60;
        h -= 1;
    }
    if (h < 0) {
        h += 24;
    }
    Time t(h, m, s);
    return t;
}

void Time::displayHalf() {
    std::cout << Time::hours - 12 << ":" << Time::minutes << ":" << Time::seconds << std::endl;
}
void Time::display() {
    std::cout << Time::hours << ":" << Time::minutes << ":" << Time::seconds << std::endl;
}

Time& Time::addTimeIntervals(const Time& t1, const Time& t2) {
    return t1.addTimeInterval(t2);
}

Time& Time::subtractTimeIntervals(const Time& t1, const Time& t2) {
    return t1.subtractTimeInterval(t2);
}

