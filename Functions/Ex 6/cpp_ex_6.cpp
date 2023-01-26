#include <iostream>
using namespace std;

void CheckNum(int n)
{
	if (n > 0)
		cout << "True" << endl;
	else if (n < 0)
		cout << "False" << endl;
	else
		cout << "Null" << endl;
}

int main()
{
	int n;
	cout << "Enter the number: ";
	cin >> n;
	cout << endl;

	CheckNum(n);
}