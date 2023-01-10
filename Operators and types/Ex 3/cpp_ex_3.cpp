#include <iostream>
using namespace std;

int main()
{
	float a, b, h;

	cout << "Enter the length value: ";
	cin >> a;
	cout << "Enter the width value: " ;
	cin >> b;
	cout << "Enter the height value: " ;
	cin >> h;
	cout << "" << endl;
	float CalculateVolume = a * b * h;

	cout << "The volume of a parallelepiped is " << CalculateVolume;
	return 0;
}
