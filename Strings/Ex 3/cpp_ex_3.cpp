#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    system("cls");

    istringstream iss(str);
    int words = 0;
    string word;
    while (iss >> word) {
        words++;
    }

    cout << "String: " << str << std::endl;
    cout << "Number of words: " << words << std::endl;

    return 0;
}