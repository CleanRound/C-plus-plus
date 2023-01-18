#include <iostream>
using namespace std;

int deleteNumber(int num, int x, int y)
{

    int d = log10(num) + 1;
    int rev_new_num = 0;

    for (int i = 0; num != 0; i++) {

        int digit = num % 10;
        num = num / 10;

        if (digit == x)
        {
            continue;
        }
        else if (digit == y)
        {
            continue;
        }
        else
        {
            rev_new_num = (rev_new_num * 10) + digit;
        }
    }

    int new_num = 0;

    for (int i = 0; rev_new_num != 0; i++) 
    {

        new_num = (new_num * 10)
            + (rev_new_num % 10);
        rev_new_num = rev_new_num / 10;
    }

    return new_num;
}


int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;
    system("cls");

    int x = 3;
    int y = 6;

    cout << deleteNumber(num, x, y) << endl;
    return 0;
}