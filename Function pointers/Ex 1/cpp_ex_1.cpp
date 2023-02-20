#include <iostream>
#include <ctime>
using namespace std;

void addColumn(int**& arr, int numRows, int& numCols, int colPos)
{
    int* newCol = new int[numRows];
    cout << "Enter " << numRows << " values for the new column:" << endl;
    for (int i = 0; i < numRows; i++)
    {
        cin >> newCol[i];
    }

    int** newArr = new int* [numRows];
    for (int i = 0; i < numRows; i++)
    {
        newArr[i] = new int[numCols + 1];
    }

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < colPos; j++)
        {
            newArr[i][j] = arr[i][j];
        }

        newArr[i][colPos] = newCol[i];
        for (int j = colPos + 1; j < numCols + 1; j++)
        {
            newArr[i][j] = arr[i][j - 1];
        }
    }

    for (int i = 0; i < numRows; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    arr = newArr;
    numCols += 1;
    delete[] newCol;
}

int main() {
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
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int newColPos;
    cout << "Enter the position where the new column should appear (0-" << numCols << "): ";
    cin >> newColPos;
    while (newColPos < 0 || newColPos > numCols)
    {
        cout << "Invalid position. Enter a number between 0 and " << numCols << ": ";
        cin >> newColPos;
    }

    addColumn(arr, numRows, numCols, newColPos);

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
}