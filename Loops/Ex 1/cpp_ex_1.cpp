#include <iostream>
using namespace std;

int main()
{
	int a;
	int sum = 0;

	cout << "Enter the minimum range: ";
	cin >> a;
	system("cls");

	for (int i = a; i <= 500; i++)
	{
		sum = sum += i;
	}

	cout << "The sum of all numbers in a given range is " << sum;
	cout << endl;
}