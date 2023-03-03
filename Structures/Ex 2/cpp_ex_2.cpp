#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x, y;
};

double distance(const Point& p1, const Point& p2)
{
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1, p2;

    cout << "Enter x and y coordinates for point 1: ";
    cin >> p1.x >> p1.y;

    cout << "Enter x and y coordinates for point 2: ";
    cin >> p2.x >> p2.y;

    system("cls");

    double dist = distance(p1, p2);

    cout << "The distance between (" << p1.x << ", " << p1.y << ") and ("
        << p2.x << ", " << p2.y << ") is " << dist << endl;

    return 0;
}