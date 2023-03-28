//chamando uma biblioteca
#include<iostream>
using namespace std;

//colocando uma variavel
int main() {
    //variaveis com valor ja predefinidos
    int x = 10;
    int y = 20;
    //variavel se x for maior que y
    if (x > y) {
        //o que aparecerar ao usuario caso a variavel a cima der resultado
        cout << "x é maior que y" << endl;
    }
    //variavel se x for menor que y
    if (x < y) {
        //o que aparecerar ao usuario caso a variavel a cima der resultado
        cout << "x é menor que y" << endl;
    }
    //variavel se x for maior ou igual a y
    if (x >= y) {
        //o que aparecerar ao usuario caso a variavel a cima der resultado
        cout << "x é maior ou igual a y" << endl;
    }
    //variavel se x for menor ou igual a y
    if ( x <= y) {
        //o que aparecerar ao usuario caso a variavel a cima der resultado
        cout << "x é menor ou igual a y" << endl;
    }
    //variavel se x for igual a y
    if (x == y) {
        //o que aparecerar ao usuario caso a variavel a cima der resultado
        cout << "x é igual a y" << endl;
    }
    //variavel se x nao for igual a y
    if (x != y) {
        //o que aparecerar ao usuario caso a variavel a cima der resultado
        cout << "x é diferente de y" << endl;
    }
    return 0;
}