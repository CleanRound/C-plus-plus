#include <iostream>
using namespace std;
int main()
{
    const uint32_t size = 5;
    int arr[size];
    int sum = 0;

    for (size_t i = 0; i < size; i++)
    {
        cout << " Enter the side number " << i + 1 << ": ";
        cin >> arr[i];
    }

    system("cls");

    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "The pentagon's perimeter is " << sum;
    cout << endl;
    return 0;
}