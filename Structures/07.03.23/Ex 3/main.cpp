#include "Boiler.h"

int main()
{
	Boiler myBoiler("ACME Boilers", "White", 1000, 10, 80);

	myBoiler.turnOn();
	myBoiler.print();
}