#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string path;
    cout << "Enter the filename: ";
    cin >> path;
    system("cls");
    ifstream inputFile(path);

    if (!inputFile) {
        cerr << "Error: Could not open file" << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();
    return 0;
}
