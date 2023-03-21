#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
    
    double nota1, nota2, nota3, nota4;
    cout << "digite a sua primeira nota do semestre >>> ";
    cin >> nota1;
    cout << "digite a sua segunda nota do semestre >>> ";
    cin >> nota2;
    cout << "digite a sua terceira nota do semestre >>> ";
    cin >> nota3;
    cout << "digite a sua quarta nota do semestre >>> ";
    cin >> nota4;
    double soma = (nota1 + nota2 + nota3 + nota4);
    soma = (soma/4);
    cout << "a sua media no semestre foi: " << soma << endl << endl;
    if(soma >= 7){
        cout << "parabens voce foi aprovado!" << endl;
    }else{
        cout << " eita! voce foi reprovado!" << endl;
    }
    return 0;
}