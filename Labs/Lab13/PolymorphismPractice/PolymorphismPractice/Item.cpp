#include "Item.h"

void Item::getdata()
{
	cout << "\nEnter title : ";
	cin >> title;
	cout << "\nEnter price : ";
	cin >> price;
}

void Item::putdata()
{
	cout << "\nTitle: " << title;
	cout << "\nPrice: " << price;
}
