
#include "student.h"
#include <fstream>

Student::Student(std::string firstName, std::string lastName)
{
    _firstName = firstName;
    _lastName = lastName;
}

Student::~Student()
{
    Student::save();
}

void Student::setFirstName(std::string firstName) {
    _firstName = firstName;
}

std::string Student::getFirstName() {
    return _firstName;
}

void Student::setLastName(std::string lastName) {
    _lastName = lastName;
}

std::string Student::getLastName() {
    return _lastName;
}

void Student::setScores(int scores[]) {
    for (int i = 0; i < 5; i++) {
        _scores[i] = scores[i];
    }
}

void Student::setAverageScore(double averageScore) {
    _averageScore = averageScore;
}

double Student::getAverageScore() {
    return _averageScore;
}

void Student::save()
{
    std::ofstream out("students.txt", std::ios::app);
    out << Student::getFirstName() << " " << Student::getLastName() << " ";
    for (int i = 0; i < 5; i++) {
        out << Student::_scores[i] << " ";
    }
    out << std::endl;
    out.close();
}

