#include "Paperbook.h"

void Paperbook::getdata()
{
	Item::getdata();
	cout << "Enter number of pages: ";
	cin >> pages;
}

void Paperbook::putdata()
{
	Item::putdata();
	cout << "\nPages: " << pages;
}
