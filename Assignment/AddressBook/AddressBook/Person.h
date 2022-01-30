#pragma once
#include <string>
class Person
{
private:
	std::string firstName;
	std::string lastName;
	std::string phoneNumber;
	std::string email;
	std::string occupation;
public:
	Person(std::string _firstName, std::string _lastName, std::string _occupation);
	Person(std::string _firstName, std::string _lastName, std::string _occupation, std::string _phoneNumber, std::string _email);
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

