#include <iostream>
using namespace std;

int main()
{
    int y;
    float x, result = 1;

    cout << "Enter the base: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> y;
    system("cls");

    cout << x << "^" << y << " = ";

    while (y != 0) {
        result *= x;
        --y;
    }

    cout << result;
    cout << endl;

    return 0;
}