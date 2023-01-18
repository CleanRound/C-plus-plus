#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter the number: ";
    cin >> n;
    system("cls");
    cout << "-----------------------------------------------------------------------------------------\n";

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    cout << "-----------------------------------------------------------------------------------------\n";

    return 0;
}