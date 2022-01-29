#pragma once
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Item
{
private:
	string title;
	double price;
public:
	virtual void getdata();
	virtual void putdata();
};

