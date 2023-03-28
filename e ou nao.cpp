//chamando uma biblioteca
#include<iostream>
using namespace std;

//colocando uma variavel
int main() {
    //colocando variaveis com valor ja predefinidos
    int a = 5;
    int b = 10;
    int c = 15;
    //variavel se a for menor que b ( e ) b for menor que c
    if (a < b && b < c) {
        // o que irar mostrar para usuario se a sequecia acima for compativo
        cout << "a ordem é: a, b, c" << endl;
    }
    //variavel se a for maior que b ( ou ) b for maior que c
    if (a > b || b > c) {
        // o que irar mostrar para o usuario caso a sequecia acima for compativo
        cout << "pelo menos uma das condicoes é verdadeira" << endl;
    }
    //variavel se !(nao) a equacao a for igual a b
    if (!(a == b)) {
        //o que aoarecerar ao usuario caso a e b forem diferentes
        cout << "a é diferente de b" << endl;
    }
    return 0;
}