#include <iostream>
#include <ctime>
using namespace std;

int min(int arr[100], int index = 0, int sum = 0, int currentSum = 0, int currentIndex = 0)
{
	if (currentIndex == 100)
		return index;

	int newSum = currentSum + arr[currentIndex];

	if (currentIndex < 10)
		return min(arr, index, newSum, newSum, currentIndex + 1);

	newSum = newSum - arr[currentIndex - 10];
	if (newSum > sum)
		return min(arr, currentIndex - 10, newSum, newSum, currentIndex + 1);
	else
		return min(arr, index, sum, newSum, currentIndex + 1);
}

int main()
{
    srand(time(0));
    int arr[100];

	cout << "Array: ";
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << ' ';
    }

    cout << endl << endl;
    cout << "The position where the sequence starts: " << min(arr) << endl;

    return 0;
}