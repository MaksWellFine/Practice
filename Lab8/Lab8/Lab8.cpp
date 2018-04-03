// Lab8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <functional>
#include <algorithm>

struct tovar
{
	char name[40];
	double price;
};

using namespace std;
int main(int argc, const char * argv[])
{


	//1
	int x = 8;
	int y = 2;
	cout << x << ", " << y << endl;

	auto numx = [](int x) {return x; }(x);
	auto numy = [](int y) {return y; }(y);

	cout << numx << ", " << numy << endl;

	//2
	auto num1 = [x] { return x; };
	auto num2 = [y] { return y; };
	cout << num1() << ", " << num2() << endl;

	//3
	cout << "Incrementing: " << endl;
	auto num3 = [&x] { return x; };
	x++;
	auto num4 = [&y] { return y; };
	y++;
	cout << num3() << ", " << num4() << endl << endl;

	//4

	int mas[]{ 24, 87, 18, 4, 47, 9, 6, 88, 38, 39 };
	sort(begin(mas), end(mas), [](int a, int b) {return a < b; });
	cout << "Sort in increasing: " << endl;
	for (auto item : mas) {
		cout << item << " ";
	}
	cout << endl << endl;

	//5
	auto comp = [](int w, int t) {return w > t; };
	sort(begin(mas), end(mas), comp);
	cout << "Sort in decreasing: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl << endl;


	tovar arr[5] = {};                                                   //6
	for (int i = 0; i<5; i++)
	{
		cout << "Enter product" << endl;
		cin >> arr[i].name;
		cout << "Enter price" << endl;
		cin >> arr[i].price;
	}
	sort(begin(arr), end(arr), [](const tovar& a, const tovar& b)
	{
		return a.price < b.price;
	});    cout << "Product\t\t\t Price" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i].name << "\t\t\t" << arr[i].price << endl;
	}

	system("pause");
	return 0;
}