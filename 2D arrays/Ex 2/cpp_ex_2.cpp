#include <cstdlib>
#include <iostream>
#define size 100

using namespace std;

void rowSum(int arr2D[size][size], int m, int n)
{
    int sum;

    for (int i = 0; i < n; i++)
    {
        sum = 0;

        for (int j = 0; j < m; j++)
        {
            sum = sum + arr2D[i][j];
        }

        cout << "sum of " << "row " << i + 1 << " is: " << sum << endl;
    }
}

void columnSum(int arr[size][size], int m, int n)
{
    int sum;

    for (int i = 0; i < n; i++)
    {
        sum = 0;

        for (int j = 0; j < m; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << "Addition of column " << i + 1 << " is: " << sum << endl;
    }
}

int main(int argc, char** argv)
{
    int arr2D[size][size], m, n;

    cout << "Enter the size of row: ";
    cin >> m;
    cout << "Enter the size of column: ";
    cin >> n;

    cout << "\nInput the matrix (using whitespaces after each number): " << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr2D[i][j];
        }
    }

    cout << "\nSum of each row: \n" << endl;
    rowSum(arr2D, m, n);

    cout << "\nSum of each column: \n" << endl;
    columnSum(arr2D, m, n);

    return 0;
}