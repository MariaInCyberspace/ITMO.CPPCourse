#pragma once
#include <string>
#include "View.h"
#include "Literals.h"

class Controller
{
private:
	View* view;
	Literals* lit;
	std::vector<Person*> allContacts;
public:
	Controller();
	~Controller();
	
	void collectContact(Person* p);
	void saveContacts(std::vector<Person*>& contacts);
	std::string chooseCategory();

	Person* fillContactInfo(std::string _category);

	void runApp();
};

