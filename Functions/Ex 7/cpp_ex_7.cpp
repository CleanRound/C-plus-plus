#include <iostream>
#include <ctime>
using namespace std;

void MinMax(int arr[50], int size)
{
    int max = arr[0], min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }

        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Maximum Value = " << max << "\n";
    cout << "Minimum Value = " << min << endl;
}

int main()
{
    srand(time(0));
    int arr[50], size;

    cout << "Please, enter the size of the array: ";
    cin >> size;
    system("cls");

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << ' ';
    }

    cout << endl << endl;
    MinMax(arr, size);

    return 0;
}