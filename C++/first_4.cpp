//��������� ������ ���������� �����, ��������� � ���������� � ������, � ���������.//

#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    float m, k;
    cout << "\t\t ������� ����� �� ������ � ��������� \n\n";
    cout << "������� ���-�� ������ : ";
    cin >> m;
    k = m / 1000;
    cout << m << " ������ ����� " << k << " ���������";

    return 0;
}