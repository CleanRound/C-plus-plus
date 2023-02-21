#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    system("cls");

    int letters = 0, numbers = 0, characters = 0;
    for (char x : str) {
        if (isalpha(x)) {
            letters++;
        }
        else if (isdigit(x)) {
            numbers++;
        }
        else if (isspace(x)) {
            characters++;
        }
    }

    cout << "String: " << str << endl;
    cout << "Letters: " << letters << endl;
    cout << "Numbers: " << numbers << endl;
    cout << "Characters: " << characters << endl;

    return 0;
}