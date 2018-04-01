#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
void swap(T* a, T* b)
{
	a ^= b ^= a ^= b;
}

int main()
{
	float f1 = 5.2;
	float f2 = 2.1;

	double d1 = 13.3;
	double d2 = 8.4;

	int i1 = 8;
	int i2 = 1;

	cout << "f1 = " << f1 << "\nf2 = " << f2 << "\n\n";
	cout << "d1 = " << d1 << "\nd2 = " << d2 << "\n\n";
	cout << "i1 = " << i1 << "\ni2 = " << i2 << "\n\nSwap:\n\n";

	swap(f1, f2);
	swap(d1, d2);
	swap(i1, i2);

	cout << "f1 = " << f1 << "\nf2 = " << f2 << "\n\n";
	cout << "d1 = " << d1 << "\nd2 = " << d2 << "\n\n";
	cout << "i1 = " << i1 << "\ni2 = " << i2 << "\n\n";

	system("pause");
}