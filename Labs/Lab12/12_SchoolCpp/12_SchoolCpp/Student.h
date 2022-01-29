#pragma once
#include "Human.h"
#include <vector>

class Student : public Human
{
private:
	std::vector<int> scores;
public:
	Student(std::string _firstName, std::string _secondName, std::string _lastName, std::vector<int> _scores);
	float getAverageScore();
};

