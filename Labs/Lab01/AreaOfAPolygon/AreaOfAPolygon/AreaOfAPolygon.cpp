// AreaOfAPolygon.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;

class Point {
    public:
        double x;
        double y;
        Point(double x1, double y1) {
            x = x1;
            y = y1;
        }
};

double calculatePolygonArea(vector<Point> coordinates) {
    double area = 0.0;
    Point p = coordinates[0];
    coordinates.push_back(p);
   
    for (int i = 1; i < coordinates.size(); i++) {
        double x1 = coordinates[i - 1].x;
        double y1 = coordinates[i - 1].y;
        double x2 = coordinates[i].x;
        double y2 = coordinates[i].y;
        
        area += (x1 * y2) - (x2 * y1);    
    }
   
    return abs(area * 0.5);
}

int main()
{
    double x, y;
    char cont = 'y';
    vector<Point> coordinates;
    while (cont == 'y' || cont == 'Y') {
        std::cout << "\nInput x coordinate, please:\n";
        std::cin >> x;
        std::cout << "Input y coordinate, please:\n";
        std::cin >> y;
        Point p(x, y);
   
        coordinates.push_back(p);
        cout << "\nDo you want to continue adding points? y/n\n";
        cin >> cont;
    }

    double area = calculatePolygonArea(coordinates);
    cout << "\nArea of this polygon is: " << area << "\n";
}
