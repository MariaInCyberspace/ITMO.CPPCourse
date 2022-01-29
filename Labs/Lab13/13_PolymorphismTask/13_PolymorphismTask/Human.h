#pragma once
#include <string>
class Human
{
private:
	std::string firstName;
	std::string secondName;
	std::string lastName;
public:
	Human(std::string _firstName, std::string _secondName, std::string _lastName);
	std::string getFullName();
	virtual std::string getInfo();
};

