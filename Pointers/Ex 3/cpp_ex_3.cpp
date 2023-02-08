#include <iostream>
using namespace std;

void swap(int* num1, int* num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main() 
{
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the Second number: ";
	cin >> num2;
	cout << endl;

	swap(&num1, &num2);
	cout << num1 << endl;
	cout << num2 << endl;
}