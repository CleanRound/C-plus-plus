#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void deleteRow(int**& arr, int& numRows, int numCols, int position)
{
    int** newArr = new int* [numRows - 1];
    for (int i = 0; i < position; i++)
    {
        newArr[i] = arr[i];
    }

    for (int i = position + 1; i < numRows; i++)
    {
        newArr[i - 1] = arr[i];
    }

    numRows--;
    delete[] arr[position];
    delete[] arr;
    arr = newArr;
}

int main()
{
    srand(time(0));

    int numRows, numCols;
    cout << "Enter the number of rows: ";
    cin >> numRows;
    cout << "Enter the number of columns: ";
    cin >> numCols;
    system("cls");

    int** arr = new int* [numRows];
    for (int i = 0; i < numRows; i++)
    {
        arr[i] = new int[numCols];
        for (int j = 0; j < numCols; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }

    cout << "Original Array:" << endl;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int position;
    cout << "Enter the position to delete a row (0 is the beginning): ";
    cin >> position;
    deleteRow(arr, numRows, numCols, position);
    cout << endl;

    cout << "Updated Array:" << endl;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < numRows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}