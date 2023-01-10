#include <iostream>
using namespace std;

int main()
{
	float rad;

	cout << "Enter the radius value: ";
	cin >> rad;
	cout << "" << endl;
	float CalculateVolume = (4 * 3.14 * rad * rad * rad) / 3;

	cout << "The volume of a sphere is " << CalculateVolume << " cubic metres";
	return 0;
}