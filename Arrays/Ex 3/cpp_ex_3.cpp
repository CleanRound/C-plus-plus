#include <iostream>
using namespace std;
int main()
{
    const uint32_t size = 6;
    int arr[size];
    int sum = 0;

    for (size_t i = 0; i < size; i++)
    {
        cout << " Enter the firm's income for the month " << i + 1 << ": ";
        cin >> arr[i];
    }

    system("cls");

    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "The firm's income for 6 months is " << sum;
    cout << endl;
    return 0;
}