#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()

{
    int width = 0, height = 0, color, b = 0, a = 0;
    char symbol;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    cout << "Please enter the value of the width: ";
    cin >> width;

    cout << "Please enter the value of the height: ";
    cin >> height;

    cout << "Please enter the symbol: ";
    cin >> symbol;

    cout << "Please enter the color of rectangle (enter the number of the color):\n" << endl;
    for (int k = 1; k < 16; k++)
    {
        SetConsoleTextAttribute(hConsole, k);
        cout << k << " - Hello World!" << endl;
    }
    cout << endl;
    cout << "Color: ";
    cin >> color;
    system("cls");

    for (a = 0; a != height; a++) {

        for (b = 0; b != width; b++) {

            if ((a == 0) || (a == height - 1) || (b == width - 1) || (b == 0)) {
                SetConsoleTextAttribute(hConsole, color);
                cout << symbol;
                SetConsoleTextAttribute(hConsole, 7);

            }
            else
                printf(" ");
        }
        printf("\n");
    }

}