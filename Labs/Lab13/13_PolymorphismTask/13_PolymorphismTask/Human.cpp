#include "Human.h"
#include <string>
#include <sstream>

Human::Human(std::string _firstName, std::string _secondName, std::string _lastName) :
	firstName(_firstName), secondName(_secondName), lastName(_lastName)
{
}

std::string Human::getFullName()
{
	std::ostringstream fullName;
	fullName << this->firstName << " " << this->secondName << " " << this->lastName;
	return fullName.str();
}


