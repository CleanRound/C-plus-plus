#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Car {
    string make;
    string model;
    int year;
    int mileage;
};

int main() {
    const int NUM_CARS = 4;
    Car cars[NUM_CARS] = {
        {"Honda", "Civic", 2018, 5000},
        {"Toyota", "Camry", 2019, 8000},
        {"Ford", "Mustang", 2017, 11000},
        {"Audi", "A8", 2016, 20000}
    };

    ofstream outFile("cars.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < NUM_CARS; i++) {
            outFile << cars[i].make << " ";
            outFile << cars[i].model << " ";
            outFile << cars[i].year << " ";
            outFile << cars[i].mileage << endl;
        }
        outFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    ifstream inFile("cars.txt");
    if (inFile.is_open()) {
        string make, model;
        int year, mileage;
        while (inFile >> make >> model >> year >> mileage) {
            if (mileage < 10000) {
                cout << make << " ";
                cout << model << " ";
                cout << year << " ";
                cout << mileage << endl;
            }
        }
        inFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    return 0;
}
