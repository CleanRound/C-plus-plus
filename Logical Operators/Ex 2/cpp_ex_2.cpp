#include <iostream>
using namespace std;

int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << endl;

    if (num > 999 && num < 100000)
    {
        cout << reverseDigits(num) << endl;
    }

    else
    {
        cout << "Error, please type the number that has 4 digits.";
    }

    return 0;
}
