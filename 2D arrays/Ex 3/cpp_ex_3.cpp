#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    const int col1 = 10, col2 = 5;
    const int row1 = 5, row2 = 5;
    int arr2D_1[row1][col1], arr2D_2[row2][col2];
    int a = 0;

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            arr2D_1[i][j] = rand() % 50;
            cout << arr2D_1[i][j] << ' ';
            a++;
        }
        cout << endl << endl;
    }

    cout << endl << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {

            arr2D_2[i][j] = arr2D_1[i][j * 2] + arr2D_1[i][j * 2 + 1];

            cout << arr2D_2[i][j] << ' ';
        }
        cout << endl << endl;
    }

    return 0;
}