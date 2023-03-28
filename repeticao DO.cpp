//chamando uma biblioteca
#include <iostream>
using namespace std;
//colocando variavel principal
int main() {
    //variavel num
    int num;
    //repeticao do 
    do {
        //interface do usuario
        cout << "digite um numero entre 1 a 10: ";
        //numero atribuido a essa funcao 
        cin >> num;
        //variavel de repeticao com numeros ja atribuidos menor e maior
    }while (num < 1 || num > 10);
    //interface do usuario com o numero corespondido
    cout << "voce digitou o numero " << num << ".";
    
    return 0;
}