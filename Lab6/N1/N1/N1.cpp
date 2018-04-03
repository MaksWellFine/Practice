// N1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

double power(double, int);
double power(float, int);
double power(long, int);
double power(int, int);

int main()
{
	cout << "5.4 power 7 = " << endl;
	cout << power(5.4, 7) << endl;
	cout << "2.74 power 12 = " << endl;
	cout << power(2.74F, 12) << endl;
	cout << "2 power -5 = " << endl;
	cout << power((int)2, -5) << endl;
	cout << "7 power 2 = " << endl;
	cout << power((long)7, 2) << endl;

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

double power(float num, int pow = 2) {return power((double)num, pow); }
double power(int num, int pow = 2) { return power((double)num, pow); }
double power(long num, int pow = 2) { return power((double)num, pow); }

