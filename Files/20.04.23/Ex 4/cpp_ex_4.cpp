#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct WeatherData {
    string date;
    double temperature;
    double pressure;
};

int main() {
    const int NUM_DAYS = 7;
    WeatherData weather[NUM_DAYS] = {
        {"2023-04-15", 5.5, 1015.0},
        {"2023-04-16", -2.0, 1010.0},
        {"2023-04-17", -3.5, 1012.0},
        {"2023-04-18", 1.2, 1016.0},
        {"2023-04-19", 8.0, 1018.0},
        {"2023-04-20", -1.5, 1014.0},
        {"2023-04-21", 2.5, 1013.0},
    };

    ofstream outFile("weather.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < NUM_DAYS; i++) {
            outFile << weather[i].date << " ";
            outFile << weather[i].temperature << " ";
            outFile << weather[i].pressure << endl;
        }
        outFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    ifstream inFile("weather.txt");
    if (inFile.is_open()) {
        string date;
        double temperature, pressure;
        while (inFile >> date >> temperature >> pressure) {
            if (temperature < 0.0) {
                cout << date << " ";
                cout << temperature << " ";
                cout << pressure << endl;
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
