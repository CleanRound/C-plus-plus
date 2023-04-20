#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct City {
    string name;
    string country;
    int population;
    double area;
};

int main() {
    const int NUM_CITIES = 4;
    City cities[NUM_CITIES] = {
        {"Tokyo", "Japan", 37400068, 2191},
        {"Delhi", "India", 28514000, 1484},
        {"Shanghai", "China", 25582000, 6340},
        {"Copenhagen", "Denmark", 794128, 88}
    };

    ofstream outFile("cities.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < NUM_CITIES; i++) {
            outFile << cities[i].name << ",";
            outFile << cities[i].country << ",";
            outFile << cities[i].population << ",";
            outFile << cities[i].area << endl;
        }
        outFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    ifstream inFile("cities.txt");
    if (inFile.is_open()) {
        string name, country;
        int population;
        double area;
        char comma;
        while (getline(inFile, name, ',') && getline(inFile, country, ',') && (inFile >> population) && (inFile >> comma) && (inFile >> area)) {
            if (population > 1000000) {
                cout << name << ", " << country << " (population: " << population << ")" << endl;
            }
            inFile.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        inFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    return 0;
}
