#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
	a^=b^=a^=b;
}

int main()
{
	int a, b;
	char s;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "Press 'Y' to swap: ";
	cin >> s;

	if(s == 'Y'){
		swap(a, b);
	}
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
}