#include <iostream>
#include <math.h>
using namespace std;

void printDivisors(int n)
{
    int i;
    for (i = 1; i * i < n; i++) {
        if (n % i == 0)
            cout << i << " ";
    }
    if (i - (n / i) == 1) {
        i--;
    }
    for (; i >= 1; i--) {
        if (n % i == 0)
            cout << n / i << " ";
    }
}

int main()
{
    int n, y;
    cout << "Enter the first number: ";
    cin >> n;
    cout << "Enter the second number: ";
    cin >> y;
    system("cls");

    cout << "The divisors of " << n << " are: \n";
    printDivisors(n);
    cout << endl;
    cout << endl;
    cout << "The divisors of " << y << " are: \n";
    printDivisors(y);
    cout << endl;

    return 0;
}