//Программа должна переводить число, введенное с клавиатуры в метрах, в километры.//

#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    float m, k;
    cout << "\t\t Перевод числа из метров в километры \n\n";
    cout << "Введите кол-во метров : ";
    cin >> m;
    k = m / 1000;
    cout << m << " метров будет " << k << " километра";

    return 0;
}