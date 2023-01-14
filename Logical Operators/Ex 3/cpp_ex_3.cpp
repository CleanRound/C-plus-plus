#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f, g;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	cout << "Enter the third number: ";
	cin >> c;
	cout << "Enter the fourth number: ";
	cin >> d;
	cout << "Enter the fifth number: ";
	cin >> e;
	cout << "Enter the sixth number: ";
	cin >> f;
	cout << "Enter the seventh number: ";
	cin >> g;
	cout << endl;

	if (a > b && a > c && a > d && a > e && a > f && a > g)
	{
		cout << "The maximum number is " << a << endl;
	}

	else if (b > a && b > c && b > d && b > e && b > f && b > g)
	{
		cout << "The maximum number is " << b << endl;
	}

	else if (c > a && c > b && c > d && c > e && c > f && c > g)
	{
		cout << "The maximum number is " << c << endl;
	}

	else if (d > a && d > b && d > c && d > e && d > f && d > g)
	{
		cout << "The maximum number is " << d << endl;
	}

	else if (e > a && e > b && e > c && e > d && e > f && e > g)
	{
		cout << "The maximum number is " << e << endl;
	}

	else if (f > a && f > b && f > c && f > d && f > e && f > g)
	{
		cout << "The maximum number is " << f << endl;
	}

	else
	{
		cout << "The maximum number is " << g << endl;
	}
}