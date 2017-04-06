
#include <iostream>
#include "LineSegment.hpp"

using namespace std;

int main()
{
	cout << "hello \n";
	Point p1(4.3, 7.52);
	Point p2(-17, 1.5);
		LineSegment ls1(p1, p2);
		double length = ls1.length();
		double slope = ls1.slope();
		cout << "length = " <<  length <<"\n";
		cout << "slope: " << slope << "\n";
		
		cin.get();
		cin.ignore();
		return 0;
}
