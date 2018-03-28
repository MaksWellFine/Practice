#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "UKR");
    
    short b;
    double deg;
    cout << "Для переводу з шкали Цельсiя в шкалу Фаренгейта введiть 1," << endl;
    cout << "Для переводу з шкали Фаренгейта в шкалу Цельсiя введiть 2: ";
    cin >> b;

    switch(b){
        case 1:
            cout << "Введiть температуру за Цельсiєм: ";
            cin >> deg;
			cout << "Значення за Фаренгейтом: " << 9 * deg / 5 + 32 << endl;
            break;
        case 2:
            cout << "Введiть температуру за Фаренгейтом: ";
            cin >> deg;
            cout << "Значення за  Цельсiєм: " << 5 * (deg - 32) / 9 << endl;
            break;
        default:
            cout << "Error";
    }

	system("pause");
}