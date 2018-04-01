#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

long hms_to_sec (int h, int m, int s)
{
	return 3600 * h + 60 * m + s;
}

int main ()
{
	int hour, minute, second;
	while (true)
	{
		cout << "Enter hours... ";
		cin >> hour;
		cout << "Enter minutes... ";
		cin >> minute;
		cout << "Enter seconds... ";
		cin >> second;

		minute += second / 60;
		hour += minute / 60;
		second %= 60;
		minute %= 60;

		cout << hour << (minute < 10 ? ":0" : ":") << minute
			<< (second < 10 ? ":0" : ":") << second << " = "
			<< hms_to_sec(hour, minute, second) << " seconds\n" << endl;
	}
	return 0;
}