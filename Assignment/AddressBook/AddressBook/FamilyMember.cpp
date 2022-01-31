#include "FamilyMember.h"
#include <sstream>

FamilyMember::FamilyMember(std::string _firstName, std::string _lastName, std::string _occupation, 
	std::string _phoneNumber, std::string _email, std::string _relation) 
	: Person(_firstName, _lastName, _occupation, _phoneNumber, _email), relation(_relation)
{
}

void FamilyMember::setRelation(std::string _relation)
{
	relation = _relation;
}

std::string FamilyMember::getRelation()
{
	return relation;
}

std::string FamilyMember::getMainInfo()
{
	std::ostringstream mainInfo;
	mainInfo << this->getFullName() << ", " << this->getOccupation() << ", my " << this->relation
		<< ": \n\t" << this->getPhoneNumber() << "; \t" << this->getEmail();
	return mainInfo.str();
}
