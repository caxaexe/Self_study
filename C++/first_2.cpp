//damn����������������� ��������� ���������: (� + b � f / �) + f * a * a � (a + b) ����� �, b, f �������� � ����������. ������������ ���������������� ���������, ����� �������, ����� ���� �������, � ����� ������� ������ ��������� �����.//

#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    int a, b, f, x;

    cout << "������� ����� a, b, f : " << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "f = ";
    cin >> f;

    cout << "��������� �� �������: x = (a + b - f / a) + f * a * a - (a + b)" << endl;
    x = (a + b - f / a) + f * a * a - (a + b);
    cout << "x = " << x;

    return 0;
}