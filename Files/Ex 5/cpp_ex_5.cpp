#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;
    system("cls");

    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error opening input file.\n";
        return 1;
    }

    string line;
    vector<int> numbers;
    while (getline(inputFile, line)) {
        istringstream iss(line);
        string token;
        while (getline(iss, token, ',')) {
            int number;
            stringstream ss(token);
            if (ss >> number) {
                numbers.push_back(number);
            }
        }
    }

    if (numbers.empty()) {
        cerr << "No numbers found in file.\n";
        return 1;
    }

    int maxNumber = *max_element(numbers.begin(), numbers.end());
    cout << "The largest number is: " << maxNumber << endl;

    return 0;
}
