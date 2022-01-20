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
        Time::seconds = s - 60;
        Time::minutes += 1;
    }
    if (m >= 60) {
        Time::minutes = m - 60;
        Time::hours += 1;
    }
    if (h >= 24) {
        Time::hours = h - 24;
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

Time Time::addTimeInterval(Time timeToAdd) const {
    int h = Time::hours + timeToAdd.hours,
        m = Time::minutes + timeToAdd.minutes,
        s = Time::seconds + timeToAdd.seconds;
    if (Time::seconds + timeToAdd.seconds >= 60) {
        s = (Time::seconds + timeToAdd.seconds) - 60;
        m += 1;
    }
    if (Time::minutes + timeToAdd.minutes >= 60) {
        m = (Time::minutes + timeToAdd.minutes) - 60;
        h += 1;
    }
    if (Time::hours + timeToAdd.hours >= 24) {
        h = (Time::hours + timeToAdd.hours) - 24;
    }
    return { h, m, s };
}

Time Time::subtractTimeInterval(Time timeToSubtract) const {
    int h = Time::hours - timeToSubtract.hours,
        m = Time::minutes - timeToSubtract.minutes,
        s = Time::seconds - timeToSubtract.seconds;
    if (Time::seconds - timeToSubtract.seconds < 0) {
        s = 60 + (Time::seconds - timeToSubtract.seconds);
        m -= 1;
    }
    if (Time::minutes - timeToSubtract.minutes < 0) {
        m = 60 + (Time::minutes + timeToSubtract.minutes);
        h -= 1;
    }
    if (Time::hours - timeToSubtract.hours < 0) {
        h = 24 + (Time::hours - timeToSubtract.hours);
    }

    return { h, m, s };
}

void Time::displayHalf() {
    std::cout << Time::hours - 12 << ":" << Time::minutes << ":" << Time::seconds << std::endl;
}
void Time::display() {
    std::cout << Time::hours << ":" << Time::minutes << ":" << Time::seconds << std::endl;
}

Time Time::addTimeIntervals(Time t1, Time t2) {
    return t1.addTimeInterval(t2);
}

Time Time::subtractTimeIntervals(Time t1, Time t2) {
    return t1.subtractTimeInterval(t2);
}

