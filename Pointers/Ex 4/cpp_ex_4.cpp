#include <iostream>
using namespace std;

int main()
{
    int a, b, *p1, *p2;
    char ch;
    p1 = &a;
    p2 = &b;
    cout << "Select the Operation\n";
    cout << "Type + for Addition\n";
    cout << "Type - for Subtraction\n";
    cout << "Type * for Multiplication\n";
    cout << "Type / for Division\n";
    cin >> ch;
    cout << "Enter two numbers: " << endl;
    cin >> *p1 >> *p2;
    system("cls");

    switch (ch)
    {
    case '+':
        cout << *p1 << " " << ch << " " << *p2 << " = " << *p1 + *p2 << endl;
        break;
    case '-':
        cout << *p1 << " " << ch << " " << *p2 << " = " << *p1 - *p2 << endl;
        break;
    case '*':
        cout << *p1 << " " << ch << " " << *p2 << " = " << *p1 * *p2 << endl;
        break;
    case '/':
        if (*p2 == 0)
        {
            cout << "Sorry, you can't divide a number by 0";
            return 0;
        }
        cout << *p1 << " " << ch << " " << *p2 << " = " << *p1 / (float)*p2 << endl;
        break;
    default:
        cout << "Sorry, invalid choice";
    }
    return 0;
}