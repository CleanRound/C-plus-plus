#include <iostream>
using namespace std;
int main()
{
    int arr[50], num, temp, i, j;
    cout << " Please, enter the size of the array: ";
    cin >> num;

    for (i = 0; i < num; i++)
    {
        cout << " Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }

    system("cls");

    for (i = 0, j = num - 1; i < num / 2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "The reverse of all elements in the array: " << endl;
    for (i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}