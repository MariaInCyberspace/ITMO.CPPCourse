// 10_TriangleClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Triangle.h"
#include "Dot.h"

int main()
{
	Dot* a = new Dot(3, 4);
	Dot* b = new Dot(5, 8);
	Dot* c = new Dot(6, 12);

	/*Dot a(3, 4);
	Dot b(5, 8);
	Dot c(6, 12);*/
	Triangle* t = new Triangle(a, b, c);
	delete t;
}

