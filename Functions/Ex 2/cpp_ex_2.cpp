#include <iostream>
using namespace std;

unsigned int Factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    system("cls");

    cout << "Factorial of "
        << num << " is " << Factorial(num) << endl;
    return 0;
}