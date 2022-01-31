#pragma once
#include <string>
#include "ContactInfo.h"

class Person
{
private:
	std::string firstName;
	std::string lastName;
	ContactInfo* contactInfo;

public:
	Person(std::string _firstName, std::string _lastName, std::string _occupation, 
		std::string _phoneNumber, std::string _email);
	~Person();
	void setPhoneNumber(std::string _phoneNumber);
	std::string getPhoneNumber();
	void setEmail(std::string _email);
	std::string getEmail();
	void setOccupation(std::string _occupation);
	std::string getOccupation();
	std::string getFullName();
	void writeToFile();
	virtual std::string getMainInfo() = 0;
};

