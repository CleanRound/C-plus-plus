#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	cout << "\"Kraj lukomor`a dub zelenyj," << endl, Beep(247, 500), Beep(417, 500), Beep(417, 500);
	cout << "\nI zolotyj lancyuh na nim:" << endl, Beep(370, 500), Beep(417, 500), Beep(329, 500);
	cout << "\nShodnya, shonochi kit uchenyj" << endl, Beep(247, 500), Beep(247, 500), Beep(247, 500);
	cout << "\nNa lancyuhu kruzhl'aje tim\"" << endl;

	return 0;
}