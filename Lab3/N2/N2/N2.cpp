#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "UKR");
    
    double current, end;
    int years = 0;
    float percent;
    
    cout << "¬ведiть початковий внесок: ";
    cin >> current;
    
    cout << "¬ведiть процентну ставку депозиту: ";
    cin >> percent;
    percent = percent / 100 + 1;
    
    cout << "¬ведiть бажану величину депозитних коштiв: ";
    cin >> end;
    
    for (short i = 0;; i++, years++)
    {
        if (current > end) break;
        
        current *= percent;
    }
    
	cout << "Ѕажану суму депозиту буде дос€гнуто через " << years << " рокiв!" << endl;

	system("pause");
}