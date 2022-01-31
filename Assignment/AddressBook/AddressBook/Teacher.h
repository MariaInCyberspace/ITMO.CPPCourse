#pragma once
#include "Person.h"
class Teacher : public Person
{
private:
	std::string university;
public:
	Teacher(std::string _firstName, std::string _lastName, std::string _occupation, 
		std::string _phoneNumber, std::string _email, std::string _university);
	void setUniversity(std::string _university);
	std::string getUniversity();
	std::string getMainInfo();
};

