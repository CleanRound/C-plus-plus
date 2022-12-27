#include <iostream>
using namespace std;

int main()
{
    int y, d;

    cout << "Enter the year: " << endl;
    (cin >> y).get();

    if (y % 4 != 0) d = 365;
    else if (y % 100 == 0 && y % 400 != 0) d = 365;
    else d = 366;

    cout << d << endl;

    return 0;
}