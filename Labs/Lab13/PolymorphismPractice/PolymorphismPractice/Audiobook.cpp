#include "Audiobook.h"

void Audiobook::getdata()
{
	Item::getdata();
	cout << "Enter playing time: ";
	cin >> time;
}

void Audiobook::putdata()
{
	Item::putdata();
	cout << "\nPlaying time: " << time;
}
