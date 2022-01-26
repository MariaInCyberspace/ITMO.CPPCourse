#include "student.h"


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

