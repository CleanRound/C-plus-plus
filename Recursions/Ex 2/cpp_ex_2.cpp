#include <iostream>
using namespace std;

void PrintSymbols(int n, char symbol = '*')
{
    if (n < 1)
        return;

    cout << symbol;
    PrintSymbols(n - 1);
}

int main()
{
    int n;

    cout << "Enter the amount of stars you want to print: ";
    cin >> n;
    system("cls");

    PrintSymbols(n);
    cout << endl;
}