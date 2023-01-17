#include <iostream>
using namespace std;

int main()
{
    int min, max;
    int sum = 0;

    cout << "Enter the minimum range: ";
    cin >> min;
    cout << "Enter the maximum range: ";
    cin >> max;
    system("cls");

    for (size_t i = min; i <= max; i++)
        sum = sum + i;

    cout << "The sum of all numbers in a given range is " << sum;
    cout << endl;

    return 0;
}