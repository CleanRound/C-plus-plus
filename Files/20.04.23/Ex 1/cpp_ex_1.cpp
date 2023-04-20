#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string lastName;
    string firstName;
    int age;
    double gpa;
};

int main() {
    const int NUM_STUDENTS = 3;
    Student students[NUM_STUDENTS] = {
        {"Smith", "John", 20, 3.5},
        {"Doe", "Jane", 19, 3.2},
        {"Doe", "Joe", 21, 3.9}
    };

    ofstream outFile("students.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < NUM_STUDENTS; i++) {
            outFile << students[i].lastName << " ";
            outFile << students[i].firstName << " ";
            outFile << students[i].age << " ";
            outFile << students[i].gpa << endl;
        }
        outFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    ifstream inFile("students.txt");
    if (inFile.is_open()) {
        string lastName, firstName;
        int age;
        double gpa;
        while (inFile >> lastName >> firstName >> age >> gpa) {
            cout << lastName << " ";
            cout << firstName << " ";
            cout << age << " ";
            cout << gpa << endl;
        }
        inFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    return 0;
}
