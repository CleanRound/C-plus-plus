#include <iostream>
using namespace std;

int main()
{
	float a, b;

	cout << "Enter the map scale value: ";
	cin >> a;
	cout << "Enter the distance between the points that represent populated areas: ";
	cin >> b;
	cout << "" << endl;
	float CalculateDistance = a * b;

	cout << "The distance between populated areas is " << CalculateDistance << " kilometres";
	return 0;
}