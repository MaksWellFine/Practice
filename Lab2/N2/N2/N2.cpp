// N2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	float a, b, d;
	char c;
	while (true) {
		cout << "Enter first number" << endl;
		cin >> a;
		cout << "Enter a sign" << endl;
		cin >> c;
		cout << "Enter second number" << endl;
		cin >> b;
		switch (c)
		{
		case '+':d = a + b; break;
		case '-':d = a - b; break;
		case '*': d = a * b; break;
		case '/': d = a / b; break;

		}
		cout << "Result = " << d << endl;
	}

	system("pause>>void");
	return 0;

}