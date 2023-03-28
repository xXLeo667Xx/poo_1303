//chamando uma biblioteca
#include <iostream>
using namespace std;
//variavel principal 
int main() {
    //variaveis e uma com valor ja atribuido
    int num, I = 1;
    //interface de usuario
    cout << "digite um numero inteiro positivo: ";
    //valor atribuido a variavel 
    cin >> num;
    //funcao repeticao onde repetira o numero colocado acima
    while (I <= num) {
        //variavel que aparecera para usuario
        cout << I << " ";
        //ferramenta usada para expandir a repeticao
        I++;
    }
    return 0;
}