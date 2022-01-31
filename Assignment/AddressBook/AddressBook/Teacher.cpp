#include "Teacher.h"
#include <sstream>

Teacher::Teacher(std::string _firstName, std::string _lastName, std::string _occupation, std::string _phoneNumber, std::string _email, std::string _university) 
	: Person(_firstName, _lastName, _occupation, _phoneNumber, _email), university(_university)
{
}

void Teacher::setUniversity(std::string _university)
{
	university = _university;
}

std::string Teacher::getUniversity()
{
	return university;
}

std::string Teacher::getMainInfo()
{
	std::ostringstream mainInfo;
	mainInfo << this->getFullName() << ", " << this->getOccupation() << " at " << this->university
		<< ": \n\t" << this->getPhoneNumber() << "; \t" << this->getEmail();
	return mainInfo.str();
}
