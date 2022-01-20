#include <iostream>
#include <string>
#include "time.h"

Time::Time() {
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int h, int m, int s) {
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

int Time::getHours() const {
    return hours;
}
int Time::getMinutes() const {
    return minutes;
};
int Time::getSeconds() const {
    return seconds;
};

Time Time::addTimeInterval(Time timeToAdd) const {
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

Time Time::subtractTimeInterval(Time timeToSubtract) const {
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

void Time::displayHalf() {
    std::cout << hours - 12 << ":" << minutes << ":" << seconds << std::endl;
}
void Time::display() {
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
}

Time Time::addTimeIntervals(Time t1, Time t2) {
    return t1.addTimeInterval(t2);
}

Time Time::subtractTimeIntervals(Time t1, Time t2) {
    return t1.subtractTimeInterval(t2);
}

