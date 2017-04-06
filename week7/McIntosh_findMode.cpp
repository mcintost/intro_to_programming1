/*******************************
**Thomas McIntosh
**May 11,2016
**CS_161 This is a function that will take an array and find the mode returning them in ascending order.
*******************************/

//#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stdlib.h>
#include <vector>
using namespace std;


std::vector<int> findMode(int x[], int size);       //function prototype

//findMode function    
std::vector<int> findMode(int given[], int size)
{
	int value1;
	int highestAmount; 
	int firstLoop;
	int amountOfModes;
	int cnt; 
	int count; 
	int max = 0;
	int mode_cnt = 0;
	int num;
	vector<int> results;
	


	std::vector<int> modeVector;

	for (firstLoop = 0; firstLoop < size; firstLoop++)						//loop to count an array from left to right
	{					
		cnt = 0;
		num = given[firstLoop];													//num will be equal the value of given[firstLoop]

		for (value1 = firstLoop; value1 <size; value1++) 
		{
			if (num == given[value1])
				cnt++;
		}
		given[firstLoop] = cnt; //
	}

	//find highest number in array
	for (highestAmount = 0; highestAmount<size; highestAmount++) 
	{
		if (given[highestAmount]>max)
			max = given[highestAmount];
	}

	//find how many modes there are
	for (amountOfModes = 0; amountOfModes<size; amountOfModes++) 
	{
		if (max == given[amountOfModes])
			mode_cnt++;
	}

	//push results to vector
	for (amountOfModes = 0; amountOfModes < size; amountOfModes++) 
	{
		if (max == given[amountOfModes]) {
			     
			modeVector.push_back(given[amountOfModes]);
		}
	}

	//sort vector and print
	std::sort(results.begin(), results.end());
	
	return modeVector;
	
}
