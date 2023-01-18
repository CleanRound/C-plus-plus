#include <iostream>
using namespace std;

int main()
{
	long long min;
	long long product = 1;

	cout << "Enter the minimum range: ";
	cin >> min;
	system("cls");

	for (long long i = min; i <= 20; ++i)
	{
		product = i * product;
	}

	{
		cout << "The product of all numbers in a given range is " << product << endl;
	}
	return 0;
}
