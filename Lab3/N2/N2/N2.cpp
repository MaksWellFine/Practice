#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "UKR");
    
    double current, end;
    int years = 0;
    float percent;
    
    cout << "����i�� ���������� ������: ";
    cin >> current;
    
    cout << "����i�� ��������� ������ ��������: ";
    cin >> percent;
    percent = percent / 100 + 1;
    
    cout << "����i�� ������ �������� ���������� ����i�: ";
    cin >> end;
    
    for (short i = 0;; i++, years++)
    {
        if (current > end) break;
        
        current *= percent;
    }
    
	cout << "������ ���� �������� ���� ��������� ����� " << years << " ���i�!" << endl;

	system("pause");
}