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
    int n;
    cout << "Enter the number: ";
    cin >> n;
    system("cls");

    cout << "The divisors of " << n << " are: \n";
    printDivisors(n);
    cout << endl;

    return 0;
}