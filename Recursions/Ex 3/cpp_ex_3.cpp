#include <iostream>
using namespace std;

int RecSum(int n, int m)
{
    if (n > m)
        return 0;
    return n + RecSum(n + 1, m);
}

int main()
{
    int n, m;

    cout << "Enter the first number: ";
    cin >> n;

    cout << "Enter the second number: ";
    cin >> m;
    system("cls");

    cout << RecSum(n, m) << endl;
}