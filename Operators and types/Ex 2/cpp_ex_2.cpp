#include<iostream>
using namespace std;

int main()

{
	int hryvnia, cent, cent_1, cent_2;
	cout << "Enter the amount of hryvnias: ";
	cin >> hryvnia;
	cout << "Enter the amount of cents: ";
	cin >> cent;

	while (cent > 100)

	{
		cent_1 = cent % 100;
		cent_2 = cent / 100;
		hryvnia = hryvnia + cent_2;

		break;
	}

	cout << hryvnia << " hryvnias and " << cent_1 << " cents ";

	return 0;

}