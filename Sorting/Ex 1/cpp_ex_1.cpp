#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

int main()
{
    int arr[] = { 68, 16, 36, 92, 51 };
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);

    cout << "Sorted array: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << endl;

    return 0;
}