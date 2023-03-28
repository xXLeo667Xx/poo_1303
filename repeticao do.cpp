//
#include <iostream>
using namespace std;
//
int main() {
    //
    int num;
    //
    do {
        //
        cout << "digite um numero entre 1 a 10: ";
        //
        cin >> num;
        //
    }while (num < 1 || num > 10);
    //
    cout << "voce digitou o numero " << num << ".";
    
    return 0;
}