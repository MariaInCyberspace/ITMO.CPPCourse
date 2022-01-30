#pragma once
#include "Person.h"
class Student : public Person
{
private:
	std::string specialty;
	std::string university;
public:
	Student(std::string _firstName, std::string _lastName, std::string _occupation, std::string _specialty, std::string _university);
	Student(std::string _firstName, std::string _lastName, std::string _occupation, std::string _phoneNumber, std::string _email, std::string _specialty, std::string _university);
	void setSpecialty(std::string _specialty);
	std::string getSpecialty();
	void setUniversity(std::string _university);
	std::string getUniversity();
	std::string getMainInfo();
};

