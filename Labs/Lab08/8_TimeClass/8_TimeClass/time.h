#pragma once
#include <iostream>
#include <string>

class Time {
private:
    int hours;
    int minutes;
    int seconds;
    Time& addTimeInterval(const Time&) const;
    Time& subtractTimeInterval(const Time&) const;
public:
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;
    Time();
    Time(int, int, int);

    void displayHalf();
    void display();

    static Time& addTimeIntervals(const Time& t1, const Time& t2);
    static Time& subtractTimeIntervals(const Time& t1, const Time& t2);
};