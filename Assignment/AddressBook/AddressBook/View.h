#pragma once
#include <iostream>
#include <vector>
#include "Person.h"
#include "Colleague.h"
#include "Student.h"
#include "Teacher.h"
#include "FamilyMember.h"

class View
{
public:
	View();
	void displayMessage(std::string message);
	std::string getInput();
	void displayContacts(std::vector<Person*>& contacts);
};

