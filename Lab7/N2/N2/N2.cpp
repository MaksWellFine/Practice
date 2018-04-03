#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T>
T mid (T *arr, int len)
{
	T sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += *(arr + i);
	}

	return sum / len;
}

template <class T>
int length(T &arr)
{
	return sizeof(arr) / sizeof(*arr);
}

int main()
{
	int arr_int[] = {1, 6, 3, 8};
	long arr_long[] = {65, 878, 4342, 11, 340, 7};
	double arr_double[] = {5, 7.6, 4.3, 9.01, 13.8};
	char arr_char[] = {'a', 'y', '4', '☺', '♦', '9'};

	cout << "Int: " << mid(arr_int, length(arr_int)) << endl;
	cout << "Long: " << mid(arr_long, length(arr_long)) << endl;
	cout << "Double: " << mid(arr_double, length(arr_double)) << endl;
	cout << "Char: " << mid(arr_char, length(arr_char)) << endl;

	system("pause");
}

