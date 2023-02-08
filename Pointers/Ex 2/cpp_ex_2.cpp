#include <iostream>
using namespace std;

int main()
{
	int num, *ptr = &num;

	cout << "Enter the number: ";
	cin >> *ptr;
	system("cls");

	if (*ptr > 0)
	{
		cout << *ptr << " is positive\n";
	}
	else if (*ptr < 0)
	{
		cout << *ptr << " is negative\n";
	}
	else
	{
		cout << *ptr << " is null\n";
	}

}