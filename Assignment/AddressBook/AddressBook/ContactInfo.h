#pragma once
#include <string>
class ContactInfo
{
private:
	std::string occupation;
	std::string phoneNumber;
	std::string email;
public:
	ContactInfo(std::string _occupation, std::string _phoneNumber, std::string _email);
	void setOccupation(std::string _occupation);
	std::string getOccupation();
	void setPhoneNumber(std::string _phoneNumber);
	std::string getPhoneNumber();
	void setEmail(std::string _email);
	std::string getEmail();
};

