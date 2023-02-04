#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = { 68, 16, 36, 92, 51 };
    int N = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, N);

    cout << "Sorted array: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << endl;

    return 0;
}