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
    
    cout << "����i�� ���������� ������: ";
    cin >> money;
    
    cout << "����i�� ����� ���i�: ";
    cin >> years;
    
    cout << "����i�� ��������� ������: ";
    cin >> percent;
    percent = percent / 100 + 1;
    
    for (short i = 0; i < years; i++)
    {
        money *= percent;
    }
    
	cout << "����� " << years << " ���i� �� �������� " << setprecision(2) << money << " ������." << endl;

	system("pause");
}