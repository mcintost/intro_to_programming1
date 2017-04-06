/*******************************
**Thomas McIntosh
**April 12,2016
**CS_161 Program Tells the min and max of the integers input
*******************************/

//This program asks the user to input how many integers they would like to input and then will tell them the min and max of those integers

#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
	int numInteger,				//Number of integers the user wants to input
		values,					//The value of the integers
		min = 32767,			//Starting min value to ensure the first integer is stored as min
		max = -32767,			//Starting max value to ensure the first integer is stored as max
		counter = 1;			// How many integers have been input
	cout << "How many integers would you like to enter? \n";
	cin >> numInteger;
	cout << "Please enter " << numInteger << " integers \n";
	

	while (counter <= numInteger) 
	{
		cin >> values; counter++;
		cin.get();
		if (values >= max)
		{
			max = values;
		}
		if (values <= min)
			min = values;
	}
	cout << "min : " << min << "\n";
	cout << "max : " << max << "\n";
	return 0;
}