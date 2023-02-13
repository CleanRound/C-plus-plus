#include <iostream>
#include <ctime>
using namespace std;
int distributesArray(int* arr, int size);
void printArray(int* arr, int size);

int main()
{
	srand(time(0));
	int size;
	cout << "Enter the size of an array: ";
	cin >> size;
	system("cls");
	int* arr = new int[size];
	printArray(arr, size);
	*arr = distributesArray(arr, size);
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			cout << "The amount of positive numbers - " << arr[i] << endl;
		}
		else if (i == 1)
		{
			cout << "The amount of negative numbers - " << arr[i] << endl;
		}
		else
		{
			cout << "The amount of null values - " << arr[i] << endl;
		}
	}
}

int distributesArray(int* arr, int size)
{
	int countNull = 0;
	int countPlus = 0;
	int countMinus = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > 0)
		{
			countPlus++;
		}
		else if (*(arr + i) < 0)
		{
			countMinus++;
		}
		else
		{
			countNull++;
		}
	}
	*arr = countPlus;
	*(arr + 1) = countMinus;
	*(arr + 2) = countNull;
	return *arr;
}

void printArray(int* arr, int size)
{
	cout << "Array: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << " ";
	}
	cout << endl;
}