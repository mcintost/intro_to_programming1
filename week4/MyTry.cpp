/*******************************
**Thomas McIntosh
**April 20,2016
**CS_161 This program will short three values from smallest to largest and output the results
*******************************/


#include <iostream>
#include <cmath>
using namespace std; 
/*
void smallSort(int&, int&, int&);

int main()
{

	int a = 14, b = -90, c = 2;
	smallSort(a, b, c);
	cout << a << ", " << b << ", " << c << "\n";

	
}
*/
void smallSort(int &a, int &b, int &c)
{
	int temp1,
		temp2;

	if (a > b && b > c)
	{
		a = a;
		b = b;
		c = c;
	}
	if (b > a && a > c)
	{
		temp1 = a;
		a = b;
		b = temp1;
		c = c;
	}
	if (c > a && a > b)
	{
		temp1 = a;
		temp2 = b;
		a = c;
		b = temp1;
		c = temp2;
	}
	if (b > c && c > a)
	{
		temp1 = a;
		a = b;
		b = c;
		c = temp1;
	}
	if (a > c && c > b)
	{
		
		temp1 = b;
		a = a;
		b = c;
		c = temp1;
	}
	if (c > b && b > a)
	{
		temp1 = a;
		a = c;
		b = b;
		c = temp1;
	}
	
}

