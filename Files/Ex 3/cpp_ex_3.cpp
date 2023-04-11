#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Error: Invalid number of arguments" << endl;
        cerr << "Usage: " << argv[0] << " <input file> <output file>" << endl;
        return 1;
    }

    ifstream inputFile(argv[1]);
    if (!inputFile) {
        cerr << "Error: Could not open input file" << endl;
        return 1;
    }

    ofstream outputFile(argv[2]);
    if (!outputFile) {
        cerr << "Error: Could not open output file" << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }

    cout << "File copied successfully" << endl;

    inputFile.close();
    outputFile.close();
    return 0;
}
