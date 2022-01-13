// AreaOfAnIrregularPentagon.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

struct Point {
public:
	int x;
	int y;
	Point(int x1, int y1) {
		x = x1;
		y = y1;
	}
};

double getSideOfATriangle(Point p1, Point p2) {
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

double calculateAreaOfATriangle(Point A, Point B, Point C) {
	double AB = getSideOfATriangle(A, B);
	double AC = getSideOfATriangle(A, C);
	double BC = getSideOfATriangle(B, C);
	double perimeter = AB + AC + BC;
	double halfPerim = perimeter / 2;	
	return sqrt((halfPerim * (halfPerim - AB) * (halfPerim - AC) * (halfPerim - BC)));
}

double calculateAreaOfIrregularPentagon(Point	A, Point B, Point C, Point D, Point E)  {
	double ABE = calculateAreaOfATriangle(A, B, E);
	double BDE = calculateAreaOfATriangle(B, D, E);
	double BCD = calculateAreaOfATriangle(B, C, D);
	return ABE + BDE + BCD;
}


int main()
{
	Point A(1, 1);
	Point B(3, 9);
	Point C(14, 10);
	Point D(19, 6);
	Point E(17, 1);
	double area = calculateAreaOfIrregularPentagon(A, B, C, D, E);
	std::cout << "Area of this irregular pentagon is '" << area << "'\n";
}

