#pragma once
#include <iostream>
#include <string>

class Time {
private:
    int hours;
    int minutes;
    int seconds;
    Time addTimeInterval(Time) const;
    Time subtractTimeInterval(Time timeToSubtract) const;
public:
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;
    Time();
    Time(int, int, int);

    void displayHalf();
    void display();

    static Time addTimeIntervals(Time t1, Time t2);
    static Time subtractTimeIntervals(Time t1, Time t2);
};