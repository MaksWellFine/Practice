#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "UKR");
    
    short b;
    double deg;
    cout << "��� �������� � ����� �����i� � ����� ���������� ����i�� 1," << endl;
    cout << "��� �������� � ����� ���������� � ����� �����i� ����i�� 2: ";
    cin >> b;

    switch(b){
        case 1:
            cout << "����i�� ����������� �� �����i��: ";
            cin >> deg;
			cout << "�������� �� �����������: " << 9 * deg / 5 + 32 << endl;
            break;
        case 2:
            cout << "����i�� ����������� �� �����������: ";
            cin >> deg;
            cout << "�������� ��  �����i��: " << 5 * (deg - 32) / 9 << endl;
            break;
        default:
            cout << "Error";
    }

	system("pause");
}