#include "Person.h"
#include <sstream>
#include <fstream>

Person::Person(std::string _firstName, std::string _lastName, std::string _occupation) 
	: firstName(_firstName), lastName(_lastName), occupation(_occupation)
{
}

Person::Person(std::string _firstName, std::string _lastName, std::string _occupation, std::string _phoneNumber, std::string _email)
	: firstName(_firstName), lastName(_lastName), occupation(_occupation), phoneNumber(_phoneNumber), email(_email)
{
}

void Person::setPhoneNumber(std::string _phoneNumber)
{
	phoneNumber = _phoneNumber;
}

std::string Person::getPhoneNumber()
{
	return phoneNumber;
}

void Person::setEmail(std::string _email)
{
	email = _email;
}

std::string Person::getEmail()
{
	return email;
}

void Person::setOccupation(std::string _occupation)
{
	occupation = _occupation;
}

std::string Person::getOccupation()
{
	return occupation;
}

std::string Person::getFullName()
{
	std::ostringstream fullName;
	fullName << this->firstName << " " << this->lastName;
	return fullName.str();
}

void Person::writeToFile()
{
	std::ofstream out("contacts.txt", std::ios::app);
	out << this->getMainInfo() << std::endl;
	out.close();
}
