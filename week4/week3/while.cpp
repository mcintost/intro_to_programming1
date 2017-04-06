/*******************************
**Thomas McIntosh
**April 13,2016
**CS_161 Program Lets a user input an integer and then has them guess the value telling them if their guess is to high or to low.
*******************************/

//This program asks the user to input an integer and then allows them or another user to try to guess the value.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	ofstream outputFile; 
	string filename;
	int number,
		totalSum = 0,
		sum = 0,
		value = 0;

	cout << "Enter the filename: \n";
	cin >> filename; 

	//Open file for input
	inputFile.open(filename.c_str());

	if (inputFile)
	{
		while (inputFile >> sum) //if a value was read
		{
			//Read the file and add the values together
			inputFile >> sum;
		}
	}
	else					//the file couldn't be opened
	{
		cout << "could not access file \n";
	}
	
	//Close the input file
	inputFile.close();

	//Open output file sum and have it display the sum
	outputFile.open("sum.txt");
	outputFile << totalSum; "\n";
	
	//Close the output file
	outputFile.close();
	return 0;
}



