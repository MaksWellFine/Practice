// N1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;
double power(double, int);

int main()
{
	double num;
	int pow;

	cout << "Write number and pow: ";
	cin >> num >> pow;
	cout << "Result = " << power(num, pow) << endl;

	system("pause");
    return 0;
}

double power(double num, int pow = 2)
{
	double result = 1;
	bool negativePow = false;
	if (pow < 0) { pow *= -1; negativePow = true; }
	for (int i = 1; i <= pow; i++)
		result *= num;
	if (negativePow) result = 1 / result;

	return result;
}
