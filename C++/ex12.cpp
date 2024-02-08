/* Напишите новую версию программы Guess Му Number, где игрок выбирает число, а компьютер должен его угадать. */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    cout << "\t\tGUESS MY NUMBER\n\n";

    int num;
    cout << "Введите число : ";
    cin >> num;

    srand(static_cast<unsigned int>(time(nullptr))); // генерируется число на основе текущего времени
    int random_num = rand() % 100 + 1; // генерируется случайное число от 1 до 100

    cout << "Число компьютера : " << random_num;

    if(num > random_num){
        cout << "\n\nМимо, число слишком большое. Компьютер проиграл";
    }
    else if(num < random_num){
        cout << "\n\nМимо, число слишком маленькое. Компьютер проиграл";
    }
    else if (num = random_num){
        cout << "\n\nПобеда. Компьютер угадал";
    }

    cout << "\n\nGAME OVER";

    return 0;
}