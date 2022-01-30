// AddressBook.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "Person.h"
#include "Colleague.h"
#include "Student.h"

void saveContacts(std::vector<Person*>& contacts) {
	for (Person* p : contacts) p->writeToFile();
}

int main()
{
	std::vector<Person*> myContacts;
	Colleague bill("Bill", "Bower", "accountant", "555-456-456", "billbower@me.com", "Capital Ind.");
	Student chris("Chris", "Milton", "student", "555-321-321", "mil@me.com", "biology", "Some Uni");
	std::cout << bill.getMainInfo() << std::endl;
	std::cout << chris.getMainInfo() << std::endl;
	myContacts.push_back(&bill);
	myContacts.push_back(&chris);
	saveContacts(myContacts);
}
