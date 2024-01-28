//Составить программу, которая будет считывать введённое пятизначное число.//
//После чего, каждую цифру этого числа необходимо вывести в новой строке.//

#include <iostream>
using namespace std;

int main(){

    setlocale(LC_ALL, "Russian");

    cout << "\t\t Деление числа на разряды \n\n";

    int num;
    double c1, c2, c3, c4, c5;
    cout << "Введите пятизначное число : ";
    cin >> num;

    c1 = num / 10000;
    c2 = (num / 1000) % 10;
    c3 = (num / 100) % 10;
    c4 = (num / 10) % 10;
    c5 = num % 10;
    
    cout << "1 цифра равна " << c1 << endl;
    cout << "2 цифра равна " << c2 << endl;
    cout << "3 цифра равна " << c3 << endl;
    cout << "4 цифра равна " << c4 << endl;
    cout << "5 цифра равна " << c5 << endl;

    return 0;
}                                                                                                                                                                                                                                                                                             