#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(0, "UKR");
    cout.setf(ios_base::fixed); 
    
    double money;
    int years;
    float percent;
    
    cout << "¬ведiть початковий внесок: ";
    cin >> money;
    
    cout << "¬ведiть число рокiв: ";
    cin >> years;
    
    cout << "¬ведiть процентну ставку: ";
    cin >> percent;
    percent = percent / 100 + 1;
    
    for (short i = 0; i < years; i++)
    {
        money *= percent;
    }
    
	cout << "„ерез " << years << " рокiв ви отримаЇте " << setprecision(2) << money << " долара." << endl;

	system("pause");
}