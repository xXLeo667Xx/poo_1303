//
#include <iostream>
using namespace std;
//
int main() {
    //
    int num;
    //
    cout << "digite um numero inteiro positivo: ";
    //
    cin >> num;
    //
    cout << "os primeiros " << num << " numeros pares sao: ";
    //
    for (int i = 2; i <= num * 2; i +=2) {
        //
        cout << i << " ";
    }
    
    return 0;
}