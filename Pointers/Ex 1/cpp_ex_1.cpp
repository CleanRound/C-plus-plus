#include <iostream>
using namespace std;

int main()
{
	int num1, num2, *ptr1 = &num1, *ptr2 = &num2;

	cout << "Enter the first number: ";
	cin >> *ptr1;
	cout << "Enter the second number: ";
	cin >> *ptr2;
	system("cls");

	if (*ptr1 > *ptr2)
	{
		cout << *ptr1 << " is the maximum number\n";
	}
	else
	{
		cout << *ptr2 << " is the maximum number\n";
	}

}