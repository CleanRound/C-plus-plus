#include <iostream>
using namespace std;

int calculatePower(int base, int power)
{
    if (power != 0)
        return (base * calculatePower(base, power - 1));
    else
        return 1;
}

int main()
{
    int base, power, result;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the power number: ";
    cin >> power;
    system("cls");

    cout << base << "^" << power << " = " << calculatePower(base, power) << endl;

    return 0;
}