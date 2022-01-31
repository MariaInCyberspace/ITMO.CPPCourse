#include "Person.h"
#include <sstream>
#include <fstream>
#include <iostream>


Person::Person(std::string _firstName, std::string _lastName, std::string _occupation, std::string _phoneNumber, std::string _email)
	: firstName(_firstName), lastName(_lastName)
{
	contactInfo = new ContactInfo(_occupation, _phoneNumber, _email);
}

Person::~Person()
{
	// std::string whoIsThat = this->getOccupation();
	delete contactInfo;
	// std::cout << whoIsThat << " is destroyed" << std::endl;
}

void Person::setPhoneNumber(std::string _phoneNumber)
{
	contactInfo->setPhoneNumber(_phoneNumber);
}

std::string Person::getPhoneNumber()
{
	return contactInfo->getPhoneNumber();
}

void Person::setEmail(std::string _email)
{
	contactInfo->setEmail(_email);
}

std::string Person::getEmail()
{
	return contactInfo->getEmail();
}

void Person::setOccupation(std::string _occupation)
{
	contactInfo->setOccupation(_occupation);
}

std::string Person::getOccupation()
{
	return contactInfo->getOccupation();
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
	out << std::endl << this->getMainInfo() << std::endl;
	out.close();
}
