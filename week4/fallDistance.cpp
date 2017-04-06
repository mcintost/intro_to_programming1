/*******************************
**Thomas McIntosh
**April 20,2016
**CS_161 This program can determine the distance an object falls during a given an amount of time.  
*******************************/
#include <iostream>
#include <cmath>
using namespace std; 
/*
//Program prototype
float fallDistance(float time);

int main()
{
	float time;
	
	cout << "Input the time the object falls \n";
	cin >> time;
	fallDistance(time);
}
*/
//This will take the falling time and give back the distance the object fell
float fallDistance(float time)
{
	float distance = 0;

	distance = (0.5 * 9.8 * time * time);
	return distance; 
}