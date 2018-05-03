#include <iostream>
#include <string>
#include <cstdlib> // For rand and srand
#include <ctime>

#include "Die.h"


using namespace std;
int points;
int main()
{
	
	int playerChoice;

	cout << "Welcome to the Fishing game!!!!" << endl;
	cout << "1. Play the game!" << endl;
	cout << "2. Quit." << endl;
	cin >> playerChoice;

	while (playerChoice == 1)
	{	
		int playerFishMore;
		Die fish(3);

		cout << "Would you like to fish more? " << endl;
		cout << "1. Fish More!" << endl;
		cout << "2. Done Fishing." << endl;
		cin >> playerFishMore;

		if (playerFishMore == 1)
		{
			fish.getValue();
			if (fish.getValue() == 1)
			{
				points += 5;
			}

			if (fish.getValue() == 2)
			{
				points += 1;
			}

			if (fish.getValue() == 3)
			{
				points += 10;
			}

		}

		if (playerFishMore == 2)
		{
			break;
		}

		
	}
	cout << endl;

	cout << "your total points are: " << points << endl;

	if (points < 10)
	{
		cout << "You can do Better!" << endl;
	}

	if (points > 20)
	{
		cout << "Great Job!!!" << endl;
	}

	return 0;
}