// AreaOfAnIrregularPentagon.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

class Point {
public:
	int x;
	int y;
	Point(int x1, int y1) {
		x = x1;
		y = y1;
	}
};

void getSidesOfATriangle(Point points[3]) {
	Point p1 = points[0];
	Point p2 = points[1];
	Point p3 = points[2];
	double side1, side2, side3;
	side1 = sqrt((p2.x - p3.x) * (p2.x - p3.x) + (p2.y - p3.y) * (p2.y - p3.y));
	side2 = sqrt((p1.x - p3.x) * (p1.x - p3.x) + (p1.y - p3.y) * (p1.y - p3.y));
	side3 = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

void calculateAreaOfATriangle(double perimeter) {
	double halfPerim = perimeter / 2;
	double side = perimeter / 3;
	double area = sqrt((halfPerim * (halfPerim - side) * (halfPerim - side) * (halfPerim - side)));
}

void calculateAreaOfIrregularPentagon(Point points[5])  {
	Point A = points[0];	
	Point B = points[1];
	Point C = points[2];
	Point D = points[3];
	Point E = points[4];
	Point ABE[] { A, B, E };
	Point BDE[] { B, D, E };
	Point BCD[] { B, C, D };
}


int main()
{
	Point A(1, 1);
	Point B(3, 9);
	Point C(14, 10);
	Point D(19, 6);
	Point E(17, 1);
	Point points[] {A, B, C, D, E};
    std::cout << "Hello World!\n";

}

