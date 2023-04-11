#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename1, filename2;
    cout << "Enter the first filename: ";
    cin >> filename1;
    cout << "Enter the second filename: ";
    cin >> filename2;
    system("cls");

    ifstream file1(filename1), file2(filename2);
    if (!file1 || !file2) {
        cerr << "Error opening input files.\n";
        return 1;
    }

    string outputFilename;
    cout << "Enter the output filename: ";
    cin >> outputFilename;
    ofstream outputFile(outputFilename);
    if (!outputFile) {
        cerr << "Error creating output file.\n";
        return 1;
    }

    string line1, line2;
    bool isFile1Turn = true;
    while (getline(file1, line1) || getline(file2, line2)) {
        if (isFile1Turn && !line1.empty()) {
            outputFile << line1 << "\n";
        }
        else if (!line2.empty()) {
            outputFile << line2 << "\n";
        }
        isFile1Turn = !isFile1Turn;
    }

    cout << "Merged files written to " << outputFilename << ".\n";

    return 0;
}
