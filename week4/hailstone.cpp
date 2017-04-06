/*******************************
**Thomas McIntosh
**April 20,2016
**CS_161 This function will do hailstone sequences.
*******************************/


#include <iostream>
using namespace std;


int hailstone(int num)

{
	int count = 0;
	while (num != 1)
	{
		if (num % 2 == 0)		//if number is even.
		{
			num = num / 2;
			count++;
		}
		else					//id number is odd.
		{
			num = 3 * num + 1;
			count++;
		}
	}

	return count;
}

/*int main() 
{

	int inputNumber; 

	cout << "Enter an integer: " << endl;
	cin >> inputNumber;
	cout << "steps taken " << hailstone(inputNumber);
	cin.ignore();
	cin.get();
	return 0;
}
*/