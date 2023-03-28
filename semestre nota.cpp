//chamando uma biblioteca
#include<iostream>
#include<stdlib.h>
using namespace std;
//colocando uma variavel
int main() {
    //colocando as variaveis 
    double nota1, nota2, nota3, nota4;
    //interface de usuario para colocar a nota do semestre 1
    cout << "digite a sua primeira nota do semestre >>> ";
    //valor da variavel 
    cin >> nota1;
    //interface de usuario para colocar a nota do semestre 2
    cout << "digite a sua segunda nota do semestre >>> ";
    //valor da variavel
    cin >> nota2;
    //interface de usuario para colocar a nota do semestre 3
    cout << "digite a sua terceira nota do semestre >>> ";
    //valor da variavel
    cin >> nota3;
    //interface de usuario para colocar a nota do semestre 4
    cout << "digite a sua quarta nota do semestre >>> ";
    //valor da variavel
    cin >> nota4;
    //equacao da soma das notas 
    double soma = (nota1 + nota2 + nota3 + nota4);
    //equacao do resultado da soma dividido por 4
    soma = (soma/4);
    //o que aparecerar para o usuario 
    cout << "a sua media no semestre foi: " << soma << endl << endl;
    //a media do semestre
    if(soma >= 7){
        //o que aparecerar para o usuario caso ele passou da media
        cout << "parabens voce foi aprovado!" << endl;
     //i se ele n for aprovado
    }else{
        //o que aparecerar para o usuario caso ele nao passou da media
        cout << " eita! voce foi reprovado!" << endl;
    }
    return 0;
}