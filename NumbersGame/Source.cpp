#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int number = rand() % 20 + 1;
	int turns = 5;
	bool win = false;

	for (int i = turns; i >= 1; i--)
	{
		system("cls");
		cout << "You have" << i << "turns to get the number between 1 and 20" << endl;
		cout << "Input your number please" <<endl;
		int guess;
		cin >> guess;

		if (guess == number) {
			win = true;
			turns = turns - i;
			break;
		}

		else if (guess > number) {
			cout << "You too high foo! Guess again" << endl;
			win = false;
			system("pause");
			continue;
		}
		else if (guess < number) {
			cout << "Yo number is to damn low! Guess again Ho!" <<endl;
			win = false;
			system("pause");
			continue;
		}
	}
	if (win) {
		cout << "Hurray!! you win a chicken nugger" << endl;
		cout << "it took " << turns << " turns" << endl;
	}
	else { cout << " You lose sucka!! The number was" << number << endl;
	}
	system("pause");
	return 0;



}