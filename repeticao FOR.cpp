//chamando uma biblioteca
#include <iostream>
using namespace std;
//variavel princiapal 
int main() {
    //variavel num
    int num;
    //interface de usuario 
    cout << "digite um numero inteiro positivo: ";
    //valor atribuido a variavel 
    cin >> num;
    //interface de usuario dos numeros pares
    cout << "os primeiros " << num << " numeros pares sao: ";
    //repeticao com valor atribuido e funsao 
    for (int i = 2; i <= num * 2; i +=2) {
        //numeros de repeticao que apareceram 
        cout << i << " ";
    }
    
    return 0;
}
