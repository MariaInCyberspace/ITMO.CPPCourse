#include "Colleague.h"
#include <sstream>

Colleague::Colleague(std::string _firstName, std::string _lastName, std::string _occupation)
	: Person(_firstName, _lastName, _occupation)
{
}

Colleague::Colleague(std::string _firstName, std::string _lastName, std::string _occupation, std::string _phoneNumber, std::string _email, std::string _workPlace)
	: Person(_firstName, _lastName, _occupation, _phoneNumber, _email), workPlace(_workPlace) 
{
}

void Colleague::setWorkPlace(std::string _workPlace)
{
	workPlace = _workPlace;
}

std::string Colleague::getWorkPlace()
{
	return workPlace;
}

std::string Colleague::getMainInfo()
{
	std::ostringstream mainInfo;
	mainInfo << this->getFullName() << ", " << this->getOccupation() << " from " << this->workPlace
		<< ": " << this->getPhoneNumber() << "; " << this->getEmail();
	return mainInfo.str();
}
