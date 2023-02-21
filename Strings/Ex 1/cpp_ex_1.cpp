#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, newstr;
    cout << "Enter the string: ";
    getline(cin, str);
    system("cls");

    for (char x : str)
    {
        if (x == ' ')
        {
            newstr += "\t";
        }

        else
        {
            newstr += x;
        }
    }

    cout << "New string: " << newstr << endl;

    return 0;
}