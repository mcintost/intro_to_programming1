/*******************************
**Thomas McIntosh
**April 5,2016
**CS_161 Program will convert given Celcius temperature into Fahrenheit
*******************************/

#include <iostream>
using namespace std;
int main()

{
	double celiusTemp,		//This is the temperature given by the user.
		fahrenheitTemp;		//This is the results given to the user.

	cout << "Please eneter a Celsius temperature." << endl;
	cin >> celiusTemp;
	cin.get();

		//This equation will convert the given celius degrees into Fahrenheit.

		fahrenheitTemp = 1.8 * celiusTemp + 32;

	cout << "The equivilent Fahrenheit temperature is:" << endl;
	cout << fahrenheitTemp << endl;
		return 0;
}