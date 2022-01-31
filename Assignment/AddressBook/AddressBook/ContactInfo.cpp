#include "ContactInfo.h"

ContactInfo::ContactInfo(std::string _occupation, std::string _phoneNumber, std::string _email) 
	: occupation(_occupation), phoneNumber(_phoneNumber), email(_email)
{
}

void ContactInfo::setOccupation(std::string _occupation)
{
	occupation = _occupation;
}

std::string ContactInfo::getOccupation()
{
	return occupation;
}

void ContactInfo::setPhoneNumber(std::string _phoneNumber)
{
	phoneNumber = _phoneNumber;
}

std::string ContactInfo::getPhoneNumber()
{
	return phoneNumber;
}

void ContactInfo::setEmail(std::string _email)
{
	email = _email;
}

std::string ContactInfo::getEmail()
{
	return email;
}
