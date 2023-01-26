#include <iostream>
using namespace std;

void Cube(int n)
{
	cout << "The cube of " << n << " is " << n * n * n << endl;
}

int main()
{
	int n;

	cout << "Enter the number: ";
	cin >> n;

	system("cls");
	Cube(n);
}