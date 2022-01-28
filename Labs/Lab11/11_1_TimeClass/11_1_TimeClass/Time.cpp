#include "Time.h"
#include <string>


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

int Time::getHours() const
{
    return Time::hours;
}

int Time::getMinutes() const
{
    return Time::minutes;
}

int Time::getSeconds() const
{
    return Time::seconds;
}

Time::Time()
{
    Time::hours = 0;
    Time::minutes = 0;
    Time::seconds = 0;
}


Time::Time(int h, int m, int s)
{
    if (s >= 60) throw ExTime("Time(int, int, int)", s);
    if (m >= 60) throw ExTime("Time(int, int, int)", m);
    if (h >= 24) throw ExTime("Time(int, int, int)", h);
    hours = h;
    minutes = m;
    seconds = s;
}

Time::Time(double raw)
{
    int i = (int)raw;
    int f = (int)((raw - i) * 100);
    int s = (int)((raw - i - (double)f / 100) * 10000);
    if (i >= 24) throw ExTime("Time(double)", i);
    if (f >= 60) throw ExTime("Time(double)", f);
    if (s >= 60) throw ExTime("Time(double)", s);
    hours = i;
    minutes = f;
    seconds = s;
}

Time& Time::convertToTime()
{
    int h, m, s;
    std::tie(h, m, s) = convertToTime_internal(hours, minutes, seconds);
    static Time t;
    t.hours = h;
    t.minutes = m;
    t.seconds = s;
    return t;
}

void Time::displayHalf()
{
    std::cout << Time::hours - 12 << ":" << Time::minutes << ":" << Time::seconds << std::endl;
}

void Time::display()
{
    std::cout << Time::hours << ":" << Time::minutes << ":" << Time::seconds << std::endl;
}

Time& Time::addTimeInterval(const Time& timeToAdd) const
{
    static Time t;
    t.hours = hours + timeToAdd.hours;
    t.minutes = minutes + timeToAdd.minutes;
    t.seconds = seconds + timeToAdd.seconds;
    return t;
}

Time& Time::subtractTimeInterval(const Time& timeToSubtract) const
{
    static Time t;
    t.hours = hours - timeToSubtract.hours;
    t.minutes = minutes - timeToSubtract.minutes;
    t.seconds = seconds - timeToSubtract.seconds;
    return t;
}

Time& Time::operator+(const Time& timeToAdd) const
{
    return this->addTimeInterval(timeToAdd);
}

Time& Time::operator-(const Time& timeToSubtract) const
{
    return this->subtractTimeInterval(timeToSubtract);
}

Time& Time::operator+(const double toAdd) const
{
    return this->addTimeInterval(Time(toAdd));
}

Time& Time::operator-(const double toSubtract) const
{
    return this->subtractTimeInterval(Time(toSubtract));
}

bool Time::operator==(const Time& t) const
{
    return (hours == t.hours && minutes == t.minutes && seconds == t.seconds);
}

bool Time::operator<(const Time& t) const
{
    bool isLess = false;
    if (hours < t.hours && (minutes < t.minutes || minutes > t.minutes || minutes == t.minutes) 
        && (seconds < t.seconds || seconds > t.seconds || seconds == t.seconds)) isLess = true;
    return isLess;
}

bool Time::operator>(const Time& t) const
{
    bool isGreater = false;
    if (hours > t.hours && (minutes > t.minutes || minutes < t.minutes || minutes == t.minutes) 
        && (seconds > t.seconds || seconds < t.seconds || seconds == t.seconds)) isGreater = true;
    return isGreater;
}

Time::operator double() const
{
    return (double)hours + (double)minutes / 100 + (double)seconds / 10000;
}

std::string Time::toString()
{
    std::string output = "";
    output += std::to_string(hours) + ":";
    output += std::to_string(minutes) + ":";
    output += std::to_string(seconds);
    return output;
}

Time::ExTime::ExTime(std::string _origin, int _timeValue)
{
    Time::ExTime::origin = _origin;
    Time::ExTime::timeValue = _timeValue;
}