#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    int sum = 0;
    cout << "Terminate the loop by entering a zero\n" << endl;

    while (true)
    {
        int nValue = 0;
        cout << "Enter the number: ";
        cin >> nValue;

        if (nValue < 0)
        {
            cout << "Negative numbers are not allowed\n";
            continue;
        }

        if (nValue == 0)
        {
            break;
        }
        sum += nValue;
    }

    system("cls");
    cout << "The total is " << sum << endl;

    return 0;
}