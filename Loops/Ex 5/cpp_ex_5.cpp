#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 500 + 1;
	cout << "Guess My Number Game\n";
	cout << "Terminate the game by entering a zero\n\n";

	while (true)
	{
		cout << "Enter a guess between 1 and 500: ";
		cin >> guess;
		tries++;

		if (guess > num)
		{
			cout << "Too high!\n\n";
			continue;
		}

		else if (guess == 0)
		{
			cout << "Game over! Thanks for playing with us, see you later!\n";
			break;
		}

		else if (guess < num)
		{
			cout << "Too low!\n\n";
			continue;
		}

		else
		{
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
			break;
		}
	}

	return 0;
}
