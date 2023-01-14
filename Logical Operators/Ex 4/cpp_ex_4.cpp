#include <iostream>
using namespace std;

int main() {
    int n, x;

    cout << "Enter the first integer: ";
    cin >> n;

    cout << "Enter the second integer: ";
    cin >> x;

    cout << endl;

    if (n == x)
    {
        cout << n << " and " << x << " are equal." << endl;
    }

    else if (n < x)
    {
        cout << n << " and " << x << " are not equal." << endl;
    }

    else
    {
        cout << x << " and " << n << " are not equal." << endl;
    }

    return 0;
}