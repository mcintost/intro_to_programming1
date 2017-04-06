/*******************************
**Thomas McIntosh
**April 13,2016
**CS_161 Program Lets a user input an integer and then has them guess the value telling them if their guess is to high or to low.
*******************************/

//This program asks the user to input an integer and then allows them or another user to try to guess the value.

#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
	int value,			//Value the user inputs that needs to be guessed. 
		guess,			//Value of the guess the user inputs
		tries = 0;			//Number of guesses it takes the user to determine the value

	cout << "Enter the number for the player to guess. \n";
	cin >> value;
	cout << "Enter your guess. \n";
	cin >> guess;
	++tries;

	//See if the guess is greater than or less than the value given.
	do
	{
		
		//Their guess was wrong so it needs to be determined if it was too high or too low
		if (guess > value)
		{
			cout << "Too high - try again \n";
			cin >> guess;
		}
		else if (guess < value)
		{
			cout << "Too low - try again \n";
			cin >> guess;
		}
		else
		{
			cout << "You guessed it in " << tries << " tries. \n";
		}
	} while (guess != value);
	return 0;
}