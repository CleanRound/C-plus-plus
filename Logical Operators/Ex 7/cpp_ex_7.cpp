#include <iostream>
using namespace std;

int main() {
    int n, x, operation;

    cout << "Enter the first integer: ";
    cin >> n;
    cout << "Enter the second integer: ";
    cin >> x;

    cout << endl;

    cout << "Choose an arithmetic operation:" << endl;
    cout << "1 - Addition" << endl;
    cout << "2 - Subtraction" << endl;
    cout << "3 - Multiplication" << endl;
    cout << "4 - Division" << endl;
    cin >> operation;

    cout << endl;

    if (operation == 1)
    {
        cout << n + x << endl;
    }

    else if (operation == 2)
    {
        cout << n - x << endl;
    }

    else if (operation == 3)
    {
        cout << n * x << endl;
    }

    else if (operation == 4)
    {
        cout << (float) n / x << endl;
    }

    else
    {
        cout << "Wrong operator." << endl;
    }
    return 0;
}