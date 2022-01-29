#include "Student.h"

Student::Student(std::string _firstName, std::string _secondName, std::string _lastName, std::vector<int> _scores) 
    : Human(_firstName, _secondName, _lastName), scores(_scores)
{
}

float Student::getAverageScore()
{
    unsigned int scoresCount = this->scores.size();
    unsigned int scoresSum = 0;
    float averageScore;
    for (unsigned int i = 0; i < scoresCount; ++i) {
        scoresSum += this->scores[i];
    }
    averageScore = (float)scoresSum / (float)scoresCount;
    return averageScore;
}
