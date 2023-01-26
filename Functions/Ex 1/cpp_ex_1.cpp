#include <iostream>
using namespace std;

void Rectangle(int height, int width, char symbol)
{
    int a, b;

    for (a = 0; a != height; a++) 
    {

        for (b = 0; b != width; b++) 
        {

            if ((a == 0) || (a == height - 1) || (b == width - 1) || (b == 0))
            {
                cout << symbol;

            }
            else
                printf(" ");
        }
        printf("\n");
    }

}

int main()
{
    int height, width;
    char symbol;

    cout << "Please enter the value of the width: ";
    cin >> width;

    cout << "Please enter the value of the height: ";
    cin >> height;

    cout << "Please enter the symbol: ";
    cin >> symbol;

    system("cls");

    Rectangle(height, width, symbol);


	return 0;
}