/*******************************
**Thomas McIntosh
**April 13,2016
**CS_161 Allows the user to open a file have its contents read and then putting the sum in a seperate text file.
*******************************/

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
		for (int count = 1; count <= 7; count++)
		{
			//Read the file and add the values together
			inputFile >> sum;
			totalSum += sum;
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



