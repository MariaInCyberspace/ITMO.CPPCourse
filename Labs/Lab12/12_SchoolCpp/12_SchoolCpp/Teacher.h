#pragma once
#include "Human.h"
class Teacher : public Human
{
private:
	unsigned int workTime;
public:
	Teacher(std::string _firstName, std::string _secondName, std::string _lastName, unsigned int _workTime);
	unsigned int getWorkTime();

};

