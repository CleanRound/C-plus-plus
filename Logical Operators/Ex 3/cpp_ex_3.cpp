#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    cout << endl;

    if (n > 0)
    {
        cout << n << " is positive." << endl;
    }

    else if (n < 0)
    {
        cout << n << " is negative." << endl;
    }

    else
    {
        cout << n << " is null." << endl;
    }

    return 0;
}