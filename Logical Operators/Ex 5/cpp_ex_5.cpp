#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

    cout << "Enter the first grade: ";
    cin >> a;
    cout << "Enter the second grade: ";
    cin >> b;
    cout << "Enter the third grade: ";
    cin >> c;
    cout << "Enter the fourth grade: ";
    cin >> d;
    cout << "Enter the fifth grade: ";
    cin >> e;
    cout << endl;

    int average = (a + b + c + d + e) / 5;
    
    if (average > 3)
    {
        cout << "Congratulations! You are eligible to write an exam." << endl;
    }
    else
    {
        cout << "Sorry, but you are not eligible to write an exam." << endl;
    }

    return 0;
}