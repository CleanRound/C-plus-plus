#include <iostream>
using namespace std;

void Cube(int n)
{
    int cube_root;
    cube_root = (int)round(pow(n, 1.0 / 3.0));

    if (cube_root * cube_root * cube_root == n) {
        cout << "Correct!\n";
        return;
    }
    else {
        cout << "Wrong number, please try again.\n";
        return;
    }
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;
    system("cls");

    Cube(n);
    return 0;
}