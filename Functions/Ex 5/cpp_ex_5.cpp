#include <iostream>
#include <algorithm>
using namespace std;

void MaxNum(int a, int b)
{
	cout << "The maximum number is " << max(a, b) << endl;
}

int main()
{
	int a, b;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	system("cls");

	MaxNum(a, b);

	return 0;
}