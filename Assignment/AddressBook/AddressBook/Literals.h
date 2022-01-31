#pragma once
#include <string>

struct Literals {
	const std::string CONTINUE_COMMAND = "y";
	const std::string EXIT_COMMAND = "n";
	const std::string CONTINUE_PROMPT = "Would you like to continue adding contacts? ('y'/'n')";

	const std::string CHOOSE_CATEGORY = "Please select contact category: \
		\n'c' - Colleague\n't' - Teacher\n's' - Student\n'f' - Family member\n";
	const std::string FIRST_NAME = "Enter first name:\n";
	const std::string LAST_NAME = "Enter last name:\n";
	const std::string OCCUPATION = "Enter occupation:\n";
	const std::string SPECIALTY = "Enter specialty:\n";
	const std::string UNIVERSITY = "Enter university:\n";
	const std::string WORKPLACE = "Enter workplace:\n";
	const std::string RELATION = "Enter family relation:\n";
	const std::string PHONENUMBER = "Enter phone number (000-000-00-00):\n";
	const std::string EMAIL = "Enter email (user@example.com):\n";
};