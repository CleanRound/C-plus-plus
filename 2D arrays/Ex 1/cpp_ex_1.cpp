#include <iostream>
#include <cstdlib>
#include <iomanip>
#define size 100

using namespace std;

int main(int argc, char** argv)
{
    int arr2D[size][size], m, n, min, max;
    int sum = 0;
    int count = 0;

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

    cout << endl;

    min = max = arr2D[0][0];
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (arr2D[i][j] > max)
            {
                max = arr2D[i][j];
            }
            if (arr2D[i][j] < min)
            {
                min = arr2D[i][j];
            }
        }
    }

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            sum += arr2D[i][j];
        }
    }

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (arr2D[i][j] != '\0')
                count++;
        }
    }

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << fixed << setprecision(2) << (float)sum / count << endl;
    return 0;
}