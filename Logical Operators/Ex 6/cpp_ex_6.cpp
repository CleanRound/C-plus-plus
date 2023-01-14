#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    cout << endl;

    if (n % 2 == 0)
        cout << n * 3 << endl;
    else
        cout << (float) n / 2 << endl;

    return 0;
}