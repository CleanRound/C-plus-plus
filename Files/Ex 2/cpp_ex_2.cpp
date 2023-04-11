#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
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
    int wordCount = 0;
    while (getline(inputFile, line)) {
        stringstream ss(line);
        string word;
        while (ss >> word) {
            ++wordCount;
        }
    }

    cout << "Word count: " << wordCount << endl;

    inputFile.close();
    return 0;
}
