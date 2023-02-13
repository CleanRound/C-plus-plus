#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

void addBlock(vector<int>& arr, const vector<int>& block)
{
    for (int element : block)
    {
        arr.push_back(element);
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);


    srand(time(nullptr));

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Original array: ";
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << endl << endl;

    vector<int> block;
    cout << "Enter the block of elements to add, separated by spaces (enter -1 to stop): ";
    int element;
    while (cin >> element && element != -1) {
        block.push_back(element);
    }

    addBlock(arr, block);

    cout << "Final array: ";
    for (int element : arr) {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}