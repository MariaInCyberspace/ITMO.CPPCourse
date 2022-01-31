#pragma once
#include "Person.h"
class FamilyMember : public Person
{
private:
	std::string relation;
public:
	FamilyMember(std::string _firstName, std::string _lastName, std::string _occupation,
		std::string _phoneNumber, std::string _email, std::string _relation);
	void setRelation(std::string _relation);
	std::string getRelation();
	std::string getMainInfo();
};

