#pragma once
#include <iostream>

class Student {
private:
    std::string _firstName;
    std::string _lastName;
    int _scores[5];
    double _averageScore;
public:
    void setFirstName(std::string firstName);

    std::string getFirstName();

    void setLastName(std::string lastName);

    std::string getLastName();

    void setScores(int scores[]);

    void setAverageScore(double averageScore);

    double getAverageScore();
};


