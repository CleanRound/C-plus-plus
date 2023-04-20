#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Team {
    string name;
    int wins;
    int losses;
};

int main() {
    const int NUM_TEAMS = 4;
    Team teams[NUM_TEAMS] = {
        {"Reds", 12, 6},
        {"Blues", 7, 11},
        {"Greens", 9, 9},
        {"Yellows", 14, 4}
    };

    ofstream outFile("teams.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < NUM_TEAMS; i++) {
            outFile << teams[i].name << ",";
            outFile << teams[i].wins << ",";
            outFile << teams[i].losses << endl;
        }
        outFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    ifstream inFile("teams.txt");
    if (inFile.is_open()) {
        string name;
        int wins, losses;
        char comma;
        while (getline(inFile, name, ',') && (inFile >> wins) && (inFile >> comma) && (inFile >> losses)) {
            double winPct = static_cast<double>(wins) / (wins + losses);
            if (winPct > 0.5) {
                cout << name << " (" << wins << "-" << losses << ")" << endl;
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
