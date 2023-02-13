#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    srand(time(0));
    cout << "Enter the size of the first array: ";
    int m;
    cin >> m;
    cout << "Enter the size of the second array: ";
    int n;
    cin >> n;
    int* mas1 = new int[m, n];
    int* mas2 = new int[m, n];
    int* mas3 = new int[m, n];
    system("cls");

    cout << "First array:" << endl;
    for (int i = 0; i < m; ++i)
    {
        mas1[i] = rand() % 50;
        cout << mas1[i] << " ";
    }
    cout << endl << endl;

    cout << "Second array:" << endl;
    for (int i = 0; i < n; ++i)
    {
        mas2[i] = rand() % 50;
        cout << mas2[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0; i < m; ++i)
    {
        mas3[i] = mas1[i];
    }
    for (int i = 0; i < n; ++i)
    {
        mas3[m + i] = mas2[i];
    }

    cout << "Common array:" << endl;
    for (int i = 0; i < m + n; ++i)
    {
        cout << mas3[i] << " ";
    }
    cout << endl;

    return 0;
}
