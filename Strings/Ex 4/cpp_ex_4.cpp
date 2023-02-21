#include <iostream>
#include <string>
using namespace std;

bool palindrome(const string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    if (palindrome(str))
    {
        cout << "The given string is a palindrome" << endl;
    }

    else
    {
        cout << "The given string is not a palindrome" << endl;
    }

    return 0;
}