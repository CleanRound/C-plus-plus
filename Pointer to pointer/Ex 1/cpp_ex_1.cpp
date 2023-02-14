#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void addRow(int**& arr, int& numRows, int numCols)
{
    int* newRow = new int[numCols];
    cout << "Enter " << numCols << " elements for the new row:" << endl;
    for (int i = 0; i < numCols; i++)
    {
        cin >> newRow[i];
    }
    cout << endl;

    numRows++;
    int** newArr = new int* [numRows];
    for (int i = 0; i < numRows - 1; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[numRows - 1] = newRow;

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

    addRow(arr, numRows, numCols);

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