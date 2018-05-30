// N1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct Phone
{
	int countryCode;
	int operatorCode;
	int abonentNumber;

	Phone(string phoneNumber)
	{
		int selector = 0;
		string s = "";
		for (int i = 0; i < phoneNumber.length(); i++)
		{
			bool isNext = false;
			if (phoneNumber[i] == '(' || phoneNumber[i] == ')' || i >= phoneNumber.length() - 1) isNext = true;

			if (phoneNumber[i] >= 48 && phoneNumber[i] <= 58)
				s += (char)phoneNumber[i];
			if (isNext)
			{
				switch (selector)
				{
				   case 0:
					   countryCode = stoi(s);
					   break;
				   case 1:
					   operatorCode = stoi(s);
					   break;
				   case 2:
					   abonentNumber = stoi(s);
					   break;
				}
				s = "";
				selector++;
			}
		}
	}

	string ToString()
	{
		string num = "";
		int n = 3;
		int nowN = 0;
		string abonent = to_string(abonentNumber);
		for (int i = 0; i < abonent.length(); i++)
		{
			num += abonent[i];
			nowN++;
			if (nowN == n && i < abonent.length() - 1)
			{
				num += "-";
				n = 2;
				nowN = 0;
			}			
		}
		return string("+") + to_string(countryCode) + string(" (") + to_string(operatorCode) + ") " + num;
	}
};

int main()
{
	Phone p1("+380(97)555-12-12");
	string s = "";
	cout << "Write phone number: ";
	cin >> s;
	cout << endl;
	Phone p2(s);

	cout << "My number is " << p1.ToString() << endl;
	cout << "Your number is " << p2.ToString() << endl;

	system("pause");
    return 0;
}



