/*******************************
**Thomas McIntosh
**April 5,2016
**CS_161 Program tells user the amount of  and types of coins would equal the amount of change entered
*******************************/

//This programs provides the type of and amount of coins that would equal the amount of change (given in interger form)

#include <iostream>
using namespace std;
int main()

{
	int change,			//amount given by user.
		quater = 25,	//understood values 
		dime = 10,		//""
		nickel = 5,		//""
		penny = 1,		//""
	    q,			// the amount given back in the answers		
	    d,			// ""
	    n,			// ""
		p;			// ""


	cout << "Please enter an anount in cents less than a dollar. \n";
		cin >> change;

		// The following equations will determine the change through dividing and then dividing the modulus with the next coin.

		//Calculates number of quaters.
		
		q = change / quater;

		//Calculates the number of dimes.
		
		d =  change % quater / dime;

		//Calculates the number of nickels.

		n = change % quater % dime / nickel;
		
		//Calculates the number of pennies.
		p = change % quater % dime % nickel / penny;

		cout << "Your change will be: \n";
		cout << "Q:" << q << endl;
		cout << "D:" << d << endl;
		cout << "N:" << n << endl;
		cout << "P:" << p << endl;

		return 0;

}