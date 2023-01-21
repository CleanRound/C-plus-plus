
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    const uint32_t size = 12;
    int arr[size];

    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter the firm's income for month " << i + 1 << ": ";
        cin >> arr[i];
    }

    system("cls");

    int n = sizeof(arr) / sizeof(arr[0]);

    int min = INT_MAX;
    int index_min = -1;
    int max = INT_MIN;
    int index_max = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index_min = i + 1;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            index_max = i + 1;
        }
    }
    cout << "The minimum income was in month " << index_min << endl;
    cout << "The maximum income was in month " << index_max << endl;
    return 0;
}