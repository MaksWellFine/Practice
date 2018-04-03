// N4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template<typename T>
T amax(T arr[], int size)
{
	T num = -1;
	if (size > 0)
	{
		num = arr[0];
		for (int i = 0; i < size; i++)
			if (num < arr[i]) num = arr[i];
	}
	return num;
}

int main()
{
	int arr1[] = { 3,66,2 };
	float arr2[] = { 8.3,2.3,2.1 };

	cout << amax(arr1, 3) << endl;
	cout << amax(arr2, 3) << endl;

	system("pause");
    return 0;
}