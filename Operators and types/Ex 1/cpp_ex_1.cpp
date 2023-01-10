#include <iostream>
using namespace std;

void checkYeardays(int n) {

    bool isValid = ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) ? true : false;


    if (isValid) {
        cout << "In " << n << " year = 366 days" << endl;
    }
    else {
        cout << "In " << n << " year = 365 days" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the year: ";
    cin >> n;

    checkYeardays(n);

    return 0;
}