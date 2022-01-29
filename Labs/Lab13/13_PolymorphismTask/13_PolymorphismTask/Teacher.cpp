#include "Teacher.h"
#include <string>
#include <sstream>

Teacher::Teacher(std::string _firstName, std::string _secondName, std::string _lastName, unsigned int _workTime) :
	Human(_firstName, _secondName, _lastName), workTime(_workTime)
{
}

unsigned int Teacher::getWorkTime()
{
	return this->workTime;
}

std::string Teacher::getInfo() {
	std::ostringstream specificOutput;
	specificOutput << "\tThe amount of work hours is: " << this->getWorkTime();
	return specificOutput.str();
}
