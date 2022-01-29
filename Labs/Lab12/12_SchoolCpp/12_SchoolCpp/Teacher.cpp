#include "Teacher.h"

Teacher::Teacher(std::string _firstName, std::string _secondName, std::string _lastName, unsigned int _workTime) :
	Human(_firstName, _secondName, _lastName), workTime(_workTime)
{
}

unsigned int Teacher::getWorkTime()
{
	return this->workTime;
}
