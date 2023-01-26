#include <iostream>
#include <ctime>
using namespace std;

void Reverse(int arr[50], int size)
{
    for (int i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    cout << "Reversed: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << endl;
}

int main()
{
    srand(time(0));
    int arr[50], size;

    cout << "Please, enter the size of the array: ";
    cin >> size;
    system("cls");

    cout << "Regular: ";
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << ' ';
    }

    cout << endl << endl;
    Reverse(arr, size);

    return 0;
}