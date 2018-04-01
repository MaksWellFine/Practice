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
	float f1, f2;
	double d1,  d2;
	int i1, i2;

	cout << "float(1) = ";
	cin >> f1;
	cout << "float(2) = ";
	cin >> f2;
	cout << "\ndouble(1) = ";
	cin >> d1;
	cout << "double(2) = ";
	cin >> d2;
	cout << "\nint(1) = ";
	cin >> i1;
	cout << "int(2) = ";
	cin >> i2;
	cout << "\n\nSwap:\n\n\n";

	swap(f1, f2);
	swap(d1, d2);
	swap(i1, i2);

	cout << "f1 = " << f1 << "\nf2 = " << f2 << "\n\n";
	cout << "d1 = " << d1 << "\nd2 = " << d2 << "\n\n";
	cout << "i1 = " << i1 << "\ni2 = " << i2 << "\n";

	system("pause");
}