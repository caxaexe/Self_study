/*  Найти Y, если Y = X1 + X2 + … + Xn, X = Z^3 - B + A^2 / tg^2?. Количество X вводятся пользователем программы. Для каждого X значения Z, B, А, ? разные (вводятся пользователем программы). */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int amount;
    float x,y;
    cout << "Введите количество x : ";
    cin >> amount;

    float *ptrZ = new float[amount];
    float *ptrB = new float[amount];
    float *ptrA = new float[amount];
    float *ptrBetta = new float[amount];

    for (int num = 0; num < amount; num++){
        y = 0;
        cout << "Введите значения Z, B, A, Betta для X" << (num+1) <<" : \n";
        cout << "Z = ";
        cin >> ptrZ[num];
        cout << "B = ";
        cin >> ptrB[num];
        cout << "A = ";
        cin >> ptrA[num];
        cout << "Betta = ";
        cin >> ptrBetta[num];

        x = pow(ptrZ[num], 3) - ptrB[num] + pow(ptrA[num], 2) / pow(tan(ptrBetta[num]), 2);
        y = y + x;
    }
    
    cout << "\ny = " << y;

    delete[] ptrZ;
    delete[] ptrB;
    delete[] ptrA;
    delete[] ptrBetta;

    return 0;
}