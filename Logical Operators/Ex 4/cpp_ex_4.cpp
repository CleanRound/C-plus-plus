#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "The distance between destinations A and B: ";
	cin >> a;
	cout << "The distance between destinations B and C: ";
	cin >> b;
	cout << "Plane's cargo weight: ";
	cin >> c;

	int d = 300;

	if (c < 500)
	{
		int Litre = 1 * a;
		int Leftover_B = d - Litre;
		int Litre_new = 1 * b;
		int Leftover_C = d - Litre_new;
		int Litre_new_1 = Litre + Litre_new;
		if (Leftover_B < 0 || Leftover_C < 0)
		{
			cout << "Plane doesn't have enough petrol to go to the current destination.";
		}
		else if (Leftover_B > 0 || Leftover_C > 0)
		{
			cout << "You have to refill " << Litre_new_1 << " litres at the destination B to get to the destination C";
		}
		else if (c > 2000)
		{
			cout << "Plane's cargo can't be higher than 2000 kilograms";
		}

	}
	else if (c < 1000)
	{
		int Litre = 4 * a;
		int Leftover_B = d - Litre;
		int Litre_new = 4 * b;
		int Leftover_C = d - Litre_new;
		int Litre_new_1 = Litre + Litre_new;
		if (Leftover_B < 0 || Leftover_C < 0)
		{
			cout << "Plane doesn't have enough petrol to go to the current destination.";
		}
		else if (Leftover_B > 0 || Leftover_C > 0)
		{
			cout << "You have to refill " << Litre_new_1 << " litres at the destination B to get to the destination C";
		}
		else if (c > 2000)
		{
			cout << "Plane's cargo can't be higher than 2000 kilograms";
		}
	}
	else if (c < 1500)
	{
		int Litre = 7 * a;
		int Leftover_B = d - Litre;
		int Litre_new = 7 * b;
		int Leftover_C = d - Litre_new;
		int Litre_new_1 = Litre + Litre_new;
		if (Leftover_B < 0 || Leftover_C < 0)
		{
			cout << "Plane doesn't have enough petrol to go to the current destination.";
		}
		else if (Leftover_B > 0 || Leftover_C > 0)
		{
			cout << "You have to refill " << Litre_new_1 << " litres at the destination B to get to the destination C";
		}
		else if (c > 2000)
		{
			cout << "Plane's cargo can't be higher than 2000 kilograms";
		}
	}
	else if (c < 2000)
	{
		int Litre = 9 * a;
		int Leftover_B = d - Litre;
		int Litre_new = 9 * b;
		int Leftover_C = d - Litre_new;
		int Litre_new_1 = Litre + Litre_new;
		if (Leftover_B < 0 || Leftover_C < 0)
		{
			cout << "Plane doesn't have enough petrol to go to the current destination.";
		}
		else if (Leftover_B > 0 || Leftover_C > 0)
		{
			cout << "You have to refill " << Litre_new_1 << " litres at the destination B to get to the destination C";
		}
		else if (c > 2000)
		{
			cout << "Plane's cargo can't be higher than 2000 kilograms";
		}
	}


	return 0;
}
