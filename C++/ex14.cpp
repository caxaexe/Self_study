/* Найти алгебраическую сумму для выражения: 1k + 2k + 3k + … + Nk. N и степень k вводит пользователь. */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, k;
    int sum = 0;
    cout << "Введите N : ";
    cin >> N;
    cout << "Ведите степень k : ";
    cin >> k;
    
    for(int num = 1; num <= N; num++){
        sum = sum + pow(num, k);
    }
    cout << "Сумма - " << sum;
    
    return 0;
}