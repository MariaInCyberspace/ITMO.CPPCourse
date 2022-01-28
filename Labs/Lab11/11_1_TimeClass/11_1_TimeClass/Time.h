#pragma once
#include <tuple>
#include <iostream>
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
    std::tuple<int, int, int> convertToTime_internal(int, int, int);
public:
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;
    Time();
    Time(int, int, int);
    Time(double);
    Time& convertToTime();

    void displayHalf();
    void display();

    Time& addTimeInterval(const Time&) const;
    Time& subtractTimeInterval(const Time&) const;

    Time& operator+(const Time&) const;
    Time& operator-(const Time&) const;
    Time& operator+(const double) const;
    Time& operator-(const double) const;
    bool operator==(const Time&) const;
    bool operator<(const Time&) const;
    bool operator>(const Time&) const;
    operator double() const;

    std::string toString();
    class ExTime {
    public:
        std::string origin;
        int timeValue;
        ExTime(std::string, int);
    };
};

