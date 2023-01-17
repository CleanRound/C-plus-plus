#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double uah, jpy, usd, inr, rub, gbp, amount;
	int choice;
	cout << "Currency List: \n";
	cout << "-----------------------------------------------------------------\n";
	cout << "1 - Ukrainian Hryvnia\n";
	cout << "2 - Japanese Yen\n";
	cout << "3 - US Dollars\n";
	cout << "4 - Indian Rupee\n";
	cout << "5 - Russian Ruble\n";
	cout << "6 - British Pound Sterling\n";
	cout << "-----------------------------------------------------------------\n\n";
	cout << "Choose the currency which you want to convert: ";
	cin >> choice;
	cout << "Enter the amount of chosen currency: ";
	cin >> amount;
	system("cls");

	if (choice == 1)
	{
		jpy = amount * 3.50697;
		usd = amount * 0.02735;
		inr = amount * 2.23238;
		rub = amount * 1.88345;
		gbp = amount * 0.02226;
		cout << amount << " UAH: \n";
		cout << "-----------------------------------------------------------------\n";
		cout << "Japanese Yen - " << fixed << setprecision(2) << jpy << "\n";
		cout << "US Dollars - " << fixed << setprecision(2) << usd << "\n";
		cout << "Indian Rupee - " << fixed << setprecision(2) << inr << "\n";
		cout << "Russian Ruble - " << fixed << setprecision(2) << rub << "\n";
		cout << "British Pound Sterling - " << fixed << setprecision(2) << gbp << "\n";
		cout << "-----------------------------------------------------------------\n\n";
	}

	else if (choice == 2)
	{
		uah = amount * 0.28495;
		usd = amount * 0.00779;
		inr = amount * 0.63606;
		rub = amount * 0.53664;
		gbp = amount * 0.00635;
		cout << amount << " JPY: \n";
		cout << "-----------------------------------------------------------------\n";
		cout << "Ukrainian Hryvnia - " << fixed << setprecision(2) << uah << "\n";
		cout << "US Dollars - " << fixed << setprecision(2) << usd << "\n";
		cout << "Indian Rupee - " << fixed << setprecision(2) << inr << "\n";
		cout << "Russian Ruble - " << fixed << setprecision(2) << rub << "\n";
		cout << "British Pound Sterling - " << fixed << setprecision(2) << gbp << "\n";
		cout << "-----------------------------------------------------------------\n";
	}

	else if (choice == 3)
	{
		uah = amount * 36.56860;
		jpy = amount * 128.26500;
		inr = amount * 81.63500;
		rub = amount * 68.87500;
		gbp = amount * 0.81456;
		cout << amount << " USD: \n";
		cout << "-----------------------------------------------------------------\n";
		cout << "Ukrainian Hryvnia - " << fixed << setprecision(2) << uah << "\n";
		cout << "Japanese Yen - " << fixed << setprecision(2) << jpy << "\n";
		cout << "Indian Rupee - " << fixed << setprecision(2) << inr << "\n";
		cout << "Russian Ruble - " << fixed << setprecision(2) << rub << "\n";
		cout << "British Pound Sterling - " << fixed << setprecision(2) << gbp << "\n";
		cout << "-----------------------------------------------------------------\n";
	}

	else if (choice == 4)
	{
		uah = amount * 0.44795;
		jpy = amount * 1.57108;
		usd = amount * 0.01225;
		rub = amount * 0.84369;
		gbp = amount * 0.00997;
		cout << amount << " INR: \n";
		cout << "-----------------------------------------------------------------\n";
		cout << "Ukrainian Hryvnia - " << fixed << setprecision(2) << uah << "\n";
		cout << "Japanese Yen - " << fixed << setprecision(2) << jpy << "\n";
		cout << "US Dollars - " << fixed << setprecision(2) << usd << "\n";
		cout << "Russian Ruble - " << fixed << setprecision(2) << rub << "\n";
		cout << "British Pound Sterling - " << fixed << setprecision(2) << gbp << "\n";
		cout << "-----------------------------------------------------------------\n";
	}

	else if (choice == 5)
	{
		uah = amount * 0.53094;
		jpy = amount * 1.86221;
		usd = amount * 0.01452;
		inr = amount * 1.18526;
		gbp = amount * 0.01182;
		cout << amount << " RUB: \n";
		cout << "-----------------------------------------------------------------\n";
		cout << "Ukrainian Hryvnia - " << fixed << setprecision(2) << uah << "\n";
		cout << "Japanese Yen - " << fixed << setprecision(2) << jpy << "\n";
		cout << "US Dollars - " << fixed << setprecision(2) << usd << "\n";
		cout << "Indian Rupee - " << fixed << setprecision(2) << inr << "\n";
		cout << "British Pound Sterling - " << fixed << setprecision(2) << gbp << "\n";
		cout << "-----------------------------------------------------------------\n";
	}

	else if (choice == 6)
	{
		uah = amount * 44.90260;
		jpy = amount * 157.49700;
		usd = amount * 1.22790;
		inr = amount * 100.24000;
		rub = amount * 84.56820;
		cout << amount << " GBP: \n";
		cout << "-----------------------------------------------------------------\n";
		cout << "Ukrainian Hryvnia - " << fixed << setprecision(2) << uah << "\n";
		cout << "Japanese Yen - " << fixed << setprecision(2) << jpy << "\n";
		cout << "US Dollars - " << fixed << setprecision(2) << usd << "\n";
		cout << "Indian Rupee - " << fixed << setprecision(2) << inr << "\n";
		cout << "Russian Ruble - " << fixed << setprecision(2) << rub << "\n";
		cout << "-----------------------------------------------------------------\n";
	}

	else
	{
		cout << "Wrong choice of currency, please try again.\n";
	}

	return 0;
}