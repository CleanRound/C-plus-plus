#include <iostream>
#include <ctime>
using namespace std;

void deleteColumn(int**& arr, int numRows, int& numCols, int colPos)
{
    int** newArr = new int* [numRows];
    for (int i = 0; i < numRows; i++)
    {
        newArr[i] = new int[numCols - 1];
    }

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < colPos; j++)
        {
            newArr[i][j] = arr[i][j];
        }

        for (int j = colPos + 1; j < numCols; j++)
        {
            newArr[i][j - 1] = arr[i][j];
        }
    }

    for (int i = 0; i < numRows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    arr = newArr;
    numCols -= 1;
}

int main()
{
    srand(time(0));

    int numRows, numCols;
    cout << "Enter the number of rows and columns in the original array: ";
    cin >> numRows >> numCols;
    cout << endl;

    int** arr = new int* [numRows];
    for (int i = 0; i < numRows; i++)
    {
        arr[i] = new int[numCols];
        for (int j = 0; j < numCols; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }

    cout << "Original array:" << endl;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int delColPos;
    cout << "Enter the position of the column to delete (0-" << numCols - 1 << "): ";
    cin >> delColPos;
    while (delColPos < 0 || delColPos >= numCols) {
        cout << "Invalid position. Enter a number between 0 and " << numCols - 1 << ": ";
        cin >> delColPos;
    }

    deleteColumn(arr, numRows, numCols, delColPos);

    cout << endl;
    cout << "Updated array:" << endl;
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