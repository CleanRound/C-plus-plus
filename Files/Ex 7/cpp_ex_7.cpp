#include <iostream>
#include <fstream>
#include <map>
#include <iomanip>
using namespace std;

int main()
{
    string file_name;
    cout << "Enter the filename: ";
    cin >> file_name;
    system("cls");

    ifstream file(file_name);
    if (!file.is_open()) {
        cerr << "Failed to open file " << file_name << endl;
        return 1;
    }

    map<char, int> char_count;
    int total_chars = 0;
    char c;
    while (file.get(c)) {
        if (isalpha(c)) {
            char_count[c]++;
            total_chars++;
        }
    }

    cout << "Statistics of characters in file " << file_name << ":" << endl;
    cout << setw(10) << "Character" << setw(10) << "Count" << setw(15) << "Percentage" << endl;
    cout << setw(10) << "---------" << setw(10) << "-----" << setw(15) << "---------" << endl;
    for (const auto& pair : char_count) {
        char c = pair.first;
        int count = pair.second;
        double percentage = static_cast<double>(count) / total_chars * 100;
        cout << setw(10) << c << setw(10) << count << setw(15) << fixed << setprecision(2) << percentage << "%" << endl;
    }

    return 0;
}
