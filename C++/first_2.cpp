//Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b) Числа а, b, f вводятся с клавиатуры. 
Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.//

#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    int a, b, f, x;

    cout << "Ââåäèòå öèôðû a, b, f : " << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "f = ";
    cin >> f;

    cout << "Âû÷èñëÿåì ïî ôîðìóëå: x = (a + b - f / a) + f * a * a - (a + b)" << endl;
    x = (a + b - f / a) + f * a * a - (a + b);
    cout << "x = " << x;

    return 0;
}
