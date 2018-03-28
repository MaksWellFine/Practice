// N3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
	float GetInches()
	{
		return feet * 12 + inches;
	}
};

float CompareTwoDist(Distance, Distance);

int main() 
{
	Distance d1, d2; 
	cout << "Write number of feets for Distance 1: ";
	cin >> d1.feet;
	cout << "Write number of inches for Distance 1: ";	
	cin >> d1.inches;

	cout << endl << "Write number of feets for Distance 2: ";
	cin >> d2.feet;
	cout << "Write number of inches for Distance 2: ";
	cin >> d2.inches;	

	cout << endl << "Compare resut in inches = " << CompareTwoDist(d1, d2) << endl;

	system("pause");
}

float CompareTwoDist(Distance d1, Distance d2)
{
	float result = -1;
	if (d1.GetInches() > d2.GetInches())
		result = d1.GetInches();
	else
		result = d2.GetInches();
	return result;
}
