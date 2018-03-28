#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

bool isBigger(Distance a, Distance b)
{
	return a.feet * 12 + a.inches > b.feet * 12 + b.inches ? true : false;
}

int main()
{
	Distance d1, d2;

	cout << "d1.feet = ";
	cin >> d1.feet;

	cout << "d1.inches = ";
	cin >> d1.inches;
	if (d1.inches > 12 || d1.inches < 0)
	{
		cout << "inches = [0;12)" << endl;
		system("pause");
		return 0;
	}

	cout << "d2.feet = ";
	cin >> d2.feet;

	cout << "d2.inches = ";
	cin >> d2.inches;
	if (d2.inches > 12 || d2.inches < 0)
	{
		cout << "inches = [0;12)" << endl;
		system("pause");
		return 0;
	}

	cout << (isBigger(d1, d2) ? "d1 > d2" : "d1 <= d2") << endl;

	system("pause");
}