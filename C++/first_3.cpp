//�������� ���������, ������� ��������� ������������ ������ � ������� ��������� ����� ������� ��������, ��������� � � ������� ������� � ��������� ������� � �������.//

#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    char letter, upperletter;
    cout << "������� ����� ������� �������� :" << endl;
    cin >> letter;
    upperletter = letter - 32;
    cout << "�� �� ����� � ������� �������� : " << upperletter;

    return 0;
}