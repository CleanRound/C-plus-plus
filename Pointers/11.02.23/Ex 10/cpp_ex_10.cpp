#include <iostream>
#include <ctime>
using namespace std;

void deleteBlock(int*& arr, int& size, int startIndex, int blockSize)
{
    int* temp = new int[size];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }

    int newSize = size - blockSize;
    int* newArr = new int[newSize];

    for (int i = 0; i < startIndex; i++)
    {
        newArr[i] = temp[i];
    }

    for (int i = startIndex + blockSize; i < size; i++)
    {
        newArr[i - blockSize] = temp[i];
    }

    size = newSize;
    delete[] arr;
    arr = newArr;

    delete[] temp;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int startIndex, blockSize;
    cout << "Enter the start index and the block size to delete: ";
    cin >> startIndex >> blockSize;

    deleteBlock(arr, size, startIndex, blockSize);

    cout << "Array after deleting the block: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}