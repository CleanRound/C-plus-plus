#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string inputFileName, outputFileName, line;
    ifstream inputFile;
    ofstream outputFile;

    cout << "Enter the input filename: ";
    cin >> inputFileName;
    system("cls");

    inputFile.open(inputFileName);

    if (!inputFile.is_open()) {
        cout << "Error: Could not open input file." << endl;
        return 1;
    }

    cout << "Enter the output filename: ";
    cin >> outputFileName;

    outputFile.open(outputFileName);

    if (!outputFile.is_open()) {
        cout << "Error: Could not open output file." << endl;
        return 1;
    }

    while (getline(inputFile, line)) {
        bool inComment = false;

        for (int i = 0; i < line.length(); i++) {
            if (line[i] == '/' && line[i + 1] == '/') {
                break;
            }
            else if (line[i] == '/' && line[i + 1] == '*') {
                inComment = true;
                i++;
            }
            else if (line[i] == '*' && line[i + 1] == '/') {
                inComment = false;
                i++;
            }
            else if (!inComment) {
                outputFile << line[i];
            }
        }

        outputFile << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Comments removed successfully." << endl;

    return 0;
}
