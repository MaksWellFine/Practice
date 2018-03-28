#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "UKR");
    
    int gal;
    cout << "¬ведiть кiлькiсть галонiв: ";
    cin >> gal;
    cout << gal << " галонiв = " << gal / 7.481 << " футiв." << endl;
	system("pause");
}