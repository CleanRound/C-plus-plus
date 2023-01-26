#include <iostream>
#include <ctime>
using namespace std;

void Prime(int arr[50], int size)
{
    cout << "Prime numbers: ";
    for (int i = 0; i < size; i++)
    {
        int j = 2;
        int p = 1;

        while (j < arr[i])
        {
            if (arr[i] % j == 0)
            {
                p = 0;
                break;
            }
            j++;
        }

        if (p == 1)
        {
            cout << arr[i] << ' ';
        }
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

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << ' ';
    }

    cout << endl << endl;
    Prime(arr, size);

    return 0;
}