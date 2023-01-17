#include <iostream>
using namespace std;

int main()
{
	int min, max, number;
	cout << "Enter the minimum range: ";
	cin >> min;
	cout << "Enter the maximum range: ";
	cin >> max;

	system("cls");

	cout << "Even numbers in a given range are: ";
	for (number = min; number <= max; number++)
	{
		if (number % 2 == 0)
		{
			cout << number << " ";
		}
	}

	cout << endl;

	cout << "Odd numbers in a given range are: ";
	for (number = min; number <= max; number++)
	{
		if (number % 2 != 0)
		{
			cout << number << " ";
		}
	}

	cout << endl;
	
	cout << "Multiples of 7 in a given range are: ";
	for (number = min; number <= max; number++)
	{
		if (number % 7 == 0)
		{
			cout << number << " ";
		}
	}

	cout << endl;

	return 0;
}