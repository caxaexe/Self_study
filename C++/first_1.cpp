//��������� ���������, ������� ����� ��������� �������� ����������� �����. ����� ����, ������ ����� ����� ����� ���������� ������� � ����� ������.//

#include <iostream>
using namespace std;

int main(){

    setlocale(LC_ALL, "Russian");

    cout << "\t\t ������� ����� �� ������� \n\n";

    int num;
    double c1, c2, c3, c4, c5;
    cout << "������� ����������� ����� : ";
    cin >> num;

    c1 = num / 10000;
    c2 = (num / 1000) % 10;
    c3 = (num / 100) % 10;
    c4 = (num / 10) % 10;
    c5 = num % 10;
    
    cout << "1 ����� ����� " << c1 << endl;
    cout << "2 ����� ����� " << c2 << endl;
    cout << "3 ����� ����� " << c3 << endl;
    cout << "4 ����� ����� " << c4 << endl;
    cout << "5 ����� ����� " << c5 << endl;

    return 0;
}                                                                                                                                                                                                                                                                                             