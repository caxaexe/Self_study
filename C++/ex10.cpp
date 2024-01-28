//Составить алгоритм увеличения всех трех, введённых с клавиатуры, переменных на 5,если среди них есть хотя бы две равные.//
//В противном случае выдать ответ «равных нет».//

#include <iostream>
using namespace std;

int main(){
    cout << "\t\tУвеличение переменных с оператором if\n\n";
    
    int first, second, third, nfirst, nsecond, nthird;
    cout << "Введите первое число : ";
    cin >> first;
    cout << "Введите второе число : ";
    cin >> second;
    cout << "Введите третье число : ";
    cin >> third;
    
    if (first == second || second == third || first == third){
        cout << "\n1 число : " << first + 5 << "\n2 число : " << second + 5 << "\n3 число : " << third + 5;
    }
    else{
        cout << "\nОшибка. Равных чисел нет.";
    }
}