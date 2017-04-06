/*******************************
**Thomas McIntosh
**April 5,2016
**CS_161 Program averages five numbers
*******************************/

//This program takes 5 numbers that have been input and averages them.

#include <iostream>
using namespace std;
int main()

{
	double numberOne,
		numberTwo,			//These are the variables the user will be assigning the number too.
		numberThree,
		numberFour,
		numberFive,
		average;			//This will be the variable that holds the result.

	cout << "Please enter five numbers." << endl;
	cin >> numberOne;
	cin.get();			//Allows code to have the enter key pressed and still continue the program
	cin >> numberTwo,
		cin.get();
	cin >> numberThree,
		cin.get();
	cin >> numberFour,
		cin.get();
	cin >> numberFive;

	//This formula below will average the five values from the previous step.

	average = (numberOne + numberTwo + numberThree + numberFour + numberFive) / 5;

	cout << "The average of those numebers is: \n"
		<< average << endl;
	return 0;

}