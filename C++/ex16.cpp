/* Возвести, введенное с клавиатуры число, в степень n, степень тоже вводится с клавиатуры. 
Возведение в степень организовать с использованием циклов.
Примечание: не использовать функцию pow для нахождения степени. */

#include <iostream>
using namespace std;

int main(){
    
    int number, power, newnumber = 1;
    cout << "Введите число : ";
    cin >> number;
    cout << "Введите степень : ";
    cin >> power;

    for (int i = 0; i < power; i++){
        newnumber = newnumber * number;
    }
    
    cout << "\nЧисло возведенное в степень : " << newnumber;

    return 0;
}