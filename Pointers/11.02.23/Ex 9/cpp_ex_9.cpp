#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void pasteBlock(int*& arr, int& size, int startIndex, int blockSize, int* block)
{
    int* temp = new int[size];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }

    int newSize = size + blockSize;
    int* newArr = new int[newSize];

    for (int i = 0; i < startIndex; i++)
    {
        newArr[i] = temp[i];
    }

    for (int i = 0; i < blockSize; i++) {
        newArr[startIndex + i] = block[i];
    }

    for (int i = startIndex; i < size; i++)
    {
        newArr[blockSize + i] = temp[i];
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
    cout << "Enter the start index for the block: ";
    cin >> startIndex;
    cout << "Enter the size of the block you want to input: ";
    cin >> blockSize;

    int* block = new int[blockSize];
    cout << "Enter the elements in the block, separated by spaces: ";
    for (int i = 0; i < blockSize; i++) 
    {
        cin >> block[i];
    }

    pasteBlock(arr, size, startIndex, blockSize, block);

    cout << "Final array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}