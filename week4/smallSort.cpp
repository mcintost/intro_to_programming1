/*******************************
**Thomas McIntosh
**April 20,2016
**CS_161 This program will short three values from smallest to largest and output the results
*******************************/

#include <iostream>
using namespace std;

void smallSort(int &a, int &b, int &c) {
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a>c) {
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c) {
		int tmp = b;
		b = c;
		c = tmp;
	}
}

/* int main() {
	std::cout << "Enter three integers: " << std::endl;
	int num1;
	int num2;
	int num3;
	std::cin >> num1 >> num2 >> num3;

	int output1 = num1;
	int output2 = num2;
	int output3 = num3;

	smallSort(output1, output2, output3);

	std::cout << num1 << " " << num2 << " " << num3 << " "
		<< " in sorted order: ";
	std::cout << output1 << " " << output2 << " " << output3 << std::endl;

	return 0;
}
*/