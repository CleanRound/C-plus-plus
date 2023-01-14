#include <iostream>
using namespace std;

int main() {
    int n, x, smallest;

    cout << "Enter the first integer: ";
    cin >> n;

    cout << "Enter the second integer: ";
    cin >> x;

    cout << endl;

    if (x < n)
    {
        smallest = x;
    }

    else
    {
        smallest = n;
    }

    cout << "The smallest number is " << smallest << endl;

    return 0;
}