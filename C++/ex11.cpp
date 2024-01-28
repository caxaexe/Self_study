//Напишите программу, которая принимает у пользователя три суммы очков за разные попытки в игре и выводит среднее значение на основе трёх.//

#include <iostream>
using namespace std;

int main(){
    cout << "Ваши очки :\n\n";

    int first, second, third;
    cout << "1 попытка : " ;
    cin >> first;
    cout << "2 попытка : ";
    cin >> second;
    cout << "3 попытка : ";
    cin >> third;

    cout << "\nСреднее значение : " << (first + second + third) / 3;
}