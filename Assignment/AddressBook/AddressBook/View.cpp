#include "View.h"

View::View()
{
}

void View::displayMessage(std::string message)
{
	std::cout << message << std::endl;
}

std::string View::getInput()
{
	std::string stringInput;
	getline(std::cin, stringInput);
	return stringInput;
}


void View::displayContacts(std::vector<Person*>& contacts)
{
	for (Person* p : contacts) std::cout << std::endl << p->getMainInfo() << std::endl;
}
