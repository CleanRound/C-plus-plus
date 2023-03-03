#include <iostream>
using namespace std;

struct Rectangle
{
    int x;
    int y;
    int width;
    int height;
};

void moveRectangle(Rectangle& rect, int dx, int dy)
{
    rect.x += dx;
    rect.y += dy;
}

void resizeRectangle(Rectangle& rect, int newWidth, int newHeight)
{
    rect.width = newWidth;
    rect.height = newHeight;
}

void printRectangle(const Rectangle& rect)
{
    cout << "Rectangle: (" << rect.x << ", " << rect.y << "), Width - " << rect.width << ", Height - " << rect.height << endl;
}

int main() {
    cout << "Enter the x-coordinate: ";
    int x;
    cin >> x;
    cout << "Enter the y-coordinate: ";
    int y;
    cin >> y;
    cout << "Enter the width of a rectangle: ";
    int width;
    cin >> width;
    cout << "Enter the height of a rectangle: ";
    int height;
    cin >> height;

    Rectangle* rect = new Rectangle;
    rect->x = x;
    rect->y = y;
    rect->width = width;
    rect->height = height;

    system("cls");

    printRectangle(*rect);

    cout << "Enter horizontal offset to move the rectangle: ";
    int dx;
    cin >> dx;
    cout << "Enter vertical offset to move the rectangle: ";
    int dy;
    cin >> dy;

    moveRectangle(*rect, dx, dy);

    system("cls");

    printRectangle(*rect);

    cout << "Enter the width to resize the rectangle: ";
    int newWidth;
    cin >> newWidth;

    cout << "Enter the height to resize the rectangle: ";
    int newHeight;
    cin >> newHeight;

    resizeRectangle (*rect, newWidth, newHeight);

    system("cls");

    printRectangle(*rect);

    delete rect;

    return 0;
}