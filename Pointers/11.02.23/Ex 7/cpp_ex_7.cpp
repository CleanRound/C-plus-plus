#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int* removeNegatives(int* arr, int& size)
{
    int positiveCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0) positiveCount++;
    }

    int* positiveArr = new int[positiveCount];
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0) positiveArr[index++] = arr[i];
    }

    size = positiveCount;
    return positiveArr;
}

int main()
{
    srand(time(0));
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    system("cls");

    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 - 50;
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int* positiveArr = removeNegatives(arr, size);

    cout << "Final array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << positiveArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] positiveArr;
    return 0;
}