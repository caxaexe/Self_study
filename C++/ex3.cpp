/* Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра,
переводит её в верхний регистр и результат выводит в консоль. */

#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    char letter, upperletter;
    cout << "Введите букву нижнего регистра :" << endl;
    cin >> letter;
    upperletter = letter - 32;
    cout << "Та же буква в верхнем регистре : " << upperletter;

    return 0;
}
