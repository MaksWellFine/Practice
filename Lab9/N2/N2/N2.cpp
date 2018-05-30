// N2.cpp : Defines the entry point for the console application.
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

	string firstName;
	string secondName;	

	Phone(){}

	Phone(string phoneNumber)
	{
		SetPhoneNumber(phoneNumber);
	}

	void SetPhoneNumber(string phoneNumber)
	{
		int selector = 0;
		string s = "";
		for (int i = 0; i < phoneNumber.length(); i++)
		{
			bool isNext = false;
			if (phoneNumber[i] == '(' || phoneNumber[i] == ')' || i >= phoneNumber.length() - 1) isNext = true;
			
			if (phoneNumber[i] >= 48 && phoneNumber[i] <= 58)
				s += (char)phoneNumber[i];
			if(isNext)
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
		return "Abonent: " + firstName + " " + secondName + "\nPhone number: " + string("+") + to_string(countryCode) + string(" (") + to_string(operatorCode) + ") " + num;
	}
};

int main()
{
	const int abonentsAmount = 5;

	Phone notebook[abonentsAmount];

	for (int i = 0; i < abonentsAmount; i++)
	{
		string name1, name2, number;
		cout << "Write abonent name: ";
		cin >> name1;
		cout << "Second name: ";
		cin >> name2;
		cout << "Phone number: ";
		cin >> number;
		notebook[i].SetPhoneNumber(number);
		notebook[i].firstName = name1;
		notebook[i].secondName = name2;

		cout << endl;
	}
	
	for (int i = 0; i < abonentsAmount; i++)
	{
		cout << notebook[i].ToString();
		cout << endl;
	}

	system("pause");
	return 0;
}

