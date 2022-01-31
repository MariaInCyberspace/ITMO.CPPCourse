#pragma once
#include "Person.h"
class Colleague : public Person
{
private:
	std::string workPlace;
public:
	Colleague(std::string _firstName, std::string _lastName, std::string _occupation, 
		std::string _phoneNumber, std::string _email, std::string _workPlace);
	void setWorkPlace(std::string _workPlace);
	std::string getWorkPlace();
	std::string getMainInfo();
};

