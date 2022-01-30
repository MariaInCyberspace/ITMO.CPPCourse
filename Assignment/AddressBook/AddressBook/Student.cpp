#include "Student.h"
#include <sstream>

Student::Student(std::string _firstName, std::string _lastName, std::string _occupation, 
	std::string _specialty, std::string _university) 
	: Person(_firstName, _lastName, _occupation), specialty(_specialty), university(_university)
{
}

Student::Student(std::string _firstName, std::string _lastName, std::string _occupation, 
	std::string _phoneNumber, std::string _email, std::string _specialty, std::string _university)
	: Person(_firstName, _lastName, _occupation, _phoneNumber, _email), specialty(_specialty), university(_university)
{
}

void Student::setSpecialty(std::string _specialty)
{
	specialty = _specialty;
}

std::string Student::getSpecialty()
{
	return specialty;
}

void Student::setUniversity(std::string _university)
{
	university = _university;
}

std::string Student::getUniversity()
{
	return university;
}

std::string Student::getMainInfo()
{
	std::ostringstream mainInfo;
	mainInfo << this->getFullName() << ", " << this->getOccupation() << " studying " 
		<< this->specialty << " at " << this->university
		<< ": " << this->getPhoneNumber() << "; " << this->getEmail();
	return mainInfo.str();
}
